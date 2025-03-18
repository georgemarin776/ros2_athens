# generated from rosidl_generator_py/resource/_idl.py.em
# with input from first_interfaces:msg/FirstMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'temperatures'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FirstMessage(type):
    """Metaclass of message 'FirstMessage'."""

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
            module = import_type_support('first_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'first_interfaces.msg.FirstMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__first_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__first_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__first_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__first_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__first_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FirstMessage(metaclass=Metaclass_FirstMessage):
    """Message class 'FirstMessage'."""

    __slots__ = [
        '_temperatures',
        '_variance',
    ]

    _fields_and_field_types = {
        'temperatures': 'sequence<double, 10>',
        'variance': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('double'), 10),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.temperatures = array.array('d', kwargs.get('temperatures', []))
        self.variance = kwargs.get('variance', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.temperatures != other.temperatures:
            return False
        if self.variance != other.variance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def temperatures(self):
        """Message field 'temperatures'."""
        return self._temperatures

    @temperatures.setter
    def temperatures(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'temperatures' array.array() must have the type code of 'd'"
            assert len(value) <= 10, \
                "The 'temperatures' array.array() must have a size <= 10"
            self._temperatures = value
            return
        if __debug__:
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
                 len(value) <= 10 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'temperatures' field must be a set or sequence with length <= 10 and each value of type 'float'"
        self._temperatures = array.array('d', value)

    @property
    def variance(self):
        """Message field 'variance'."""
        return self._variance

    @variance.setter
    def variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'variance' field must be of type 'float'"
        self._variance = value
