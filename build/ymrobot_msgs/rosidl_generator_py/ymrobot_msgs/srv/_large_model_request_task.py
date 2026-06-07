# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ymrobot_msgs:srv/LargeModelRequestTask.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LargeModelRequestTask_Request(type):
    """Metaclass of message 'LargeModelRequestTask_Request'."""

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
                'ymrobot_msgs.srv.LargeModelRequestTask_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__large_model_request_task__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__large_model_request_task__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__large_model_request_task__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__large_model_request_task__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__large_model_request_task__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LargeModelRequestTask_Request(metaclass=Metaclass_LargeModelRequestTask_Request):
    """Message class 'LargeModelRequestTask_Request'."""

    __slots__ = [
        '_larget_mode_task_type',
        '_mark_point_name',
        '_mark_point_name_list',
        '_guidance_task_name',
        '_upper_climb_fixed_action',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'larget_mode_task_type': 'uint8',
        'mark_point_name': 'string',
        'mark_point_name_list': 'sequence<string>',
        'guidance_task_name': 'string',
        'upper_climb_fixed_action': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
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
        self.larget_mode_task_type = kwargs.get('larget_mode_task_type', int())
        self.mark_point_name = kwargs.get('mark_point_name', str())
        self.mark_point_name_list = kwargs.get('mark_point_name_list', [])
        self.guidance_task_name = kwargs.get('guidance_task_name', str())
        self.upper_climb_fixed_action = kwargs.get('upper_climb_fixed_action', int())

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
        if self.larget_mode_task_type != other.larget_mode_task_type:
            return False
        if self.mark_point_name != other.mark_point_name:
            return False
        if self.mark_point_name_list != other.mark_point_name_list:
            return False
        if self.guidance_task_name != other.guidance_task_name:
            return False
        if self.upper_climb_fixed_action != other.upper_climb_fixed_action:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def larget_mode_task_type(self):
        """Message field 'larget_mode_task_type'."""
        return self._larget_mode_task_type

    @larget_mode_task_type.setter
    def larget_mode_task_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'larget_mode_task_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'larget_mode_task_type' field must be an unsigned integer in [0, 255]"
        self._larget_mode_task_type = value

    @builtins.property
    def mark_point_name(self):
        """Message field 'mark_point_name'."""
        return self._mark_point_name

    @mark_point_name.setter
    def mark_point_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mark_point_name' field must be of type 'str'"
        self._mark_point_name = value

    @builtins.property
    def mark_point_name_list(self):
        """Message field 'mark_point_name_list'."""
        return self._mark_point_name_list

    @mark_point_name_list.setter
    def mark_point_name_list(self, value):
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
                "The 'mark_point_name_list' field must be a set or sequence and each value of type 'str'"
        self._mark_point_name_list = value

    @builtins.property
    def guidance_task_name(self):
        """Message field 'guidance_task_name'."""
        return self._guidance_task_name

    @guidance_task_name.setter
    def guidance_task_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'guidance_task_name' field must be of type 'str'"
        self._guidance_task_name = value

    @builtins.property
    def upper_climb_fixed_action(self):
        """Message field 'upper_climb_fixed_action'."""
        return self._upper_climb_fixed_action

    @upper_climb_fixed_action.setter
    def upper_climb_fixed_action(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'upper_climb_fixed_action' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'upper_climb_fixed_action' field must be an unsigned integer in [0, 255]"
        self._upper_climb_fixed_action = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LargeModelRequestTask_Response(type):
    """Metaclass of message 'LargeModelRequestTask_Response'."""

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
                'ymrobot_msgs.srv.LargeModelRequestTask_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__large_model_request_task__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__large_model_request_task__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__large_model_request_task__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__large_model_request_task__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__large_model_request_task__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LargeModelRequestTask_Response(metaclass=Metaclass_LargeModelRequestTask_Response):
    """Message class 'LargeModelRequestTask_Response'."""

    __slots__ = [
        '_success',
        '_error_code',
        '_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error_code': 'uint8',
        'message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.success = kwargs.get('success', bool())
        self.error_code = kwargs.get('error_code', int())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.error_code != other.error_code:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

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
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LargeModelRequestTask_Event(type):
    """Metaclass of message 'LargeModelRequestTask_Event'."""

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
                'ymrobot_msgs.srv.LargeModelRequestTask_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__large_model_request_task__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__large_model_request_task__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__large_model_request_task__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__large_model_request_task__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__large_model_request_task__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LargeModelRequestTask_Event(metaclass=Metaclass_LargeModelRequestTask_Event):
    """Message class 'LargeModelRequestTask_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<ymrobot_msgs/LargeModelRequestTask_Request, 1>',
        'response': 'sequence<ymrobot_msgs/LargeModelRequestTask_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ymrobot_msgs', 'srv'], 'LargeModelRequestTask_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ymrobot_msgs', 'srv'], 'LargeModelRequestTask_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from ymrobot_msgs.srv import LargeModelRequestTask_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, LargeModelRequestTask_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'LargeModelRequestTask_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from ymrobot_msgs.srv import LargeModelRequestTask_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, LargeModelRequestTask_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'LargeModelRequestTask_Response'"
        self._response = value


class Metaclass_LargeModelRequestTask(type):
    """Metaclass of service 'LargeModelRequestTask'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ymrobot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ymrobot_msgs.srv.LargeModelRequestTask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__large_model_request_task

            from ymrobot_msgs.srv import _large_model_request_task
            if _large_model_request_task.Metaclass_LargeModelRequestTask_Request._TYPE_SUPPORT is None:
                _large_model_request_task.Metaclass_LargeModelRequestTask_Request.__import_type_support__()
            if _large_model_request_task.Metaclass_LargeModelRequestTask_Response._TYPE_SUPPORT is None:
                _large_model_request_task.Metaclass_LargeModelRequestTask_Response.__import_type_support__()
            if _large_model_request_task.Metaclass_LargeModelRequestTask_Event._TYPE_SUPPORT is None:
                _large_model_request_task.Metaclass_LargeModelRequestTask_Event.__import_type_support__()


class LargeModelRequestTask(metaclass=Metaclass_LargeModelRequestTask):
    from ymrobot_msgs.srv._large_model_request_task import LargeModelRequestTask_Request as Request
    from ymrobot_msgs.srv._large_model_request_task import LargeModelRequestTask_Response as Response
    from ymrobot_msgs.srv._large_model_request_task import LargeModelRequestTask_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
