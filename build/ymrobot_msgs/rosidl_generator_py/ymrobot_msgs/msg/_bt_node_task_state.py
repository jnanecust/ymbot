# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ymrobot_msgs:msg/BTNodeTaskState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BTNodeTaskState(type):
    """Metaclass of message 'BTNodeTaskState'."""

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
                'ymrobot_msgs.msg.BTNodeTaskState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bt_node_task_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bt_node_task_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bt_node_task_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bt_node_task_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bt_node_task_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BTNodeTaskState(metaclass=Metaclass_BTNodeTaskState):
    """Message class 'BTNodeTaskState'."""

    __slots__ = [
        '_task_id',
        '_task_type',
        '_node_name',
        '_node_task_state',
        '_node_task_error',
        '_node_task_error_message',
        '_node_action_content',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'task_id': 'string',
        'task_type': 'string',
        'node_name': 'string',
        'node_task_state': 'string',
        'node_task_error': 'string',
        'node_task_error_message': 'string',
        'node_action_content': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.task_id = kwargs.get('task_id', str())
        self.task_type = kwargs.get('task_type', str())
        self.node_name = kwargs.get('node_name', str())
        self.node_task_state = kwargs.get('node_task_state', str())
        self.node_task_error = kwargs.get('node_task_error', str())
        self.node_task_error_message = kwargs.get('node_task_error_message', str())
        self.node_action_content = kwargs.get('node_action_content', str())

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
        if self.task_id != other.task_id:
            return False
        if self.task_type != other.task_type:
            return False
        if self.node_name != other.node_name:
            return False
        if self.node_task_state != other.node_task_state:
            return False
        if self.node_task_error != other.node_task_error:
            return False
        if self.node_task_error_message != other.node_task_error_message:
            return False
        if self.node_action_content != other.node_action_content:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
                isinstance(value, str), \
                "The 'task_type' field must be of type 'str'"
        self._task_type = value

    @builtins.property
    def node_name(self):
        """Message field 'node_name'."""
        return self._node_name

    @node_name.setter
    def node_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'node_name' field must be of type 'str'"
        self._node_name = value

    @builtins.property
    def node_task_state(self):
        """Message field 'node_task_state'."""
        return self._node_task_state

    @node_task_state.setter
    def node_task_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'node_task_state' field must be of type 'str'"
        self._node_task_state = value

    @builtins.property
    def node_task_error(self):
        """Message field 'node_task_error'."""
        return self._node_task_error

    @node_task_error.setter
    def node_task_error(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'node_task_error' field must be of type 'str'"
        self._node_task_error = value

    @builtins.property
    def node_task_error_message(self):
        """Message field 'node_task_error_message'."""
        return self._node_task_error_message

    @node_task_error_message.setter
    def node_task_error_message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'node_task_error_message' field must be of type 'str'"
        self._node_task_error_message = value

    @builtins.property
    def node_action_content(self):
        """Message field 'node_action_content'."""
        return self._node_action_content

    @node_action_content.setter
    def node_action_content(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'node_action_content' field must be of type 'str'"
        self._node_action_content = value
