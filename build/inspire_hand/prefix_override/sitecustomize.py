import sys
if sys.prefix == '/home/ymzz/anaconda3/envs/lerobot':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ymzz/YMbot_ROS2/install/inspire_hand'
