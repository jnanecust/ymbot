# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ymrobot_msgs:srv/UpLimb.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'place_joint_list'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UpLimb_Request(type):
    """Metaclass of message 'UpLimb_Request'."""

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
                'ymrobot_msgs.srv.UpLimb_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__up_limb__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__up_limb__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__up_limb__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__up_limb__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__up_limb__request

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


class UpLimb_Request(metaclass=Metaclass_UpLimb_Request):
    """Message class 'UpLimb_Request'."""

    __slots__ = [
        '_up_limb_task_type',
        '_position',
        '_place_joint_list',
        '_action_fixed',
        '_left_and_right_select',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'up_limb_task_type': 'uint8',
        'position': 'geometry_msgs/PoseStamped',
        'place_joint_list': 'sequence<double>',
        'action_fixed': 'uint8',
        'left_and_right_select': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.up_limb_task_type = kwargs.get('up_limb_task_type', int())
        from geometry_msgs.msg import PoseStamped
        self.position = kwargs.get('position', PoseStamped())
        self.place_joint_list = array.array('d', kwargs.get('place_joint_list', []))
        self.action_fixed = kwargs.get('action_fixed', int())
        self.left_and_right_select = kwargs.get('left_and_right_select', int())

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
        if self.up_limb_task_type != other.up_limb_task_type:
            return False
        if self.position != other.position:
            return False
        if self.place_joint_list != other.place_joint_list:
            return False
        if self.action_fixed != other.action_fixed:
            return False
        if self.left_and_right_select != other.left_and_right_select:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def up_limb_task_type(self):
        """Message field 'up_limb_task_type'."""
        return self._up_limb_task_type

    @up_limb_task_type.setter
    def up_limb_task_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'up_limb_task_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'up_limb_task_type' field must be an unsigned integer in [0, 255]"
        self._up_limb_task_type = value

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
    def place_joint_list(self):
        """Message field 'place_joint_list'."""
        return self._place_joint_list

    @place_joint_list.setter
    def place_joint_list(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'place_joint_list' array.array() must have the type code of 'd'"
                self._place_joint_list = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'place_joint_list' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._place_joint_list = array.array('d', value)

    @builtins.property
    def action_fixed(self):
        """Message field 'action_fixed'."""
        return self._action_fixed

    @action_fixed.setter
    def action_fixed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'action_fixed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'action_fixed' field must be an unsigned integer in [0, 255]"
        self._action_fixed = value

    @builtins.property
    def left_and_right_select(self):
        """Message field 'left_and_right_select'."""
        return self._left_and_right_select

    @left_and_right_select.setter
    def left_and_right_select(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'left_and_right_select' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'left_and_right_select' field must be an unsigned integer in [0, 255]"
        self._left_and_right_select = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_UpLimb_Response(type):
    """Metaclass of message 'UpLimb_Response'."""

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
                'ymrobot_msgs.srv.UpLimb_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__up_limb__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__up_limb__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__up_limb__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__up_limb__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__up_limb__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UpLimb_Response(metaclass=Metaclass_UpLimb_Response):
    """Message class 'UpLimb_Response'."""

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


class Metaclass_UpLimb_Event(type):
    """Metaclass of message 'UpLimb_Event'."""

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
                'ymrobot_msgs.srv.UpLimb_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__up_limb__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__up_limb__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__up_limb__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__up_limb__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__up_limb__event

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


class UpLimb_Event(metaclass=Metaclass_UpLimb_Event):
    """Message class 'UpLimb_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<ymrobot_msgs/UpLimb_Request, 1>',
        'response': 'sequence<ymrobot_msgs/UpLimb_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ymrobot_msgs', 'srv'], 'UpLimb_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ymrobot_msgs', 'srv'], 'UpLimb_Response'), 1),  # noqa: E501
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
            from ymrobot_msgs.srv import UpLimb_Request
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
                 all(isinstance(v, UpLimb_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'UpLimb_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from ymrobot_msgs.srv import UpLimb_Response
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
                 all(isinstance(v, UpLimb_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'UpLimb_Response'"
        self._response = value


class Metaclass_UpLimb(type):
    """Metaclass of service 'UpLimb'."""

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
                'ymrobot_msgs.srv.UpLimb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__up_limb

            from ymrobot_msgs.srv import _up_limb
            if _up_limb.Metaclass_UpLimb_Request._TYPE_SUPPORT is None:
                _up_limb.Metaclass_UpLimb_Request.__import_type_support__()
            if _up_limb.Metaclass_UpLimb_Response._TYPE_SUPPORT is None:
                _up_limb.Metaclass_UpLimb_Response.__import_type_support__()
            if _up_limb.Metaclass_UpLimb_Event._TYPE_SUPPORT is None:
                _up_limb.Metaclass_UpLimb_Event.__import_type_support__()


class UpLimb(metaclass=Metaclass_UpLimb):
    from ymrobot_msgs.srv._up_limb import UpLimb_Request as Request
    from ymrobot_msgs.srv._up_limb import UpLimb_Response as Response
    from ymrobot_msgs.srv._up_limb import UpLimb_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
