# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ymrobot_msgs:msg/MapManage.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MapManage(type):
    """Metaclass of message 'MapManage'."""

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
                'ymrobot_msgs.msg.MapManage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map_manage
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map_manage
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map_manage
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map_manage
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map_manage

            from ymrobot_msgs.msg import MapTaskCommand
            if MapTaskCommand.__class__._TYPE_SUPPORT is None:
                MapTaskCommand.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MapManage(metaclass=Metaclass_MapManage):
    """Message class 'MapManage'."""

    __slots__ = [
        '_map_task',
        '_pcd_file',
        '_pgm_file',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'map_task': 'ymrobot_msgs/MapTaskCommand',
        'pcd_file': 'string',
        'pgm_file': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ymrobot_msgs', 'msg'], 'MapTaskCommand'),  # noqa: E501
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
        from ymrobot_msgs.msg import MapTaskCommand
        self.map_task = kwargs.get('map_task', MapTaskCommand())
        self.pcd_file = kwargs.get('pcd_file', str())
        self.pgm_file = kwargs.get('pgm_file', str())

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
        if self.map_task != other.map_task:
            return False
        if self.pcd_file != other.pcd_file:
            return False
        if self.pgm_file != other.pgm_file:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def map_task(self):
        """Message field 'map_task'."""
        return self._map_task

    @map_task.setter
    def map_task(self, value):
        if self._check_fields:
            from ymrobot_msgs.msg import MapTaskCommand
            assert \
                isinstance(value, MapTaskCommand), \
                "The 'map_task' field must be a sub message of type 'MapTaskCommand'"
        self._map_task = value

    @builtins.property
    def pcd_file(self):
        """Message field 'pcd_file'."""
        return self._pcd_file

    @pcd_file.setter
    def pcd_file(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'pcd_file' field must be of type 'str'"
        self._pcd_file = value

    @builtins.property
    def pgm_file(self):
        """Message field 'pgm_file'."""
        return self._pgm_file

    @pgm_file.setter
    def pgm_file(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'pgm_file' field must be of type 'str'"
        self._pgm_file = value
