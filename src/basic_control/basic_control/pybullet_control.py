import pybullet as p
import os
import time
import pybullet_data
from collections import namedtuple
from pathlib import Path
import numpy as np
from scipy.spatial.transform import Rotation

# ros
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from builtin_interfaces.msg import Duration

# test
import matplotlib.pyplot as plt

'''
ymbot's pybullet控制类
'''

PYBULLET_URDF_ENV = "YMBOT_PYBULLET_URDF"


def resolve_pybullet_urdf_path():
    env_path = os.environ.get(PYBULLET_URDF_ENV)
    candidates = []

    if env_path:
        candidates.append(Path(env_path).expanduser())

    try:
        from ament_index_python.packages import get_package_share_directory

        candidates.append(
            Path(get_package_share_directory("ymbot_d_description"))
            / "urdf"
            / "for_pybullet_ik.urdf"
        )
    except Exception:
        pass

    current_file = Path(__file__).resolve()
    for parent in current_file.parents:
        candidates.extend(
            [
                parent / "src" / "control" / "ymbot_d_description" / "urdf" / "for_pybullet_ik.urdf",
                parent / "control" / "ymbot_d_description" / "urdf" / "for_pybullet_ik.urdf",
                parent
                / "install"
                / "ymbot_d_description"
                / "share"
                / "ymbot_d_description"
                / "urdf"
                / "for_pybullet_ik.urdf",
            ]
        )

    seen = set()
    unique_candidates = []
    for candidate in candidates:
        candidate = candidate.resolve()
        if candidate not in seen:
            seen.add(candidate)
            unique_candidates.append(candidate)
        if candidate.exists():
            return candidate

    searched = "\n".join(f"  - {path}" for path in unique_candidates)
    raise FileNotFoundError(
        f"Cannot find for_pybullet_ik.urdf. Set {PYBULLET_URDF_ENV} or check these paths:\n{searched}"
    )

class DebugAxes(object):
    """
    可视化某个局部坐标系, 红色x轴, 绿色y轴, 蓝色z轴
    """

    def __init__(self):
        self.uids = [-1, -1, -1]

    def update(self, pos, orn):
        """
        Arguments:
        - pos: len=3, position in world frame
        - orn: len=4, quaternion (x, y, z, w), world frame
        """
        pos = np.asarray(pos).reshape(3)

        rot3x3 = Rotation.from_quat(orn).as_matrix()
        axis_x, axis_y, axis_z = rot3x3.T
        self.uids[0] = p.addUserDebugLine(pos, pos + axis_x * 0.05, [1, 0, 0], replaceItemUniqueId=self.uids[0])
        self.uids[1] = p.addUserDebugLine(pos, pos + axis_y * 0.05, [0, 1, 0], replaceItemUniqueId=self.uids[1])
        self.uids[2] = p.addUserDebugLine(pos, pos + axis_z * 0.05, [0, 0, 1], replaceItemUniqueId=self.uids[2])

# 旋转矩阵转四元数
def Rot2Quat(R):
    r = Rotation.from_matrix(R)
    quaternion = r.as_quat()
    return quaternion

# 四元数转旋转矩阵
def Quat2Rot(quaternion):
    r = Rotation.from_quat(quaternion)
    rot = r.as_matrix()
    return rot

class ym_ikFast:
    def __init__(self, whicharm):
        # whicharm: 'left' 或 'right'
        if whicharm == 'left':
            self.endEffectorLinkIndex = 13
            self.armJointIndices = [6, 7, 8, 9, 10, 11, 12]
        elif whicharm == 'right':
            self.endEffectorLinkIndex = 21
            self.armJointIndices = [14, 15, 16, 17, 18, 19, 20]
        else:
            print("错误的手臂选择，请输入 'left' 或 'right'")
            return

        # null space 设置
        '''
            0:base_footprint_joint
            1:Body_Joint1   2:Body_Joint2   3:Body_Joint3   4:Body_Joint4   5:Body_Joint5
            6~12:Left_Arm_Joint1 ~ Left_Arm_Joint7   13:Left_Arm_Joint8(固定末端)
            14~20:Right_Arm_Joint1 ~ Right_Arm_Joint7 21:Right_Arm_Joint8(固定末端)
            22:Neck_Joint1  23:Neck_Joint2
            24~35:Wheel Joint
        '''

        self.lowerLimits = [-2.79, -0.21, -2.79, -1.6, -1.05, -0.03, -2.79,
                            -2.79, -1.4, -2.79, -1.57, -1.05, -0.03, -2.79,
                            -3.14,-3.14,-3.14,-3.14,-3.14,-3.14,-3.14,-3.14,-3.14,-3.14,-3.14,-3.14]
        self.upperLimits = [2.79, 1.4, 2.79, 1.6, 1.05, 1.57, 2.79, 
                            2.79, 0.21, 2.79, 1.6, 1.05, 1.4, 2.79,
                            3.14,3.14,3.14,3.14,3.14,3.14,3.14,3.14,3.14,3.14,3.14,3.14]
        self.jointRanges = [upper - lower for lower, upper in zip(self.lowerLimits, self.upperLimits)]
        self.restPoses = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
        self.jointDamping = [0.005] * 26

        # pybullet其他参数设置
        self.whicharm = whicharm
        self.physicsClient = None
        self.robotId = None
        # self.current_pos = None
        # self.current_orie = None
        self.end_link_ = None
        self.num_joints = None
        self.ik_joint_indices = None

        self.physicsClient = p.connect(p.DIRECT) # GUI or DIRECT
        p.setAdditionalSearchPath(pybullet_data.getDataPath(), physicsClientId=self.physicsClient)
        p.setGravity(0, 0, -9.81, physicsClientId=self.physicsClient)

        urdf_path = resolve_pybullet_urdf_path()
        self.robotId = p.loadURDF(
            str(urdf_path),
            basePosition=[0,0,1.1],
            useFixedBase=True,
            physicsClientId=self.physicsClient,
        )

        self.num_joints = p.getNumJoints(self.robotId, physicsClientId=self.physicsClient)
        self.getMovableJointIndices()

    def getJointTrajectoryMsg(self, start_joint_value, target_pos, target_quat, t, point_num):
        """
        直接从目标位姿生成 ROS2 JointTrajectory 消息

        注意：
        - target_pos / target_quat 仍然是相对于 Body_Link5 的目标位姿
        - target_quat 顺序仍然是 [x, y, z, w]
        """
        trajs = self.getTrajectory(
            target_pos,
            target_quat,
            start_joint_value,
            t,
            point_num
        )

        traj_msg = self.trajectoryToJointTrajectoryMsg(
            trajs,
            duration=t,
        )

        return traj_msg
    
    def getTrajectory(self, target_pos, target_quat, start_joint_value, t, point_num):
        # 调用求解器得到目标点的七个关节值
        target_joint_value = self.calcIk(
            target_pos,
            target_quat,
            current_joint_position=start_joint_value
        )

        q0 = np.array(start_joint_value)

        if self.endEffectorLinkIndex == 13: # 左臂，末端 Left_Arm_Joint8
            qf = np.array([target_joint_value[self.getIkIndex(i)] for i in self.armJointIndices])
        elif self.endEffectorLinkIndex == 21: # 右臂，末端 Right_Arm_Joint8
            qf = np.array([target_joint_value[self.getIkIndex(i)] for i in self.armJointIndices])
        else:
            print("错误的手臂末端索引")
            return -1
        
        t0 = 0
        tf = t        
        n = point_num
        t = np.linspace(t0, tf, n)

        # 生成多项式系数矩阵
        T = np.array([[1, t0, t0**2, t0**3],
                    [0, 1, 2*t0, 3*t0**2],
                    [1, tf, tf**2, tf**3],
                    [0, 1, 2*tf, 3*tf**2]])  
        
        # 生成关节角度矩阵
        Q = np.zeros((4, 7))
        Q[0, :] = q0
        Q[2, :] = qf

        # 生成多项式插值矩阵
        A = np.zeros((4, 7))
        for i in range(7):
            A[:, i] = np.linalg.solve(T, Q[:, i])

        # 计算插值点的关节角度值
        Qd = np.zeros((n, 7))
        for i in range(n):
            Td = np.array([1, t[i], t[i]**2, t[i]**3])
            Qd[i, :] = Td.dot(A)
        
        return Qd

    def trajectoryToJointTrajectoryMsg(self, trajs, duration):
        """
        将 getTrajectory() 输出的 Qd 转换成 ROS2 JointTrajectory 消息

        Arguments:
        - trajs: getTrajectory() 返回的轨迹, shape = (point_num, 7)
        - duration: 总轨迹时间, 单位 s

        Returns:
        - trajectory_msgs.msg.JointTrajectory
        """
        trajs = np.asarray(trajs)

        if trajs.ndim != 2 or trajs.shape[1] != 7:
            raise ValueError("trajs 的形状必须是 (point_num, 7)")

        point_num = trajs.shape[0]

        traj_msg = JointTrajectory()

        traj_msg.joint_names = self.getJointNames()

        if point_num <= 1:
            dt = 0.0
        else:
            dt = float(duration) / float(point_num - 1)

        for i in range(point_num):
            point = JointTrajectoryPoint()

            point.positions = [float(q) for q in trajs[i, :]]

            # 如果你的控制器只需要位置控制，这些可以留空
            point.velocities = []
            point.accelerations = []
            point.effort = []

            point.time_from_start = self.secToDurationMsg(i * dt)

            traj_msg.points.append(point)

        return traj_msg

    def calcIk(self, target_pose, target_quat, current_joint_position=None):
        if current_joint_position is None:
            current_joint_position = [0,0,0,0,0,0,0]

        self.restPoses = [
            p.getJointState(self.robotId, i, physicsClientId=self.physicsClient)[0]
            for i in self.ik_joint_indices
        ]

        # 将真实机器人关节位置覆盖当前默认位置
        if self.whicharm == 'left':
            self.restPoses[0:7] = current_joint_position
        elif self.whicharm == 'right':
            self.restPoses[7:14] = current_joint_position

        # 将非规划自由度的关节限位置0
        for ikIndex, jointIndex in enumerate(self.ik_joint_indices):
            if jointIndex not in self.armJointIndices:
                self.jointRanges[ikIndex] = 0.0

        # 设置机器人起始位姿
        robotStartPos = [0,0,1.1]
        robotStartOrientation = p.getQuaternionFromEuler([0,0,0])
        p.resetBasePositionAndOrientation(
            self.robotId,
            robotStartPos,
            robotStartOrientation,
            physicsClientId=self.physicsClient,
        )

        # 先设置当前手臂关节状态
        for i in range(7):
            p.resetJointState(
                bodyUniqueId=self.robotId,
                jointIndex=self.armJointIndices[i],
                targetValue=current_joint_position[i],
                physicsClientId=self.physicsClient,
            )

        # 获取 Body_Link5 在 world 下的位置和姿态
        body5_state = p.getLinkState(self.robotId, 5, physicsClientId=self.physicsClient)
        body5_pos_world = body5_state[4]
        body5_quat_world = body5_state[5]

        # Body_Link5 坐标系下的目标 -> world 坐标系下的目标
        T_obj2body5 = np.eye(4)
        T_obj2body5[:3, 3] = target_pose
        T_obj2body5[:3, :3] = Quat2Rot(target_quat)

        T_body5toworld = np.eye(4)
        T_body5toworld[:3, 3] = np.array(body5_pos_world)
        T_body5toworld[:3, :3] = Quat2Rot(body5_quat_world)

        T_obj2world = np.dot(T_body5toworld, T_obj2body5)

        target_pose_world = T_obj2world[:3, 3]
        target_quat_world = Rot2Quat(T_obj2world[:3, :3])

        target_joint_value = p.calculateInverseKinematics(
            bodyUniqueId=self.robotId,
            endEffectorLinkIndex=self.endEffectorLinkIndex,
            targetPosition=target_pose_world,
            targetOrientation=target_quat_world,
            jointDamping=self.jointDamping, 
            upperLimits=self.upperLimits,
            lowerLimits=self.lowerLimits,
            jointRanges=self.jointRanges,
            restPoses=self.restPoses,
            physicsClientId=self.physicsClient,
            maxNumIterations=1000,
            residualThreshold=1e-6,
        )

        if self.endEffectorLinkIndex == 21: # 右臂末端 Right_Arm_Joint8
            for i in range(7):
                jointIndex = self.armJointIndices[i]
                p.resetJointState(
                    bodyUniqueId=self.robotId,
                    jointIndex=jointIndex,
                    targetValue=target_joint_value[self.getIkIndex(jointIndex)],
                    physicsClientId=self.physicsClient,
                )
            p.stepSimulation(physicsClientId=self.physicsClient)

        elif self.endEffectorLinkIndex == 13: # 左臂末端 Left_Arm_Joint8
            for i in range(7):
                jointIndex = self.armJointIndices[i]
                p.resetJointState(
                    bodyUniqueId=self.robotId,
                    jointIndex=jointIndex,
                    targetValue=target_joint_value[self.getIkIndex(jointIndex)],
                    physicsClientId=self.physicsClient,
                )
            p.stepSimulation(physicsClientId=self.physicsClient)

        else:
            print("错误的手臂索引")
            return 0

        return target_joint_value

    def close(self):
        if self.physicsClient is not None:
            p.disconnect(self.physicsClient)
            self.physicsClient = None
            self.robotId = None

    def getMovableJointIndices(self):
        self.ik_joint_indices = []
        for i in range(self.num_joints):
            qIndex = p.getJointInfo(self.robotId, i, physicsClientId=self.physicsClient)[3]
            if qIndex >= 0:                             # qIndex >= 0表示可动关节
                self.ik_joint_indices.append(i)

    def getIkIndex(self, jointIndex):
        return self.ik_joint_indices.index(jointIndex)
    
    def getJointNames(self):
        if self.whicharm == 'left':
            return [
                "Left_Arm_Joint1",
                "Left_Arm_Joint2",
                "Left_Arm_Joint3",
                "Left_Arm_Joint4",
                "Left_Arm_Joint5",
                "Left_Arm_Joint6",
                "Left_Arm_Joint7",
            ]
        elif self.whicharm == 'right':
            return [
                "Right_Arm_Joint1",
                "Right_Arm_Joint2",
                "Right_Arm_Joint3",
                "Right_Arm_Joint4",
                "Right_Arm_Joint5",
                "Right_Arm_Joint6",
                "Right_Arm_Joint7",
            ]
        else:
            print("错误的手臂选择")
            return []

    def secToDurationMsg(self, t):
        duration_msg = Duration()
        duration_msg.sec = int(t)
        duration_msg.nanosec = int((t - int(t)) * 1e9)
        return duration_msg

# test
if __name__ == "__main__":

    iksolve_right = ym_ikFast('right') # right_arm: Right_Arm_Joint8
    iksolve_left = ym_ikFast('left') # left_arm: Left_Arm_Joint8

    # 规划时间和插值点数量
    t = 3
    point_num = 50

    ### *******************************right*************************************
    # 1.初始位置test
    q01 = np.array([0,0,0,0,0,0,0])
    # 2.目标位置
    '''
    cart(0.465, -0.324, 0.231, 0.660, 0.364, -0.584, -0.300)
    joint(0.61, 0.40, -0.37, -1.11, -0.49,  0.09, -0.40)
    plan (0.74, 0.83, -0.30,  0.18,  0.20, -0.15, -0.69)
        -0.12906949310693086, 0.14917596151478596, 0.5816819752216885, -0.4115872984987486, -0.468058000440544, 1.0822538722928485, 0.32850585586664793,
        (-0.4078097343444824, -0.6067736148834229, 1.2460403442382812)
        (0.5768337845802307, 0.5079187154769897, 0.6269388198852539, -0.12739330530166626)
    '''
    target_pos_right = np.array([0.465, -0.324, 0.231])
    target_quat_right = np.array([0.660, 0.364, -0.584, -0.300])
    
    trajs_right = iksolve_right.calcIk(target_pos_right, target_quat_right, current_joint_position=[0,0,0,0,0,0,0])  
    trajs_right = iksolve_right.getTrajectory(target_pos_right, target_quat_right, q01, t, point_num)

    # left
    # 1.初始位置
    q02 = np.array([0,0,0,0,0,0,0])
    # 2.目标位置
    '''
    cart:(0.457,0.256,0.182,0.65,0.46,-0.45,-0.38)
    joint:(-0.52,-0.17,0.32,1.05,0.47,0.38,-0.26)
    plan:(0.4689449369907379, 0.2535308301448822, 1.289506435394287)
        (0.6621498465538025, 0.46282193064689636, -0.44545984268188477, -0.3859002888202667)
        (0.168, 0.118, -0.746, 0.718, 0.58, 1.179, -0.939)
    '''
    target_pos_left = np.array([0.457,0.256,0.182])
    target_quat_left = np.array([0.65,0.46,-0.45,-0.38])    

    trajs_left = iksolve_left.calcIk(target_pos_left, target_quat_left, current_joint_position=[0,0,0,0,0,0,0])
    trajs_left = iksolve_left.getTrajectory(target_pos_left, target_quat_left, q02, t, point_num)

    print('逆解为：', trajs_right)
    print('逆解为：', trajs_left)