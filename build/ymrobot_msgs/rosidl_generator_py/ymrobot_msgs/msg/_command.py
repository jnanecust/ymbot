# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ymrobot_msgs:msg/Command.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Command(type):
    """Metaclass of message 'Command'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'REGISTER': 1,
        'LOG_OFF': 2,
        'PAUSE': 3,
        'RESUME': 4,
        'CANCLE': 5,
        'WAIT': 6,
        'FINISH_WAIT': 7,
        'CHARGE': 8,
        'FINISH_CHARGE': 9,
        'BUILD_MAP': 10,
        'UPLOAD_MAP': 11,
        'DOWNLOAD_MAP': 12,
        'SAVE_MAP': 13,
        'RELOCALIZE': 14,
        'NAVIGATION': 15,
        'MULIT_POINTS_NAVIGATION': 16,
        'MULIT_FLOOR_NAVIGATION': 17,
        'DOT': 18,
        'CLOUD_NAVIGATION': 19,
        'CLOUD_MULIT_POINTS_NAVIGATION': 20,
        'CLOUD_NAVIGATION_NAME': 21,
        'CLOUD_MULIT_POINTS_NAVIGATION_NAME': 22,
        'MANUAL_CONTROL_MOVE': 23,
        'EXE_BEHAVIOR_TREE': 24,
        'PLACE_CARTESIAN': 25,
        'PLACE_JOINT': 26,
        'PLACE_FIXED': 27,
        'PLACE_CONTROL_MODE': 28,
        'GRASP': 29,
        'CAMERA': 30,
        'PHOTOGRAPH': 31,
        'RECOGNIZE': 32,
        'PLAY_FIX_AUDIO': 33,
        'TXT_2_AUDIO': 34,
        'SPEECH_2_TXT': 35,
        'EXPRESSION_FIXED': 36,
        'WAKE_UP': 37,
        'POWER_OFF': 38,
        'SETTING_PARAMETERS': 39,
        'SYNTHETIC_AUDIO': 40,
        'VOICE_INTERACTION_FUNCTION_SWITCH': 41,
        'UPLOAD_VOICE_CONVERSATION_LOGS': 42,
        'UPLOAD_OPERATION_LOGS': 43,
        'PLAY_ONLINE_AUDIO': 44,
        'DOWNLOAD_AUDIO': 45,
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
                'ymrobot_msgs.msg.Command')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'REGISTER': cls.__constants['REGISTER'],
            'LOG_OFF': cls.__constants['LOG_OFF'],
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
            'DOT': cls.__constants['DOT'],
            'CLOUD_NAVIGATION': cls.__constants['CLOUD_NAVIGATION'],
            'CLOUD_MULIT_POINTS_NAVIGATION': cls.__constants['CLOUD_MULIT_POINTS_NAVIGATION'],
            'CLOUD_NAVIGATION_NAME': cls.__constants['CLOUD_NAVIGATION_NAME'],
            'CLOUD_MULIT_POINTS_NAVIGATION_NAME': cls.__constants['CLOUD_MULIT_POINTS_NAVIGATION_NAME'],
            'MANUAL_CONTROL_MOVE': cls.__constants['MANUAL_CONTROL_MOVE'],
            'EXE_BEHAVIOR_TREE': cls.__constants['EXE_BEHAVIOR_TREE'],
            'PLACE_CARTESIAN': cls.__constants['PLACE_CARTESIAN'],
            'PLACE_JOINT': cls.__constants['PLACE_JOINT'],
            'PLACE_FIXED': cls.__constants['PLACE_FIXED'],
            'PLACE_CONTROL_MODE': cls.__constants['PLACE_CONTROL_MODE'],
            'GRASP': cls.__constants['GRASP'],
            'CAMERA': cls.__constants['CAMERA'],
            'PHOTOGRAPH': cls.__constants['PHOTOGRAPH'],
            'RECOGNIZE': cls.__constants['RECOGNIZE'],
            'PLAY_FIX_AUDIO': cls.__constants['PLAY_FIX_AUDIO'],
            'TXT_2_AUDIO': cls.__constants['TXT_2_AUDIO'],
            'SPEECH_2_TXT': cls.__constants['SPEECH_2_TXT'],
            'EXPRESSION_FIXED': cls.__constants['EXPRESSION_FIXED'],
            'WAKE_UP': cls.__constants['WAKE_UP'],
            'POWER_OFF': cls.__constants['POWER_OFF'],
            'SETTING_PARAMETERS': cls.__constants['SETTING_PARAMETERS'],
            'SYNTHETIC_AUDIO': cls.__constants['SYNTHETIC_AUDIO'],
            'VOICE_INTERACTION_FUNCTION_SWITCH': cls.__constants['VOICE_INTERACTION_FUNCTION_SWITCH'],
            'UPLOAD_VOICE_CONVERSATION_LOGS': cls.__constants['UPLOAD_VOICE_CONVERSATION_LOGS'],
            'UPLOAD_OPERATION_LOGS': cls.__constants['UPLOAD_OPERATION_LOGS'],
            'PLAY_ONLINE_AUDIO': cls.__constants['PLAY_ONLINE_AUDIO'],
            'DOWNLOAD_AUDIO': cls.__constants['DOWNLOAD_AUDIO'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_Command.__constants['NONE']

    @property
    def REGISTER(self):
        """Message constant 'REGISTER'."""
        return Metaclass_Command.__constants['REGISTER']

    @property
    def LOG_OFF(self):
        """Message constant 'LOG_OFF'."""
        return Metaclass_Command.__constants['LOG_OFF']

    @property
    def PAUSE(self):
        """Message constant 'PAUSE'."""
        return Metaclass_Command.__constants['PAUSE']

    @property
    def RESUME(self):
        """Message constant 'RESUME'."""
        return Metaclass_Command.__constants['RESUME']

    @property
    def CANCLE(self):
        """Message constant 'CANCLE'."""
        return Metaclass_Command.__constants['CANCLE']

    @property
    def WAIT(self):
        """Message constant 'WAIT'."""
        return Metaclass_Command.__constants['WAIT']

    @property
    def FINISH_WAIT(self):
        """Message constant 'FINISH_WAIT'."""
        return Metaclass_Command.__constants['FINISH_WAIT']

    @property
    def CHARGE(self):
        """Message constant 'CHARGE'."""
        return Metaclass_Command.__constants['CHARGE']

    @property
    def FINISH_CHARGE(self):
        """Message constant 'FINISH_CHARGE'."""
        return Metaclass_Command.__constants['FINISH_CHARGE']

    @property
    def BUILD_MAP(self):
        """Message constant 'BUILD_MAP'."""
        return Metaclass_Command.__constants['BUILD_MAP']

    @property
    def UPLOAD_MAP(self):
        """Message constant 'UPLOAD_MAP'."""
        return Metaclass_Command.__constants['UPLOAD_MAP']

    @property
    def DOWNLOAD_MAP(self):
        """Message constant 'DOWNLOAD_MAP'."""
        return Metaclass_Command.__constants['DOWNLOAD_MAP']

    @property
    def SAVE_MAP(self):
        """Message constant 'SAVE_MAP'."""
        return Metaclass_Command.__constants['SAVE_MAP']

    @property
    def RELOCALIZE(self):
        """Message constant 'RELOCALIZE'."""
        return Metaclass_Command.__constants['RELOCALIZE']

    @property
    def NAVIGATION(self):
        """Message constant 'NAVIGATION'."""
        return Metaclass_Command.__constants['NAVIGATION']

    @property
    def MULIT_POINTS_NAVIGATION(self):
        """Message constant 'MULIT_POINTS_NAVIGATION'."""
        return Metaclass_Command.__constants['MULIT_POINTS_NAVIGATION']

    @property
    def MULIT_FLOOR_NAVIGATION(self):
        """Message constant 'MULIT_FLOOR_NAVIGATION'."""
        return Metaclass_Command.__constants['MULIT_FLOOR_NAVIGATION']

    @property
    def DOT(self):
        """Message constant 'DOT'."""
        return Metaclass_Command.__constants['DOT']

    @property
    def CLOUD_NAVIGATION(self):
        """Message constant 'CLOUD_NAVIGATION'."""
        return Metaclass_Command.__constants['CLOUD_NAVIGATION']

    @property
    def CLOUD_MULIT_POINTS_NAVIGATION(self):
        """Message constant 'CLOUD_MULIT_POINTS_NAVIGATION'."""
        return Metaclass_Command.__constants['CLOUD_MULIT_POINTS_NAVIGATION']

    @property
    def CLOUD_NAVIGATION_NAME(self):
        """Message constant 'CLOUD_NAVIGATION_NAME'."""
        return Metaclass_Command.__constants['CLOUD_NAVIGATION_NAME']

    @property
    def CLOUD_MULIT_POINTS_NAVIGATION_NAME(self):
        """Message constant 'CLOUD_MULIT_POINTS_NAVIGATION_NAME'."""
        return Metaclass_Command.__constants['CLOUD_MULIT_POINTS_NAVIGATION_NAME']

    @property
    def MANUAL_CONTROL_MOVE(self):
        """Message constant 'MANUAL_CONTROL_MOVE'."""
        return Metaclass_Command.__constants['MANUAL_CONTROL_MOVE']

    @property
    def EXE_BEHAVIOR_TREE(self):
        """Message constant 'EXE_BEHAVIOR_TREE'."""
        return Metaclass_Command.__constants['EXE_BEHAVIOR_TREE']

    @property
    def PLACE_CARTESIAN(self):
        """Message constant 'PLACE_CARTESIAN'."""
        return Metaclass_Command.__constants['PLACE_CARTESIAN']

    @property
    def PLACE_JOINT(self):
        """Message constant 'PLACE_JOINT'."""
        return Metaclass_Command.__constants['PLACE_JOINT']

    @property
    def PLACE_FIXED(self):
        """Message constant 'PLACE_FIXED'."""
        return Metaclass_Command.__constants['PLACE_FIXED']

    @property
    def PLACE_CONTROL_MODE(self):
        """Message constant 'PLACE_CONTROL_MODE'."""
        return Metaclass_Command.__constants['PLACE_CONTROL_MODE']

    @property
    def GRASP(self):
        """Message constant 'GRASP'."""
        return Metaclass_Command.__constants['GRASP']

    @property
    def CAMERA(self):
        """Message constant 'CAMERA'."""
        return Metaclass_Command.__constants['CAMERA']

    @property
    def PHOTOGRAPH(self):
        """Message constant 'PHOTOGRAPH'."""
        return Metaclass_Command.__constants['PHOTOGRAPH']

    @property
    def RECOGNIZE(self):
        """Message constant 'RECOGNIZE'."""
        return Metaclass_Command.__constants['RECOGNIZE']

    @property
    def PLAY_FIX_AUDIO(self):
        """Message constant 'PLAY_FIX_AUDIO'."""
        return Metaclass_Command.__constants['PLAY_FIX_AUDIO']

    @property
    def TXT_2_AUDIO(self):
        """Message constant 'TXT_2_AUDIO'."""
        return Metaclass_Command.__constants['TXT_2_AUDIO']

    @property
    def SPEECH_2_TXT(self):
        """Message constant 'SPEECH_2_TXT'."""
        return Metaclass_Command.__constants['SPEECH_2_TXT']

    @property
    def EXPRESSION_FIXED(self):
        """Message constant 'EXPRESSION_FIXED'."""
        return Metaclass_Command.__constants['EXPRESSION_FIXED']

    @property
    def WAKE_UP(self):
        """Message constant 'WAKE_UP'."""
        return Metaclass_Command.__constants['WAKE_UP']

    @property
    def POWER_OFF(self):
        """Message constant 'POWER_OFF'."""
        return Metaclass_Command.__constants['POWER_OFF']

    @property
    def SETTING_PARAMETERS(self):
        """Message constant 'SETTING_PARAMETERS'."""
        return Metaclass_Command.__constants['SETTING_PARAMETERS']

    @property
    def SYNTHETIC_AUDIO(self):
        """Message constant 'SYNTHETIC_AUDIO'."""
        return Metaclass_Command.__constants['SYNTHETIC_AUDIO']

    @property
    def VOICE_INTERACTION_FUNCTION_SWITCH(self):
        """Message constant 'VOICE_INTERACTION_FUNCTION_SWITCH'."""
        return Metaclass_Command.__constants['VOICE_INTERACTION_FUNCTION_SWITCH']

    @property
    def UPLOAD_VOICE_CONVERSATION_LOGS(self):
        """Message constant 'UPLOAD_VOICE_CONVERSATION_LOGS'."""
        return Metaclass_Command.__constants['UPLOAD_VOICE_CONVERSATION_LOGS']

    @property
    def UPLOAD_OPERATION_LOGS(self):
        """Message constant 'UPLOAD_OPERATION_LOGS'."""
        return Metaclass_Command.__constants['UPLOAD_OPERATION_LOGS']

    @property
    def PLAY_ONLINE_AUDIO(self):
        """Message constant 'PLAY_ONLINE_AUDIO'."""
        return Metaclass_Command.__constants['PLAY_ONLINE_AUDIO']

    @property
    def DOWNLOAD_AUDIO(self):
        """Message constant 'DOWNLOAD_AUDIO'."""
        return Metaclass_Command.__constants['DOWNLOAD_AUDIO']


class Command(metaclass=Metaclass_Command):
    """
    Message class 'Command'.

    Constants:
      NONE
      REGISTER
      LOG_OFF
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
      DOT
      CLOUD_NAVIGATION
      CLOUD_MULIT_POINTS_NAVIGATION
      CLOUD_NAVIGATION_NAME
      CLOUD_MULIT_POINTS_NAVIGATION_NAME
      MANUAL_CONTROL_MOVE
      EXE_BEHAVIOR_TREE
      PLACE_CARTESIAN
      PLACE_JOINT
      PLACE_FIXED
      PLACE_CONTROL_MODE
      GRASP
      CAMERA
      PHOTOGRAPH
      RECOGNIZE
      PLAY_FIX_AUDIO
      TXT_2_AUDIO
      SPEECH_2_TXT
      EXPRESSION_FIXED
      WAKE_UP
      POWER_OFF
      SETTING_PARAMETERS
      SYNTHETIC_AUDIO
      VOICE_INTERACTION_FUNCTION_SWITCH
      UPLOAD_VOICE_CONVERSATION_LOGS
      UPLOAD_OPERATION_LOGS
      PLAY_ONLINE_AUDIO
      DOWNLOAD_AUDIO
    """

    __slots__ = [
        '_code',
        '_params_code',
        '_params',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'code': 'uint8',
        'params_code': 'string',
        'params': 'sequence<string>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
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
        self.params_code = kwargs.get('params_code', str())
        self.params = kwargs.get('params', [])

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
        if self.params_code != other.params_code:
            return False
        if self.params != other.params:
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

    @builtins.property
    def params_code(self):
        """Message field 'params_code'."""
        return self._params_code

    @params_code.setter
    def params_code(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'params_code' field must be of type 'str'"
        self._params_code = value

    @builtins.property
    def params(self):
        """Message field 'params'."""
        return self._params

    @params.setter
    def params(self, value):
        if self._check_fields:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'params' field must be a set or sequence and each value of type 'str'"
        self._params = value
