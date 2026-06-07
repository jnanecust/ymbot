# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ymrobot_msgs:msg/NavPoint.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavPoint(type):
    """Metaclass of message 'NavPoint'."""

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
                'ymrobot_msgs.msg.NavPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__nav_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__nav_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__nav_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__nav_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__nav_point

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavPoint(metaclass=Metaclass_NavPoint):
    """Message class 'NavPoint'."""

    __slots__ = [
        '_seq',
        '_position',
        '_nav_name',
        '_nav_map_name',
        '_map_index',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'seq': 'uint32',
        'position': 'geometry_msgs/PoseStamped',
        'nav_name': 'string',
        'nav_map_name': 'string',
        'map_index': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.seq = kwargs.get('seq', int())
        from geometry_msgs.msg import PoseStamped
        self.position = kwargs.get('position', PoseStamped())
        self.nav_name = kwargs.get('nav_name', str())
        self.nav_map_name = kwargs.get('nav_map_name', str())
        self.map_index = kwargs.get('map_index', int())

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
        if self.seq != other.seq:
            return False
        if self.position != other.position:
            return False
        if self.nav_name != other.nav_name:
            return False
        if self.nav_map_name != other.nav_map_name:
            return False
        if self.map_index != other.map_index:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def seq(self):
        """Message field 'seq'."""
        return self._seq

    @seq.setter
    def seq(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'seq' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'seq' field must be an unsigned integer in [0, 4294967295]"
        self._seq = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'position' field must be a sub message of type 'PoseStamped'"
        self._position = value

    @builtins.property
    def nav_name(self):
        """Message field 'nav_name'."""
        return self._nav_name

    @nav_name.setter
    def nav_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'nav_name' field must be of type 'str'"
        self._nav_name = value

    @builtins.property
    def nav_map_name(self):
        """Message field 'nav_map_name'."""
        return self._nav_map_name

    @nav_map_name.setter
    def nav_map_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'nav_map_name' field must be of type 'str'"
        self._nav_map_name = value

    @builtins.property
    def map_index(self):
        """Message field 'map_index'."""
        return self._map_index

    @map_index.setter
    def map_index(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'map_index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'map_index' field must be an unsigned integer in [0, 255]"
        self._map_index = value
