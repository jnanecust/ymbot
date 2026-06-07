# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ymrobot_msgs:srv/CLoudNav.idl
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


class Metaclass_CLoudNav_Request(type):
    """Metaclass of message 'CLoudNav_Request'."""

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
                'ymrobot_msgs.srv.CLoudNav_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__c_loud_nav__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__c_loud_nav__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__c_loud_nav__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__c_loud_nav__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__c_loud_nav__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CLoudNav_Request(metaclass=Metaclass_CLoudNav_Request):
    """Message class 'CLoudNav_Request'."""

    __slots__ = [
        '_nav_mode',
        '_nav_target_name',
        '_nav_target_x',
        '_nav_target_y',
        '_nav_target_yaw',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'nav_mode': 'uint8',
        'nav_target_name': 'string',
        'nav_target_x': 'double',
        'nav_target_y': 'double',
        'nav_target_yaw': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'nav_target_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
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
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'nav_target_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
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
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'nav_target_yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._nav_target_yaw = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CLoudNav_Response(type):
    """Metaclass of message 'CLoudNav_Response'."""

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
                'ymrobot_msgs.srv.CLoudNav_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__c_loud_nav__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__c_loud_nav__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__c_loud_nav__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__c_loud_nav__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__c_loud_nav__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CLoudNav_Response(metaclass=Metaclass_CLoudNav_Response):
    """Message class 'CLoudNav_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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


class Metaclass_CLoudNav_Event(type):
    """Metaclass of message 'CLoudNav_Event'."""

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
                'ymrobot_msgs.srv.CLoudNav_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__c_loud_nav__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__c_loud_nav__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__c_loud_nav__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__c_loud_nav__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__c_loud_nav__event

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


class CLoudNav_Event(metaclass=Metaclass_CLoudNav_Event):
    """Message class 'CLoudNav_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<ymrobot_msgs/CLoudNav_Request, 1>',
        'response': 'sequence<ymrobot_msgs/CLoudNav_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ymrobot_msgs', 'srv'], 'CLoudNav_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ymrobot_msgs', 'srv'], 'CLoudNav_Response'), 1),  # noqa: E501
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
            from ymrobot_msgs.srv import CLoudNav_Request
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
                 all(isinstance(v, CLoudNav_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'CLoudNav_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from ymrobot_msgs.srv import CLoudNav_Response
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
                 all(isinstance(v, CLoudNav_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'CLoudNav_Response'"
        self._response = value


class Metaclass_CLoudNav(type):
    """Metaclass of service 'CLoudNav'."""

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
                'ymrobot_msgs.srv.CLoudNav')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__c_loud_nav

            from ymrobot_msgs.srv import _c_loud_nav
            if _c_loud_nav.Metaclass_CLoudNav_Request._TYPE_SUPPORT is None:
                _c_loud_nav.Metaclass_CLoudNav_Request.__import_type_support__()
            if _c_loud_nav.Metaclass_CLoudNav_Response._TYPE_SUPPORT is None:
                _c_loud_nav.Metaclass_CLoudNav_Response.__import_type_support__()
            if _c_loud_nav.Metaclass_CLoudNav_Event._TYPE_SUPPORT is None:
                _c_loud_nav.Metaclass_CLoudNav_Event.__import_type_support__()


class CLoudNav(metaclass=Metaclass_CLoudNav):
    from ymrobot_msgs.srv._c_loud_nav import CLoudNav_Request as Request
    from ymrobot_msgs.srv._c_loud_nav import CLoudNav_Response as Response
    from ymrobot_msgs.srv._c_loud_nav import CLoudNav_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
