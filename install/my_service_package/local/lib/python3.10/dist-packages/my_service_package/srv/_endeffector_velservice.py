# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_service_package:srv/EndeffectorVelservice.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EndeffectorVelservice_Request(type):
    """Metaclass of message 'EndeffectorVelservice_Request'."""

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
            module = import_type_support('my_service_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_service_package.srv.EndeffectorVelservice_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__endeffector_velservice__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__endeffector_velservice__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__endeffector_velservice__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__endeffector_velservice__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__endeffector_velservice__request

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EndeffectorVelservice_Request(metaclass=Metaclass_EndeffectorVelservice_Request):
    """Message class 'EndeffectorVelservice_Request'."""

    __slots__ = [
        '_endeffector_velocity',
    ]

    _fields_and_field_types = {
        'endeffector_velocity': 'geometry_msgs/Twist',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Twist
        self.endeffector_velocity = kwargs.get('endeffector_velocity', Twist())

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
        if self.endeffector_velocity != other.endeffector_velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def endeffector_velocity(self):
        """Message field 'endeffector_velocity'."""
        return self._endeffector_velocity

    @endeffector_velocity.setter
    def endeffector_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'endeffector_velocity' field must be a sub message of type 'Twist'"
        self._endeffector_velocity = value


# Import statements for member types

# Member 'jointvel'
import array  # noqa: E402, I100

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_EndeffectorVelservice_Response(type):
    """Metaclass of message 'EndeffectorVelservice_Response'."""

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
            module = import_type_support('my_service_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_service_package.srv.EndeffectorVelservice_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__endeffector_velservice__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__endeffector_velservice__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__endeffector_velservice__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__endeffector_velservice__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__endeffector_velservice__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EndeffectorVelservice_Response(metaclass=Metaclass_EndeffectorVelservice_Response):
    """Message class 'EndeffectorVelservice_Response'."""

    __slots__ = [
        '_jointvel',
    ]

    _fields_and_field_types = {
        'jointvel': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.jointvel = array.array('d', kwargs.get('jointvel', []))

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
        if self.jointvel != other.jointvel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def jointvel(self):
        """Message field 'jointvel'."""
        return self._jointvel

    @jointvel.setter
    def jointvel(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'jointvel' array.array() must have the type code of 'd'"
            self._jointvel = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'jointvel' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._jointvel = array.array('d', value)


class Metaclass_EndeffectorVelservice(type):
    """Metaclass of service 'EndeffectorVelservice'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_service_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_service_package.srv.EndeffectorVelservice')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__endeffector_velservice

            from my_service_package.srv import _endeffector_velservice
            if _endeffector_velservice.Metaclass_EndeffectorVelservice_Request._TYPE_SUPPORT is None:
                _endeffector_velservice.Metaclass_EndeffectorVelservice_Request.__import_type_support__()
            if _endeffector_velservice.Metaclass_EndeffectorVelservice_Response._TYPE_SUPPORT is None:
                _endeffector_velservice.Metaclass_EndeffectorVelservice_Response.__import_type_support__()


class EndeffectorVelservice(metaclass=Metaclass_EndeffectorVelservice):
    from my_service_package.srv._endeffector_velservice import EndeffectorVelservice_Request as Request
    from my_service_package.srv._endeffector_velservice import EndeffectorVelservice_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
