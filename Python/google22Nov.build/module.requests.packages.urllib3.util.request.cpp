// Generated code for Python source for module 'requests.packages.urllib3.util.request'
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

// The _module_requests$packages$urllib3$util$request is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_requests$packages$urllib3$util$request;
PyDictObject *moduledict_requests$packages$urllib3$util$request;

// The module constants used
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_headers;
static PyObject *const_tuple_bf13d4977692576812fdd050c4821ab2_tuple;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain_str;
static PyObject *const_str_plain_keep_alive;
static PyObject *const_str_digest_82b8c5b6b5b738239f3340307cd248c4;
static PyObject *const_str_plain_ACCEPT_ENCODING;
extern PyObject *const_str_plain_list;
extern PyObject *const_tuple_none_none_none_none_none_none_tuple;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_77bc5054242d5f3e5269bd07a4342f1b;
extern PyObject *const_str_plain_connection;
extern PyObject *const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537;
static PyObject *const_str_plain_accept_encoding;
extern PyObject *const_str_plain_user_agent;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2;
extern PyObject *const_str_digest_a97b46010ba2d7a042fbaf3749619f69;
extern PyObject *const_tuple_str_plain_b_tuple;
extern PyObject *const_str_digest_4fc29877723e0f5f2c0ba56dea944579;
static PyObject *const_str_digest_a6297e3ea19feea88e6f643ddcac2603;
extern PyObject *const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2;
extern PyObject *const_str_plain_base64;
extern PyObject *const_str_digest_edd9cb70c3537b6a2b58ab6b4487087a;
static PyObject *const_str_plain_disable_cache;
extern PyObject *const_str_plain_b64encode;
extern PyObject *const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_proxy_basic_auth;
static PyObject *const_str_plain_basic_auth;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_make_headers;
static PyObject *const_str_digest_47d4abcbaab2ba783709ab98383a7f12;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_digest_726f4c9a876879b008c85b6851a1570f;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_authorization;
extern PyObject *const_tuple_str_plain_b64encode_tuple;
extern PyObject *const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_bf13d4977692576812fdd050c4821ab2_tuple = PyTuple_New( 7 );
    const_str_plain_keep_alive = UNSTREAM_STRING( &constant_bin[ 819791 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 0, const_str_plain_keep_alive ); Py_INCREF( const_str_plain_keep_alive );
    const_str_plain_accept_encoding = UNSTREAM_STRING( &constant_bin[ 84480 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 1, const_str_plain_accept_encoding ); Py_INCREF( const_str_plain_accept_encoding );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 2, const_str_plain_user_agent ); Py_INCREF( const_str_plain_user_agent );
    const_str_plain_basic_auth = UNSTREAM_STRING( &constant_bin[ 59630 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 3, const_str_plain_basic_auth ); Py_INCREF( const_str_plain_basic_auth );
    const_str_plain_proxy_basic_auth = UNSTREAM_STRING( &constant_bin[ 819801 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 4, const_str_plain_proxy_basic_auth ); Py_INCREF( const_str_plain_proxy_basic_auth );
    const_str_plain_disable_cache = UNSTREAM_STRING( &constant_bin[ 819817 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 5, const_str_plain_disable_cache ); Py_INCREF( const_str_plain_disable_cache );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 6, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    const_str_digest_82b8c5b6b5b738239f3340307cd248c4 = UNSTREAM_STRING( &constant_bin[ 819830 ], 38, 0 );
    const_str_plain_ACCEPT_ENCODING = UNSTREAM_STRING( &constant_bin[ 84531 ], 15, 1 );
    const_str_digest_77bc5054242d5f3e5269bd07a4342f1b = UNSTREAM_STRING( &constant_bin[ 819868 ], 12, 0 );
    const_str_digest_a6297e3ea19feea88e6f643ddcac2603 = UNSTREAM_STRING( &constant_bin[ 819880 ], 71, 0 );
    const_str_digest_47d4abcbaab2ba783709ab98383a7f12 = UNSTREAM_STRING( &constant_bin[ 819951 ], 1035, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$packages$urllib3$util$request( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_75525337fa503328dbd52290dc0a432f;
static PyCodeObject *codeobj_d70f4b3763094ae0d2a0be99384b4b5a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_a6297e3ea19feea88e6f643ddcac2603 );
    codeobj_75525337fa503328dbd52290dc0a432f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_make_headers, 9, const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 6, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_d70f4b3763094ae0d2a0be99384b4b5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request, 0, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_make_headers_of_requests$packages$urllib3$util$request( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_make_headers_of_requests$packages$urllib3$util$request( Nuitka_FunctionObject *self, PyObject *_python_par_keep_alive, PyObject *_python_par_accept_encoding, PyObject *_python_par_user_agent, PyObject *_python_par_basic_auth, PyObject *_python_par_proxy_basic_auth, PyObject *_python_par_disable_cache )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_keep_alive = _python_par_keep_alive;
    PyObject *par_accept_encoding = _python_par_accept_encoding;
    PyObject *par_user_agent = _python_par_user_agent;
    PyObject *par_basic_auth = _python_par_basic_auth;
    PyObject *par_proxy_basic_auth = _python_par_proxy_basic_auth;
    PyObject *par_disable_cache = _python_par_disable_cache;
    PyObject *var_headers = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscribed_6;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    PyObject *tmp_ass_subscript_6;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
    PyObject *tmp_ass_subvalue_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_headers == NULL );
    var_headers = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_75525337fa503328dbd52290dc0a432f, module_requests$packages$urllib3$util$request );
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
    tmp_cond_value_1 = par_accept_encoding;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_isinstance_inst_1 = par_accept_encoding;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_isinstance_inst_2 = par_accept_encoding;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84464 ], 61, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = LOOKUP_BUILTIN( const_str_plain_list );
    assert( tmp_isinstance_cls_2 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_1 = const_str_chr_44;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = par_accept_encoding;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84464 ], 61, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 50;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_accept_encoding;
        par_accept_encoding = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_assign_source_3 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$request, (Nuitka_StringObject *)const_str_plain_ACCEPT_ENCODING );

    if (unlikely( tmp_assign_source_3 == NULL ))
    {
        tmp_assign_source_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACCEPT_ENCODING );
    }

    if ( tmp_assign_source_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84525 ], 37, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = par_accept_encoding;
        par_accept_encoding = tmp_assign_source_3;
        Py_INCREF( par_accept_encoding );
        Py_XDECREF( old );
    }

    branch_end_3:;
    branch_no_2:;
    tmp_ass_subvalue_1 = par_accept_encoding;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84464 ], 61, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = var_headers;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18526 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_cond_value_2 = par_user_agent;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_ass_subvalue_2 = par_user_agent;

    tmp_ass_subscribed_2 = var_headers;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18526 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_digest_726f4c9a876879b008c85b6851a1570f;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_cond_value_3 = par_keep_alive;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_ass_subvalue_3 = const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2;
    tmp_ass_subscribed_3 = var_headers;

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18526 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_3 = const_str_plain_connection;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    tmp_cond_value_4 = par_basic_auth;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_left_name_1 = const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b64encode );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b64encode );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60752 ], 31, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80091 ], 23, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_basic_auth;

    frame_function->f_lineno = 63;
    tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, tmp_args_element_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 63;
    tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_decode );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_c075052d723d6707083e869a0e3659bb;
    frame_function->f_lineno = 63;
    tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_4 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_4 = var_headers;

    if ( tmp_ass_subscribed_4 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18526 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_4 = const_str_plain_authorization;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    tmp_cond_value_5 = par_proxy_basic_auth;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_left_name_2 = const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b64encode );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b64encode );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60752 ], 31, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80091 ], 23, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_proxy_basic_auth;

    frame_function->f_lineno = 67;
    tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, tmp_args_element_name_5 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 67;
    tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_decode );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_digest_c075052d723d6707083e869a0e3659bb;
    frame_function->f_lineno = 67;
    tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_5 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_ass_subvalue_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_5 = var_headers;

    if ( tmp_ass_subscribed_5 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18526 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_5 = const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    Py_DECREF( tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    tmp_cond_value_6 = par_disable_cache;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_ass_subvalue_6 = const_str_digest_a97b46010ba2d7a042fbaf3749619f69;
    tmp_ass_subscribed_6 = var_headers;

    if ( tmp_ass_subscribed_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18526 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_6 = const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    tmp_return_value = var_headers;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18526 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

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
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;
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
            if ( var_headers != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_headers,
                    var_headers
                );
                assert( tmp_res != -1 );

            }
            if ( par_keep_alive != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keep_alive,
                    par_keep_alive
                );
                assert( tmp_res != -1 );

            }
            if ( par_accept_encoding != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_accept_encoding,
                    par_accept_encoding
                );
                assert( tmp_res != -1 );

            }
            if ( par_user_agent != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_user_agent,
                    par_user_agent
                );
                assert( tmp_res != -1 );

            }
            if ( par_basic_auth != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_basic_auth,
                    par_basic_auth
                );
                assert( tmp_res != -1 );

            }
            if ( par_proxy_basic_auth != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_proxy_basic_auth,
                    par_proxy_basic_auth
                );
                assert( tmp_res != -1 );

            }
            if ( par_disable_cache != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_disable_cache,
                    par_disable_cache
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_make_headers_of_requests$packages$urllib3$util$request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_keep_alive );
    par_keep_alive = NULL;

    Py_XDECREF( par_accept_encoding );
    par_accept_encoding = NULL;

    Py_XDECREF( par_user_agent );
    par_user_agent = NULL;

    Py_XDECREF( par_basic_auth );
    par_basic_auth = NULL;

    Py_XDECREF( par_proxy_basic_auth );
    par_proxy_basic_auth = NULL;

    Py_XDECREF( par_disable_cache );
    par_disable_cache = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

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

    Py_XDECREF( par_keep_alive );
    par_keep_alive = NULL;

    Py_XDECREF( par_accept_encoding );
    par_accept_encoding = NULL;

    Py_XDECREF( par_user_agent );
    par_user_agent = NULL;

    Py_XDECREF( par_basic_auth );
    par_basic_auth = NULL;

    Py_XDECREF( par_proxy_basic_auth );
    par_proxy_basic_auth = NULL;

    Py_XDECREF( par_disable_cache );
    par_disable_cache = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_make_headers_of_requests$packages$urllib3$util$request );
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
static PyObject *fparse_function_1_make_headers_of_requests$packages$urllib3$util$request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_keep_alive = NULL;
    PyObject *_python_par_accept_encoding = NULL;
    PyObject *_python_par_user_agent = NULL;
    PyObject *_python_par_basic_auth = NULL;
    PyObject *_python_par_proxy_basic_auth = NULL;
    PyObject *_python_par_disable_cache = NULL;
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
                PyErr_Format( PyExc_TypeError, "make_headers() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_keep_alive == key )
            {
                assert( _python_par_keep_alive == NULL );
                _python_par_keep_alive = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_accept_encoding == key )
            {
                assert( _python_par_accept_encoding == NULL );
                _python_par_accept_encoding = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_user_agent == key )
            {
                assert( _python_par_user_agent == NULL );
                _python_par_user_agent = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_basic_auth == key )
            {
                assert( _python_par_basic_auth == NULL );
                _python_par_basic_auth = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_proxy_basic_auth == key )
            {
                assert( _python_par_proxy_basic_auth == NULL );
                _python_par_proxy_basic_auth = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_disable_cache == key )
            {
                assert( _python_par_disable_cache == NULL );
                _python_par_disable_cache = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_keep_alive, key ) == 1 )
            {
                assert( _python_par_keep_alive == NULL );
                _python_par_keep_alive = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_accept_encoding, key ) == 1 )
            {
                assert( _python_par_accept_encoding == NULL );
                _python_par_accept_encoding = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_user_agent, key ) == 1 )
            {
                assert( _python_par_user_agent == NULL );
                _python_par_user_agent = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_basic_auth, key ) == 1 )
            {
                assert( _python_par_basic_auth == NULL );
                _python_par_basic_auth = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_proxy_basic_auth, key ) == 1 )
            {
                assert( _python_par_proxy_basic_auth == NULL );
                _python_par_proxy_basic_auth = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_disable_cache, key ) == 1 )
            {
                assert( _python_par_disable_cache == NULL );
                _python_par_disable_cache = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "make_headers() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_keep_alive != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_keep_alive = args[ 0 ];
        Py_INCREF( _python_par_keep_alive );
    }
    else if ( _python_par_keep_alive == NULL )
    {
        if ( 0 + self->m_defaults_given >= 6  )
        {
            _python_par_keep_alive = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 6 );
            Py_INCREF( _python_par_keep_alive );
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
         if (unlikely( _python_par_accept_encoding != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_accept_encoding = args[ 1 ];
        Py_INCREF( _python_par_accept_encoding );
    }
    else if ( _python_par_accept_encoding == NULL )
    {
        if ( 1 + self->m_defaults_given >= 6  )
        {
            _python_par_accept_encoding = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 6 );
            Py_INCREF( _python_par_accept_encoding );
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
         if (unlikely( _python_par_user_agent != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_user_agent = args[ 2 ];
        Py_INCREF( _python_par_user_agent );
    }
    else if ( _python_par_user_agent == NULL )
    {
        if ( 2 + self->m_defaults_given >= 6  )
        {
            _python_par_user_agent = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 6 );
            Py_INCREF( _python_par_user_agent );
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
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_basic_auth != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_basic_auth = args[ 3 ];
        Py_INCREF( _python_par_basic_auth );
    }
    else if ( _python_par_basic_auth == NULL )
    {
        if ( 3 + self->m_defaults_given >= 6  )
        {
            _python_par_basic_auth = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 6 );
            Py_INCREF( _python_par_basic_auth );
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
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_proxy_basic_auth != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_proxy_basic_auth = args[ 4 ];
        Py_INCREF( _python_par_proxy_basic_auth );
    }
    else if ( _python_par_proxy_basic_auth == NULL )
    {
        if ( 4 + self->m_defaults_given >= 6  )
        {
            _python_par_proxy_basic_auth = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 6 );
            Py_INCREF( _python_par_proxy_basic_auth );
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
    if (likely( 5 < args_given ))
    {
         if (unlikely( _python_par_disable_cache != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_disable_cache = args[ 5 ];
        Py_INCREF( _python_par_disable_cache );
    }
    else if ( _python_par_disable_cache == NULL )
    {
        if ( 5 + self->m_defaults_given >= 6  )
        {
            _python_par_disable_cache = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 6 );
            Py_INCREF( _python_par_disable_cache );
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
    if (unlikely( _python_par_keep_alive == NULL || _python_par_accept_encoding == NULL || _python_par_user_agent == NULL || _python_par_basic_auth == NULL || _python_par_proxy_basic_auth == NULL || _python_par_disable_cache == NULL ))
    {
        PyObject *values[] = { _python_par_keep_alive, _python_par_accept_encoding, _python_par_user_agent, _python_par_basic_auth, _python_par_proxy_basic_auth, _python_par_disable_cache };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 6 ))
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



    return impl_function_1_make_headers_of_requests$packages$urllib3$util$request( self, _python_par_keep_alive, _python_par_accept_encoding, _python_par_user_agent, _python_par_basic_auth, _python_par_proxy_basic_auth, _python_par_disable_cache );

error_exit:;

    Py_XDECREF( _python_par_keep_alive );
    Py_XDECREF( _python_par_accept_encoding );
    Py_XDECREF( _python_par_user_agent );
    Py_XDECREF( _python_par_basic_auth );
    Py_XDECREF( _python_par_proxy_basic_auth );
    Py_XDECREF( _python_par_disable_cache );

    return NULL;
}

static PyObject *dparse_function_1_make_headers_of_requests$packages$urllib3$util$request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6 )
    {
        return impl_function_1_make_headers_of_requests$packages$urllib3$util$request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_make_headers_of_requests$packages$urllib3$util$request( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_make_headers_of_requests$packages$urllib3$util$request( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_make_headers_of_requests$packages$urllib3$util$request,
        dparse_function_1_make_headers_of_requests$packages$urllib3$util$request,
        const_str_plain_make_headers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_75525337fa503328dbd52290dc0a432f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$util$request,
        const_str_digest_47d4abcbaab2ba783709ab98383a7f12
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$packages$urllib3$util$request =
{
    PyModuleDef_HEAD_INIT,
    "requests.packages.urllib3.util.request",   /* m_name */
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

MOD_INIT_DECL( requests$packages$urllib3$util$request )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$packages$urllib3$util$request );
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

    // puts( "in initrequests$packages$urllib3$util$request" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$packages$urllib3$util$request = Py_InitModule4(
        "requests.packages.urllib3.util.request",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_requests$packages$urllib3$util$request = PyModule_Create( &mdef_requests$packages$urllib3$util$request );
#endif

    moduledict_requests$packages$urllib3$util$request = (PyDictObject *)((PyModuleObject *)module_requests$packages$urllib3$util$request)->md_dict;

    CHECK_OBJECT( module_requests$packages$urllib3$util$request );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_82b8c5b6b5b738239f3340307cd248c4, module_requests$packages$urllib3$util$request );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_requests$packages$urllib3$util$request );

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
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_defaults_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$request, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_a6297e3ea19feea88e6f643ddcac2603;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$request, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$request, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_4fc29877723e0f5f2c0ba56dea944579;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$request, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$request, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_FRAME( codeobj_d70f4b3763094ae0d2a0be99384b4b5a, module_requests$packages$urllib3$util$request );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_requests$packages$urllib3$util$request)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_base64, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_b64encode_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_b64encode );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b64encode, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_requests$packages$urllib3$util$request)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_edd9cb70c3537b6a2b58ab6b4487087a, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_b_tuple, const_int_pos_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_b );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b, tmp_assign_source_7 );

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
    tmp_assign_source_8 = const_str_digest_77bc5054242d5f3e5269bd07a4342f1b;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$request, (Nuitka_StringObject *)const_str_plain_ACCEPT_ENCODING, tmp_assign_source_8 );
    tmp_defaults_1 = const_tuple_none_none_none_none_none_none_tuple;
    tmp_assign_source_9 = MAKE_FUNCTION_function_1_make_headers_of_requests$packages$urllib3$util$request( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$request, (Nuitka_StringObject *)const_str_plain_make_headers, tmp_assign_source_9 );

    return MOD_RETURN_VALUE( module_requests$packages$urllib3$util$request );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
