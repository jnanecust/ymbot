# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ymrobot_msgs:msg/VoiceMessage.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VoiceMessage(type):
    """Metaclass of message 'VoiceMessage'."""

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
                'ymrobot_msgs.msg.VoiceMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__voice_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__voice_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__voice_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__voice_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__voice_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VoiceMessage(metaclass=Metaclass_VoiceMessage):
    """Message class 'VoiceMessage'."""

    __slots__ = [
        '_audio_task_type',
        '_fixed_audio_name',
        '_timbre',
        '_synthetic_audio_txt',
        '_synthetic_audio_title',
        '_delete_fixed_audio',
        '_play_online_audio',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'audio_task_type': 'uint8',
        'fixed_audio_name': 'string',
        'timbre': 'string',
        'synthetic_audio_txt': 'string',
        'synthetic_audio_title': 'string',
        'delete_fixed_audio': 'string',
        'play_online_audio': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.audio_task_type = kwargs.get('audio_task_type', int())
        self.fixed_audio_name = kwargs.get('fixed_audio_name', str())
        self.timbre = kwargs.get('timbre', str())
        self.synthetic_audio_txt = kwargs.get('synthetic_audio_txt', str())
        self.synthetic_audio_title = kwargs.get('synthetic_audio_title', str())
        self.delete_fixed_audio = kwargs.get('delete_fixed_audio', str())
        self.play_online_audio = kwargs.get('play_online_audio', str())

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
        if self.audio_task_type != other.audio_task_type:
            return False
        if self.fixed_audio_name != other.fixed_audio_name:
            return False
        if self.timbre != other.timbre:
            return False
        if self.synthetic_audio_txt != other.synthetic_audio_txt:
            return False
        if self.synthetic_audio_title != other.synthetic_audio_title:
            return False
        if self.delete_fixed_audio != other.delete_fixed_audio:
            return False
        if self.play_online_audio != other.play_online_audio:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def audio_task_type(self):
        """Message field 'audio_task_type'."""
        return self._audio_task_type

    @audio_task_type.setter
    def audio_task_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'audio_task_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'audio_task_type' field must be an unsigned integer in [0, 255]"
        self._audio_task_type = value

    @builtins.property
    def fixed_audio_name(self):
        """Message field 'fixed_audio_name'."""
        return self._fixed_audio_name

    @fixed_audio_name.setter
    def fixed_audio_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'fixed_audio_name' field must be of type 'str'"
        self._fixed_audio_name = value

    @builtins.property
    def timbre(self):
        """Message field 'timbre'."""
        return self._timbre

    @timbre.setter
    def timbre(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'timbre' field must be of type 'str'"
        self._timbre = value

    @builtins.property
    def synthetic_audio_txt(self):
        """Message field 'synthetic_audio_txt'."""
        return self._synthetic_audio_txt

    @synthetic_audio_txt.setter
    def synthetic_audio_txt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'synthetic_audio_txt' field must be of type 'str'"
        self._synthetic_audio_txt = value

    @builtins.property
    def synthetic_audio_title(self):
        """Message field 'synthetic_audio_title'."""
        return self._synthetic_audio_title

    @synthetic_audio_title.setter
    def synthetic_audio_title(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'synthetic_audio_title' field must be of type 'str'"
        self._synthetic_audio_title = value

    @builtins.property
    def delete_fixed_audio(self):
        """Message field 'delete_fixed_audio'."""
        return self._delete_fixed_audio

    @delete_fixed_audio.setter
    def delete_fixed_audio(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'delete_fixed_audio' field must be of type 'str'"
        self._delete_fixed_audio = value

    @builtins.property
    def play_online_audio(self):
        """Message field 'play_online_audio'."""
        return self._play_online_audio

    @play_online_audio.setter
    def play_online_audio(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'play_online_audio' field must be of type 'str'"
        self._play_online_audio = value
