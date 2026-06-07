from launch import LaunchDescription
from launch.actions import (
    IncludeLaunchDescription,
    ExecuteProcess,
    DeclareLaunchArgument,
    TimerAction,
    RegisterEventHandler,
    OpaqueFunction,
    LogInfo,
)
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.substitutions import FindPackageShare
from launch.event_handlers import OnProcessStart

END_EFFECTOR_CMD_MAP = {
    'hand': {
        'main_cmd': ['ros2', 'run', 'inspire_hand', 'inspire_hand_sub'],
        'aux_cmds': [],
    },
    'gripper': {
        'main_cmd': ['ros2', 'run', 'zhixing_gripper', 'gripper'],
        'aux_cmds': [],
    },
    'drill': {
        'main_cmd': ['ros2', 'run', 'relay_ctrl_node', 'power_drill_hand_control_node'],
        'aux_cmds': [
            ['ros2', 'run', 'relay_ctrl_node', 'relay_ctrl_node'],
        ],
    },
}

HAND_GRASP_STATE_PUB_CMD = ['ros2', 'run', 'inspire_hand', 'hand_grasp_state_pub']


def _normalize_effector(value: str) -> str:
    if value is None:
        return 'auto'
    value = str(value).strip().lower()
    return value if value else 'auto'


def _validate_effector_arg(arg_name: str, value: str):
    valid_values = set(END_EFFECTOR_CMD_MAP.keys()) | {'auto'}
    if value not in valid_values:
        raise RuntimeError(
            f"Invalid value for '{arg_name}': '{value}'. "
            f"Valid values are: {sorted(valid_values)}"
        )


def _resolve_end_effector_plan(end_effector: str, left_effector: str, right_effector: str):
    """
    1. end_effector != auto 时，直接使用 end_effector + both
    2. end_effector == auto 时，读取 left/right_effector
    3. 若 left/right 都显式指定且相同 -> both
    4. 若 left/right 显式指定且不同 -> 分别 left/right
    5. 若仅单侧显式指定 -> 仅启动该侧
    
    return:
        [(effector_type, side)], side ∈ {'left', 'right', 'both'}
    """
    valid_effector = set(END_EFFECTOR_CMD_MAP.keys())

    end_effector = _normalize_effector(end_effector)
    left_effector = _normalize_effector(left_effector)
    right_effector = _normalize_effector(right_effector)

    _validate_effector_arg('end_effector', end_effector)
    _validate_effector_arg('left_effector', left_effector)
    _validate_effector_arg('right_effector', right_effector)

    # end_effector 优先指定
    if end_effector in valid_effector:
        return [(end_effector, 'both')]

    left_valid = left_effector in valid_effector
    right_valid = right_effector in valid_effector

    # 左右都显式指定且相同，返回 both
    if left_valid and right_valid and left_effector == right_effector:
        return [(left_effector, 'both')]

    # 左右不同，分别启动
    plan = []
    if left_valid:
        plan.append((left_effector, 'left'))
    if right_valid:
        plan.append((right_effector, 'right'))

    return plan


def _make_effector_process(effector_type: str, side: str):
    """
    从字典中取执行器命令，并附加 side 参数
    """
    spec = END_EFFECTOR_CMD_MAP[effector_type]
    actions = []

    # 主进程
    actions.append(
        ExecuteProcess(
            cmd=_append_side_param(spec['main_cmd'], side),
            output='screen',
            name=f'{effector_type}_main_{side}_node'
        )
    )

    # 辅助进程（例如 drill 的 relay_control）
    for idx, aux_cmd in enumerate(spec.get('aux_cmds', [])):
        actions.append(
            ExecuteProcess(
                cmd=_append_side_param(aux_cmd, side),
                output='screen',
                name=f'{effector_type}_aux_{idx}_{side}_node'
            )
        )

    return actions

def _append_side_param(cmd: list[str], side: str):
    return cmd + [
        '--ros-args',
        '-p',
        f'side:={side}'
    ]

def _build_end_effector_actions(context, *args, **kwargs):
    """
    在 launch 执行阶段读取参数并动态返回动作列表
    """
    end_effector = LaunchConfiguration('end_effector').perform(context)
    left_effector = LaunchConfiguration('left_effector').perform(context)
    right_effector = LaunchConfiguration('right_effector').perform(context)

    plan = _resolve_end_effector_plan(
        end_effector=end_effector,
        left_effector=left_effector,
        right_effector=right_effector,
    )

    actions = []
    actions.append(
        LogInfo(
            msg=(
                f"[run.launch.py] end_effector={end_effector}, "
                f"left_effector={left_effector}, right_effector={right_effector}, "
                f"resolved_plan={plan}"
            )
        )
    )

    has_hand = False

    for effector_type, side in plan:
        actions.extend(_make_effector_process(effector_type, side))
        if effector_type == 'hand':
            has_hand = True

    # 任意一侧有 inspire_hand 启动时，启动 hand_grasp_state_pub
    if has_hand:
        actions.append(
            ExecuteProcess(
                cmd=HAND_GRASP_STATE_PUB_CMD,
                output='screen',
                name='hand_grasp_state_pub'
            )
        )

    return actions


def generate_launch_description():
    real_robot_arg = DeclareLaunchArgument(
        name='real_robot',
        default_value='true',
        description='Control real robot (true/false)'
    )

    enable_hand_control_arg = DeclareLaunchArgument(
        name='enable_hand_control',
        default_value='true',
        description='Enable hand control (true/false)'
    )

    init_delay_arg = DeclareLaunchArgument(
        name='init_delay',
        default_value='5.0',
        description='Delay before initialization in seconds'
    )

    # auto-不显式指定
    end_effector_arg = DeclareLaunchArgument(
        name='end_effector',
        default_value='auto',
        description='End effector type: auto | hand | gripper | drill'
    )

    left_effector_arg = DeclareLaunchArgument(
        name='left_effector',
        default_value='auto',
        description='Left end effector type: auto | hand | gripper | drill'
    )

    right_effector_arg = DeclareLaunchArgument(
        name='right_effector',
        default_value='auto',
        description='Right end effector type: auto | hand | gripper | drill'
    )

    head_camera_launch = ExecuteProcess(
        cmd=[
            'ros2', 'launch', 'start_robot',
            'gemini2L_recorder_launch.py'
        ],
        output='log',
        name='head_camera_launch'
    )

    set_head_camera_params = ExecuteProcess(
        cmd=[
            'bash', '-c',
            'set -e; '
            'echo "[head_cam] waiting for /top/top/set_color_exposure ..."; '
            'until ros2 service type /top/top/set_color_exposure >/dev/null 2>&1; do sleep 0.2; done; '
            'ros2 service call /top/top/set_color_auto_exposure std_srvs/srv/SetBool "{data: false}"; '
            'ros2 service call /top/top/set_color_exposure orbbec_camera_msgs/srv/SetInt32 "{data: 5000}"; '
            'ros2 service call /top/top/set_color_gain orbbec_camera_msgs/srv/SetInt32 "{data: 1}"; '
            'ros2 service call /top/top/get_color_exposure orbbec_camera_msgs/srv/GetInt32 "{}"; '
            'ros2 service call /top/top/get_color_gain orbbec_camera_msgs/srv/GetInt32 "{}"; '
        ],
        output='screen',
        name='set_head_camera_params'
    )

    head_cam_handler = RegisterEventHandler(
        OnProcessStart(
            target_action=head_camera_launch,
            on_start=[
                TimerAction(
                    period=9.0,
                    actions=[set_head_camera_params]
                )
            ]
        )
    )

    return LaunchDescription([

        # 参数声明
        real_robot_arg,
        enable_hand_control_arg,
        init_delay_arg,
        end_effector_arg,
        left_effector_arg,
        right_effector_arg,

        # 启动硬件及控制器
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                PathJoinSubstitution([
                    FindPackageShare('ymbot_d_control'),
                    'launch/activate_multiple_groups.launch.py'
                ])
            ]),
            launch_arguments={
                'real_robot': LaunchConfiguration('real_robot')
                # 使用动态参数
            }.items()
        ),

        # 初始化关节位置
        TimerAction(
            period=LaunchConfiguration('init_delay'),
            actions=[
                ExecuteProcess(
                    cmd=[
                        'ros2',
                        'run',
                        'remote_operate_pkg',
                        'joint_control',
                        '--ros-args',
                        '-p',
                        # 参考src/remote_operate_pkg/remote_operate_pkg/joint_control.py:17
                        # leftarm rightarm
                        'target_positions:=[0.488692191, 0.226892803, 0.104719755, -1.535889742, 0.0, 0.698131701, -0.27925268, '
                        '-0.488692191, -0.226892803, -0.104719755, 1.535889742, 0.0, 0.698131701, 0.27925268, 0.0, -0.523598776]'
                    ],
                    output='screen',
                    name='joint_initialization'
                )
            ]
        ),

        # 动态生成末端执行器 / hand_grasp_state_pub / hand_initialization
        OpaqueFunction(function=_build_end_effector_actions),

        # 启动底盘驱动节点
        ExecuteProcess(
            cmd=['ros2', 'run', 'chassis_driver_node', 'chassis_driver_node'],
            output='screen',
            name='chassis_driver_node'
        ),

        # 启动VR指令发送节点
        ExecuteProcess(
            cmd=['ros2', 'run', 'vr_receiver_tcp', 'vr_receiver_tcp'],
            output='screen',
            name='vr_receiver_node'
        ),

        # ik解 & 碰撞检测
        ExecuteProcess(
            cmd=['ros2', 'run', 'ik_solver_pkg', 'ik_servo_node_coll'],
            output='log'
        ),

        # 启动腕部相机节点
        ExecuteProcess(
            cmd=[
                'ros2', 'launch', 'start_robot', 'rs_multi_camera_launch.py'
            ],
            output='log'
        ),

        # 启动头部相机节点
        head_camera_launch,

        # 设置头部相机曝光/增益
        head_cam_handler

    ])
