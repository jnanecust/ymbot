

#include <cmath>
#include <chrono>
#include <thread>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <yaml-cpp/yaml.h>
#include <mutex>
#include <iomanip>
#include <csignal>
#include <array>
#include <unordered_map>
#include "SharedMemoryArm.hpp"
#include "ymbot_joint_eu.h"
#include <filesystem>


struct MotorGroupConfig {
    int can_index;
    std::vector<int> motor_ids;
};

// 外部数据交换结构体
struct MotorData {
    std::vector<double> move_rad;              // 电机输入：移动弧度（rad）
    std::vector<double> current_position_rad;  // 电机输出：当前位置（rad）
    std::vector<double> current_velocity_rads; // 电机输出：当前速度（rad/s）
    std::vector<double> current_current_a;     // 电机输出：当前电流（a）
};

// -----------------------------------定义全局变量----------------------------------
EuArmData dataRes_[JOINT_ARM_NUMBER];     
double pos_des_arm_[JOINT_ARM_NUMBER];    
bool running = true;
volatile bool running_key = true;
void signalHandler(int) { running_key = false; }                      
size_t n_motor_group;                        
size_t n_motor;
            
std::vector<YmbotJointEu> motors;         

MotorData motor_data;
std::mutex data_mutex;
auto program_start = std::chrono::steady_clock::now();
bool enable_file = false; //默认不保存数据
std::ofstream motorsendtxt;
double euMaxPos[JOINT_ARM_NUMBER] = {    2.792526803,           2.792526803,             1.884955592,        2.791111,           1.57,            2.792526803,
                                         2.791111111,                    1.4,     2.791111111,            1.6,    1.046666667,           1.4,  2.791111111,
                                         2.791111111,           1.57,     2.791111111,             1.6,    1.046666667,            1.4,  2.791111111
                                      };
double euMinPos[JOINT_ARM_NUMBER] = {   -2.792526803,          -2.792526803,           -2.792526803,       -2.791111,          -1.57,           -1.850049007,
                                        -2.791111111,                 -2.792526803,    -2.791111111,            -1.6,   -1.046666667,           0, -2.791111111,
                                        -2.791111111,           -1.588249619,    -2.791111111,           -1.57,   -1.046666667,          -2.792526803, -2.791111111,
                                     }; // 参考urdf
double euDir[JOINT_ARM_NUMBER] = { 1, -1, 1, 1, 1,  1,
                                   1, 1, -1, 1, 1,  -1, 1,
                                   1, 1, -1, 1, 1,  1, 1};  
double euBase[JOINT_ARM_NUMBER] = {0, 0, 0,       0, 0, 0,
                                    0, 0,       0,  0, 0, 0, 0,
                                    0,  0,       0, 0, 0, 0, 0};

static constexpr std::array<int, JOINT_ARM_NUMBER> kMotorIdsByLimitIndex = {
    11, 12, 13, 14, 22, 21, 31, 32, 33, 34, 35, 36, 37, 41, 42, 43, 44, 45, 46, 47
};

std::unordered_map<int, double> buildLimitMap(const double limits[JOINT_ARM_NUMBER]) {
    std::unordered_map<int, double> m;
    m.reserve(JOINT_ARM_NUMBER);
    for (size_t i = 0; i < JOINT_ARM_NUMBER; ++i) {
        m[kMotorIdsByLimitIndex[i]] = limits[i];
    }
    return m;
}

const std::unordered_map<int, double> euMaxPosById = buildLimitMap(euMaxPos);
const std::unordered_map<int, double> euMinPosById = buildLimitMap(euMinPos);

bool getMotorLimitsById(int motor_id, size_t fallback_index, double &min_limit, double &max_limit) {
    auto it_max = euMaxPosById.find(motor_id);
    auto it_min = euMinPosById.find(motor_id);
    if (it_max != euMaxPosById.end() && it_min != euMinPosById.end()) {
        max_limit = it_max->second;
        min_limit = it_min->second;
        return true;
    }
    max_limit = euMaxPos[fallback_index];
    min_limit = euMinPos[fallback_index];
    return false;
}

std::vector<MotorGroupConfig> load_motor_config(const std::string &config_path)
{
    std::vector<MotorGroupConfig> groups;
    YAML::Node config = YAML::LoadFile(config_path);
    
    for (const auto& group_node : config["motor_groups"]) {
        MotorGroupConfig group;
        group.can_index = group_node["can_index"].as<int>();
        group.motor_ids = group_node["ids"].as<std::vector<int>>();
        groups.push_back(group);
    }
    return groups;
}

void configMotors()
{
    namespace fs = std::filesystem;
    fs::path this_dir = fs::path(__FILE__).parent_path();  // parent_path: C++17 :contentReference[oaicite:1]{index=1}
    fs::path cfg = (this_dir / ".." / "config" / "motor_config.yaml").lexically_normal();

    auto motor_groups = load_motor_config(cfg.string());

    n_motor_group = motor_groups.size();
    for (const auto& group : motor_groups) {
        for (int motor_id : group.motor_ids) {
            YmbotJointEu motor;
            motor.motor_id = motor_id;
            motor.dev_index = group.can_index; // 直接使用配置的CAN口
            motors.push_back(motor);    // 电机顺序根据yaml
        }
    }
    n_motor = motors.size();
}

void disable() {
    
    for(auto& m : motors){
        m.motor_disabled();
    }
    
    for(size_t i=0; i<n_motor_group; ++i){
        planet_freeDLL(i);
    }
}


bool saftCheck(double target_joint_rad[JOINT_ARM_NUMBER])
{
    double error = 0.0;
    const double direction_eps = 1e-4;  // ignore numeric jitter around zero command
    for (size_t i = 0; i < JOINT_ARM_NUMBER; ++i)
    {
        const int motor_id = motors[i].motor_id;
        double min_limit = 0.0;
        double max_limit = 0.0;
        const bool has_id_limits = getMotorLimitsById(motor_id, i, min_limit, max_limit);
        const bool moving_positive = motor_data.move_rad[i] > direction_eps;
        const bool moving_negative = motor_data.move_rad[i] < -direction_eps;
        if ((target_joint_rad[i] > (max_limit + error) && moving_positive) ||
            (target_joint_rad[i] < (min_limit - error) && moving_negative))
        {
            std::cout << "[ymbot_d_eumotor_interface] "
                      << " err id : " << motor_id
                      << " pos " << target_joint_rad[i] << " rad"
                      << " lim[" << min_limit << ", " << max_limit << "]"
                      << " delta " << motor_data.move_rad[i]
                      << (has_id_limits ? " (id-limit)" : " (index-fallback)")
                      << "\n";
            return false;
        }
    }
    return true;
}

void smoothHoming(YmbotJointEu& motor) {
    const double target_deg = 180.0;
    float current_deg = 0.0;  
    
    do {
        planet_getPosition(motor.dev_index, motor.motor_id, &current_deg);
        double step = (target_deg - current_deg) * 0.1; // 10%步进
        std::cout << "[ymbot_d_eumotor_interface] " << "Motor ID: " << motor.motor_id
                  << " | Current Position: " << current_deg << "°"
                  << " | Target Position: " << current_deg + step << "°"
                  << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(20));
    } while(fabs(target_deg - current_deg) > 0.5);
}

void initMotors() {
    for(size_t dev=0; dev<n_motor_group; ++dev){
        std::string can_device = "can" + std::to_string(dev);
        std::string command = "sudo ip link set " + can_device + " down 2>/dev/null";
        
        std::cout << "[ymbot_d_eumotor_interface] Closing " << can_device << "..." << std::endl;
        int down_result = system(command.c_str());
        
        if (down_result != 0) {
            std::cout << "[ymbot_d_eumotor_interface] Warning: Failed to close " 
                      << can_device << " (maybe not exist or no permission)" << std::endl;
        }
        
        std::this_thread::sleep_for(std::chrono::milliseconds(100));

        if(planet_initDLL(planet_DeviceType_Canable, dev, 0, planet_Baudrate_1000) != PLANET_SUCCESS){ //CAN_SUCCESS
            std::cout << "[ymbot_d_eumotor_interface] " << "CAN" << dev << " initialization failed!" << std::endl;
            disable();
            std::exit(EXIT_FAILURE); // 立即退出程序
        }
    }

    for(auto& motor : motors){
        if(!motor.motor_initialization_CSP()){
            std::cout << "[ymbot_d_eumotor_interface] " << "Motor " << motor.motor_id << " initialization failed!" << std::endl;
            disable();
            std::exit(EXIT_FAILURE); // 立即退出程序
            // return;
        }

    }

    {
        std::lock_guard<std::mutex> lock(data_mutex);
        motor_data.move_rad.resize(n_motor, 0.0);         // 初始增量为0
        motor_data.current_position_rad.resize(n_motor);
        motor_data.current_velocity_rads.resize(n_motor);
        motor_data.current_current_a.resize(n_motor);
    }
}

// 获取相对时间戳（毫秒）
uint64_t getRelativeTimestampMs() 
{
    auto now = std::chrono::steady_clock::now();
    return std::chrono::duration_cast<std::chrono::milliseconds>(
        now - program_start).count();
}

void sendCommands()
{
    double motors_target[n_motor]; // 2025.5.20
    bool send_success = true; // 2025.5.20
    for(size_t i=0; i<n_motor; ++i){  // 控制yaml里所有电机
        double current_rad = motor_data.current_position_rad[i];
        double target_rad = current_rad + motor_data.move_rad[i];
        double target_deg = target_rad * 180.0 / M_PI;
        

        if (planet_quick_setTargetPosition(motors[i].dev_index, motors[i].motor_id, target_deg) != PLANET_SUCCESS)
        {
            std::cout << "[ymbot_d_eumotor_interface] " << "Motor " << motors[i].motor_id << " send command failed!" << std::endl;
            send_success = false;
            break;
        }
        motors_target[i] = target_deg; //成功发送的数据
        motor_data.move_rad[i] = 0.0; // 清空增量
    }

    if (enable_file && send_success){
        motorsendtxt << getRelativeTimestampMs() ;
    for (size_t i = 0; i < n_motor; ++i) {
        motorsendtxt << " " << motors_target[i];
      }
    motorsendtxt << std::endl;
    }
    
}

void receiveFeedback()
{
    for(size_t i=0; i<motors.size(); ++i){
        float deg, rpm, ma;
        if(planet_getPosition(motors[i].dev_index, motors[i].motor_id, &deg) == PLANET_SUCCESS // && //CAN_SUCCESS
            ){
            motor_data.current_position_rad[i] = deg * M_PI / 180.0;
        }
    }
}

std::string getTimestampFilename(const std::string& prefix, const std::string& suffix) {
    auto now = std::chrono::system_clock::now();
    auto time_t_now = std::chrono::system_clock::to_time_t(now);
    std::tm tm_now = *std::localtime(&time_t_now);
    
    std::ostringstream oss;
    oss << std::put_time(&tm_now, "%Y%m%d_%H%M%S");
    return prefix + "_" + oss.str() + suffix;
}

void initdataFile() {
    if (!enable_file) return;
    std::string filename = getTimestampFilename("MotorSend", ".txt");
    motorsendtxt.open("../recorddata/"+filename, std::ios::out);
    if (!motorsendtxt.is_open()) {
        std::cout << "[ymbot_d_eumotor_interface] " << "[WARNING] Failed to open file: " << filename << std::endl;
    }
}

int analyzeParameters(int argc, char** argv) {
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "--record-data") {
            enable_file = true;
        } 
        
        else if (arg == "--help") {
            std::cout << "[ymbot_d_eumotor_interface] " << "Usage: " << argv[0] << " [options]\n"
                      << "Options:\n"
                      << "  --record-data       Enable data logging (default)\n"
                      << "  --help              Show this help message\n";
            return 0;
        }
        
        // 无效参数
        else {
            std::cout << "[ymbot_d_eumotor_interface] " << "Unknown argument: " << arg << "\nUse --help for usage." << std::endl;
            return 0;
        }
    }
    return 1;
}

int main(int argc, char** argv)
{
    if (analyzeParameters(argc, argv) != 1) return 0;

    configMotors();

    initMotors();

    SharedMemoryArm shmArm(true); 
    bool initpos_written = false;
    
    std::signal(SIGINT, signalHandler);  // 注册信号

    double maxDelta = 0.15; // 0.1---5 rad/s
    initdataFile(); // 2025.5.20

    auto loop_start = std::chrono::steady_clock::now();
    while (running_key)
    {
        loop_start = std::chrono::steady_clock::now();
        
        receiveFeedback();

        for (size_t i = 0; i < n_motor; ++i)
        {
            dataRes_[i].pos_ = (motor_data.current_position_rad[i] - M_PI) * euDir[i] + euBase[i];
            dataRes_[i].vel_ = motor_data.current_velocity_rads[i];
            dataRes_[i].cur_ = motor_data.current_current_a[i];
        }
        shmArm.writeJointDataArm(dataRes_);


        if (!initpos_written)
        {
            double initpos[JOINT_ARM_NUMBER];
            for(int i=0; i<JOINT_ARM_NUMBER; i++)
            {
                initpos[i] = dataRes_[i].pos_;
            }
            shmArm.writeJointDatatoMotorArm(initpos);
            initpos_written = true;
        }

        shmArm.readJointDataArm(pos_des_arm_);

        for (size_t i = 0; i < n_motor; ++i)
        {
            double delta = ((pos_des_arm_[i] - euBase[i]) * euDir[i] + M_PI) - motor_data.current_position_rad[i];
            double min_limit = 0.0;
            double max_limit = 0.0;
            getMotorLimitsById(motors[i].motor_id, i, min_limit, max_limit);
            // If current joint is already beyond soft limits, only allow motion back into valid range.
            if (dataRes_[i].pos_ < min_limit && delta < 0.0) {
                delta = 0.0;
            } else if (dataRes_[i].pos_ > max_limit && delta > 0.0) {
                delta = 0.0;
            }
            if (delta > maxDelta)
            {
                delta = maxDelta;
            }
            else if (delta < -maxDelta)
            {
                delta = -maxDelta;
            }
            motor_data.move_rad[i] = delta;
            pos_des_arm_[i] = (delta + motor_data.current_position_rad[i] - M_PI) * euDir[i] + euBase[i];
        }
        running = saftCheck(pos_des_arm_);
        if (!running) continue;
        sendCommands();
        
        auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now() - loop_start);

        if (elapsed.count() < 20)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(20 - elapsed.count()));
        }
        else{
            std::cout << "[ymbot_d_eumotor_interface] " << "[ymbot_d_eumotor_interface] " << "[WARNING] Control loop over time: " << elapsed.count() << " ms" << std::endl;
        }
    }

    shmArm.~SharedMemoryArm();
    shm_unlink(SHM_NAME_ARM);
    disable();
    if (motorsendtxt.is_open()) motorsendtxt.close();
    return 0;
}