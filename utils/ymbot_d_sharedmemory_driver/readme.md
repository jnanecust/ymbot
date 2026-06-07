作者: chen furong

文件结构：
    ymbot_d_sharedmemory_driver
    |-------CMakeLists.txt 
    |-------build/
    |-------config/
    |-------include/
            |-------eu_planet.h         // 厂家提供
            |-------SharedMemoryArm.hpp.h     // 共享内存类
            |-------ymbot_eumotor_interface.h     // 无用
            |-------ymbot_joint_eu.h       // 封装电机类
    |-------lib/
            |-------四个.so文件，更新libeu_canable.so以及libcyhcs_log.so
            |-------三个.so.60文件
            |-------两个.so.200文件
    |-------src/
            |-------ymbot_d_eumotor_interface.cpp
            |-------ymbot_d_eumotor_interface_test.cpp
            |-------ymbot_joint_eu.cpp

编译：直接在build下面 cmake ..  && make 

使用：直接运行build下面的执行文件

二次开发：
    共享内存顺序，按config里面的id顺序：身体从下到上；脖子从左右摆到俯仰21；左臂从肩部到末端；右臂从肩部到末端
    示例：test程序

维护日志：
    2025.5.9 
	    创建成功
    2025.8.1 
	    添加test测试程序
    2025.8.2
	    添加第一帧位置数据写入共享内存的目标位置
    2025.11.26
	    1.问题：通信不成功 RTNETLINK answers: Device or resource busy
     	   方法1：ldd ymbot_d_eumotor_interface查看so链接库路径，确保指向lib文件
                更新lib里面libeu_canable.so和libcyhcs_log.so, 在cmakelist.txt添加libcyhcs_log.so库，重新编译。
        		export LD_LIBRARY_PATH=/home/ymzz/ws_dep/ymbot_d_sharedmemory_driver/lib:$LD_LIBRARY_PATH
           		source ~/.bashrc
           方法2：可能can口处于打开状态，关闭所有can0 can1 can2口，sudo ip link set can0 down
        2.限位：更改了身体电机的最大和最小运动角度；
               更改限位检查函数：可以从限位位置回去
        3.初始化：将第一次读取的电机值写入共享内存，避免下发0
        4.添加超时警告
        5.问题：error:没有接收到回应数据,id: 11 命令类型 16
            方法：更改config里面的对应电机的can索引，尝试0 1 2
    2025.12.18
        在initmotor添加关闭can口
    
        
