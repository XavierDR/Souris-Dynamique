// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.hpp"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject *arg1 )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        CHECK_OBJECT( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, arg1 );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *args[] = { arg1 };
            PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1 };

        return callPythonFunction(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject *arg1, PyObject *arg2 )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        CHECK_OBJECT( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, arg1, arg2 );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *args[] = { arg1, arg2 };
            PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2 };

        return callPythonFunction(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3 )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        CHECK_OBJECT( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, arg1, arg2, arg3 );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *args[] = { arg1, arg2, arg3 };
            PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3 };

        return callPythonFunction(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4 )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        CHECK_OBJECT( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, arg1, arg2, arg3, arg4 );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *args[] = { arg1, arg2, arg3, arg4 };
            PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4 };

        return callPythonFunction(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4, PyObject *arg5 )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4, arg5 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        CHECK_OBJECT( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4, arg5
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, arg1, arg2, arg3, arg4, arg5 );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *args[] = { arg1, arg2, arg3, arg4, arg5 };
            PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5 };

        return callPythonFunction(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4, arg5 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4, PyObject *arg5, PyObject *arg6 )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4, arg5, arg6 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        CHECK_OBJECT( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4, arg5, arg6
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 6 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 6 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, arg1, arg2, arg3, arg4, arg5, arg6 );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6 };
            PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6 };

        return callPythonFunction(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS7( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4, PyObject *arg5, PyObject *arg6, PyObject *arg7 )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        CHECK_OBJECT( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4, arg5, arg6, arg7
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 7 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (7 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 7 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, arg1, arg2, arg3, arg4, arg5, arg6, arg7 );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (7 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7 };
            PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7 };

        return callPythonFunction(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS8( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4, PyObject *arg5, PyObject *arg6, PyObject *arg7, PyObject *arg8 )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        CHECK_OBJECT( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 8 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (8 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 8 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (8 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 };
            PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 };

        return callPythonFunction(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS9( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4, PyObject *arg5, PyObject *arg6, PyObject *arg7, PyObject *arg8, PyObject *arg9 )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        CHECK_OBJECT( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 9 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (9 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 9 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9 );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (9 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9 };
            PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9 };

        return callPythonFunction(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS10( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4, PyObject *arg5, PyObject *arg6, PyObject *arg7, PyObject *arg8, PyObject *arg9, PyObject *arg10 )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        CHECK_OBJECT( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 10 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (10 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 10 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10 );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (10 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10 };
            PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10 };

        return callPythonFunction(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS20( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4, PyObject *arg5, PyObject *arg6, PyObject *arg7, PyObject *arg8, PyObject *arg9, PyObject *arg10, PyObject *arg11, PyObject *arg12, PyObject *arg13, PyObject *arg14, PyObject *arg15, PyObject *arg16, PyObject *arg17, PyObject *arg18, PyObject *arg19, PyObject *arg20 )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        CHECK_OBJECT( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 20 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (20 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 20 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20 );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (20 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20 };
            PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20 };

        return callPythonFunction(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS52( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4, PyObject *arg5, PyObject *arg6, PyObject *arg7, PyObject *arg8, PyObject *arg9, PyObject *arg10, PyObject *arg11, PyObject *arg12, PyObject *arg13, PyObject *arg14, PyObject *arg15, PyObject *arg16, PyObject *arg17, PyObject *arg18, PyObject *arg19, PyObject *arg20, PyObject *arg21, PyObject *arg22, PyObject *arg23, PyObject *arg24, PyObject *arg25, PyObject *arg26, PyObject *arg27, PyObject *arg28, PyObject *arg29, PyObject *arg30, PyObject *arg31, PyObject *arg32, PyObject *arg33, PyObject *arg34, PyObject *arg35, PyObject *arg36, PyObject *arg37, PyObject *arg38, PyObject *arg39, PyObject *arg40, PyObject *arg41, PyObject *arg42, PyObject *arg43, PyObject *arg44, PyObject *arg45, PyObject *arg46, PyObject *arg47, PyObject *arg48, PyObject *arg49, PyObject *arg50, PyObject *arg51, PyObject *arg52 )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        CHECK_OBJECT( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 52 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (52 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 52 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52 );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (52 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52 };
            PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52 };

        return callPythonFunction(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}
// Code tegister embedded modules if any.
#if 1 == 1

#include "nuitka/unfreezing.hpp"

// Table for lookup to find "frozen" modules or DLLs, i.e. the ones included in
// or along this binary.
MOD_INIT_DECL( CurrentMouse );
MOD_INIT_DECL( OpenSSL );
MOD_INIT_DECL( OpenSSL$SSL );
MOD_INIT_DECL( OpenSSL$_util );
MOD_INIT_DECL( OpenSSL$crypto );
MOD_INIT_DECL( OpenSSL$rand );
MOD_INIT_DECL( OpenSSL$version );
MOD_INIT_DECL( cryptography );
MOD_INIT_DECL( cryptography$__about__ );
MOD_INIT_DECL( cryptography$exceptions );
MOD_INIT_DECL( cryptography$hazmat );
MOD_INIT_DECL( cryptography$hazmat$bindings );
MOD_INIT_DECL( cryptography$hazmat$bindings$openssl );
MOD_INIT_DECL( cryptography$hazmat$bindings$openssl$_conditional );
MOD_INIT_DECL( cryptography$hazmat$bindings$openssl$binding );
MOD_INIT_DECL( gspread );
MOD_INIT_DECL( gspread$client );
MOD_INIT_DECL( gspread$exceptions );
MOD_INIT_DECL( gspread$httpsession );
MOD_INIT_DECL( gspread$models );
MOD_INIT_DECL( gspread$ns );
MOD_INIT_DECL( gspread$urls );
MOD_INIT_DECL( gspread$utils );
MOD_INIT_DECL( httplib2 );
MOD_INIT_DECL( httplib2$iri2uri );
MOD_INIT_DECL( oauth2client );
MOD_INIT_DECL( oauth2client$_helpers );
MOD_INIT_DECL( oauth2client$_openssl_crypt );
MOD_INIT_DECL( oauth2client$_pycrypto_crypt );
MOD_INIT_DECL( oauth2client$appengine );
MOD_INIT_DECL( oauth2client$client );
MOD_INIT_DECL( oauth2client$clientsecrets );
MOD_INIT_DECL( oauth2client$crypt );
MOD_INIT_DECL( oauth2client$gce );
MOD_INIT_DECL( oauth2client$service_account );
MOD_INIT_DECL( oauth2client$util );
MOD_INIT_DECL( oauth2client$xsrfutil );
MOD_INIT_DECL( pyasn1 );
MOD_INIT_DECL( pyasn1$codec );
MOD_INIT_DECL( pyasn1$codec$ber );
MOD_INIT_DECL( pyasn1$codec$ber$decoder );
MOD_INIT_DECL( pyasn1$codec$ber$encoder );
MOD_INIT_DECL( pyasn1$codec$ber$eoo );
MOD_INIT_DECL( pyasn1$codec$cer );
MOD_INIT_DECL( pyasn1$codec$cer$decoder );
MOD_INIT_DECL( pyasn1$codec$cer$encoder );
MOD_INIT_DECL( pyasn1$codec$der );
MOD_INIT_DECL( pyasn1$codec$der$decoder );
MOD_INIT_DECL( pyasn1$codec$der$encoder );
MOD_INIT_DECL( pyasn1$compat );
MOD_INIT_DECL( pyasn1$compat$octets );
MOD_INIT_DECL( pyasn1$debug );
MOD_INIT_DECL( pyasn1$error );
MOD_INIT_DECL( pyasn1$type );
MOD_INIT_DECL( pyasn1$type$base );
MOD_INIT_DECL( pyasn1$type$char );
MOD_INIT_DECL( pyasn1$type$constraint );
MOD_INIT_DECL( pyasn1$type$error );
MOD_INIT_DECL( pyasn1$type$namedtype );
MOD_INIT_DECL( pyasn1$type$namedval );
MOD_INIT_DECL( pyasn1$type$tag );
MOD_INIT_DECL( pyasn1$type$tagmap );
MOD_INIT_DECL( pyasn1$type$univ );
MOD_INIT_DECL( pyasn1$type$useful );
MOD_INIT_DECL( pyasn1_modules );
MOD_INIT_DECL( pyasn1_modules$rfc2251 );
MOD_INIT_DECL( pyasn1_modules$rfc2459 );
MOD_INIT_DECL( pyasn1_modules$rfc5208 );
MOD_INIT_DECL( requests );
MOD_INIT_DECL( requests$adapters );
MOD_INIT_DECL( requests$api );
MOD_INIT_DECL( requests$auth );
MOD_INIT_DECL( requests$certs );
MOD_INIT_DECL( requests$compat );
MOD_INIT_DECL( requests$cookies );
MOD_INIT_DECL( requests$exceptions );
MOD_INIT_DECL( requests$hooks );
MOD_INIT_DECL( requests$models );
MOD_INIT_DECL( requests$packages );
MOD_INIT_DECL( requests$packages$chardet );
MOD_INIT_DECL( requests$packages$chardet$big5freq );
MOD_INIT_DECL( requests$packages$chardet$big5prober );
MOD_INIT_DECL( requests$packages$chardet$chardistribution );
MOD_INIT_DECL( requests$packages$chardet$charsetgroupprober );
MOD_INIT_DECL( requests$packages$chardet$charsetprober );
MOD_INIT_DECL( requests$packages$chardet$codingstatemachine );
MOD_INIT_DECL( requests$packages$chardet$compat );
MOD_INIT_DECL( requests$packages$chardet$constants );
MOD_INIT_DECL( requests$packages$chardet$cp949prober );
MOD_INIT_DECL( requests$packages$chardet$escprober );
MOD_INIT_DECL( requests$packages$chardet$escsm );
MOD_INIT_DECL( requests$packages$chardet$eucjpprober );
MOD_INIT_DECL( requests$packages$chardet$euckrfreq );
MOD_INIT_DECL( requests$packages$chardet$euckrprober );
MOD_INIT_DECL( requests$packages$chardet$euctwfreq );
MOD_INIT_DECL( requests$packages$chardet$euctwprober );
MOD_INIT_DECL( requests$packages$chardet$gb2312freq );
MOD_INIT_DECL( requests$packages$chardet$gb2312prober );
MOD_INIT_DECL( requests$packages$chardet$hebrewprober );
MOD_INIT_DECL( requests$packages$chardet$jisfreq );
MOD_INIT_DECL( requests$packages$chardet$jpcntx );
MOD_INIT_DECL( requests$packages$chardet$langbulgarianmodel );
MOD_INIT_DECL( requests$packages$chardet$langcyrillicmodel );
MOD_INIT_DECL( requests$packages$chardet$langgreekmodel );
MOD_INIT_DECL( requests$packages$chardet$langhebrewmodel );
MOD_INIT_DECL( requests$packages$chardet$langhungarianmodel );
MOD_INIT_DECL( requests$packages$chardet$langthaimodel );
MOD_INIT_DECL( requests$packages$chardet$latin1prober );
MOD_INIT_DECL( requests$packages$chardet$mbcharsetprober );
MOD_INIT_DECL( requests$packages$chardet$mbcsgroupprober );
MOD_INIT_DECL( requests$packages$chardet$mbcssm );
MOD_INIT_DECL( requests$packages$chardet$sbcharsetprober );
MOD_INIT_DECL( requests$packages$chardet$sbcsgroupprober );
MOD_INIT_DECL( requests$packages$chardet$sjisprober );
MOD_INIT_DECL( requests$packages$chardet$universaldetector );
MOD_INIT_DECL( requests$packages$chardet$utf8prober );
MOD_INIT_DECL( requests$packages$urllib3 );
MOD_INIT_DECL( requests$packages$urllib3$_collections );
MOD_INIT_DECL( requests$packages$urllib3$connection );
MOD_INIT_DECL( requests$packages$urllib3$connectionpool );
MOD_INIT_DECL( requests$packages$urllib3$contrib );
MOD_INIT_DECL( requests$packages$urllib3$contrib$pyopenssl );
MOD_INIT_DECL( requests$packages$urllib3$exceptions );
MOD_INIT_DECL( requests$packages$urllib3$fields );
MOD_INIT_DECL( requests$packages$urllib3$filepost );
MOD_INIT_DECL( requests$packages$urllib3$packages );
MOD_INIT_DECL( requests$packages$urllib3$packages$ordered_dict );
MOD_INIT_DECL( requests$packages$urllib3$packages$six );
MOD_INIT_DECL( requests$packages$urllib3$packages$ssl_match_hostname );
MOD_INIT_DECL( requests$packages$urllib3$packages$ssl_match_hostname$_implementation );
MOD_INIT_DECL( requests$packages$urllib3$poolmanager );
MOD_INIT_DECL( requests$packages$urllib3$request );
MOD_INIT_DECL( requests$packages$urllib3$response );
MOD_INIT_DECL( requests$packages$urllib3$util );
MOD_INIT_DECL( requests$packages$urllib3$util$connection );
MOD_INIT_DECL( requests$packages$urllib3$util$request );
MOD_INIT_DECL( requests$packages$urllib3$util$response );
MOD_INIT_DECL( requests$packages$urllib3$util$retry );
MOD_INIT_DECL( requests$packages$urllib3$util$ssl_ );
MOD_INIT_DECL( requests$packages$urllib3$util$timeout );
MOD_INIT_DECL( requests$packages$urllib3$util$url );
MOD_INIT_DECL( requests$sessions );
MOD_INIT_DECL( requests$status_codes );
MOD_INIT_DECL( requests$structures );
MOD_INIT_DECL( requests$utils );
MOD_INIT_DECL( rsa );
MOD_INIT_DECL( rsa$_compat );
MOD_INIT_DECL( rsa$asn1 );
MOD_INIT_DECL( rsa$common );
MOD_INIT_DECL( rsa$core );
MOD_INIT_DECL( rsa$key );
MOD_INIT_DECL( rsa$parallel );
MOD_INIT_DECL( rsa$pem );
MOD_INIT_DECL( rsa$pkcs1 );
MOD_INIT_DECL( rsa$prime );
MOD_INIT_DECL( rsa$randnum );
MOD_INIT_DECL( rsa$transform );
MOD_INIT_DECL( rsa$varblock );
MOD_INIT_DECL( simplejson );
MOD_INIT_DECL( simplejson$compat );
MOD_INIT_DECL( simplejson$decoder );
MOD_INIT_DECL( simplejson$encoder );
MOD_INIT_DECL( simplejson$ordered_dict );
MOD_INIT_DECL( simplejson$scanner );
MOD_INIT_DECL( six );
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { (char *)"CurrentMouse", MOD_INIT_NAME( CurrentMouse ), NUITKA_COMPILED_MODULE },
    { (char *)"OpenSSL", MOD_INIT_NAME( OpenSSL ), NUITKA_COMPILED_PACKAGE },
    { (char *)"OpenSSL.SSL", MOD_INIT_NAME( OpenSSL$SSL ), NUITKA_COMPILED_MODULE },
    { (char *)"OpenSSL._util", MOD_INIT_NAME( OpenSSL$_util ), NUITKA_COMPILED_MODULE },
    { (char *)"OpenSSL.crypto", MOD_INIT_NAME( OpenSSL$crypto ), NUITKA_COMPILED_MODULE },
    { (char *)"OpenSSL.rand", MOD_INIT_NAME( OpenSSL$rand ), NUITKA_COMPILED_MODULE },
    { (char *)"OpenSSL.version", MOD_INIT_NAME( OpenSSL$version ), NUITKA_COMPILED_MODULE },
    { (char *)"cryptography", MOD_INIT_NAME( cryptography ), NUITKA_COMPILED_PACKAGE },
    { (char *)"cryptography.__about__", MOD_INIT_NAME( cryptography$__about__ ), NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.exceptions", MOD_INIT_NAME( cryptography$exceptions ), NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat", MOD_INIT_NAME( cryptography$hazmat ), NUITKA_COMPILED_PACKAGE },
    { (char *)"cryptography.hazmat.bindings", MOD_INIT_NAME( cryptography$hazmat$bindings ), NUITKA_COMPILED_PACKAGE },
    { (char *)"cryptography.hazmat.bindings.openssl", MOD_INIT_NAME( cryptography$hazmat$bindings$openssl ), NUITKA_COMPILED_PACKAGE },
    { (char *)"cryptography.hazmat.bindings.openssl._conditional", MOD_INIT_NAME( cryptography$hazmat$bindings$openssl$_conditional ), NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.bindings.openssl.binding", MOD_INIT_NAME( cryptography$hazmat$bindings$openssl$binding ), NUITKA_COMPILED_MODULE },
    { (char *)"gspread", MOD_INIT_NAME( gspread ), NUITKA_COMPILED_PACKAGE },
    { (char *)"gspread.client", MOD_INIT_NAME( gspread$client ), NUITKA_COMPILED_MODULE },
    { (char *)"gspread.exceptions", MOD_INIT_NAME( gspread$exceptions ), NUITKA_COMPILED_MODULE },
    { (char *)"gspread.httpsession", MOD_INIT_NAME( gspread$httpsession ), NUITKA_COMPILED_MODULE },
    { (char *)"gspread.models", MOD_INIT_NAME( gspread$models ), NUITKA_COMPILED_MODULE },
    { (char *)"gspread.ns", MOD_INIT_NAME( gspread$ns ), NUITKA_COMPILED_MODULE },
    { (char *)"gspread.urls", MOD_INIT_NAME( gspread$urls ), NUITKA_COMPILED_MODULE },
    { (char *)"gspread.utils", MOD_INIT_NAME( gspread$utils ), NUITKA_COMPILED_MODULE },
    { (char *)"httplib2", MOD_INIT_NAME( httplib2 ), NUITKA_COMPILED_PACKAGE },
    { (char *)"httplib2.iri2uri", MOD_INIT_NAME( httplib2$iri2uri ), NUITKA_COMPILED_MODULE },
    { (char *)"oauth2client", MOD_INIT_NAME( oauth2client ), NUITKA_COMPILED_PACKAGE },
    { (char *)"oauth2client._helpers", MOD_INIT_NAME( oauth2client$_helpers ), NUITKA_COMPILED_MODULE },
    { (char *)"oauth2client._openssl_crypt", MOD_INIT_NAME( oauth2client$_openssl_crypt ), NUITKA_COMPILED_MODULE },
    { (char *)"oauth2client._pycrypto_crypt", MOD_INIT_NAME( oauth2client$_pycrypto_crypt ), NUITKA_COMPILED_MODULE },
    { (char *)"oauth2client.appengine", MOD_INIT_NAME( oauth2client$appengine ), NUITKA_COMPILED_MODULE },
    { (char *)"oauth2client.client", MOD_INIT_NAME( oauth2client$client ), NUITKA_COMPILED_MODULE },
    { (char *)"oauth2client.clientsecrets", MOD_INIT_NAME( oauth2client$clientsecrets ), NUITKA_COMPILED_MODULE },
    { (char *)"oauth2client.crypt", MOD_INIT_NAME( oauth2client$crypt ), NUITKA_COMPILED_MODULE },
    { (char *)"oauth2client.gce", MOD_INIT_NAME( oauth2client$gce ), NUITKA_COMPILED_MODULE },
    { (char *)"oauth2client.service_account", MOD_INIT_NAME( oauth2client$service_account ), NUITKA_COMPILED_MODULE },
    { (char *)"oauth2client.util", MOD_INIT_NAME( oauth2client$util ), NUITKA_COMPILED_MODULE },
    { (char *)"oauth2client.xsrfutil", MOD_INIT_NAME( oauth2client$xsrfutil ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1", MOD_INIT_NAME( pyasn1 ), NUITKA_COMPILED_PACKAGE },
    { (char *)"pyasn1.codec", MOD_INIT_NAME( pyasn1$codec ), NUITKA_COMPILED_PACKAGE },
    { (char *)"pyasn1.codec.ber", MOD_INIT_NAME( pyasn1$codec$ber ), NUITKA_COMPILED_PACKAGE },
    { (char *)"pyasn1.codec.ber.decoder", MOD_INIT_NAME( pyasn1$codec$ber$decoder ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.codec.ber.encoder", MOD_INIT_NAME( pyasn1$codec$ber$encoder ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.codec.ber.eoo", MOD_INIT_NAME( pyasn1$codec$ber$eoo ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.codec.cer", MOD_INIT_NAME( pyasn1$codec$cer ), NUITKA_COMPILED_PACKAGE },
    { (char *)"pyasn1.codec.cer.decoder", MOD_INIT_NAME( pyasn1$codec$cer$decoder ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.codec.cer.encoder", MOD_INIT_NAME( pyasn1$codec$cer$encoder ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.codec.der", MOD_INIT_NAME( pyasn1$codec$der ), NUITKA_COMPILED_PACKAGE },
    { (char *)"pyasn1.codec.der.decoder", MOD_INIT_NAME( pyasn1$codec$der$decoder ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.codec.der.encoder", MOD_INIT_NAME( pyasn1$codec$der$encoder ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.compat", MOD_INIT_NAME( pyasn1$compat ), NUITKA_COMPILED_PACKAGE },
    { (char *)"pyasn1.compat.octets", MOD_INIT_NAME( pyasn1$compat$octets ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.debug", MOD_INIT_NAME( pyasn1$debug ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.error", MOD_INIT_NAME( pyasn1$error ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type", MOD_INIT_NAME( pyasn1$type ), NUITKA_COMPILED_PACKAGE },
    { (char *)"pyasn1.type.base", MOD_INIT_NAME( pyasn1$type$base ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.char", MOD_INIT_NAME( pyasn1$type$char ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.constraint", MOD_INIT_NAME( pyasn1$type$constraint ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.error", MOD_INIT_NAME( pyasn1$type$error ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.namedtype", MOD_INIT_NAME( pyasn1$type$namedtype ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.namedval", MOD_INIT_NAME( pyasn1$type$namedval ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.tag", MOD_INIT_NAME( pyasn1$type$tag ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.tagmap", MOD_INIT_NAME( pyasn1$type$tagmap ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.univ", MOD_INIT_NAME( pyasn1$type$univ ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.useful", MOD_INIT_NAME( pyasn1$type$useful ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1_modules", MOD_INIT_NAME( pyasn1_modules ), NUITKA_COMPILED_PACKAGE },
    { (char *)"pyasn1_modules.rfc2251", MOD_INIT_NAME( pyasn1_modules$rfc2251 ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1_modules.rfc2459", MOD_INIT_NAME( pyasn1_modules$rfc2459 ), NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1_modules.rfc5208", MOD_INIT_NAME( pyasn1_modules$rfc5208 ), NUITKA_COMPILED_MODULE },
    { (char *)"requests", MOD_INIT_NAME( requests ), NUITKA_COMPILED_PACKAGE },
    { (char *)"requests.adapters", MOD_INIT_NAME( requests$adapters ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.api", MOD_INIT_NAME( requests$api ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.auth", MOD_INIT_NAME( requests$auth ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.certs", MOD_INIT_NAME( requests$certs ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.compat", MOD_INIT_NAME( requests$compat ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.cookies", MOD_INIT_NAME( requests$cookies ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.exceptions", MOD_INIT_NAME( requests$exceptions ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.hooks", MOD_INIT_NAME( requests$hooks ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.models", MOD_INIT_NAME( requests$models ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages", MOD_INIT_NAME( requests$packages ), NUITKA_COMPILED_PACKAGE },
    { (char *)"requests.packages.chardet", MOD_INIT_NAME( requests$packages$chardet ), NUITKA_COMPILED_PACKAGE },
    { (char *)"requests.packages.chardet.big5freq", MOD_INIT_NAME( requests$packages$chardet$big5freq ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.big5prober", MOD_INIT_NAME( requests$packages$chardet$big5prober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.chardistribution", MOD_INIT_NAME( requests$packages$chardet$chardistribution ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.charsetgroupprober", MOD_INIT_NAME( requests$packages$chardet$charsetgroupprober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.charsetprober", MOD_INIT_NAME( requests$packages$chardet$charsetprober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.codingstatemachine", MOD_INIT_NAME( requests$packages$chardet$codingstatemachine ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.compat", MOD_INIT_NAME( requests$packages$chardet$compat ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.constants", MOD_INIT_NAME( requests$packages$chardet$constants ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.cp949prober", MOD_INIT_NAME( requests$packages$chardet$cp949prober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.escprober", MOD_INIT_NAME( requests$packages$chardet$escprober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.escsm", MOD_INIT_NAME( requests$packages$chardet$escsm ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.eucjpprober", MOD_INIT_NAME( requests$packages$chardet$eucjpprober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.euckrfreq", MOD_INIT_NAME( requests$packages$chardet$euckrfreq ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.euckrprober", MOD_INIT_NAME( requests$packages$chardet$euckrprober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.euctwfreq", MOD_INIT_NAME( requests$packages$chardet$euctwfreq ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.euctwprober", MOD_INIT_NAME( requests$packages$chardet$euctwprober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.gb2312freq", MOD_INIT_NAME( requests$packages$chardet$gb2312freq ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.gb2312prober", MOD_INIT_NAME( requests$packages$chardet$gb2312prober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.hebrewprober", MOD_INIT_NAME( requests$packages$chardet$hebrewprober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.jisfreq", MOD_INIT_NAME( requests$packages$chardet$jisfreq ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.jpcntx", MOD_INIT_NAME( requests$packages$chardet$jpcntx ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.langbulgarianmodel", MOD_INIT_NAME( requests$packages$chardet$langbulgarianmodel ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.langcyrillicmodel", MOD_INIT_NAME( requests$packages$chardet$langcyrillicmodel ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.langgreekmodel", MOD_INIT_NAME( requests$packages$chardet$langgreekmodel ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.langhebrewmodel", MOD_INIT_NAME( requests$packages$chardet$langhebrewmodel ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.langhungarianmodel", MOD_INIT_NAME( requests$packages$chardet$langhungarianmodel ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.langthaimodel", MOD_INIT_NAME( requests$packages$chardet$langthaimodel ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.latin1prober", MOD_INIT_NAME( requests$packages$chardet$latin1prober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.mbcharsetprober", MOD_INIT_NAME( requests$packages$chardet$mbcharsetprober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.mbcsgroupprober", MOD_INIT_NAME( requests$packages$chardet$mbcsgroupprober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.mbcssm", MOD_INIT_NAME( requests$packages$chardet$mbcssm ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.sbcharsetprober", MOD_INIT_NAME( requests$packages$chardet$sbcharsetprober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.sbcsgroupprober", MOD_INIT_NAME( requests$packages$chardet$sbcsgroupprober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.sjisprober", MOD_INIT_NAME( requests$packages$chardet$sjisprober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.universaldetector", MOD_INIT_NAME( requests$packages$chardet$universaldetector ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.chardet.utf8prober", MOD_INIT_NAME( requests$packages$chardet$utf8prober ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3", MOD_INIT_NAME( requests$packages$urllib3 ), NUITKA_COMPILED_PACKAGE },
    { (char *)"requests.packages.urllib3._collections", MOD_INIT_NAME( requests$packages$urllib3$_collections ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.connection", MOD_INIT_NAME( requests$packages$urllib3$connection ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.connectionpool", MOD_INIT_NAME( requests$packages$urllib3$connectionpool ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.contrib", MOD_INIT_NAME( requests$packages$urllib3$contrib ), NUITKA_COMPILED_PACKAGE },
    { (char *)"requests.packages.urllib3.contrib.pyopenssl", MOD_INIT_NAME( requests$packages$urllib3$contrib$pyopenssl ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.exceptions", MOD_INIT_NAME( requests$packages$urllib3$exceptions ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.fields", MOD_INIT_NAME( requests$packages$urllib3$fields ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.filepost", MOD_INIT_NAME( requests$packages$urllib3$filepost ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.packages", MOD_INIT_NAME( requests$packages$urllib3$packages ), NUITKA_COMPILED_PACKAGE },
    { (char *)"requests.packages.urllib3.packages.ordered_dict", MOD_INIT_NAME( requests$packages$urllib3$packages$ordered_dict ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.packages.six", MOD_INIT_NAME( requests$packages$urllib3$packages$six ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.packages.ssl_match_hostname", MOD_INIT_NAME( requests$packages$urllib3$packages$ssl_match_hostname ), NUITKA_COMPILED_PACKAGE },
    { (char *)"requests.packages.urllib3.packages.ssl_match_hostname._implementation", MOD_INIT_NAME( requests$packages$urllib3$packages$ssl_match_hostname$_implementation ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.poolmanager", MOD_INIT_NAME( requests$packages$urllib3$poolmanager ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.request", MOD_INIT_NAME( requests$packages$urllib3$request ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.response", MOD_INIT_NAME( requests$packages$urllib3$response ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.util", MOD_INIT_NAME( requests$packages$urllib3$util ), NUITKA_COMPILED_PACKAGE },
    { (char *)"requests.packages.urllib3.util.connection", MOD_INIT_NAME( requests$packages$urllib3$util$connection ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.util.request", MOD_INIT_NAME( requests$packages$urllib3$util$request ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.util.response", MOD_INIT_NAME( requests$packages$urllib3$util$response ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.util.retry", MOD_INIT_NAME( requests$packages$urllib3$util$retry ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.util.ssl_", MOD_INIT_NAME( requests$packages$urllib3$util$ssl_ ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.util.timeout", MOD_INIT_NAME( requests$packages$urllib3$util$timeout ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages.urllib3.util.url", MOD_INIT_NAME( requests$packages$urllib3$util$url ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.sessions", MOD_INIT_NAME( requests$sessions ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.status_codes", MOD_INIT_NAME( requests$status_codes ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.structures", MOD_INIT_NAME( requests$structures ), NUITKA_COMPILED_MODULE },
    { (char *)"requests.utils", MOD_INIT_NAME( requests$utils ), NUITKA_COMPILED_MODULE },
    { (char *)"rsa", MOD_INIT_NAME( rsa ), NUITKA_COMPILED_PACKAGE },
    { (char *)"rsa._compat", MOD_INIT_NAME( rsa$_compat ), NUITKA_COMPILED_MODULE },
    { (char *)"rsa.asn1", MOD_INIT_NAME( rsa$asn1 ), NUITKA_COMPILED_MODULE },
    { (char *)"rsa.common", MOD_INIT_NAME( rsa$common ), NUITKA_COMPILED_MODULE },
    { (char *)"rsa.core", MOD_INIT_NAME( rsa$core ), NUITKA_COMPILED_MODULE },
    { (char *)"rsa.key", MOD_INIT_NAME( rsa$key ), NUITKA_COMPILED_MODULE },
    { (char *)"rsa.parallel", MOD_INIT_NAME( rsa$parallel ), NUITKA_COMPILED_MODULE },
    { (char *)"rsa.pem", MOD_INIT_NAME( rsa$pem ), NUITKA_COMPILED_MODULE },
    { (char *)"rsa.pkcs1", MOD_INIT_NAME( rsa$pkcs1 ), NUITKA_COMPILED_MODULE },
    { (char *)"rsa.prime", MOD_INIT_NAME( rsa$prime ), NUITKA_COMPILED_MODULE },
    { (char *)"rsa.randnum", MOD_INIT_NAME( rsa$randnum ), NUITKA_COMPILED_MODULE },
    { (char *)"rsa.transform", MOD_INIT_NAME( rsa$transform ), NUITKA_COMPILED_MODULE },
    { (char *)"rsa.varblock", MOD_INIT_NAME( rsa$varblock ), NUITKA_COMPILED_MODULE },
    { (char *)"simplejson", MOD_INIT_NAME( simplejson ), NUITKA_COMPILED_PACKAGE },
    { (char *)"simplejson.compat", MOD_INIT_NAME( simplejson$compat ), NUITKA_COMPILED_MODULE },
    { (char *)"simplejson.decoder", MOD_INIT_NAME( simplejson$decoder ), NUITKA_COMPILED_MODULE },
    { (char *)"simplejson.encoder", MOD_INIT_NAME( simplejson$encoder ), NUITKA_COMPILED_MODULE },
    { (char *)"simplejson.ordered_dict", MOD_INIT_NAME( simplejson$ordered_dict ), NUITKA_COMPILED_MODULE },
    { (char *)"simplejson.scanner", MOD_INIT_NAME( simplejson$scanner ), NUITKA_COMPILED_MODULE },
    { (char *)"six", MOD_INIT_NAME( six ), NUITKA_COMPILED_MODULE },
    { NULL, NULL, 0 }
};

void setupMetaPathBasedLoader( void )
{
    static bool init_done = false;

    if ( init_done == false )
    {
        registerMetaPathBasedUnfreezer( meta_path_loader_entries );
        init_done = true;
    }
}
#else

void setupMetaPathBasedLoader( void )
{
}

#endif
