from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'ymbot_camera_test'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'),
            glob('launch/*.launch.py')),
        (os.path.join('share', package_name, 'config'),
            glob('config/*.yaml') + glob('config/*.calib')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='z',
    maintainer_email='z@todo.todo',
    description='YMbot head camera AprilTag test',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'camera_extrinsic_resolver = ymbot_camera_test.camera_extrinsic_resolver:main',
            'stable_grasp_pose_publisher = ymbot_camera_test.stable_grasp_pose_publisher:main',
        ],
    },
)
