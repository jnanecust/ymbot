# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ymrobot_msgs:msg/EmojiFixed.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EmojiFixed(type):
    """Metaclass of message 'EmojiFixed'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'PAUSE': 1,
        'RESUME': 2,
        'CANCLE': 3,
        'WAIT': 4,
        'FINISH_WAIT': 5,
        'CHARGE': 6,
        'FINISH_CHARGE': 7,
        'BUILD_MAP': 8,
        'UPLOAD_MAP': 9,
        'DOWNLOAD_MAP': 10,
        'SAVE_MAP': 11,
        'RELOCALIZE': 12,
        'NAVIGATION': 13,
        'MULIT_POINTS_NAVIGATION': 14,
        'MULIT_FLOOR_NAVIGATION': 15,
        'CLOUD_MANUAL_CONTROL_MOVE': 16,
        'DOT': 17,
        'MANUAL_CONTROL_MOVE': 18,
        'EXE_BEHAVIOR_TREE': 19,
        'PLACE_CARTESIAN': 20,
        'PLACE_JOINT': 21,
        'PLACE_FIXED': 22,
        'PLACE_CONTROL_MODE': 23,
        'GRASP': 24,
        'CAMERA': 25,
        'PLAY_FIX_AUDIO': 26,
        'SPEECH_2_TXT': 27,
        'EXPRESSION_FIXED': 28,
        'WAKE_UP': 29,
        'POWER_OFF': 30,
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
                'ymrobot_msgs.msg.EmojiFixed')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__emoji_fixed
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__emoji_fixed
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__emoji_fixed
            cls._TYPE_SUPPORT = module.type_support_msg__msg__emoji_fixed
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__emoji_fixed

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'PAUSE': cls.__constants['PAUSE'],
            'RESUME': cls.__constants['RESUME'],
            'CANCLE': cls.__constants['CANCLE'],
            'WAIT': cls.__constants['WAIT'],
            'FINISH_WAIT': cls.__constants['FINISH_WAIT'],
            'CHARGE': cls.__constants['CHARGE'],
            'FINISH_CHARGE': cls.__constants['FINISH_CHARGE'],
            'BUILD_MAP': cls.__constants['BUILD_MAP'],
            'UPLOAD_MAP': cls.__constants['UPLOAD_MAP'],
            'DOWNLOAD_MAP': cls.__constants['DOWNLOAD_MAP'],
            'SAVE_MAP': cls.__constants['SAVE_MAP'],
            'RELOCALIZE': cls.__constants['RELOCALIZE'],
            'NAVIGATION': cls.__constants['NAVIGATION'],
            'MULIT_POINTS_NAVIGATION': cls.__constants['MULIT_POINTS_NAVIGATION'],
            'MULIT_FLOOR_NAVIGATION': cls.__constants['MULIT_FLOOR_NAVIGATION'],
            'CLOUD_MANUAL_CONTROL_MOVE': cls.__constants['CLOUD_MANUAL_CONTROL_MOVE'],
            'DOT': cls.__constants['DOT'],
            'MANUAL_CONTROL_MOVE': cls.__constants['MANUAL_CONTROL_MOVE'],
            'EXE_BEHAVIOR_TREE': cls.__constants['EXE_BEHAVIOR_TREE'],
            'PLACE_CARTESIAN': cls.__constants['PLACE_CARTESIAN'],
            'PLACE_JOINT': cls.__constants['PLACE_JOINT'],
            'PLACE_FIXED': cls.__constants['PLACE_FIXED'],
            'PLACE_CONTROL_MODE': cls.__constants['PLACE_CONTROL_MODE'],
            'GRASP': cls.__constants['GRASP'],
            'CAMERA': cls.__constants['CAMERA'],
            'PLAY_FIX_AUDIO': cls.__constants['PLAY_FIX_AUDIO'],
            'SPEECH_2_TXT': cls.__constants['SPEECH_2_TXT'],
            'EXPRESSION_FIXED': cls.__constants['EXPRESSION_FIXED'],
            'WAKE_UP': cls.__constants['WAKE_UP'],
            'POWER_OFF': cls.__constants['POWER_OFF'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_EmojiFixed.__constants['NONE']

    @property
    def PAUSE(self):
        """Message constant 'PAUSE'."""
        return Metaclass_EmojiFixed.__constants['PAUSE']

    @property
    def RESUME(self):
        """Message constant 'RESUME'."""
        return Metaclass_EmojiFixed.__constants['RESUME']

    @property
    def CANCLE(self):
        """Message constant 'CANCLE'."""
        return Metaclass_EmojiFixed.__constants['CANCLE']

    @property
    def WAIT(self):
        """Message constant 'WAIT'."""
        return Metaclass_EmojiFixed.__constants['WAIT']

    @property
    def FINISH_WAIT(self):
        """Message constant 'FINISH_WAIT'."""
        return Metaclass_EmojiFixed.__constants['FINISH_WAIT']

    @property
    def CHARGE(self):
        """Message constant 'CHARGE'."""
        return Metaclass_EmojiFixed.__constants['CHARGE']

    @property
    def FINISH_CHARGE(self):
        """Message constant 'FINISH_CHARGE'."""
        return Metaclass_EmojiFixed.__constants['FINISH_CHARGE']

    @property
    def BUILD_MAP(self):
        """Message constant 'BUILD_MAP'."""
        return Metaclass_EmojiFixed.__constants['BUILD_MAP']

    @property
    def UPLOAD_MAP(self):
        """Message constant 'UPLOAD_MAP'."""
        return Metaclass_EmojiFixed.__constants['UPLOAD_MAP']

    @property
    def DOWNLOAD_MAP(self):
        """Message constant 'DOWNLOAD_MAP'."""
        return Metaclass_EmojiFixed.__constants['DOWNLOAD_MAP']

    @property
    def SAVE_MAP(self):
        """Message constant 'SAVE_MAP'."""
        return Metaclass_EmojiFixed.__constants['SAVE_MAP']

    @property
    def RELOCALIZE(self):
        """Message constant 'RELOCALIZE'."""
        return Metaclass_EmojiFixed.__constants['RELOCALIZE']

    @property
    def NAVIGATION(self):
        """Message constant 'NAVIGATION'."""
        return Metaclass_EmojiFixed.__constants['NAVIGATION']

    @property
    def MULIT_POINTS_NAVIGATION(self):
        """Message constant 'MULIT_POINTS_NAVIGATION'."""
        return Metaclass_EmojiFixed.__constants['MULIT_POINTS_NAVIGATION']

    @property
    def MULIT_FLOOR_NAVIGATION(self):
        """Message constant 'MULIT_FLOOR_NAVIGATION'."""
        return Metaclass_EmojiFixed.__constants['MULIT_FLOOR_NAVIGATION']

    @property
    def CLOUD_MANUAL_CONTROL_MOVE(self):
        """Message constant 'CLOUD_MANUAL_CONTROL_MOVE'."""
        return Metaclass_EmojiFixed.__constants['CLOUD_MANUAL_CONTROL_MOVE']

    @property
    def DOT(self):
        """Message constant 'DOT'."""
        return Metaclass_EmojiFixed.__constants['DOT']

    @property
    def MANUAL_CONTROL_MOVE(self):
        """Message constant 'MANUAL_CONTROL_MOVE'."""
        return Metaclass_EmojiFixed.__constants['MANUAL_CONTROL_MOVE']

    @property
    def EXE_BEHAVIOR_TREE(self):
        """Message constant 'EXE_BEHAVIOR_TREE'."""
        return Metaclass_EmojiFixed.__constants['EXE_BEHAVIOR_TREE']

    @property
    def PLACE_CARTESIAN(self):
        """Message constant 'PLACE_CARTESIAN'."""
        return Metaclass_EmojiFixed.__constants['PLACE_CARTESIAN']

    @property
    def PLACE_JOINT(self):
        """Message constant 'PLACE_JOINT'."""
        return Metaclass_EmojiFixed.__constants['PLACE_JOINT']

    @property
    def PLACE_FIXED(self):
        """Message constant 'PLACE_FIXED'."""
        return Metaclass_EmojiFixed.__constants['PLACE_FIXED']

    @property
    def PLACE_CONTROL_MODE(self):
        """Message constant 'PLACE_CONTROL_MODE'."""
        return Metaclass_EmojiFixed.__constants['PLACE_CONTROL_MODE']

    @property
    def GRASP(self):
        """Message constant 'GRASP'."""
        return Metaclass_EmojiFixed.__constants['GRASP']

    @property
    def CAMERA(self):
        """Message constant 'CAMERA'."""
        return Metaclass_EmojiFixed.__constants['CAMERA']

    @property
    def PLAY_FIX_AUDIO(self):
        """Message constant 'PLAY_FIX_AUDIO'."""
        return Metaclass_EmojiFixed.__constants['PLAY_FIX_AUDIO']

    @property
    def SPEECH_2_TXT(self):
        """Message constant 'SPEECH_2_TXT'."""
        return Metaclass_EmojiFixed.__constants['SPEECH_2_TXT']

    @property
    def EXPRESSION_FIXED(self):
        """Message constant 'EXPRESSION_FIXED'."""
        return Metaclass_EmojiFixed.__constants['EXPRESSION_FIXED']

    @property
    def WAKE_UP(self):
        """Message constant 'WAKE_UP'."""
        return Metaclass_EmojiFixed.__constants['WAKE_UP']

    @property
    def POWER_OFF(self):
        """Message constant 'POWER_OFF'."""
        return Metaclass_EmojiFixed.__constants['POWER_OFF']


class EmojiFixed(metaclass=Metaclass_EmojiFixed):
    """
    Message class 'EmojiFixed'.

    Constants:
      NONE
      PAUSE
      RESUME
      CANCLE
      WAIT
      FINISH_WAIT
      CHARGE
      FINISH_CHARGE
      BUILD_MAP
      UPLOAD_MAP
      DOWNLOAD_MAP
      SAVE_MAP
      RELOCALIZE
      NAVIGATION
      MULIT_POINTS_NAVIGATION
      MULIT_FLOOR_NAVIGATION
      CLOUD_MANUAL_CONTROL_MOVE
      DOT
      MANUAL_CONTROL_MOVE
      EXE_BEHAVIOR_TREE
      PLACE_CARTESIAN
      PLACE_JOINT
      PLACE_FIXED
      PLACE_CONTROL_MODE
      GRASP
      CAMERA
      PLAY_FIX_AUDIO
      SPEECH_2_TXT
      EXPRESSION_FIXED
      WAKE_UP
      POWER_OFF
    """

    __slots__ = [
        '_code',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'code': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.code = kwargs.get('code', int())

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
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def code(self):
        """Message field 'code'."""
        return self._code

    @code.setter
    def code(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'code' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'code' field must be an unsigned integer in [0, 255]"
        self._code = value
