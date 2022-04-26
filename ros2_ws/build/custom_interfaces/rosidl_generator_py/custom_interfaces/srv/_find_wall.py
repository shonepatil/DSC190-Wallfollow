# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces:srv/FindWall.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FindWall_Request(type):
    """Metaclass of message 'FindWall_Request'."""

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
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.FindWall_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__find_wall__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__find_wall__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__find_wall__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__find_wall__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__find_wall__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FindWall_Request(metaclass=Metaclass_FindWall_Request):
    """Message class 'FindWall_Request'."""

    __slots__ = [
        '_move',
    ]

    _fields_and_field_types = {
        'move': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.move = kwargs.get('move', str())

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
        if self.move != other.move:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def move(self):
        """Message field 'move'."""
        return self._move

    @move.setter
    def move(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'move' field must be of type 'str'"
        self._move = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_FindWall_Response(type):
    """Metaclass of message 'FindWall_Response'."""

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
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.FindWall_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__find_wall__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__find_wall__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__find_wall__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__find_wall__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__find_wall__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FindWall_Response(metaclass=Metaclass_FindWall_Response):
    """Message class 'FindWall_Response'."""

    __slots__ = [
        '_wallfound',
    ]

    _fields_and_field_types = {
        'wallfound': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.wallfound = kwargs.get('wallfound', bool())

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
        if self.wallfound != other.wallfound:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def wallfound(self):
        """Message field 'wallfound'."""
        return self._wallfound

    @wallfound.setter
    def wallfound(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wallfound' field must be of type 'bool'"
        self._wallfound = value


class Metaclass_FindWall(type):
    """Metaclass of service 'FindWall'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.FindWall')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__find_wall

            from custom_interfaces.srv import _find_wall
            if _find_wall.Metaclass_FindWall_Request._TYPE_SUPPORT is None:
                _find_wall.Metaclass_FindWall_Request.__import_type_support__()
            if _find_wall.Metaclass_FindWall_Response._TYPE_SUPPORT is None:
                _find_wall.Metaclass_FindWall_Response.__import_type_support__()


class FindWall(metaclass=Metaclass_FindWall):
    from custom_interfaces.srv._find_wall import FindWall_Request as Request
    from custom_interfaces.srv._find_wall import FindWall_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
