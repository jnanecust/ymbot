# Task type constants
uint8   REG                 = 0  # 注册任务
uint8   TASK_GUIDANCE       = 1  # 任务管理
uint8   BT_TASK             = 2  # 行为树任务
uint8   CHSSIS              = 3  # 底盘导航任务（自研）
uint8   CLOUD_CHASSIS       = 4  # 云迹底盘导航任务
uint8   UP_LIMB             = 5  # 上肢任务
uint8   VIDEO_IMAGE         = 6  # 视频图像任务
uint8   VOICE               = 7  # 语音任务
uint8   EMOJI_TASK          = 8  # 表情任务
uint8   SYSTEM_MANAGEMENT   = 9  # 系统管理
uint8   MOVE_CONTROL        = 10  # 移动控制

string                platform_id
string                amr_id
string                task_id
uint8                 task_type   0
uint8                 control_mode
NavPoint[]            nav_points
Command[]             commands
string                behavior_tree   ""      # behavior tree, either .xml files or texts
bool                  reload          false   # force reload of behavior tree
string                index
BinaryData            binary_file