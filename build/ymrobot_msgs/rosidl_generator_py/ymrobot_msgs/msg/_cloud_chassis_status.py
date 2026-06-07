# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ymrobot_msgs:msg/CloudChassisStatus.idl
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


class Metaclass_CloudChassisStatus(type):
    """Metaclass of message 'CloudChassisStatus'."""

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
                'ymrobot_msgs.msg.CloudChassisStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cloud_chassis_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cloud_chassis_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cloud_chassis_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cloud_chassis_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cloud_chassis_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CloudChassisStatus(metaclass=Metaclass_CloudChassisStatus):
    """Message class 'CloudChassisStatus'."""

    __slots__ = [
        '_charge_state',
        '_soft_estop_state',
        '_hard_estop_state',
        '_estop_state',
        '_power_percent',
        '_x',
        '_y',
        '_yaw',
        '_current_floor',
        '_error_code',
        '_move_target',
        '_move_status',
        '_running_status',
        '_target_floor',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'charge_state': 'boolean',
        'soft_estop_state': 'boolean',
        'hard_estop_state': 'boolean',
        'estop_state': 'boolean',
        'power_percent': 'uint8',
        'x': 'double',
        'y': 'double',
        'yaw': 'double',
        'current_floor': 'uint8',
        'error_code': 'uint8',
        'move_target': 'string',
        'move_status': 'string',
        'running_status': 'string',
        'target_floor': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.charge_state = kwargs.get('charge_state', bool())
        self.soft_estop_state = kwargs.get('soft_estop_state', bool())
        self.hard_estop_state = kwargs.get('hard_estop_state', bool())
        self.estop_state = kwargs.get('estop_state', bool())
        self.power_percent = kwargs.get('power_percent', int())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.yaw = kwargs.get('yaw', float())
        self.current_floor = kwargs.get('current_floor', int())
        self.error_code = kwargs.get('error_code', int())
        self.move_target = kwargs.get('move_target', str())
        self.move_status = kwargs.get('move_status', str())
        self.running_status = kwargs.get('running_status', str())
        self.target_floor = kwargs.get('target_floor', str())

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
        if self.charge_state != other.charge_state:
            return False
        if self.soft_estop_state != other.soft_estop_state:
            return False
        if self.hard_estop_state != other.hard_estop_state:
            return False
        if self.estop_state != other.estop_state:
            return False
        if self.power_percent != other.power_percent:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.yaw != other.yaw:
            return False
        if self.current_floor != other.current_floor:
            return False
        if self.error_code != other.error_code:
            return False
        if self.move_target != other.move_target:
            return False
        if self.move_status != other.move_status:
            return False
        if self.running_status != other.running_status:
            return False
        if self.target_floor != other.target_floor:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def charge_state(self):
        """Message field 'charge_state'."""
        return self._charge_state

    @charge_state.setter
    def charge_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'charge_state' field must be of type 'bool'"
        self._charge_state = value

    @builtins.property
    def soft_estop_state(self):
        """Message field 'soft_estop_state'."""
        return self._soft_estop_state

    @soft_estop_state.setter
    def soft_estop_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'soft_estop_state' field must be of type 'bool'"
        self._soft_estop_state = value

    @builtins.property
    def hard_estop_state(self):
        """Message field 'hard_estop_state'."""
        return self._hard_estop_state

    @hard_estop_state.setter
    def hard_estop_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'hard_estop_state' field must be of type 'bool'"
        self._hard_estop_state = value

    @builtins.property
    def estop_state(self):
        """Message field 'estop_state'."""
        return self._estop_state

    @estop_state.setter
    def estop_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'estop_state' field must be of type 'bool'"
        self._estop_state = value

    @builtins.property
    def power_percent(self):
        """Message field 'power_percent'."""
        return self._power_percent

    @power_percent.setter
    def power_percent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'power_percent' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'power_percent' field must be an unsigned integer in [0, 255]"
        self._power_percent = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw = value

    @builtins.property
    def current_floor(self):
        """Message field 'current_floor'."""
        return self._current_floor

    @current_floor.setter
    def current_floor(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_floor' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_floor' field must be an unsigned integer in [0, 255]"
        self._current_floor = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error_code' field must be an unsigned integer in [0, 255]"
        self._error_code = value

    @builtins.property
    def move_target(self):
        """Message field 'move_target'."""
        return self._move_target

    @move_target.setter
    def move_target(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'move_target' field must be of type 'str'"
        self._move_target = value

    @builtins.property
    def move_status(self):
        """Message field 'move_status'."""
        return self._move_status

    @move_status.setter
    def move_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'move_status' field must be of type 'str'"
        self._move_status = value

    @builtins.property
    def running_status(self):
        """Message field 'running_status'."""
        return self._running_status

    @running_status.setter
    def running_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'running_status' field must be of type 'str'"
        self._running_status = value

    @builtins.property
    def target_floor(self):
        """Message field 'target_floor'."""
        return self._target_floor

    @target_floor.setter
    def target_floor(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'target_floor' field must be of type 'str'"
        self._target_floor = value
