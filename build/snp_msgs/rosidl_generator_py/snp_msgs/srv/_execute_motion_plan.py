# generated from rosidl_generator_py/resource/_idl.py.em
# with input from snp_msgs:srv/ExecuteMotionPlan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExecuteMotionPlan_Request(type):
    """Metaclass of message 'ExecuteMotionPlan_Request'."""

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
                'snp_msgs.srv.ExecuteMotionPlan_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__execute_motion_plan__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__execute_motion_plan__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__execute_motion_plan__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__execute_motion_plan__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__execute_motion_plan__request

            from trajectory_msgs.msg import JointTrajectory
            if JointTrajectory.__class__._TYPE_SUPPORT is None:
                JointTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteMotionPlan_Request(metaclass=Metaclass_ExecuteMotionPlan_Request):
    """Message class 'ExecuteMotionPlan_Request'."""

    __slots__ = [
        '_motion_plan',
        '_use_tool',
    ]

    _fields_and_field_types = {
        'motion_plan': 'trajectory_msgs/JointTrajectory',
        'use_tool': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectory'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from trajectory_msgs.msg import JointTrajectory
        self.motion_plan = kwargs.get('motion_plan', JointTrajectory())
        self.use_tool = kwargs.get('use_tool', bool())

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
        if self.motion_plan != other.motion_plan:
            return False
        if self.use_tool != other.use_tool:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def motion_plan(self):
        """Message field 'motion_plan'."""
        return self._motion_plan

    @motion_plan.setter
    def motion_plan(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectory
            assert \
                isinstance(value, JointTrajectory), \
                "The 'motion_plan' field must be a sub message of type 'JointTrajectory'"
        self._motion_plan = value

    @property
    def use_tool(self):
        """Message field 'use_tool'."""
        return self._use_tool

    @use_tool.setter
    def use_tool(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_tool' field must be of type 'bool'"
        self._use_tool = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteMotionPlan_Response(type):
    """Metaclass of message 'ExecuteMotionPlan_Response'."""

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
                'snp_msgs.srv.ExecuteMotionPlan_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__execute_motion_plan__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__execute_motion_plan__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__execute_motion_plan__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__execute_motion_plan__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__execute_motion_plan__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteMotionPlan_Response(metaclass=Metaclass_ExecuteMotionPlan_Response):
    """Message class 'ExecuteMotionPlan_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
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


class Metaclass_ExecuteMotionPlan(type):
    """Metaclass of service 'ExecuteMotionPlan'."""

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
                'snp_msgs.srv.ExecuteMotionPlan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__execute_motion_plan

            from snp_msgs.srv import _execute_motion_plan
            if _execute_motion_plan.Metaclass_ExecuteMotionPlan_Request._TYPE_SUPPORT is None:
                _execute_motion_plan.Metaclass_ExecuteMotionPlan_Request.__import_type_support__()
            if _execute_motion_plan.Metaclass_ExecuteMotionPlan_Response._TYPE_SUPPORT is None:
                _execute_motion_plan.Metaclass_ExecuteMotionPlan_Response.__import_type_support__()


class ExecuteMotionPlan(metaclass=Metaclass_ExecuteMotionPlan):
    from snp_msgs.srv._execute_motion_plan import ExecuteMotionPlan_Request as Request
    from snp_msgs.srv._execute_motion_plan import ExecuteMotionPlan_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
