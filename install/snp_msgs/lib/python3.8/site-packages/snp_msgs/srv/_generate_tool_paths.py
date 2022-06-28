# generated from rosidl_generator_py/resource/_idl.py.em
# with input from snp_msgs:srv/GenerateToolPaths.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GenerateToolPaths_Request(type):
    """Metaclass of message 'GenerateToolPaths_Request'."""

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
            module = import_type_support('snp_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'snp_msgs.srv.GenerateToolPaths_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_tool_paths__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_tool_paths__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_tool_paths__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_tool_paths__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_tool_paths__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GenerateToolPaths_Request(metaclass=Metaclass_GenerateToolPaths_Request):
    """Message class 'GenerateToolPaths_Request'."""

    __slots__ = [
        '_mesh_filename',
        '_line_spacing',
        '_min_hole_size',
        '_min_segment_length',
        '_point_spacing',
        '_search_radius',
    ]

    _fields_and_field_types = {
        'mesh_filename': 'string',
        'line_spacing': 'double',
        'min_hole_size': 'double',
        'min_segment_length': 'double',
        'point_spacing': 'double',
        'search_radius': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mesh_filename = kwargs.get('mesh_filename', str())
        self.line_spacing = kwargs.get('line_spacing', float())
        self.min_hole_size = kwargs.get('min_hole_size', float())
        self.min_segment_length = kwargs.get('min_segment_length', float())
        self.point_spacing = kwargs.get('point_spacing', float())
        self.search_radius = kwargs.get('search_radius', float())

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
        if self.mesh_filename != other.mesh_filename:
            return False
        if self.line_spacing != other.line_spacing:
            return False
        if self.min_hole_size != other.min_hole_size:
            return False
        if self.min_segment_length != other.min_segment_length:
            return False
        if self.point_spacing != other.point_spacing:
            return False
        if self.search_radius != other.search_radius:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def mesh_filename(self):
        """Message field 'mesh_filename'."""
        return self._mesh_filename

    @mesh_filename.setter
    def mesh_filename(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mesh_filename' field must be of type 'str'"
        self._mesh_filename = value

    @property
    def line_spacing(self):
        """Message field 'line_spacing'."""
        return self._line_spacing

    @line_spacing.setter
    def line_spacing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'line_spacing' field must be of type 'float'"
        self._line_spacing = value

    @property
    def min_hole_size(self):
        """Message field 'min_hole_size'."""
        return self._min_hole_size

    @min_hole_size.setter
    def min_hole_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_hole_size' field must be of type 'float'"
        self._min_hole_size = value

    @property
    def min_segment_length(self):
        """Message field 'min_segment_length'."""
        return self._min_segment_length

    @min_segment_length.setter
    def min_segment_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_segment_length' field must be of type 'float'"
        self._min_segment_length = value

    @property
    def point_spacing(self):
        """Message field 'point_spacing'."""
        return self._point_spacing

    @point_spacing.setter
    def point_spacing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'point_spacing' field must be of type 'float'"
        self._point_spacing = value

    @property
    def search_radius(self):
        """Message field 'search_radius'."""
        return self._search_radius

    @search_radius.setter
    def search_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'search_radius' field must be of type 'float'"
        self._search_radius = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GenerateToolPaths_Response(type):
    """Metaclass of message 'GenerateToolPaths_Response'."""

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
            module = import_type_support('snp_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'snp_msgs.srv.GenerateToolPaths_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_tool_paths__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_tool_paths__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_tool_paths__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_tool_paths__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_tool_paths__response

            from snp_msgs.msg import ToolPaths
            if ToolPaths.__class__._TYPE_SUPPORT is None:
                ToolPaths.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GenerateToolPaths_Response(metaclass=Metaclass_GenerateToolPaths_Response):
    """Message class 'GenerateToolPaths_Response'."""

    __slots__ = [
        '_success',
        '_tool_paths',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'tool_paths': 'snp_msgs/ToolPaths',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['snp_msgs', 'msg'], 'ToolPaths'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        from snp_msgs.msg import ToolPaths
        self.tool_paths = kwargs.get('tool_paths', ToolPaths())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.tool_paths != other.tool_paths:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def tool_paths(self):
        """Message field 'tool_paths'."""
        return self._tool_paths

    @tool_paths.setter
    def tool_paths(self, value):
        if __debug__:
            from snp_msgs.msg import ToolPaths
            assert \
                isinstance(value, ToolPaths), \
                "The 'tool_paths' field must be a sub message of type 'ToolPaths'"
        self._tool_paths = value

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_GenerateToolPaths(type):
    """Metaclass of service 'GenerateToolPaths'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('snp_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'snp_msgs.srv.GenerateToolPaths')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__generate_tool_paths

            from snp_msgs.srv import _generate_tool_paths
            if _generate_tool_paths.Metaclass_GenerateToolPaths_Request._TYPE_SUPPORT is None:
                _generate_tool_paths.Metaclass_GenerateToolPaths_Request.__import_type_support__()
            if _generate_tool_paths.Metaclass_GenerateToolPaths_Response._TYPE_SUPPORT is None:
                _generate_tool_paths.Metaclass_GenerateToolPaths_Response.__import_type_support__()


class GenerateToolPaths(metaclass=Metaclass_GenerateToolPaths):
    from snp_msgs.srv._generate_tool_paths import GenerateToolPaths_Request as Request
    from snp_msgs.srv._generate_tool_paths import GenerateToolPaths_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
