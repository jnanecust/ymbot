# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ymrobot_msgs:msg/PatrolMission.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PatrolMission(type):
    """Metaclass of message 'PatrolMission'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'ymrobot_msgs.msg.PatrolMission')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__patrol_mission
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__patrol_mission
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__patrol_mission
            cls._TYPE_SUPPORT = module.type_support_msg__msg__patrol_mission
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__patrol_mission

            from ymrobot_msgs.msg import ImageVideo
            if ImageVideo.__class__._TYPE_SUPPORT is None:
                ImageVideo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PatrolMission(metaclass=Metaclass_PatrolMission):
    """Message class 'PatrolMission'."""

    __slots__ = [
        '_image_video_msg',
        '_is_audio_played_throughout_the_entire_process',
        '_full_audio_name',
        '_is_the_entire_process_recorded',
        '_is_activate_the_nearby_point',
        '_nearby_point_radius',
        '_nav_name_list',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'image_video_msg': 'ymrobot_msgs/ImageVideo',
        'is_audio_played_throughout_the_entire_process': 'boolean',
        'full_audio_name': 'string',
        'is_the_entire_process_recorded': 'boolean',
        'is_activate_the_nearby_point': 'boolean',
        'nearby_point_radius': 'float',
        'nav_name_list': 'sequence<string>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ymrobot_msgs', 'msg'], 'ImageVideo'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        from ymrobot_msgs.msg import ImageVideo
        self.image_video_msg = kwargs.get('image_video_msg', ImageVideo())
        self.is_audio_played_throughout_the_entire_process = kwargs.get('is_audio_played_throughout_the_entire_process', bool())
        self.full_audio_name = kwargs.get('full_audio_name', str())
        self.is_the_entire_process_recorded = kwargs.get('is_the_entire_process_recorded', bool())
        self.is_activate_the_nearby_point = kwargs.get('is_activate_the_nearby_point', bool())
        self.nearby_point_radius = kwargs.get('nearby_point_radius', float())
        self.nav_name_list = kwargs.get('nav_name_list', [])

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
        if self.image_video_msg != other.image_video_msg:
            return False
        if self.is_audio_played_throughout_the_entire_process != other.is_audio_played_throughout_the_entire_process:
            return False
        if self.full_audio_name != other.full_audio_name:
            return False
        if self.is_the_entire_process_recorded != other.is_the_entire_process_recorded:
            return False
        if self.is_activate_the_nearby_point != other.is_activate_the_nearby_point:
            return False
        if self.nearby_point_radius != other.nearby_point_radius:
            return False
        if self.nav_name_list != other.nav_name_list:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def image_video_msg(self):
        """Message field 'image_video_msg'."""
        return self._image_video_msg

    @image_video_msg.setter
    def image_video_msg(self, value):
        if self._check_fields:
            from ymrobot_msgs.msg import ImageVideo
            assert \
                isinstance(value, ImageVideo), \
                "The 'image_video_msg' field must be a sub message of type 'ImageVideo'"
        self._image_video_msg = value

    @builtins.property
    def is_audio_played_throughout_the_entire_process(self):
        """Message field 'is_audio_played_throughout_the_entire_process'."""
        return self._is_audio_played_throughout_the_entire_process

    @is_audio_played_throughout_the_entire_process.setter
    def is_audio_played_throughout_the_entire_process(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_audio_played_throughout_the_entire_process' field must be of type 'bool'"
        self._is_audio_played_throughout_the_entire_process = value

    @builtins.property
    def full_audio_name(self):
        """Message field 'full_audio_name'."""
        return self._full_audio_name

    @full_audio_name.setter
    def full_audio_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'full_audio_name' field must be of type 'str'"
        self._full_audio_name = value

    @builtins.property
    def is_the_entire_process_recorded(self):
        """Message field 'is_the_entire_process_recorded'."""
        return self._is_the_entire_process_recorded

    @is_the_entire_process_recorded.setter
    def is_the_entire_process_recorded(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_the_entire_process_recorded' field must be of type 'bool'"
        self._is_the_entire_process_recorded = value

    @builtins.property
    def is_activate_the_nearby_point(self):
        """Message field 'is_activate_the_nearby_point'."""
        return self._is_activate_the_nearby_point

    @is_activate_the_nearby_point.setter
    def is_activate_the_nearby_point(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_activate_the_nearby_point' field must be of type 'bool'"
        self._is_activate_the_nearby_point = value

    @builtins.property
    def nearby_point_radius(self):
        """Message field 'nearby_point_radius'."""
        return self._nearby_point_radius

    @nearby_point_radius.setter
    def nearby_point_radius(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'nearby_point_radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'nearby_point_radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._nearby_point_radius = value

    @builtins.property
    def nav_name_list(self):
        """Message field 'nav_name_list'."""
        return self._nav_name_list

    @nav_name_list.setter
    def nav_name_list(self, value):
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
                "The 'nav_name_list' field must be a set or sequence and each value of type 'str'"
        self._nav_name_list = value
