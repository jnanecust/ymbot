# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ymrobot_msgs:msg/RobotDeviceStatus.idl
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


class Metaclass_RobotDeviceStatus(type):
    """Metaclass of message 'RobotDeviceStatus'."""

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
                'ymrobot_msgs.msg.RobotDeviceStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_device_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_device_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_device_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_device_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_device_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotDeviceStatus(metaclass=Metaclass_RobotDeviceStatus):
    """Message class 'RobotDeviceStatus'."""

    __slots__ = [
        '_battery_voltage',
        '_battery_percentage',
        '_battery_temperature',
        '_left_motor_speed',
        '_right_motor_speed',
        '_left_motor_temperature',
        '_right_motor_temperature',
        '_cpu_usage',
        '_memory_usage',
        '_cpu_temperature',
        '_disk_space_percentage',
        '_mainboard_temperature',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'battery_voltage': 'float',
        'battery_percentage': 'float',
        'battery_temperature': 'float',
        'left_motor_speed': 'int32',
        'right_motor_speed': 'int32',
        'left_motor_temperature': 'float',
        'right_motor_temperature': 'float',
        'cpu_usage': 'float',
        'memory_usage': 'float',
        'cpu_temperature': 'float',
        'disk_space_percentage': 'float',
        'mainboard_temperature': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.battery_voltage = kwargs.get('battery_voltage', float())
        self.battery_percentage = kwargs.get('battery_percentage', float())
        self.battery_temperature = kwargs.get('battery_temperature', float())
        self.left_motor_speed = kwargs.get('left_motor_speed', int())
        self.right_motor_speed = kwargs.get('right_motor_speed', int())
        self.left_motor_temperature = kwargs.get('left_motor_temperature', float())
        self.right_motor_temperature = kwargs.get('right_motor_temperature', float())
        self.cpu_usage = kwargs.get('cpu_usage', float())
        self.memory_usage = kwargs.get('memory_usage', float())
        self.cpu_temperature = kwargs.get('cpu_temperature', float())
        self.disk_space_percentage = kwargs.get('disk_space_percentage', float())
        self.mainboard_temperature = kwargs.get('mainboard_temperature', float())

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
        if self.battery_voltage != other.battery_voltage:
            return False
        if self.battery_percentage != other.battery_percentage:
            return False
        if self.battery_temperature != other.battery_temperature:
            return False
        if self.left_motor_speed != other.left_motor_speed:
            return False
        if self.right_motor_speed != other.right_motor_speed:
            return False
        if self.left_motor_temperature != other.left_motor_temperature:
            return False
        if self.right_motor_temperature != other.right_motor_temperature:
            return False
        if self.cpu_usage != other.cpu_usage:
            return False
        if self.memory_usage != other.memory_usage:
            return False
        if self.cpu_temperature != other.cpu_temperature:
            return False
        if self.disk_space_percentage != other.disk_space_percentage:
            return False
        if self.mainboard_temperature != other.mainboard_temperature:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def battery_voltage(self):
        """Message field 'battery_voltage'."""
        return self._battery_voltage

    @battery_voltage.setter
    def battery_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'battery_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_voltage = value

    @builtins.property
    def battery_percentage(self):
        """Message field 'battery_percentage'."""
        return self._battery_percentage

    @battery_percentage.setter
    def battery_percentage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'battery_percentage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_percentage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_percentage = value

    @builtins.property
    def battery_temperature(self):
        """Message field 'battery_temperature'."""
        return self._battery_temperature

    @battery_temperature.setter
    def battery_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'battery_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_temperature = value

    @builtins.property
    def left_motor_speed(self):
        """Message field 'left_motor_speed'."""
        return self._left_motor_speed

    @left_motor_speed.setter
    def left_motor_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'left_motor_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'left_motor_speed' field must be an integer in [-2147483648, 2147483647]"
        self._left_motor_speed = value

    @builtins.property
    def right_motor_speed(self):
        """Message field 'right_motor_speed'."""
        return self._right_motor_speed

    @right_motor_speed.setter
    def right_motor_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'right_motor_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'right_motor_speed' field must be an integer in [-2147483648, 2147483647]"
        self._right_motor_speed = value

    @builtins.property
    def left_motor_temperature(self):
        """Message field 'left_motor_temperature'."""
        return self._left_motor_temperature

    @left_motor_temperature.setter
    def left_motor_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'left_motor_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_motor_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_motor_temperature = value

    @builtins.property
    def right_motor_temperature(self):
        """Message field 'right_motor_temperature'."""
        return self._right_motor_temperature

    @right_motor_temperature.setter
    def right_motor_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'right_motor_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_motor_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_motor_temperature = value

    @builtins.property
    def cpu_usage(self):
        """Message field 'cpu_usage'."""
        return self._cpu_usage

    @cpu_usage.setter
    def cpu_usage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cpu_usage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cpu_usage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cpu_usage = value

    @builtins.property
    def memory_usage(self):
        """Message field 'memory_usage'."""
        return self._memory_usage

    @memory_usage.setter
    def memory_usage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'memory_usage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'memory_usage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._memory_usage = value

    @builtins.property
    def cpu_temperature(self):
        """Message field 'cpu_temperature'."""
        return self._cpu_temperature

    @cpu_temperature.setter
    def cpu_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cpu_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cpu_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cpu_temperature = value

    @builtins.property
    def disk_space_percentage(self):
        """Message field 'disk_space_percentage'."""
        return self._disk_space_percentage

    @disk_space_percentage.setter
    def disk_space_percentage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'disk_space_percentage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'disk_space_percentage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._disk_space_percentage = value

    @builtins.property
    def mainboard_temperature(self):
        """Message field 'mainboard_temperature'."""
        return self._mainboard_temperature

    @mainboard_temperature.setter
    def mainboard_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'mainboard_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mainboard_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mainboard_temperature = value
