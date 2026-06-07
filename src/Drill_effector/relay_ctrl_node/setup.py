from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'relay_ctrl_node'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        (
            'share/ament_index/resource_index/packages',
            ['resource/' + package_name]
        ),

        (
            'share/' + package_name,
            ['package.xml']
        ),

        # 安装 launch 文件
        (
            os.path.join('share', package_name, 'launch'),
            glob('launch/*.launch.py')
        ),

        # 安装 config 文件
        (
            os.path.join('share', package_name, 'config'),
            glob('config/*.yaml')
        ),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ymrobot',
    maintainer_email='ymrobot@todo.todo',
    description='Relay control node for power drill',
    license='TODO',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'relay_ctrl_node = relay_ctrl_node.relay_ctrl:main',
            'power_drill_hand_control_node = relay_ctrl_node.power_drill_from_hand:main'
        ],
    },
)