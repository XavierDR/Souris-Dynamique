// Generated code for Python source for module 'gspread.exceptions'
// created by Nuitka version 0.5.16.1

// This code is in part copyright 2015 Kay Hayen.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "nuitka/prelude.hpp"

#include "__helpers.hpp"

// The _module_gspread$exceptions is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_gspread$exceptions;
PyDictObject *moduledict_gspread$exceptions;

// The module constants used
static PyObject *const_str_digest_c5421c961c287f7fc7aef4bec347fb70;
extern PyObject *const_str_plain_SpreadsheetNotFound;
static PyObject *const_str_digest_fa284b55491e3c3dd6cb0759fec61756;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_8ce1c72417611084aee9f80d5a5c4318;
extern PyObject *const_str_plain_RequestError;
extern PyObject *const_str_plain_UnsupportedFeedTypeError;
static PyObject *const_str_digest_487ce42a2354d175b37c0f25fbc295dd;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_1abe17a4b1689efdf158e594514e3891;
static PyObject *const_tuple_ddeaad83cbe7ae1134807c6886b35a0c_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_code;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_2cc44fadf97c4347379daafee4e3960f;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_msg;
static PyObject *const_str_digest_a93782bdd46b718f46dc6266232e4c0a;
static PyObject *const_str_digest_7ed8cd1f14dffaffcf42972b8092bf49;
extern PyObject *const_str_plain_NoValidUrlKeyFound;
extern PyObject *const_str_plain_UpdateCellError;
static PyObject *const_str_digest_222267f1febf39c1ef1e61ba01762676;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_gspread;
static PyObject *const_tuple_str_plain_self_str_plain_code_str_plain_msg_tuple;
static PyObject *const_str_digest_2faea4e9e9b3caf1284fb95e8c4fc2b9;
static PyObject *const_str_digest_4334a193c10cecc070377f3bc4c74eb9;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_HTTPError;
extern PyObject *const_str_plain_GSpreadException;
extern PyObject *const_str_plain_AuthenticationError;
static PyObject *const_str_digest_cc8c421f2039611ebb73836b7b3f8bfd;
extern PyObject *const_str_plain_CellNotFound;
extern PyObject *const_str_plain_IncorrectCellLabel;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_e0b9219e6dceaab0afa3426ca7e885bc;
extern PyObject *const_str_plain_UrlParameterMissing;
static PyObject *const_str_digest_cfbb1fcf73585c94ce4680952a14b835;
extern PyObject *const_str_plain_WorksheetNotFound;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_c5421c961c287f7fc7aef4bec347fb70 = UNSTREAM_STRING( &constant_bin[ 193975 ], 28, 0 );
    const_str_digest_fa284b55491e3c3dd6cb0759fec61756 = UNSTREAM_STRING( &constant_bin[ 194003 ], 56, 0 );
    const_str_digest_8ce1c72417611084aee9f80d5a5c4318 = UNSTREAM_STRING( &constant_bin[ 194059 ], 44, 0 );
    const_str_digest_487ce42a2354d175b37c0f25fbc295dd = UNSTREAM_STRING( &constant_bin[ 194103 ], 39, 0 );
    const_str_digest_1abe17a4b1689efdf158e594514e3891 = UNSTREAM_STRING( &constant_bin[ 194071 ], 32, 0 );
    const_tuple_ddeaad83cbe7ae1134807c6886b35a0c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ddeaad83cbe7ae1134807c6886b35a0c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ddeaad83cbe7ae1134807c6886b35a0c_tuple, 1, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    PyTuple_SET_ITEM( const_tuple_ddeaad83cbe7ae1134807c6886b35a0c_tuple, 2, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_ddeaad83cbe7ae1134807c6886b35a0c_tuple, 3, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_2cc44fadf97c4347379daafee4e3960f = UNSTREAM_STRING( &constant_bin[ 194142 ], 22, 0 );
    const_str_digest_a93782bdd46b718f46dc6266232e4c0a = UNSTREAM_STRING( &constant_bin[ 194164 ], 54, 0 );
    const_str_digest_7ed8cd1f14dffaffcf42972b8092bf49 = UNSTREAM_STRING( &constant_bin[ 194218 ], 51, 0 );
    const_str_digest_222267f1febf39c1ef1e61ba01762676 = UNSTREAM_STRING( &constant_bin[ 194269 ], 18, 0 );
    const_tuple_str_plain_self_str_plain_code_str_plain_msg_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_code_str_plain_msg_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_code_str_plain_msg_tuple, 1, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_code_str_plain_msg_tuple, 2, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_digest_2faea4e9e9b3caf1284fb95e8c4fc2b9 = UNSTREAM_STRING( &constant_bin[ 194287 ], 33, 0 );
    const_str_digest_4334a193c10cecc070377f3bc4c74eb9 = UNSTREAM_STRING( &constant_bin[ 194320 ], 38, 0 );
    const_str_digest_cc8c421f2039611ebb73836b7b3f8bfd = UNSTREAM_STRING( &constant_bin[ 194358 ], 26, 0 );
    const_str_digest_e0b9219e6dceaab0afa3426ca7e885bc = UNSTREAM_STRING( &constant_bin[ 194384 ], 18, 0 );
    const_str_digest_cfbb1fcf73585c94ce4680952a14b835 = UNSTREAM_STRING( &constant_bin[ 194402 ], 69, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_gspread$exceptions( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1bc8c70a27660a0751ed1f5821986cd1;
static PyCodeObject *codeobj_a4e0a7f72089e73de10e9b330c804846;
static PyCodeObject *codeobj_cd8a7020c45e05cbb020a63c8c16dec2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_7ed8cd1f14dffaffcf42972b8092bf49 );
    codeobj_1bc8c70a27660a0751ed1f5821986cd1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 46, const_tuple_str_plain_self_str_plain_code_str_plain_msg_tuple, 3, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_a4e0a7f72089e73de10e9b330c804846 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 46, const_tuple_ddeaad83cbe7ae1134807c6886b35a0c_tuple, 3, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_cd8a7020c45e05cbb020a63c8c16dec2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_exceptions, 0, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_GSpreadException_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_1__bases, PyObject *&closure_gspread$exceptions_class_creation_1__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_1__metaclass, PyObject *&closure_gspread$exceptions_class_creation_1__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_AuthenticationError_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_2__bases, PyObject *&closure_gspread$exceptions_class_creation_2__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_2__metaclass, PyObject *&closure_gspread$exceptions_class_creation_2__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_SpreadsheetNotFound_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_3__bases, PyObject *&closure_gspread$exceptions_class_creation_3__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_3__metaclass, PyObject *&closure_gspread$exceptions_class_creation_3__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_WorksheetNotFound_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_4__bases, PyObject *&closure_gspread$exceptions_class_creation_4__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_4__metaclass, PyObject *&closure_gspread$exceptions_class_creation_4__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_CellNotFound_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_5__bases, PyObject *&closure_gspread$exceptions_class_creation_5__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_5__metaclass, PyObject *&closure_gspread$exceptions_class_creation_5__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_NoValidUrlKeyFound_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_6__bases, PyObject *&closure_gspread$exceptions_class_creation_6__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_6__metaclass, PyObject *&closure_gspread$exceptions_class_creation_6__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_UnsupportedFeedTypeError_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_7__bases, PyObject *&closure_gspread$exceptions_class_creation_7__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_7__metaclass, PyObject *&closure_gspread$exceptions_class_creation_7__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_UrlParameterMissing_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_8__bases, PyObject *&closure_gspread$exceptions_class_creation_8__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_8__metaclass, PyObject *&closure_gspread$exceptions_class_creation_8__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_9_IncorrectCellLabel_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_9__bases, PyObject *&closure_gspread$exceptions_class_creation_9__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_9__metaclass, PyObject *&closure_gspread$exceptions_class_creation_9__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_10_UpdateCellError_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_10__bases, PyObject *&closure_gspread$exceptions_class_creation_10__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_10__metaclass, PyObject *&closure_gspread$exceptions_class_creation_10__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_11_RequestError_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_11__bases, PyObject *&closure_gspread$exceptions_class_creation_11__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_11__metaclass, PyObject *&closure_gspread$exceptions_class_creation_11__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_12_HTTPError_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_12__bases, PyObject *&closure_gspread$exceptions_class_creation_12__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_12__metaclass, PyObject *&closure_gspread$exceptions_class_creation_12__prepared );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_12_HTTPError_of_gspread$exceptions(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_GSpreadException_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_1__bases, PyObject *&closure_gspread$exceptions_class_creation_1__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_1__metaclass, PyObject *&closure_gspread$exceptions_class_creation_1__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___class__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_gspread$exceptions_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_e0b9219e6dceaab0afa3426ca7e885bc;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_4334a193c10cecc070377f3bc4c74eb9;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_GSpreadException;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_gspread$exceptions_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_GSpreadException;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_gspread$exceptions_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    if ( var___module__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___module__,
            var___module__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___doc__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___doc__,
            var___doc__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___qualname__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___qualname__,
            var___qualname__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___class__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___class__,
            var___class__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_gspread$exceptions_class_creation_1__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_GSpreadException_of_gspread$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_GSpreadException_of_gspread$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_2_AuthenticationError_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_2__bases, PyObject *&closure_gspread$exceptions_class_creation_2__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_2__metaclass, PyObject *&closure_gspread$exceptions_class_creation_2__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___class__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_gspread$exceptions_class_creation_2__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_e0b9219e6dceaab0afa3426ca7e885bc;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_487ce42a2354d175b37c0f25fbc295dd;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_AuthenticationError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_gspread$exceptions_class_creation_2__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_AuthenticationError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_gspread$exceptions_class_creation_2__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    if ( var___module__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___module__,
            var___module__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___doc__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___doc__,
            var___doc__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___qualname__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___qualname__,
            var___qualname__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___class__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___class__,
            var___class__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_gspread$exceptions_class_creation_2__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_2_AuthenticationError_of_gspread$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_2_AuthenticationError_of_gspread$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_3_SpreadsheetNotFound_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_3__bases, PyObject *&closure_gspread$exceptions_class_creation_3__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_3__metaclass, PyObject *&closure_gspread$exceptions_class_creation_3__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___class__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_gspread$exceptions_class_creation_3__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_e0b9219e6dceaab0afa3426ca7e885bc;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_fa284b55491e3c3dd6cb0759fec61756;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_SpreadsheetNotFound;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_gspread$exceptions_class_creation_3__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_SpreadsheetNotFound;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_gspread$exceptions_class_creation_3__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    if ( var___module__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___module__,
            var___module__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___doc__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___doc__,
            var___doc__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___qualname__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___qualname__,
            var___qualname__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___class__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___class__,
            var___class__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_gspread$exceptions_class_creation_3__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_3_SpreadsheetNotFound_of_gspread$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_3_SpreadsheetNotFound_of_gspread$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_4_WorksheetNotFound_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_4__bases, PyObject *&closure_gspread$exceptions_class_creation_4__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_4__metaclass, PyObject *&closure_gspread$exceptions_class_creation_4__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___class__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_gspread$exceptions_class_creation_4__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_e0b9219e6dceaab0afa3426ca7e885bc;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_a93782bdd46b718f46dc6266232e4c0a;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_WorksheetNotFound;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_gspread$exceptions_class_creation_4__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_WorksheetNotFound;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_gspread$exceptions_class_creation_4__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    if ( var___module__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___module__,
            var___module__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___doc__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___doc__,
            var___doc__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___qualname__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___qualname__,
            var___qualname__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___class__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___class__,
            var___class__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_gspread$exceptions_class_creation_4__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_4_WorksheetNotFound_of_gspread$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_4_WorksheetNotFound_of_gspread$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_5_CellNotFound_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_5__bases, PyObject *&closure_gspread$exceptions_class_creation_5__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_5__metaclass, PyObject *&closure_gspread$exceptions_class_creation_5__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___class__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_gspread$exceptions_class_creation_5__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_e0b9219e6dceaab0afa3426ca7e885bc;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_2cc44fadf97c4347379daafee4e3960f;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_CellNotFound;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_gspread$exceptions_class_creation_5__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_CellNotFound;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_gspread$exceptions_class_creation_5__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    if ( var___module__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___module__,
            var___module__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___doc__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___doc__,
            var___doc__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___qualname__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___qualname__,
            var___qualname__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___class__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___class__,
            var___class__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_gspread$exceptions_class_creation_5__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_5_CellNotFound_of_gspread$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_5_CellNotFound_of_gspread$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_6_NoValidUrlKeyFound_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_6__bases, PyObject *&closure_gspread$exceptions_class_creation_6__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_6__metaclass, PyObject *&closure_gspread$exceptions_class_creation_6__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___class__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_gspread$exceptions_class_creation_6__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_e0b9219e6dceaab0afa3426ca7e885bc;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_cc8c421f2039611ebb73836b7b3f8bfd;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_NoValidUrlKeyFound;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_gspread$exceptions_class_creation_6__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_NoValidUrlKeyFound;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_gspread$exceptions_class_creation_6__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    if ( var___module__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___module__,
            var___module__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___doc__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___doc__,
            var___doc__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___qualname__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___qualname__,
            var___qualname__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___class__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___class__,
            var___class__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_gspread$exceptions_class_creation_6__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_6_NoValidUrlKeyFound_of_gspread$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_6_NoValidUrlKeyFound_of_gspread$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_7_UnsupportedFeedTypeError_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_7__bases, PyObject *&closure_gspread$exceptions_class_creation_7__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_7__metaclass, PyObject *&closure_gspread$exceptions_class_creation_7__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___module__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___class__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_gspread$exceptions_class_creation_7__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_e0b9219e6dceaab0afa3426ca7e885bc;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_UnsupportedFeedTypeError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    tmp_called_name_1 = closure_gspread$exceptions_class_creation_7__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_UnsupportedFeedTypeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_gspread$exceptions_class_creation_7__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    if ( var___module__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___module__,
            var___module__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___qualname__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___qualname__,
            var___qualname__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___class__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___class__,
            var___class__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_gspread$exceptions_class_creation_7__class_decl_dict;

    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_3;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_7_UnsupportedFeedTypeError_of_gspread$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_7_UnsupportedFeedTypeError_of_gspread$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_8_UrlParameterMissing_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_8__bases, PyObject *&closure_gspread$exceptions_class_creation_8__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_8__metaclass, PyObject *&closure_gspread$exceptions_class_creation_8__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___module__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___class__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_gspread$exceptions_class_creation_8__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_e0b9219e6dceaab0afa3426ca7e885bc;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_UrlParameterMissing;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    tmp_called_name_1 = closure_gspread$exceptions_class_creation_8__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_UrlParameterMissing;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_gspread$exceptions_class_creation_8__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    if ( var___module__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___module__,
            var___module__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___qualname__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___qualname__,
            var___qualname__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___class__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___class__,
            var___class__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_gspread$exceptions_class_creation_8__class_decl_dict;

    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_3;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_8_UrlParameterMissing_of_gspread$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_8_UrlParameterMissing_of_gspread$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_9_IncorrectCellLabel_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_9__bases, PyObject *&closure_gspread$exceptions_class_creation_9__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_9__metaclass, PyObject *&closure_gspread$exceptions_class_creation_9__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___class__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_gspread$exceptions_class_creation_9__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_e0b9219e6dceaab0afa3426ca7e885bc;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_c5421c961c287f7fc7aef4bec347fb70;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_IncorrectCellLabel;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_gspread$exceptions_class_creation_9__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_IncorrectCellLabel;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_gspread$exceptions_class_creation_9__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    if ( var___module__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___module__,
            var___module__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___doc__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___doc__,
            var___doc__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___qualname__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___qualname__,
            var___qualname__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___class__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___class__,
            var___class__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_gspread$exceptions_class_creation_9__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_9_IncorrectCellLabel_of_gspread$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_9_IncorrectCellLabel_of_gspread$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_10_UpdateCellError_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_10__bases, PyObject *&closure_gspread$exceptions_class_creation_10__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_10__metaclass, PyObject *&closure_gspread$exceptions_class_creation_10__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___class__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_gspread$exceptions_class_creation_10__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_e0b9219e6dceaab0afa3426ca7e885bc;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_2faea4e9e9b3caf1284fb95e8c4fc2b9;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_UpdateCellError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_gspread$exceptions_class_creation_10__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_UpdateCellError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_gspread$exceptions_class_creation_10__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    if ( var___module__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___module__,
            var___module__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___doc__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___doc__,
            var___doc__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___qualname__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___qualname__,
            var___qualname__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___class__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___class__,
            var___class__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_gspread$exceptions_class_creation_10__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_10_UpdateCellError_of_gspread$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_10_UpdateCellError_of_gspread$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_11_RequestError_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_11__bases, PyObject *&closure_gspread$exceptions_class_creation_11__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_11__metaclass, PyObject *&closure_gspread$exceptions_class_creation_11__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___class__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_gspread$exceptions_class_creation_11__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_e0b9219e6dceaab0afa3426ca7e885bc;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_1abe17a4b1689efdf158e594514e3891;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_RequestError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_gspread$exceptions_class_creation_11__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_RequestError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_gspread$exceptions_class_creation_11__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    if ( var___module__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___module__,
            var___module__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___doc__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___doc__,
            var___doc__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___qualname__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___qualname__,
            var___qualname__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___class__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___class__,
            var___class__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_gspread$exceptions_class_creation_11__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_11_RequestError_of_gspread$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_11_RequestError_of_gspread$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_12_HTTPError_of_gspread$exceptions( PyObject *&closure_gspread$exceptions_class_creation_12__bases, PyObject *&closure_gspread$exceptions_class_creation_12__class_decl_dict, PyObject *&closure_gspread$exceptions_class_creation_12__metaclass, PyObject *&closure_gspread$exceptions_class_creation_12__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___class__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_gspread$exceptions_class_creation_12__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_e0b9219e6dceaab0afa3426ca7e885bc;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_8ce1c72417611084aee9f80d5a5c4318;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_HTTPError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_12_HTTPError_of_gspread$exceptions(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;

    // Tried code:
    tmp_called_name_1 = closure_gspread$exceptions_class_creation_12__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_HTTPError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_gspread$exceptions_class_creation_12__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    if ( var___module__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___module__,
            var___module__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___doc__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___doc__,
            var___doc__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___qualname__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___qualname__,
            var___qualname__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___class__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___class__,
            var___class__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var___init__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___init__,
            var___init__
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_gspread$exceptions_class_creation_12__class_decl_dict;

    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_5;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_12_HTTPError_of_gspread$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_12_HTTPError_of_gspread$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_12_HTTPError_of_gspread$exceptions( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_code, PyObject *_python_par_msg )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_code = _python_par_code;
    PyObject *par_msg = _python_par_msg;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_super_object_1;
    PyObject *tmp_super_type_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a4e0a7f72089e73de10e9b330c804846, module_gspread$exceptions );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_super_type_1 = GET_STRING_DICT_VALUE( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_super_type_1 == NULL ))
    {
        tmp_super_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_super_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 17813 ], 31, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_super_object_1 = par_self;

    tmp_source_name_1 = BUILTIN_SUPER( tmp_super_type_1, tmp_super_object_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_msg;

    frame_function->f_lineno = 47;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_code;

    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_code, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );
                assert( tmp_res != -1 );

            }
            if ( par_code != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_code,
                    par_code
                );
                assert( tmp_res != -1 );

            }
            if ( par_msg != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_msg,
                    par_msg
                );
                assert( tmp_res != -1 );

            }


            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_12_HTTPError_of_gspread$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_code );
    par_code = NULL;

    Py_XDECREF( par_msg );
    par_msg = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_code );
    par_code = NULL;

    Py_XDECREF( par_msg );
    par_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_12_HTTPError_of_gspread$exceptions );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}
static PyObject *fparse_function_1___init___of_class_12_HTTPError_of_gspread$exceptions( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_code = NULL;
    PyObject *_python_par_msg = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_code == key )
            {
                assert( _python_par_code == NULL );
                _python_par_code = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_msg == key )
            {
                assert( _python_par_msg == NULL );
                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_code, key ) == 1 )
            {
                assert( _python_par_code == NULL );
                _python_par_code = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_msg, key ) == 1 )
            {
                assert( _python_par_msg == NULL );
                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__init__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Copy normal parameter values given as part of the argument list to the
    // respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = args[ 0 ];
        Py_INCREF( _python_par_self );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_self = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 );
            Py_INCREF( _python_par_self );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_code != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_code = args[ 1 ];
        Py_INCREF( _python_par_code );
    }
    else if ( _python_par_code == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_code = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 );
            Py_INCREF( _python_par_code );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_msg != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_msg = args[ 2 ];
        Py_INCREF( _python_par_msg );
    }
    else if ( _python_par_msg == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_msg = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 );
            Py_INCREF( _python_par_msg );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_code == NULL || _python_par_msg == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_code, _python_par_msg };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }



    return impl_function_1___init___of_class_12_HTTPError_of_gspread$exceptions( self, _python_par_self, _python_par_code, _python_par_msg );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_code );
    Py_XDECREF( _python_par_msg );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_12_HTTPError_of_gspread$exceptions( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_1___init___of_class_12_HTTPError_of_gspread$exceptions( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_12_HTTPError_of_gspread$exceptions( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_12_HTTPError_of_gspread$exceptions(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_12_HTTPError_of_gspread$exceptions,
        dparse_function_1___init___of_class_12_HTTPError_of_gspread$exceptions,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_222267f1febf39c1ef1e61ba01762676,
#endif
        codeobj_1bc8c70a27660a0751ed1f5821986cd1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_gspread$exceptions,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_gspread$exceptions =
{
    PyModuleDef_HEAD_INIT,
    "gspread.exceptions",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( gspread$exceptions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_gspread$exceptions );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );
#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

#endif

#if _NUITKA_MODULE
    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();
#endif

    createModuleConstants();
    createModuleCodeObjects();

    // puts( "in initgspread$exceptions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_gspread$exceptions = Py_InitModule4(
        "gspread.exceptions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_gspread$exceptions = PyModule_Create( &mdef_gspread$exceptions );
#endif

    moduledict_gspread$exceptions = (PyDictObject *)((PyModuleObject *)module_gspread$exceptions)->md_dict;

    CHECK_OBJECT( module_gspread$exceptions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e0b9219e6dceaab0afa3426ca7e885bc, module_gspread$exceptions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_gspread$exceptions );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
#if _MODULE_LOADER
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#else
    PyDict_SetItem( module_dict, const_str_plain___loader__, Py_None );
#endif
#endif

    // Temp variables if any
    PyObject *tmp_gspread$exceptions_class_creation_1__bases = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_1__metaclass = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_1__prepared = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_2__bases = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_2__metaclass = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_2__prepared = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_3__bases = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_3__metaclass = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_3__prepared = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_4__bases = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_4__metaclass = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_4__prepared = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_5__bases = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_5__metaclass = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_5__prepared = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_6__bases = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_6__metaclass = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_6__prepared = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_7__bases = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_7__metaclass = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_7__prepared = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_8__bases = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_8__metaclass = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_8__prepared = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_9__bases = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_9__metaclass = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_9__prepared = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_10__bases = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_10__metaclass = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_10__prepared = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_11__bases = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_11__metaclass = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_11__prepared = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_12__bases = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_12__metaclass = NULL;
    PyObject *tmp_gspread$exceptions_class_creation_12__prepared = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
    PyObject *tmp_args_name_9;
    PyObject *tmp_args_name_10;
    PyObject *tmp_args_name_11;
    PyObject *tmp_args_name_12;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_bases_2;
    PyObject *tmp_class_bases_3;
    PyObject *tmp_class_bases_4;
    PyObject *tmp_class_bases_5;
    PyObject *tmp_class_bases_6;
    PyObject *tmp_class_bases_7;
    PyObject *tmp_class_bases_8;
    PyObject *tmp_class_bases_9;
    PyObject *tmp_class_bases_10;
    PyObject *tmp_class_bases_11;
    PyObject *tmp_class_bases_12;
    PyObject *tmp_class_meta_1;
    PyObject *tmp_class_meta_2;
    PyObject *tmp_class_meta_3;
    PyObject *tmp_class_meta_4;
    PyObject *tmp_class_meta_5;
    PyObject *tmp_class_meta_6;
    PyObject *tmp_class_meta_7;
    PyObject *tmp_class_meta_8;
    PyObject *tmp_class_meta_9;
    PyObject *tmp_class_meta_10;
    PyObject *tmp_class_meta_11;
    PyObject *tmp_class_meta_12;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    int tmp_cmp_In_9;
    int tmp_cmp_In_10;
    int tmp_cmp_In_11;
    int tmp_cmp_In_12;
    int tmp_cmp_In_13;
    int tmp_cmp_In_14;
    int tmp_cmp_In_15;
    int tmp_cmp_In_16;
    int tmp_cmp_In_17;
    int tmp_cmp_In_18;
    int tmp_cmp_In_19;
    int tmp_cmp_In_20;
    int tmp_cmp_In_21;
    int tmp_cmp_In_22;
    int tmp_cmp_In_23;
    int tmp_cmp_In_24;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_left_19;
    PyObject *tmp_compare_left_20;
    PyObject *tmp_compare_left_21;
    PyObject *tmp_compare_left_22;
    PyObject *tmp_compare_left_23;
    PyObject *tmp_compare_left_24;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    PyObject *tmp_compare_right_19;
    PyObject *tmp_compare_right_20;
    PyObject *tmp_compare_right_21;
    PyObject *tmp_compare_right_22;
    PyObject *tmp_compare_right_23;
    PyObject *tmp_compare_right_24;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_dict_2;
    PyObject *tmp_dget_dict_3;
    PyObject *tmp_dget_dict_4;
    PyObject *tmp_dget_dict_5;
    PyObject *tmp_dget_dict_6;
    PyObject *tmp_dget_dict_7;
    PyObject *tmp_dget_dict_8;
    PyObject *tmp_dget_dict_9;
    PyObject *tmp_dget_dict_10;
    PyObject *tmp_dget_dict_11;
    PyObject *tmp_dget_dict_12;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_dget_key_2;
    PyObject *tmp_dget_key_3;
    PyObject *tmp_dget_key_4;
    PyObject *tmp_dget_key_5;
    PyObject *tmp_dget_key_6;
    PyObject *tmp_dget_key_7;
    PyObject *tmp_dget_key_8;
    PyObject *tmp_dget_key_9;
    PyObject *tmp_dget_key_10;
    PyObject *tmp_dget_key_11;
    PyObject *tmp_dget_key_12;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_attr_6;
    PyObject *tmp_hasattr_attr_7;
    PyObject *tmp_hasattr_attr_8;
    PyObject *tmp_hasattr_attr_9;
    PyObject *tmp_hasattr_attr_10;
    PyObject *tmp_hasattr_attr_11;
    PyObject *tmp_hasattr_attr_12;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_hasattr_source_6;
    PyObject *tmp_hasattr_source_7;
    PyObject *tmp_hasattr_source_8;
    PyObject *tmp_hasattr_source_9;
    PyObject *tmp_hasattr_source_10;
    PyObject *tmp_hasattr_source_11;
    PyObject *tmp_hasattr_source_12;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_kw_name_9;
    PyObject *tmp_kw_name_10;
    PyObject *tmp_kw_name_11;
    PyObject *tmp_kw_name_12;
    PyObject *tmp_remove_dict;
    PyObject *tmp_remove_key;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_tuple_element_21;
    PyObject *tmp_tuple_element_22;
    PyObject *tmp_tuple_element_23;
    PyObject *tmp_tuple_element_24;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_type_arg_6;
    PyObject *tmp_type_arg_7;
    PyObject *tmp_type_arg_8;
    PyObject *tmp_type_arg_9;
    PyObject *tmp_type_arg_10;
    PyObject *tmp_type_arg_11;
    PyObject *tmp_type_arg_12;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_cfbb1fcf73585c94ce4680952a14b835;
    UPDATE_STRING_DICT0( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_7ed8cd1f14dffaffcf42972b8092bf49;
    UPDATE_STRING_DICT0( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_gspread;
    UPDATE_STRING_DICT0( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_1 );
    assert( tmp_gspread$exceptions_class_creation_1__bases == NULL );
    tmp_gspread$exceptions_class_creation_1__bases = tmp_assign_source_5;

    tmp_assign_source_6 = PyDict_New();
    assert( tmp_gspread$exceptions_class_creation_1__class_decl_dict == NULL );
    tmp_gspread$exceptions_class_creation_1__class_decl_dict = tmp_assign_source_6;

    // Frame without reuse.
    frame_module = MAKE_FRAME( codeobj_cd8a7020c45e05cbb020a63c8c16dec2, module_gspread$exceptions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    // Tried code:
    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_gspread$exceptions_class_creation_1__class_decl_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto try_except_handler_1;
    }
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dget_dict_1 = tmp_gspread$exceptions_class_creation_1__class_decl_dict;

    tmp_dget_key_1 = const_str_plain_metaclass;
    tmp_class_meta_1 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_class_meta_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_gspread$exceptions_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto try_except_handler_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_subscribed_name_1 = tmp_gspread$exceptions_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto try_except_handler_1;
    }
    tmp_class_meta_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_class_meta_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_meta_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_1 != NULL );
    Py_INCREF( tmp_class_meta_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_class_bases_1 = tmp_gspread$exceptions_class_creation_1__bases;

    tmp_assign_source_7 = SELECT_METACLASS( tmp_class_meta_1, tmp_class_bases_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_1 );

        exception_lineno = 11;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_class_meta_1 );
    assert( tmp_gspread$exceptions_class_creation_1__metaclass == NULL );
    tmp_gspread$exceptions_class_creation_1__metaclass = tmp_assign_source_7;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_gspread$exceptions_class_creation_1__class_decl_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto try_except_handler_1;
    }
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_remove_dict = tmp_gspread$exceptions_class_creation_1__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_gspread$exceptions_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto try_except_handler_1;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_source_name_1 = tmp_gspread$exceptions_class_creation_1__metaclass;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_GSpreadException;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_gspread$exceptions_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_gspread$exceptions_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 11;
    tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_8 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_gspread$exceptions_class_creation_1__prepared == NULL );
    tmp_gspread$exceptions_class_creation_1__prepared = tmp_assign_source_8;

    tmp_assign_source_9 = impl_class_1_GSpreadException_of_gspread$exceptions( tmp_gspread$exceptions_class_creation_1__bases, tmp_gspread$exceptions_class_creation_1__class_decl_dict, tmp_gspread$exceptions_class_creation_1__metaclass, tmp_gspread$exceptions_class_creation_1__prepared );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_GSpreadException, tmp_assign_source_9 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_1__bases );
    tmp_gspread$exceptions_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_1__class_decl_dict );
    tmp_gspread$exceptions_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_1__metaclass );
    tmp_gspread$exceptions_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_1__prepared );
    tmp_gspread$exceptions_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_gspread$exceptions_class_creation_1__bases );
    tmp_gspread$exceptions_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_1__class_decl_dict );
    tmp_gspread$exceptions_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_1__metaclass );
    tmp_gspread$exceptions_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_1__prepared );
    tmp_gspread$exceptions_class_creation_1__prepared = NULL;

    // Tried code:
    tmp_assign_source_10 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_GSpreadException );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GSpreadException );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18678 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 14;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_10, 0, tmp_tuple_element_3 );
    assert( tmp_gspread$exceptions_class_creation_2__bases == NULL );
    tmp_gspread$exceptions_class_creation_2__bases = tmp_assign_source_10;

    tmp_assign_source_11 = PyDict_New();
    assert( tmp_gspread$exceptions_class_creation_2__class_decl_dict == NULL );
    tmp_gspread$exceptions_class_creation_2__class_decl_dict = tmp_assign_source_11;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_gspread$exceptions_class_creation_2__class_decl_dict;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dget_dict_2 = tmp_gspread$exceptions_class_creation_2__class_decl_dict;

    tmp_dget_key_2 = const_str_plain_metaclass;
    tmp_class_meta_2 = DICT_GET_ITEM( tmp_dget_dict_2, tmp_dget_key_2 );
    if ( tmp_class_meta_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_2;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_2 = tmp_gspread$exceptions_class_creation_2__bases;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_subscribed_name_2 = tmp_gspread$exceptions_class_creation_2__bases;

    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_2;
    }
    tmp_class_meta_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_class_meta_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_2;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_class_meta_2 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_2 != NULL );
    Py_INCREF( tmp_class_meta_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_class_bases_2 = tmp_gspread$exceptions_class_creation_2__bases;

    tmp_assign_source_12 = SELECT_METACLASS( tmp_class_meta_2, tmp_class_bases_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_2 );

        exception_lineno = 14;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_class_meta_2 );
    assert( tmp_gspread$exceptions_class_creation_2__metaclass == NULL );
    tmp_gspread$exceptions_class_creation_2__metaclass = tmp_assign_source_12;

    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_gspread$exceptions_class_creation_2__class_decl_dict;

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_remove_dict = tmp_gspread$exceptions_class_creation_2__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_2;
    }
    branch_no_2:;
    tmp_hasattr_source_2 = tmp_gspread$exceptions_class_creation_2__metaclass;

    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_2;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_source_name_2 = tmp_gspread$exceptions_class_creation_2__metaclass;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_2;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_AuthenticationError;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_gspread$exceptions_class_creation_2__bases;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_kw_name_2 = tmp_gspread$exceptions_class_creation_2__class_decl_dict;

    frame_module->f_lineno = 14;
    tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_2;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_13 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_gspread$exceptions_class_creation_2__prepared == NULL );
    tmp_gspread$exceptions_class_creation_2__prepared = tmp_assign_source_13;

    tmp_assign_source_14 = impl_class_2_AuthenticationError_of_gspread$exceptions( tmp_gspread$exceptions_class_creation_2__bases, tmp_gspread$exceptions_class_creation_2__class_decl_dict, tmp_gspread$exceptions_class_creation_2__metaclass, tmp_gspread$exceptions_class_creation_2__prepared );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_AuthenticationError, tmp_assign_source_14 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_2__bases );
    tmp_gspread$exceptions_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_2__class_decl_dict );
    tmp_gspread$exceptions_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_2__metaclass );
    tmp_gspread$exceptions_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_2__prepared );
    tmp_gspread$exceptions_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_gspread$exceptions_class_creation_2__bases );
    tmp_gspread$exceptions_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_2__class_decl_dict );
    tmp_gspread$exceptions_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_2__metaclass );
    tmp_gspread$exceptions_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_2__prepared );
    tmp_gspread$exceptions_class_creation_2__prepared = NULL;

    // Tried code:
    tmp_assign_source_15 = PyTuple_New( 1 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_GSpreadException );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GSpreadException );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18678 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_15, 0, tmp_tuple_element_5 );
    assert( tmp_gspread$exceptions_class_creation_3__bases == NULL );
    tmp_gspread$exceptions_class_creation_3__bases = tmp_assign_source_15;

    tmp_assign_source_16 = PyDict_New();
    assert( tmp_gspread$exceptions_class_creation_3__class_decl_dict == NULL );
    tmp_gspread$exceptions_class_creation_3__class_decl_dict = tmp_assign_source_16;

    tmp_compare_left_5 = const_str_plain_metaclass;
    tmp_compare_right_5 = tmp_gspread$exceptions_class_creation_3__class_decl_dict;

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    if ( tmp_cmp_In_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_3;
    }
    if ( tmp_cmp_In_5 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dget_dict_3 = tmp_gspread$exceptions_class_creation_3__class_decl_dict;

    tmp_dget_key_3 = const_str_plain_metaclass;
    tmp_class_meta_3 = DICT_GET_ITEM( tmp_dget_dict_3, tmp_dget_key_3 );
    if ( tmp_class_meta_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_3;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_cond_value_3 = tmp_gspread$exceptions_class_creation_3__bases;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_subscribed_name_3 = tmp_gspread$exceptions_class_creation_3__bases;

    tmp_subscript_name_3 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_3;
    }
    tmp_class_meta_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_class_meta_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_3;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_class_meta_3 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_3 != NULL );
    Py_INCREF( tmp_class_meta_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_class_bases_3 = tmp_gspread$exceptions_class_creation_3__bases;

    tmp_assign_source_17 = SELECT_METACLASS( tmp_class_meta_3, tmp_class_bases_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_3 );

        exception_lineno = 17;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_class_meta_3 );
    assert( tmp_gspread$exceptions_class_creation_3__metaclass == NULL );
    tmp_gspread$exceptions_class_creation_3__metaclass = tmp_assign_source_17;

    tmp_compare_left_6 = const_str_plain_metaclass;
    tmp_compare_right_6 = tmp_gspread$exceptions_class_creation_3__class_decl_dict;

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    if ( tmp_cmp_In_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_3;
    }
    if ( tmp_cmp_In_6 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_remove_dict = tmp_gspread$exceptions_class_creation_3__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_3;
    }
    branch_no_3:;
    tmp_hasattr_source_3 = tmp_gspread$exceptions_class_creation_3__metaclass;

    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_3;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_source_name_3 = tmp_gspread$exceptions_class_creation_3__metaclass;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_3;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_6 = const_str_plain_SpreadsheetNotFound;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_gspread$exceptions_class_creation_3__bases;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
    tmp_kw_name_3 = tmp_gspread$exceptions_class_creation_3__class_decl_dict;

    frame_module->f_lineno = 17;
    tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_3;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_18 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_gspread$exceptions_class_creation_3__prepared == NULL );
    tmp_gspread$exceptions_class_creation_3__prepared = tmp_assign_source_18;

    tmp_assign_source_19 = impl_class_3_SpreadsheetNotFound_of_gspread$exceptions( tmp_gspread$exceptions_class_creation_3__bases, tmp_gspread$exceptions_class_creation_3__class_decl_dict, tmp_gspread$exceptions_class_creation_3__metaclass, tmp_gspread$exceptions_class_creation_3__prepared );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_SpreadsheetNotFound, tmp_assign_source_19 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_3__bases );
    tmp_gspread$exceptions_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_3__class_decl_dict );
    tmp_gspread$exceptions_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_3__metaclass );
    tmp_gspread$exceptions_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_3__prepared );
    tmp_gspread$exceptions_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_gspread$exceptions_class_creation_3__bases );
    tmp_gspread$exceptions_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_3__class_decl_dict );
    tmp_gspread$exceptions_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_3__metaclass );
    tmp_gspread$exceptions_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_3__prepared );
    tmp_gspread$exceptions_class_creation_3__prepared = NULL;

    // Tried code:
    tmp_assign_source_20 = PyTuple_New( 1 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_GSpreadException );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GSpreadException );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18678 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_20, 0, tmp_tuple_element_7 );
    assert( tmp_gspread$exceptions_class_creation_4__bases == NULL );
    tmp_gspread$exceptions_class_creation_4__bases = tmp_assign_source_20;

    tmp_assign_source_21 = PyDict_New();
    assert( tmp_gspread$exceptions_class_creation_4__class_decl_dict == NULL );
    tmp_gspread$exceptions_class_creation_4__class_decl_dict = tmp_assign_source_21;

    tmp_compare_left_7 = const_str_plain_metaclass;
    tmp_compare_right_7 = tmp_gspread$exceptions_class_creation_4__class_decl_dict;

    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    if ( tmp_cmp_In_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto try_except_handler_4;
    }
    if ( tmp_cmp_In_7 == 1 )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_dget_dict_4 = tmp_gspread$exceptions_class_creation_4__class_decl_dict;

    tmp_dget_key_4 = const_str_plain_metaclass;
    tmp_class_meta_4 = DICT_GET_ITEM( tmp_dget_dict_4, tmp_dget_key_4 );
    if ( tmp_class_meta_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto try_except_handler_4;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_cond_value_4 = tmp_gspread$exceptions_class_creation_4__bases;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_subscribed_name_4 = tmp_gspread$exceptions_class_creation_4__bases;

    tmp_subscript_name_4 = const_int_0;
    tmp_type_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_type_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto try_except_handler_4;
    }
    tmp_class_meta_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_class_meta_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto try_except_handler_4;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_class_meta_4 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_4 != NULL );
    Py_INCREF( tmp_class_meta_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_class_bases_4 = tmp_gspread$exceptions_class_creation_4__bases;

    tmp_assign_source_22 = SELECT_METACLASS( tmp_class_meta_4, tmp_class_bases_4 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_4 );

        exception_lineno = 20;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_class_meta_4 );
    assert( tmp_gspread$exceptions_class_creation_4__metaclass == NULL );
    tmp_gspread$exceptions_class_creation_4__metaclass = tmp_assign_source_22;

    tmp_compare_left_8 = const_str_plain_metaclass;
    tmp_compare_right_8 = tmp_gspread$exceptions_class_creation_4__class_decl_dict;

    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    if ( tmp_cmp_In_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto try_except_handler_4;
    }
    if ( tmp_cmp_In_8 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_remove_dict = tmp_gspread$exceptions_class_creation_4__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto try_except_handler_4;
    }
    branch_no_4:;
    tmp_hasattr_source_4 = tmp_gspread$exceptions_class_creation_4__metaclass;

    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto try_except_handler_4;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_source_name_4 = tmp_gspread$exceptions_class_creation_4__metaclass;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto try_except_handler_4;
    }
    tmp_args_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_8 = const_str_plain_WorksheetNotFound;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_gspread$exceptions_class_creation_4__bases;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
    tmp_kw_name_4 = tmp_gspread$exceptions_class_creation_4__class_decl_dict;

    frame_module->f_lineno = 20;
    tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto try_except_handler_4;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_23 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_gspread$exceptions_class_creation_4__prepared == NULL );
    tmp_gspread$exceptions_class_creation_4__prepared = tmp_assign_source_23;

    tmp_assign_source_24 = impl_class_4_WorksheetNotFound_of_gspread$exceptions( tmp_gspread$exceptions_class_creation_4__bases, tmp_gspread$exceptions_class_creation_4__class_decl_dict, tmp_gspread$exceptions_class_creation_4__metaclass, tmp_gspread$exceptions_class_creation_4__prepared );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_WorksheetNotFound, tmp_assign_source_24 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_4__bases );
    tmp_gspread$exceptions_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_4__class_decl_dict );
    tmp_gspread$exceptions_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_4__metaclass );
    tmp_gspread$exceptions_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_4__prepared );
    tmp_gspread$exceptions_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_gspread$exceptions_class_creation_4__bases );
    tmp_gspread$exceptions_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_4__class_decl_dict );
    tmp_gspread$exceptions_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_4__metaclass );
    tmp_gspread$exceptions_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_4__prepared );
    tmp_gspread$exceptions_class_creation_4__prepared = NULL;

    // Tried code:
    tmp_assign_source_25 = PyTuple_New( 1 );
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_GSpreadException );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GSpreadException );
    }

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_25 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18678 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_25, 0, tmp_tuple_element_9 );
    assert( tmp_gspread$exceptions_class_creation_5__bases == NULL );
    tmp_gspread$exceptions_class_creation_5__bases = tmp_assign_source_25;

    tmp_assign_source_26 = PyDict_New();
    assert( tmp_gspread$exceptions_class_creation_5__class_decl_dict == NULL );
    tmp_gspread$exceptions_class_creation_5__class_decl_dict = tmp_assign_source_26;

    tmp_compare_left_9 = const_str_plain_metaclass;
    tmp_compare_right_9 = tmp_gspread$exceptions_class_creation_5__class_decl_dict;

    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    if ( tmp_cmp_In_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto try_except_handler_5;
    }
    if ( tmp_cmp_In_9 == 1 )
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_dget_dict_5 = tmp_gspread$exceptions_class_creation_5__class_decl_dict;

    tmp_dget_key_5 = const_str_plain_metaclass;
    tmp_class_meta_5 = DICT_GET_ITEM( tmp_dget_dict_5, tmp_dget_key_5 );
    if ( tmp_class_meta_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto try_except_handler_5;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_cond_value_5 = tmp_gspread$exceptions_class_creation_5__bases;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto try_except_handler_5;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_subscribed_name_5 = tmp_gspread$exceptions_class_creation_5__bases;

    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto try_except_handler_5;
    }
    tmp_class_meta_5 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_class_meta_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto try_except_handler_5;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_class_meta_5 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_5 != NULL );
    Py_INCREF( tmp_class_meta_5 );
    condexpr_end_14:;
    condexpr_end_13:;
    tmp_class_bases_5 = tmp_gspread$exceptions_class_creation_5__bases;

    tmp_assign_source_27 = SELECT_METACLASS( tmp_class_meta_5, tmp_class_bases_5 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_5 );

        exception_lineno = 23;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_class_meta_5 );
    assert( tmp_gspread$exceptions_class_creation_5__metaclass == NULL );
    tmp_gspread$exceptions_class_creation_5__metaclass = tmp_assign_source_27;

    tmp_compare_left_10 = const_str_plain_metaclass;
    tmp_compare_right_10 = tmp_gspread$exceptions_class_creation_5__class_decl_dict;

    tmp_cmp_In_10 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    if ( tmp_cmp_In_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto try_except_handler_5;
    }
    if ( tmp_cmp_In_10 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_remove_dict = tmp_gspread$exceptions_class_creation_5__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto try_except_handler_5;
    }
    branch_no_5:;
    tmp_hasattr_source_5 = tmp_gspread$exceptions_class_creation_5__metaclass;

    tmp_hasattr_attr_5 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_5, tmp_hasattr_attr_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto try_except_handler_5;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_source_name_5 = tmp_gspread$exceptions_class_creation_5__metaclass;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto try_except_handler_5;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_10 = const_str_plain_CellNotFound;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_gspread$exceptions_class_creation_5__bases;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_10 );
    tmp_kw_name_5 = tmp_gspread$exceptions_class_creation_5__class_decl_dict;

    frame_module->f_lineno = 23;
    tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto try_except_handler_5;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_28 = PyDict_New();
    condexpr_end_15:;
    assert( tmp_gspread$exceptions_class_creation_5__prepared == NULL );
    tmp_gspread$exceptions_class_creation_5__prepared = tmp_assign_source_28;

    tmp_assign_source_29 = impl_class_5_CellNotFound_of_gspread$exceptions( tmp_gspread$exceptions_class_creation_5__bases, tmp_gspread$exceptions_class_creation_5__class_decl_dict, tmp_gspread$exceptions_class_creation_5__metaclass, tmp_gspread$exceptions_class_creation_5__prepared );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_CellNotFound, tmp_assign_source_29 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_5__bases );
    tmp_gspread$exceptions_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_5__class_decl_dict );
    tmp_gspread$exceptions_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_5__metaclass );
    tmp_gspread$exceptions_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_5__prepared );
    tmp_gspread$exceptions_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_gspread$exceptions_class_creation_5__bases );
    tmp_gspread$exceptions_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_5__class_decl_dict );
    tmp_gspread$exceptions_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_5__metaclass );
    tmp_gspread$exceptions_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_5__prepared );
    tmp_gspread$exceptions_class_creation_5__prepared = NULL;

    // Tried code:
    tmp_assign_source_30 = PyTuple_New( 1 );
    tmp_tuple_element_11 = GET_STRING_DICT_VALUE( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_GSpreadException );

    if (unlikely( tmp_tuple_element_11 == NULL ))
    {
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GSpreadException );
    }

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18678 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        goto try_except_handler_6;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_assign_source_30, 0, tmp_tuple_element_11 );
    assert( tmp_gspread$exceptions_class_creation_6__bases == NULL );
    tmp_gspread$exceptions_class_creation_6__bases = tmp_assign_source_30;

    tmp_assign_source_31 = PyDict_New();
    assert( tmp_gspread$exceptions_class_creation_6__class_decl_dict == NULL );
    tmp_gspread$exceptions_class_creation_6__class_decl_dict = tmp_assign_source_31;

    tmp_compare_left_11 = const_str_plain_metaclass;
    tmp_compare_right_11 = tmp_gspread$exceptions_class_creation_6__class_decl_dict;

    tmp_cmp_In_11 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    if ( tmp_cmp_In_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    if ( tmp_cmp_In_11 == 1 )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_dget_dict_6 = tmp_gspread$exceptions_class_creation_6__class_decl_dict;

    tmp_dget_key_6 = const_str_plain_metaclass;
    tmp_class_meta_6 = DICT_GET_ITEM( tmp_dget_dict_6, tmp_dget_key_6 );
    if ( tmp_class_meta_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_cond_value_6 = tmp_gspread$exceptions_class_creation_6__bases;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    tmp_subscribed_name_6 = tmp_gspread$exceptions_class_creation_6__bases;

    tmp_subscript_name_6 = const_int_0;
    tmp_type_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_type_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    tmp_class_meta_6 = BUILTIN_TYPE1( tmp_type_arg_6 );
    Py_DECREF( tmp_type_arg_6 );
    if ( tmp_class_meta_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_class_meta_6 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_6 != NULL );
    Py_INCREF( tmp_class_meta_6 );
    condexpr_end_17:;
    condexpr_end_16:;
    tmp_class_bases_6 = tmp_gspread$exceptions_class_creation_6__bases;

    tmp_assign_source_32 = SELECT_METACLASS( tmp_class_meta_6, tmp_class_bases_6 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_6 );

        exception_lineno = 26;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_class_meta_6 );
    assert( tmp_gspread$exceptions_class_creation_6__metaclass == NULL );
    tmp_gspread$exceptions_class_creation_6__metaclass = tmp_assign_source_32;

    tmp_compare_left_12 = const_str_plain_metaclass;
    tmp_compare_right_12 = tmp_gspread$exceptions_class_creation_6__class_decl_dict;

    tmp_cmp_In_12 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    if ( tmp_cmp_In_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    if ( tmp_cmp_In_12 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_remove_dict = tmp_gspread$exceptions_class_creation_6__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    branch_no_6:;
    tmp_hasattr_source_6 = tmp_gspread$exceptions_class_creation_6__metaclass;

    tmp_hasattr_attr_6 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_6, tmp_hasattr_attr_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_18;
    }
    else
    {
        goto condexpr_false_18;
    }
    condexpr_true_18:;
    tmp_source_name_6 = tmp_gspread$exceptions_class_creation_6__metaclass;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    tmp_args_name_6 = PyTuple_New( 2 );
    tmp_tuple_element_12 = const_str_plain_NoValidUrlKeyFound;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = tmp_gspread$exceptions_class_creation_6__bases;

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_12 );
    tmp_kw_name_6 = tmp_gspread$exceptions_class_creation_6__class_decl_dict;

    frame_module->f_lineno = 26;
    tmp_assign_source_33 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_33 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_gspread$exceptions_class_creation_6__prepared == NULL );
    tmp_gspread$exceptions_class_creation_6__prepared = tmp_assign_source_33;

    tmp_assign_source_34 = impl_class_6_NoValidUrlKeyFound_of_gspread$exceptions( tmp_gspread$exceptions_class_creation_6__bases, tmp_gspread$exceptions_class_creation_6__class_decl_dict, tmp_gspread$exceptions_class_creation_6__metaclass, tmp_gspread$exceptions_class_creation_6__prepared );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_NoValidUrlKeyFound, tmp_assign_source_34 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_6__bases );
    tmp_gspread$exceptions_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_6__class_decl_dict );
    tmp_gspread$exceptions_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_6__metaclass );
    tmp_gspread$exceptions_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_6__prepared );
    tmp_gspread$exceptions_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_gspread$exceptions_class_creation_6__bases );
    tmp_gspread$exceptions_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_6__class_decl_dict );
    tmp_gspread$exceptions_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_6__metaclass );
    tmp_gspread$exceptions_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_6__prepared );
    tmp_gspread$exceptions_class_creation_6__prepared = NULL;

    // Tried code:
    tmp_assign_source_35 = PyTuple_New( 1 );
    tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_GSpreadException );

    if (unlikely( tmp_tuple_element_13 == NULL ))
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GSpreadException );
    }

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18678 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        goto try_except_handler_7;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_35, 0, tmp_tuple_element_13 );
    assert( tmp_gspread$exceptions_class_creation_7__bases == NULL );
    tmp_gspread$exceptions_class_creation_7__bases = tmp_assign_source_35;

    tmp_assign_source_36 = PyDict_New();
    assert( tmp_gspread$exceptions_class_creation_7__class_decl_dict == NULL );
    tmp_gspread$exceptions_class_creation_7__class_decl_dict = tmp_assign_source_36;

    tmp_compare_left_13 = const_str_plain_metaclass;
    tmp_compare_right_13 = tmp_gspread$exceptions_class_creation_7__class_decl_dict;

    tmp_cmp_In_13 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    if ( tmp_cmp_In_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto try_except_handler_7;
    }
    if ( tmp_cmp_In_13 == 1 )
    {
        goto condexpr_true_19;
    }
    else
    {
        goto condexpr_false_19;
    }
    condexpr_true_19:;
    tmp_dget_dict_7 = tmp_gspread$exceptions_class_creation_7__class_decl_dict;

    tmp_dget_key_7 = const_str_plain_metaclass;
    tmp_class_meta_7 = DICT_GET_ITEM( tmp_dget_dict_7, tmp_dget_key_7 );
    if ( tmp_class_meta_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto try_except_handler_7;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_cond_value_7 = tmp_gspread$exceptions_class_creation_7__bases;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto condexpr_true_20;
    }
    else
    {
        goto condexpr_false_20;
    }
    condexpr_true_20:;
    tmp_subscribed_name_7 = tmp_gspread$exceptions_class_creation_7__bases;

    tmp_subscript_name_7 = const_int_0;
    tmp_type_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_type_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto try_except_handler_7;
    }
    tmp_class_meta_7 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_class_meta_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto try_except_handler_7;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_class_meta_7 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_7 != NULL );
    Py_INCREF( tmp_class_meta_7 );
    condexpr_end_20:;
    condexpr_end_19:;
    tmp_class_bases_7 = tmp_gspread$exceptions_class_creation_7__bases;

    tmp_assign_source_37 = SELECT_METACLASS( tmp_class_meta_7, tmp_class_bases_7 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_7 );

        exception_lineno = 29;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_class_meta_7 );
    assert( tmp_gspread$exceptions_class_creation_7__metaclass == NULL );
    tmp_gspread$exceptions_class_creation_7__metaclass = tmp_assign_source_37;

    tmp_compare_left_14 = const_str_plain_metaclass;
    tmp_compare_right_14 = tmp_gspread$exceptions_class_creation_7__class_decl_dict;

    tmp_cmp_In_14 = PySequence_Contains( tmp_compare_right_14, tmp_compare_left_14 );
    if ( tmp_cmp_In_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto try_except_handler_7;
    }
    if ( tmp_cmp_In_14 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_remove_dict = tmp_gspread$exceptions_class_creation_7__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto try_except_handler_7;
    }
    branch_no_7:;
    tmp_hasattr_source_7 = tmp_gspread$exceptions_class_creation_7__metaclass;

    tmp_hasattr_attr_7 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_7, tmp_hasattr_attr_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto try_except_handler_7;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_21;
    }
    else
    {
        goto condexpr_false_21;
    }
    condexpr_true_21:;
    tmp_source_name_7 = tmp_gspread$exceptions_class_creation_7__metaclass;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto try_except_handler_7;
    }
    tmp_args_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_14 = const_str_plain_UnsupportedFeedTypeError;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = tmp_gspread$exceptions_class_creation_7__bases;

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_14 );
    tmp_kw_name_7 = tmp_gspread$exceptions_class_creation_7__class_decl_dict;

    frame_module->f_lineno = 29;
    tmp_assign_source_38 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto try_except_handler_7;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_assign_source_38 = PyDict_New();
    condexpr_end_21:;
    assert( tmp_gspread$exceptions_class_creation_7__prepared == NULL );
    tmp_gspread$exceptions_class_creation_7__prepared = tmp_assign_source_38;

    tmp_assign_source_39 = impl_class_7_UnsupportedFeedTypeError_of_gspread$exceptions( tmp_gspread$exceptions_class_creation_7__bases, tmp_gspread$exceptions_class_creation_7__class_decl_dict, tmp_gspread$exceptions_class_creation_7__metaclass, tmp_gspread$exceptions_class_creation_7__prepared );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_UnsupportedFeedTypeError, tmp_assign_source_39 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_7__bases );
    tmp_gspread$exceptions_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_7__class_decl_dict );
    tmp_gspread$exceptions_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_7__metaclass );
    tmp_gspread$exceptions_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_7__prepared );
    tmp_gspread$exceptions_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_gspread$exceptions_class_creation_7__bases );
    tmp_gspread$exceptions_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_7__class_decl_dict );
    tmp_gspread$exceptions_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_7__metaclass );
    tmp_gspread$exceptions_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_7__prepared );
    tmp_gspread$exceptions_class_creation_7__prepared = NULL;

    // Tried code:
    tmp_assign_source_40 = PyTuple_New( 1 );
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_GSpreadException );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GSpreadException );
    }

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_40 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18678 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        goto try_except_handler_8;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_assign_source_40, 0, tmp_tuple_element_15 );
    assert( tmp_gspread$exceptions_class_creation_8__bases == NULL );
    tmp_gspread$exceptions_class_creation_8__bases = tmp_assign_source_40;

    tmp_assign_source_41 = PyDict_New();
    assert( tmp_gspread$exceptions_class_creation_8__class_decl_dict == NULL );
    tmp_gspread$exceptions_class_creation_8__class_decl_dict = tmp_assign_source_41;

    tmp_compare_left_15 = const_str_plain_metaclass;
    tmp_compare_right_15 = tmp_gspread$exceptions_class_creation_8__class_decl_dict;

    tmp_cmp_In_15 = PySequence_Contains( tmp_compare_right_15, tmp_compare_left_15 );
    if ( tmp_cmp_In_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_8;
    }
    if ( tmp_cmp_In_15 == 1 )
    {
        goto condexpr_true_22;
    }
    else
    {
        goto condexpr_false_22;
    }
    condexpr_true_22:;
    tmp_dget_dict_8 = tmp_gspread$exceptions_class_creation_8__class_decl_dict;

    tmp_dget_key_8 = const_str_plain_metaclass;
    tmp_class_meta_8 = DICT_GET_ITEM( tmp_dget_dict_8, tmp_dget_key_8 );
    if ( tmp_class_meta_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_8;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_cond_value_8 = tmp_gspread$exceptions_class_creation_8__bases;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_8;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto condexpr_true_23;
    }
    else
    {
        goto condexpr_false_23;
    }
    condexpr_true_23:;
    tmp_subscribed_name_8 = tmp_gspread$exceptions_class_creation_8__bases;

    tmp_subscript_name_8 = const_int_0;
    tmp_type_arg_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_type_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_8;
    }
    tmp_class_meta_8 = BUILTIN_TYPE1( tmp_type_arg_8 );
    Py_DECREF( tmp_type_arg_8 );
    if ( tmp_class_meta_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_8;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_class_meta_8 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_8 != NULL );
    Py_INCREF( tmp_class_meta_8 );
    condexpr_end_23:;
    condexpr_end_22:;
    tmp_class_bases_8 = tmp_gspread$exceptions_class_creation_8__bases;

    tmp_assign_source_42 = SELECT_METACLASS( tmp_class_meta_8, tmp_class_bases_8 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_8 );

        exception_lineno = 32;
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_class_meta_8 );
    assert( tmp_gspread$exceptions_class_creation_8__metaclass == NULL );
    tmp_gspread$exceptions_class_creation_8__metaclass = tmp_assign_source_42;

    tmp_compare_left_16 = const_str_plain_metaclass;
    tmp_compare_right_16 = tmp_gspread$exceptions_class_creation_8__class_decl_dict;

    tmp_cmp_In_16 = PySequence_Contains( tmp_compare_right_16, tmp_compare_left_16 );
    if ( tmp_cmp_In_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_8;
    }
    if ( tmp_cmp_In_16 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_remove_dict = tmp_gspread$exceptions_class_creation_8__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_8;
    }
    branch_no_8:;
    tmp_hasattr_source_8 = tmp_gspread$exceptions_class_creation_8__metaclass;

    tmp_hasattr_attr_8 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_8, tmp_hasattr_attr_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_8;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_24;
    }
    else
    {
        goto condexpr_false_24;
    }
    condexpr_true_24:;
    tmp_source_name_8 = tmp_gspread$exceptions_class_creation_8__metaclass;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_8;
    }
    tmp_args_name_8 = PyTuple_New( 2 );
    tmp_tuple_element_16 = const_str_plain_UrlParameterMissing;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = tmp_gspread$exceptions_class_creation_8__bases;

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_16 );
    tmp_kw_name_8 = tmp_gspread$exceptions_class_creation_8__class_decl_dict;

    frame_module->f_lineno = 32;
    tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_8;
    }
    goto condexpr_end_24;
    condexpr_false_24:;
    tmp_assign_source_43 = PyDict_New();
    condexpr_end_24:;
    assert( tmp_gspread$exceptions_class_creation_8__prepared == NULL );
    tmp_gspread$exceptions_class_creation_8__prepared = tmp_assign_source_43;

    tmp_assign_source_44 = impl_class_8_UrlParameterMissing_of_gspread$exceptions( tmp_gspread$exceptions_class_creation_8__bases, tmp_gspread$exceptions_class_creation_8__class_decl_dict, tmp_gspread$exceptions_class_creation_8__metaclass, tmp_gspread$exceptions_class_creation_8__prepared );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_UrlParameterMissing, tmp_assign_source_44 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_8__bases );
    tmp_gspread$exceptions_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_8__class_decl_dict );
    tmp_gspread$exceptions_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_8__metaclass );
    tmp_gspread$exceptions_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_8__prepared );
    tmp_gspread$exceptions_class_creation_8__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_gspread$exceptions_class_creation_8__bases );
    tmp_gspread$exceptions_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_8__class_decl_dict );
    tmp_gspread$exceptions_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_8__metaclass );
    tmp_gspread$exceptions_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_8__prepared );
    tmp_gspread$exceptions_class_creation_8__prepared = NULL;

    // Tried code:
    tmp_assign_source_45 = PyTuple_New( 1 );
    tmp_tuple_element_17 = GET_STRING_DICT_VALUE( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_GSpreadException );

    if (unlikely( tmp_tuple_element_17 == NULL ))
    {
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GSpreadException );
    }

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_45 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18678 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_assign_source_45, 0, tmp_tuple_element_17 );
    assert( tmp_gspread$exceptions_class_creation_9__bases == NULL );
    tmp_gspread$exceptions_class_creation_9__bases = tmp_assign_source_45;

    tmp_assign_source_46 = PyDict_New();
    assert( tmp_gspread$exceptions_class_creation_9__class_decl_dict == NULL );
    tmp_gspread$exceptions_class_creation_9__class_decl_dict = tmp_assign_source_46;

    tmp_compare_left_17 = const_str_plain_metaclass;
    tmp_compare_right_17 = tmp_gspread$exceptions_class_creation_9__class_decl_dict;

    tmp_cmp_In_17 = PySequence_Contains( tmp_compare_right_17, tmp_compare_left_17 );
    if ( tmp_cmp_In_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_9;
    }
    if ( tmp_cmp_In_17 == 1 )
    {
        goto condexpr_true_25;
    }
    else
    {
        goto condexpr_false_25;
    }
    condexpr_true_25:;
    tmp_dget_dict_9 = tmp_gspread$exceptions_class_creation_9__class_decl_dict;

    tmp_dget_key_9 = const_str_plain_metaclass;
    tmp_class_meta_9 = DICT_GET_ITEM( tmp_dget_dict_9, tmp_dget_key_9 );
    if ( tmp_class_meta_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_9;
    }
    goto condexpr_end_25;
    condexpr_false_25:;
    tmp_cond_value_9 = tmp_gspread$exceptions_class_creation_9__bases;

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_9;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto condexpr_true_26;
    }
    else
    {
        goto condexpr_false_26;
    }
    condexpr_true_26:;
    tmp_subscribed_name_9 = tmp_gspread$exceptions_class_creation_9__bases;

    tmp_subscript_name_9 = const_int_0;
    tmp_type_arg_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_type_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_9;
    }
    tmp_class_meta_9 = BUILTIN_TYPE1( tmp_type_arg_9 );
    Py_DECREF( tmp_type_arg_9 );
    if ( tmp_class_meta_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_9;
    }
    goto condexpr_end_26;
    condexpr_false_26:;
    tmp_class_meta_9 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_9 != NULL );
    Py_INCREF( tmp_class_meta_9 );
    condexpr_end_26:;
    condexpr_end_25:;
    tmp_class_bases_9 = tmp_gspread$exceptions_class_creation_9__bases;

    tmp_assign_source_47 = SELECT_METACLASS( tmp_class_meta_9, tmp_class_bases_9 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_9 );

        exception_lineno = 35;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_class_meta_9 );
    assert( tmp_gspread$exceptions_class_creation_9__metaclass == NULL );
    tmp_gspread$exceptions_class_creation_9__metaclass = tmp_assign_source_47;

    tmp_compare_left_18 = const_str_plain_metaclass;
    tmp_compare_right_18 = tmp_gspread$exceptions_class_creation_9__class_decl_dict;

    tmp_cmp_In_18 = PySequence_Contains( tmp_compare_right_18, tmp_compare_left_18 );
    if ( tmp_cmp_In_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_9;
    }
    if ( tmp_cmp_In_18 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_remove_dict = tmp_gspread$exceptions_class_creation_9__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_9;
    }
    branch_no_9:;
    tmp_hasattr_source_9 = tmp_gspread$exceptions_class_creation_9__metaclass;

    tmp_hasattr_attr_9 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_9, tmp_hasattr_attr_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_9;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_27;
    }
    else
    {
        goto condexpr_false_27;
    }
    condexpr_true_27:;
    tmp_source_name_9 = tmp_gspread$exceptions_class_creation_9__metaclass;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_9;
    }
    tmp_args_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_18 = const_str_plain_IncorrectCellLabel;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_18 );
    tmp_tuple_element_18 = tmp_gspread$exceptions_class_creation_9__bases;

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_18 );
    tmp_kw_name_9 = tmp_gspread$exceptions_class_creation_9__class_decl_dict;

    frame_module->f_lineno = 35;
    tmp_assign_source_48 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_9;
    }
    goto condexpr_end_27;
    condexpr_false_27:;
    tmp_assign_source_48 = PyDict_New();
    condexpr_end_27:;
    assert( tmp_gspread$exceptions_class_creation_9__prepared == NULL );
    tmp_gspread$exceptions_class_creation_9__prepared = tmp_assign_source_48;

    tmp_assign_source_49 = impl_class_9_IncorrectCellLabel_of_gspread$exceptions( tmp_gspread$exceptions_class_creation_9__bases, tmp_gspread$exceptions_class_creation_9__class_decl_dict, tmp_gspread$exceptions_class_creation_9__metaclass, tmp_gspread$exceptions_class_creation_9__prepared );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_IncorrectCellLabel, tmp_assign_source_49 );
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_9__bases );
    tmp_gspread$exceptions_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_9__class_decl_dict );
    tmp_gspread$exceptions_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_9__metaclass );
    tmp_gspread$exceptions_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_9__prepared );
    tmp_gspread$exceptions_class_creation_9__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_gspread$exceptions_class_creation_9__bases );
    tmp_gspread$exceptions_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_9__class_decl_dict );
    tmp_gspread$exceptions_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_9__metaclass );
    tmp_gspread$exceptions_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_9__prepared );
    tmp_gspread$exceptions_class_creation_9__prepared = NULL;

    // Tried code:
    tmp_assign_source_50 = PyTuple_New( 1 );
    tmp_tuple_element_19 = GET_STRING_DICT_VALUE( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_GSpreadException );

    if (unlikely( tmp_tuple_element_19 == NULL ))
    {
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GSpreadException );
    }

    if ( tmp_tuple_element_19 == NULL )
    {
        Py_DECREF( tmp_assign_source_50 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18678 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        goto try_except_handler_10;
    }

    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_assign_source_50, 0, tmp_tuple_element_19 );
    assert( tmp_gspread$exceptions_class_creation_10__bases == NULL );
    tmp_gspread$exceptions_class_creation_10__bases = tmp_assign_source_50;

    tmp_assign_source_51 = PyDict_New();
    assert( tmp_gspread$exceptions_class_creation_10__class_decl_dict == NULL );
    tmp_gspread$exceptions_class_creation_10__class_decl_dict = tmp_assign_source_51;

    tmp_compare_left_19 = const_str_plain_metaclass;
    tmp_compare_right_19 = tmp_gspread$exceptions_class_creation_10__class_decl_dict;

    tmp_cmp_In_19 = PySequence_Contains( tmp_compare_right_19, tmp_compare_left_19 );
    if ( tmp_cmp_In_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_10;
    }
    if ( tmp_cmp_In_19 == 1 )
    {
        goto condexpr_true_28;
    }
    else
    {
        goto condexpr_false_28;
    }
    condexpr_true_28:;
    tmp_dget_dict_10 = tmp_gspread$exceptions_class_creation_10__class_decl_dict;

    tmp_dget_key_10 = const_str_plain_metaclass;
    tmp_class_meta_10 = DICT_GET_ITEM( tmp_dget_dict_10, tmp_dget_key_10 );
    if ( tmp_class_meta_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_10;
    }
    goto condexpr_end_28;
    condexpr_false_28:;
    tmp_cond_value_10 = tmp_gspread$exceptions_class_creation_10__bases;

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_10;
    }
    if ( tmp_cond_truth_10 == 1 )
    {
        goto condexpr_true_29;
    }
    else
    {
        goto condexpr_false_29;
    }
    condexpr_true_29:;
    tmp_subscribed_name_10 = tmp_gspread$exceptions_class_creation_10__bases;

    tmp_subscript_name_10 = const_int_0;
    tmp_type_arg_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_type_arg_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_10;
    }
    tmp_class_meta_10 = BUILTIN_TYPE1( tmp_type_arg_10 );
    Py_DECREF( tmp_type_arg_10 );
    if ( tmp_class_meta_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_10;
    }
    goto condexpr_end_29;
    condexpr_false_29:;
    tmp_class_meta_10 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_10 != NULL );
    Py_INCREF( tmp_class_meta_10 );
    condexpr_end_29:;
    condexpr_end_28:;
    tmp_class_bases_10 = tmp_gspread$exceptions_class_creation_10__bases;

    tmp_assign_source_52 = SELECT_METACLASS( tmp_class_meta_10, tmp_class_bases_10 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_10 );

        exception_lineno = 38;
        goto try_except_handler_10;
    }
    Py_DECREF( tmp_class_meta_10 );
    assert( tmp_gspread$exceptions_class_creation_10__metaclass == NULL );
    tmp_gspread$exceptions_class_creation_10__metaclass = tmp_assign_source_52;

    tmp_compare_left_20 = const_str_plain_metaclass;
    tmp_compare_right_20 = tmp_gspread$exceptions_class_creation_10__class_decl_dict;

    tmp_cmp_In_20 = PySequence_Contains( tmp_compare_right_20, tmp_compare_left_20 );
    if ( tmp_cmp_In_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_10;
    }
    if ( tmp_cmp_In_20 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_remove_dict = tmp_gspread$exceptions_class_creation_10__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_10;
    }
    branch_no_10:;
    tmp_hasattr_source_10 = tmp_gspread$exceptions_class_creation_10__metaclass;

    tmp_hasattr_attr_10 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_10, tmp_hasattr_attr_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_10;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_30;
    }
    else
    {
        goto condexpr_false_30;
    }
    condexpr_true_30:;
    tmp_source_name_10 = tmp_gspread$exceptions_class_creation_10__metaclass;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_10;
    }
    tmp_args_name_10 = PyTuple_New( 2 );
    tmp_tuple_element_20 = const_str_plain_UpdateCellError;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = tmp_gspread$exceptions_class_creation_10__bases;

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_20 );
    tmp_kw_name_10 = tmp_gspread$exceptions_class_creation_10__class_decl_dict;

    frame_module->f_lineno = 38;
    tmp_assign_source_53 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_10;
    }
    goto condexpr_end_30;
    condexpr_false_30:;
    tmp_assign_source_53 = PyDict_New();
    condexpr_end_30:;
    assert( tmp_gspread$exceptions_class_creation_10__prepared == NULL );
    tmp_gspread$exceptions_class_creation_10__prepared = tmp_assign_source_53;

    tmp_assign_source_54 = impl_class_10_UpdateCellError_of_gspread$exceptions( tmp_gspread$exceptions_class_creation_10__bases, tmp_gspread$exceptions_class_creation_10__class_decl_dict, tmp_gspread$exceptions_class_creation_10__metaclass, tmp_gspread$exceptions_class_creation_10__prepared );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_UpdateCellError, tmp_assign_source_54 );
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_10__bases );
    tmp_gspread$exceptions_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_10__class_decl_dict );
    tmp_gspread$exceptions_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_10__metaclass );
    tmp_gspread$exceptions_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_10__prepared );
    tmp_gspread$exceptions_class_creation_10__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF( tmp_gspread$exceptions_class_creation_10__bases );
    tmp_gspread$exceptions_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_10__class_decl_dict );
    tmp_gspread$exceptions_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_10__metaclass );
    tmp_gspread$exceptions_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_10__prepared );
    tmp_gspread$exceptions_class_creation_10__prepared = NULL;

    // Tried code:
    tmp_assign_source_55 = PyTuple_New( 1 );
    tmp_tuple_element_21 = GET_STRING_DICT_VALUE( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_GSpreadException );

    if (unlikely( tmp_tuple_element_21 == NULL ))
    {
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GSpreadException );
    }

    if ( tmp_tuple_element_21 == NULL )
    {
        Py_DECREF( tmp_assign_source_55 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18678 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        goto try_except_handler_11;
    }

    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_assign_source_55, 0, tmp_tuple_element_21 );
    assert( tmp_gspread$exceptions_class_creation_11__bases == NULL );
    tmp_gspread$exceptions_class_creation_11__bases = tmp_assign_source_55;

    tmp_assign_source_56 = PyDict_New();
    assert( tmp_gspread$exceptions_class_creation_11__class_decl_dict == NULL );
    tmp_gspread$exceptions_class_creation_11__class_decl_dict = tmp_assign_source_56;

    tmp_compare_left_21 = const_str_plain_metaclass;
    tmp_compare_right_21 = tmp_gspread$exceptions_class_creation_11__class_decl_dict;

    tmp_cmp_In_21 = PySequence_Contains( tmp_compare_right_21, tmp_compare_left_21 );
    if ( tmp_cmp_In_21 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_11;
    }
    if ( tmp_cmp_In_21 == 1 )
    {
        goto condexpr_true_31;
    }
    else
    {
        goto condexpr_false_31;
    }
    condexpr_true_31:;
    tmp_dget_dict_11 = tmp_gspread$exceptions_class_creation_11__class_decl_dict;

    tmp_dget_key_11 = const_str_plain_metaclass;
    tmp_class_meta_11 = DICT_GET_ITEM( tmp_dget_dict_11, tmp_dget_key_11 );
    if ( tmp_class_meta_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_11;
    }
    goto condexpr_end_31;
    condexpr_false_31:;
    tmp_cond_value_11 = tmp_gspread$exceptions_class_creation_11__bases;

    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_11;
    }
    if ( tmp_cond_truth_11 == 1 )
    {
        goto condexpr_true_32;
    }
    else
    {
        goto condexpr_false_32;
    }
    condexpr_true_32:;
    tmp_subscribed_name_11 = tmp_gspread$exceptions_class_creation_11__bases;

    tmp_subscript_name_11 = const_int_0;
    tmp_type_arg_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_type_arg_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_11;
    }
    tmp_class_meta_11 = BUILTIN_TYPE1( tmp_type_arg_11 );
    Py_DECREF( tmp_type_arg_11 );
    if ( tmp_class_meta_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_11;
    }
    goto condexpr_end_32;
    condexpr_false_32:;
    tmp_class_meta_11 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_11 != NULL );
    Py_INCREF( tmp_class_meta_11 );
    condexpr_end_32:;
    condexpr_end_31:;
    tmp_class_bases_11 = tmp_gspread$exceptions_class_creation_11__bases;

    tmp_assign_source_57 = SELECT_METACLASS( tmp_class_meta_11, tmp_class_bases_11 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_11 );

        exception_lineno = 41;
        goto try_except_handler_11;
    }
    Py_DECREF( tmp_class_meta_11 );
    assert( tmp_gspread$exceptions_class_creation_11__metaclass == NULL );
    tmp_gspread$exceptions_class_creation_11__metaclass = tmp_assign_source_57;

    tmp_compare_left_22 = const_str_plain_metaclass;
    tmp_compare_right_22 = tmp_gspread$exceptions_class_creation_11__class_decl_dict;

    tmp_cmp_In_22 = PySequence_Contains( tmp_compare_right_22, tmp_compare_left_22 );
    if ( tmp_cmp_In_22 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_11;
    }
    if ( tmp_cmp_In_22 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_remove_dict = tmp_gspread$exceptions_class_creation_11__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_11;
    }
    branch_no_11:;
    tmp_hasattr_source_11 = tmp_gspread$exceptions_class_creation_11__metaclass;

    tmp_hasattr_attr_11 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_11, tmp_hasattr_attr_11 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_11;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_33;
    }
    else
    {
        goto condexpr_false_33;
    }
    condexpr_true_33:;
    tmp_source_name_11 = tmp_gspread$exceptions_class_creation_11__metaclass;

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___prepare__ );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_11;
    }
    tmp_args_name_11 = PyTuple_New( 2 );
    tmp_tuple_element_22 = const_str_plain_RequestError;
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = tmp_gspread$exceptions_class_creation_11__bases;

    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_22 );
    tmp_kw_name_11 = tmp_gspread$exceptions_class_creation_11__class_decl_dict;

    frame_module->f_lineno = 41;
    tmp_assign_source_58 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_11 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_11;
    }
    goto condexpr_end_33;
    condexpr_false_33:;
    tmp_assign_source_58 = PyDict_New();
    condexpr_end_33:;
    assert( tmp_gspread$exceptions_class_creation_11__prepared == NULL );
    tmp_gspread$exceptions_class_creation_11__prepared = tmp_assign_source_58;

    tmp_assign_source_59 = impl_class_11_RequestError_of_gspread$exceptions( tmp_gspread$exceptions_class_creation_11__bases, tmp_gspread$exceptions_class_creation_11__class_decl_dict, tmp_gspread$exceptions_class_creation_11__metaclass, tmp_gspread$exceptions_class_creation_11__prepared );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_11;
    }
    UPDATE_STRING_DICT1( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError, tmp_assign_source_59 );
    goto try_end_11;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_11__bases );
    tmp_gspread$exceptions_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_11__class_decl_dict );
    tmp_gspread$exceptions_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_11__metaclass );
    tmp_gspread$exceptions_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_11__prepared );
    tmp_gspread$exceptions_class_creation_11__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_gspread$exceptions_class_creation_11__bases );
    tmp_gspread$exceptions_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_11__class_decl_dict );
    tmp_gspread$exceptions_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_11__metaclass );
    tmp_gspread$exceptions_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_11__prepared );
    tmp_gspread$exceptions_class_creation_11__prepared = NULL;

    // Tried code:
    tmp_assign_source_60 = PyTuple_New( 1 );
    tmp_tuple_element_23 = GET_STRING_DICT_VALUE( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_tuple_element_23 == NULL ))
    {
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_tuple_element_23 == NULL )
    {
        Py_DECREF( tmp_assign_source_60 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18616 ], 34, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        goto try_except_handler_12;
    }

    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_assign_source_60, 0, tmp_tuple_element_23 );
    assert( tmp_gspread$exceptions_class_creation_12__bases == NULL );
    tmp_gspread$exceptions_class_creation_12__bases = tmp_assign_source_60;

    tmp_assign_source_61 = PyDict_New();
    assert( tmp_gspread$exceptions_class_creation_12__class_decl_dict == NULL );
    tmp_gspread$exceptions_class_creation_12__class_decl_dict = tmp_assign_source_61;

    tmp_compare_left_23 = const_str_plain_metaclass;
    tmp_compare_right_23 = tmp_gspread$exceptions_class_creation_12__class_decl_dict;

    tmp_cmp_In_23 = PySequence_Contains( tmp_compare_right_23, tmp_compare_left_23 );
    if ( tmp_cmp_In_23 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_12;
    }
    if ( tmp_cmp_In_23 == 1 )
    {
        goto condexpr_true_34;
    }
    else
    {
        goto condexpr_false_34;
    }
    condexpr_true_34:;
    tmp_dget_dict_12 = tmp_gspread$exceptions_class_creation_12__class_decl_dict;

    tmp_dget_key_12 = const_str_plain_metaclass;
    tmp_class_meta_12 = DICT_GET_ITEM( tmp_dget_dict_12, tmp_dget_key_12 );
    if ( tmp_class_meta_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_12;
    }
    goto condexpr_end_34;
    condexpr_false_34:;
    tmp_cond_value_12 = tmp_gspread$exceptions_class_creation_12__bases;

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_12;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto condexpr_true_35;
    }
    else
    {
        goto condexpr_false_35;
    }
    condexpr_true_35:;
    tmp_subscribed_name_12 = tmp_gspread$exceptions_class_creation_12__bases;

    tmp_subscript_name_12 = const_int_0;
    tmp_type_arg_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
    if ( tmp_type_arg_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_12;
    }
    tmp_class_meta_12 = BUILTIN_TYPE1( tmp_type_arg_12 );
    Py_DECREF( tmp_type_arg_12 );
    if ( tmp_class_meta_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_12;
    }
    goto condexpr_end_35;
    condexpr_false_35:;
    tmp_class_meta_12 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_12 != NULL );
    Py_INCREF( tmp_class_meta_12 );
    condexpr_end_35:;
    condexpr_end_34:;
    tmp_class_bases_12 = tmp_gspread$exceptions_class_creation_12__bases;

    tmp_assign_source_62 = SELECT_METACLASS( tmp_class_meta_12, tmp_class_bases_12 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_12 );

        exception_lineno = 44;
        goto try_except_handler_12;
    }
    Py_DECREF( tmp_class_meta_12 );
    assert( tmp_gspread$exceptions_class_creation_12__metaclass == NULL );
    tmp_gspread$exceptions_class_creation_12__metaclass = tmp_assign_source_62;

    tmp_compare_left_24 = const_str_plain_metaclass;
    tmp_compare_right_24 = tmp_gspread$exceptions_class_creation_12__class_decl_dict;

    tmp_cmp_In_24 = PySequence_Contains( tmp_compare_right_24, tmp_compare_left_24 );
    if ( tmp_cmp_In_24 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_12;
    }
    if ( tmp_cmp_In_24 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_remove_dict = tmp_gspread$exceptions_class_creation_12__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_12;
    }
    branch_no_12:;
    tmp_hasattr_source_12 = tmp_gspread$exceptions_class_creation_12__metaclass;

    tmp_hasattr_attr_12 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_12, tmp_hasattr_attr_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_12;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_36;
    }
    else
    {
        goto condexpr_false_36;
    }
    condexpr_true_36:;
    tmp_source_name_12 = tmp_gspread$exceptions_class_creation_12__metaclass;

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___prepare__ );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_12;
    }
    tmp_args_name_12 = PyTuple_New( 2 );
    tmp_tuple_element_24 = const_str_plain_HTTPError;
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_24 );
    tmp_tuple_element_24 = tmp_gspread$exceptions_class_creation_12__bases;

    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_24 );
    tmp_kw_name_12 = tmp_gspread$exceptions_class_creation_12__class_decl_dict;

    frame_module->f_lineno = 44;
    tmp_assign_source_63 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_12;
    }
    goto condexpr_end_36;
    condexpr_false_36:;
    tmp_assign_source_63 = PyDict_New();
    condexpr_end_36:;
    assert( tmp_gspread$exceptions_class_creation_12__prepared == NULL );
    tmp_gspread$exceptions_class_creation_12__prepared = tmp_assign_source_63;

    tmp_assign_source_64 = impl_class_12_HTTPError_of_gspread$exceptions( tmp_gspread$exceptions_class_creation_12__bases, tmp_gspread$exceptions_class_creation_12__class_decl_dict, tmp_gspread$exceptions_class_creation_12__metaclass, tmp_gspread$exceptions_class_creation_12__prepared );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_gspread$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError, tmp_assign_source_64 );
    goto try_end_12;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_12__bases );
    tmp_gspread$exceptions_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_12__class_decl_dict );
    tmp_gspread$exceptions_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_12__metaclass );
    tmp_gspread$exceptions_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_12__prepared );
    tmp_gspread$exceptions_class_creation_12__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_module, exception_lineno );
    }
    else if ( exception_tb->tb_frame != frame_module )
    {
        PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_module, exception_lineno );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }

    // Put the previous frame back on top.
    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_module->f_executing -= 1;
#endif
    Py_DECREF( frame_module );

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_gspread$exceptions_class_creation_12__bases );
    tmp_gspread$exceptions_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_12__class_decl_dict );
    tmp_gspread$exceptions_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_12__metaclass );
    tmp_gspread$exceptions_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_gspread$exceptions_class_creation_12__prepared );
    tmp_gspread$exceptions_class_creation_12__prepared = NULL;


    return MOD_RETURN_VALUE( module_gspread$exceptions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
