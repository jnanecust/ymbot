# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ymrobot_msgs:msg/CloudChassisMarkPoint.idl
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


class Metaclass_CloudChassisMarkPoint(type):
    """Metaclass of message 'CloudChassisMarkPoint'."""

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
                'ymrobot_msgs.msg.CloudChassisMarkPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cloud_chassis_mark_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cloud_chassis_mark_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cloud_chassis_mark_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cloud_chassis_mark_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cloud_chassis_mark_point

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CloudChassisMarkPoint(metaclass=Metaclass_CloudChassisMarkPoint):
    """Message class 'CloudChassisMarkPoint'."""

    __slots__ = [
        '_nav_mode',
        '_nav_target_name',
        '_nav_target_x',
        '_nav_target_y',
        '_nav_target_yaw',
        '_is_activate_the_nearby_point',
        '_nearby_point_radius',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'nav_mode': 'uint8',
        'nav_target_name': 'string',
        'nav_target_x': 'float',
        'nav_target_y': 'float',
        'nav_target_yaw': 'float',
        'is_activate_the_nearby_point': 'boolean',
        'nearby_point_radius': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.nav_mode = kwargs.get('nav_mode', int())
        self.nav_target_name = kwargs.get('nav_target_name', str())
        self.nav_target_x = kwargs.get('nav_target_x', float())
        self.nav_target_y = kwargs.get('nav_target_y', float())
        self.nav_target_yaw = kwargs.get('nav_target_yaw', float())
        self.is_activate_the_nearby_point = kwargs.get('is_activate_the_nearby_point', bool())
        self.nearby_point_radius = kwargs.get('nearby_point_radius', float())

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
        if self.nav_mode != other.nav_mode:
            return False
        if self.nav_target_name != other.nav_target_name:
            return False
        if self.nav_target_x != other.nav_target_x:
            return False
        if self.nav_target_y != other.nav_target_y:
            return False
        if self.nav_target_yaw != other.nav_target_yaw:
            return False
        if self.is_activate_the_nearby_point != other.is_activate_the_nearby_point:
            return False
        if self.nearby_point_radius != other.nearby_point_radius:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def nav_mode(self):
        """Message field 'nav_mode'."""
        return self._nav_mode

    @nav_mode.setter
    def nav_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'nav_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nav_mode' field must be an unsigned integer in [0, 255]"
        self._nav_mode = value

    @builtins.property
    def nav_target_name(self):
        """Message field 'nav_target_name'."""
        return self._nav_target_name

    @nav_target_name.setter
    def nav_target_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'nav_target_name' field must be of type 'str'"
        self._nav_target_name = value

    @builtins.property
    def nav_target_x(self):
        """Message field 'nav_target_x'."""
        return self._nav_target_x

    @nav_target_x.setter
    def nav_target_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'nav_target_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'nav_target_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._nav_target_x = value

    @builtins.property
    def nav_target_y(self):
        """Message field 'nav_target_y'."""
        return self._nav_target_y

    @nav_target_y.setter
    def nav_target_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'nav_target_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'nav_target_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._nav_target_y = value

    @builtins.property
    def nav_target_yaw(self):
        """Message field 'nav_target_yaw'."""
        return self._nav_target_yaw

    @nav_target_yaw.setter
    def nav_target_yaw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'nav_target_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'nav_target_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._nav_target_yaw = value

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
