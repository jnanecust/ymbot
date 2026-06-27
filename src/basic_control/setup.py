from setuptools import find_packages, setup
from glob import glob
import os

package_name = 'basic_control'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share',package_name,'launch'),
         glob(os.path.join('launch', '*.launch.py'))),
        (os.path.join('share', package_name, 'cfg'),
            glob('cfg/*.yaml') + glob('cfg/*.calib')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='oy',
    maintainer_email='oy@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'camera_extrinsic_resolver = basic_control.camera_extrinsic_resolver:main',
            'stable_grasp_pose_publisher = basic_control.stable_grasp_pose_publisher:main',
            'ik_joint_state_to_trajectory = basic_control.ik_joint_state_to_trajectory:main',
            'ik_joint_trajectory_to_controller = basic_control.ik_joint_state_to_trajectory:main',
            'pybullet_dual_arm_ik_lift_box = basic_control.pybullet_dual_arm_ik_lift_box:main',
        ],  
    },
)
