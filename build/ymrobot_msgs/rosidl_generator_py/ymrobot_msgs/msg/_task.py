# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ymrobot_msgs:msg/Task.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Task(type):
    """Metaclass of message 'Task'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'REG': 0,
        'TASK_GUIDANCE': 1,
        'BT_TASK': 2,
        'CHSSIS': 3,
        'CLOUD_CHASSIS': 4,
        'UP_LIMB': 5,
        'VIDEO_IMAGE': 6,
        'VOICE': 7,
        'EMOJI_TASK': 8,
        'SYSTEM_MANAGEMENT': 9,
        'MOVE_CONTROL': 10,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ymrobot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ymrobot_msgs.msg.Task')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task

            from ymrobot_msgs.msg import BinaryData
            if BinaryData.__class__._TYPE_SUPPORT is None:
                BinaryData.__class__.__import_type_support__()

            from ymrobot_msgs.msg import Command
            if Command.__class__._TYPE_SUPPORT is None:
                Command.__class__.__import_type_support__()

            from ymrobot_msgs.msg import NavPoint
            if NavPoint.__class__._TYPE_SUPPORT is None:
                NavPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'REG': cls.__constants['REG'],
            'TASK_GUIDANCE': cls.__constants['TASK_GUIDANCE'],
            'BT_TASK': cls.__constants['BT_TASK'],
            'CHSSIS': cls.__constants['CHSSIS'],
            'CLOUD_CHASSIS': cls.__constants['CLOUD_CHASSIS'],
            'UP_LIMB': cls.__constants['UP_LIMB'],
            'VIDEO_IMAGE': cls.__constants['VIDEO_IMAGE'],
            'VOICE': cls.__constants['VOICE'],
            'EMOJI_TASK': cls.__constants['EMOJI_TASK'],
            'SYSTEM_MANAGEMENT': cls.__constants['SYSTEM_MANAGEMENT'],
            'MOVE_CONTROL': cls.__constants['MOVE_CONTROL'],
            'TASK_TYPE__DEFAULT': 0,
            'BEHAVIOR_TREE__DEFAULT': '',
            'RELOAD__DEFAULT': False,
        }

    @property
    def REG(self):
        """Message constant 'REG'."""
        return Metaclass_Task.__constants['REG']

    @property
    def TASK_GUIDANCE(self):
        """Message constant 'TASK_GUIDANCE'."""
        return Metaclass_Task.__constants['TASK_GUIDANCE']

    @property
    def BT_TASK(self):
        """Message constant 'BT_TASK'."""
        return Metaclass_Task.__constants['BT_TASK']

    @property
    def CHSSIS(self):
        """Message constant 'CHSSIS'."""
        return Metaclass_Task.__constants['CHSSIS']

    @property
    def CLOUD_CHASSIS(self):
        """Message constant 'CLOUD_CHASSIS'."""
        return Metaclass_Task.__constants['CLOUD_CHASSIS']

    @property
    def UP_LIMB(self):
        """Message constant 'UP_LIMB'."""
        return Metaclass_Task.__constants['UP_LIMB']

    @property
    def VIDEO_IMAGE(self):
        """Message constant 'VIDEO_IMAGE'."""
        return Metaclass_Task.__constants['VIDEO_IMAGE']

    @property
    def VOICE(self):
        """Message constant 'VOICE'."""
        return Metaclass_Task.__constants['VOICE']

    @property
    def EMOJI_TASK(self):
        """Message constant 'EMOJI_TASK'."""
        return Metaclass_Task.__constants['EMOJI_TASK']

    @property
    def SYSTEM_MANAGEMENT(self):
        """Message constant 'SYSTEM_MANAGEMENT'."""
        return Metaclass_Task.__constants['SYSTEM_MANAGEMENT']

    @property
    def MOVE_CONTROL(self):
        """Message constant 'MOVE_CONTROL'."""
        return Metaclass_Task.__constants['MOVE_CONTROL']

    @property
    def TASK_TYPE__DEFAULT(cls):
        """Return default value for message field 'task_type'."""
        return 0

    @property
    def BEHAVIOR_TREE__DEFAULT(cls):
        """Return default value for message field 'behavior_tree'."""
        return ''

    @property
    def RELOAD__DEFAULT(cls):
        """Return default value for message field 'reload'."""
        return False


class Task(metaclass=Metaclass_Task):
    """
    Message class 'Task'.

    Constants:
      REG
      TASK_GUIDANCE
      BT_TASK
      CHSSIS
      CLOUD_CHASSIS
      UP_LIMB
      VIDEO_IMAGE
      VOICE
      EMOJI_TASK
      SYSTEM_MANAGEMENT
      MOVE_CONTROL
    """

    __slots__ = [
        '_platform_id',
        '_amr_id',
        '_task_id',
        '_task_type',
        '_control_mode',
        '_nav_points',
        '_commands',
        '_behavior_tree',
        '_reload',
        '_index',
        '_binary_file',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'platform_id': 'string',
        'amr_id': 'string',
        'task_id': 'string',
        'task_type': 'uint8',
        'control_mode': 'uint8',
        'nav_points': 'sequence<ymrobot_msgs/NavPoint>',
        'commands': 'sequence<ymrobot_msgs/Command>',
        'behavior_tree': 'string',
        'reload': 'boolean',
        'index': 'string',
        'binary_file': 'ymrobot_msgs/BinaryData',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ymrobot_msgs', 'msg'], 'NavPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ymrobot_msgs', 'msg'], 'Command')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ymrobot_msgs', 'msg'], 'BinaryData'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.platform_id = kwargs.get('platform_id', str())
        self.amr_id = kwargs.get('amr_id', str())
        self.task_id = kwargs.get('task_id', str())
        self.task_type = kwargs.get(
            'task_type', Task.TASK_TYPE__DEFAULT)
        self.control_mode = kwargs.get('control_mode', int())
        self.nav_points = kwargs.get('nav_points', [])
        self.commands = kwargs.get('commands', [])
        self.behavior_tree = kwargs.get(
            'behavior_tree', Task.BEHAVIOR_TREE__DEFAULT)
        self.reload = kwargs.get(
            'reload', Task.RELOAD__DEFAULT)
        self.index = kwargs.get('index', str())
        from ymrobot_msgs.msg import BinaryData
        self.binary_file = kwargs.get('binary_file', BinaryData())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.platform_id != other.platform_id:
            return False
        if self.amr_id != other.amr_id:
            return False
        if self.task_id != other.task_id:
            return False
        if self.task_type != other.task_type:
            return False
        if self.control_mode != other.control_mode:
            return False
        if self.nav_points != other.nav_points:
            return False
        if self.commands != other.commands:
            return False
        if self.behavior_tree != other.behavior_tree:
            return False
        if self.reload != other.reload:
            return False
        if self.index != other.index:
            return False
        if self.binary_file != other.binary_file:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def platform_id(self):
        """Message field 'platform_id'."""
        return self._platform_id

    @platform_id.setter
    def platform_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'platform_id' field must be of type 'str'"
        self._platform_id = value

    @builtins.property
    def amr_id(self):
        """Message field 'amr_id'."""
        return self._amr_id

    @amr_id.setter
    def amr_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'amr_id' field must be of type 'str'"
        self._amr_id = value

    @builtins.property
    def task_id(self):
        """Message field 'task_id'."""
        return self._task_id

    @task_id.setter
    def task_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'task_id' field must be of type 'str'"
        self._task_id = value

    @builtins.property
    def task_type(self):
        """Message field 'task_type'."""
        return self._task_type

    @task_type.setter
    def task_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'task_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'task_type' field must be an unsigned integer in [0, 255]"
        self._task_type = value

    @builtins.property
    def control_mode(self):
        """Message field 'control_mode'."""
        return self._control_mode

    @control_mode.setter
    def control_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'control_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'control_mode' field must be an unsigned integer in [0, 255]"
        self._control_mode = value

    @builtins.property
    def nav_points(self):
        """Message field 'nav_points'."""
        return self._nav_points

    @nav_points.setter
    def nav_points(self, value):
        if self._check_fields:
            from ymrobot_msgs.msg import NavPoint
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, NavPoint) for v in value) and
                 True), \
                "The 'nav_points' field must be a set or sequence and each value of type 'NavPoint'"
        self._nav_points = value

    @builtins.property
    def commands(self):
        """Message field 'commands'."""
        return self._commands

    @commands.setter
    def commands(self, value):
        if self._check_fields:
            from ymrobot_msgs.msg import Command
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Command) for v in value) and
                 True), \
                "The 'commands' field must be a set or sequence and each value of type 'Command'"
        self._commands = value

    @builtins.property
    def behavior_tree(self):
        """Message field 'behavior_tree'."""
        return self._behavior_tree

    @behavior_tree.setter
    def behavior_tree(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'behavior_tree' field must be of type 'str'"
        self._behavior_tree = value

    @builtins.property
    def reload(self):
        """Message field 'reload'."""
        return self._reload

    @reload.setter
    def reload(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'reload' field must be of type 'bool'"
        self._reload = value

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'index' field must be of type 'str'"
        self._index = value

    @builtins.property
    def binary_file(self):
        """Message field 'binary_file'."""
        return self._binary_file

    @binary_file.setter
    def binary_file(self, value):
        if self._check_fields:
            from ymrobot_msgs.msg import BinaryData
            assert \
                isinstance(value, BinaryData), \
                "The 'binary_file' field must be a sub message of type 'BinaryData'"
        self._binary_file = value
