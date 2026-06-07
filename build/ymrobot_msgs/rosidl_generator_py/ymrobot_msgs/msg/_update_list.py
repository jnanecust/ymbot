# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ymrobot_msgs:msg/UpdateList.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UpdateList(type):
    """Metaclass of message 'UpdateList'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'POSE_MANAGER': 0,
        'UP_CLIMB_ACTION': 1,
        'EMOJI': 2,
        'AUDIO': 3,
        'ALL_ACTION': 4,
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
                'ymrobot_msgs.msg.UpdateList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__update_list
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__update_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__update_list
            cls._TYPE_SUPPORT = module.type_support_msg__msg__update_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__update_list

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'POSE_MANAGER': cls.__constants['POSE_MANAGER'],
            'UP_CLIMB_ACTION': cls.__constants['UP_CLIMB_ACTION'],
            'EMOJI': cls.__constants['EMOJI'],
            'AUDIO': cls.__constants['AUDIO'],
            'ALL_ACTION': cls.__constants['ALL_ACTION'],
        }

    @property
    def POSE_MANAGER(self):
        """Message constant 'POSE_MANAGER'."""
        return Metaclass_UpdateList.__constants['POSE_MANAGER']

    @property
    def UP_CLIMB_ACTION(self):
        """Message constant 'UP_CLIMB_ACTION'."""
        return Metaclass_UpdateList.__constants['UP_CLIMB_ACTION']

    @property
    def EMOJI(self):
        """Message constant 'EMOJI'."""
        return Metaclass_UpdateList.__constants['EMOJI']

    @property
    def AUDIO(self):
        """Message constant 'AUDIO'."""
        return Metaclass_UpdateList.__constants['AUDIO']

    @property
    def ALL_ACTION(self):
        """Message constant 'ALL_ACTION'."""
        return Metaclass_UpdateList.__constants['ALL_ACTION']


class UpdateList(metaclass=Metaclass_UpdateList):
    """
    Message class 'UpdateList'.

    Constants:
      POSE_MANAGER
      UP_CLIMB_ACTION
      EMOJI
      AUDIO
      ALL_ACTION
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
