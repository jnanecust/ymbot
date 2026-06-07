## 一键启动机器人
```
启动：

ros2 launch start_robot run.launch.py left_effector:=drill right_effector:=gripper

ros2 launch start_robot run.launch.py end_effector:=hand real_robot:=true
```

## 使用moveit 的 demo.launch.py归位
```
ros2 launch ymbot_d_moveit_config demo.launch.py real_robot:=true
```

colcon build --packages-select start_robot  vr_receiver_tcp
ros2 launch start_robot run.launch.py end_effector:=hand dataset_root:=/home/ymzz/ymbot_lerobot_data/ dataset_task:="put mug cup on the plate"
