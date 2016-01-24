// Generated code for Python source for module 'requests.exceptions'
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

// The _module_requests$exceptions is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_requests$exceptions;
PyDictObject *moduledict_requests$exceptions;

// The module constants used
static PyObject *const_str_digest_0de3268b55764ef7ad27033bf1d3ceb9;
extern PyObject *const_str_plain_FileModeWarning;
static PyObject *const_str_plain_BaseHTTPError;
static PyObject *const_str_digest_f22c769003285e67e8ff09edcde092b8;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_StreamConsumedError;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_digest_4435d749a463077641a36078c5a669e2;
extern PyObject *const_str_plain_Warning;
static PyObject *const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8;
extern PyObject *const_str_plain_requests;
static PyObject *const_str_digest_231982acca444de8f23c0288db53eaef;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_c1f4dcdf3195a093500cff5b8859ecc9;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_d72518de2df0408e06529d45ae68a282_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_c7a80113e8376f2f52f7ee120f1360d2;
extern PyObject *const_tuple_str_plain_HTTPError_tuple;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_URLRequired;
static PyObject *const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc;
extern PyObject *const_str_plain_ConnectTimeout;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_DeprecationWarning;
static PyObject *const_str_digest_ea56dc5a3b56c4e15d242614ac8cb3d0;
extern PyObject *const_str_plain_response;
static PyObject *const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8;
static PyObject *const_str_digest_b3f79f0ff88ef53ddf2012488144e436;
static PyObject *const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_ChunkedEncodingError;
extern PyObject *const_str_plain_RetryError;
extern PyObject *const_str_plain_InvalidURL;
extern PyObject *const_str_plain_ProxyError;
static PyObject *const_str_digest_996ca0287ba17b2bd04e8b99ebbe901c;
extern PyObject *const_str_plain_MissingSchema;
static PyObject *const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
extern PyObject *const_str_plain_Timeout;
static PyObject *const_str_digest_3aedd4c9c88f311ca62d0cad34678af2;
static PyObject *const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e;
static PyObject *const_str_digest_e91f0a06d295e9fdd4c3972666eefa40;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_b9e68479e5fd461487029587cd3c1cca;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_ReadTimeout;
static PyObject *const_str_plain_RequestsWarning;
extern PyObject *const_str_plain_HTTPError;
static PyObject *const_str_digest_34a451307fc6aab1649478fed3307568;
static PyObject *const_str_digest_b8f960a38723097fb701d7986528073c;
static PyObject *const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a;
extern PyObject *const_str_plain_InvalidSchema;
static PyObject *const_str_digest_be3ed29f90897a30bd2c1893d8f83969;
extern PyObject *const_str_plain_RequestException;
static PyObject *const_str_digest_841f485de6d4157389a41ea63dc14155;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_ContentDecodingError;
extern PyObject *const_str_plain_ConnectionError;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_str_plain_TooManyRedirects;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_35d6e09b700b272e1f4429814168031d;
static PyObject *const_str_digest_0689849403be684eb33eb3512cfc2389;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_0de3268b55764ef7ad27033bf1d3ceb9 = UNSTREAM_STRING( &constant_bin[ 344278 ], 52, 0 );
    const_str_plain_BaseHTTPError = UNSTREAM_STRING( &constant_bin[ 63299 ], 13, 1 );
    const_str_digest_f22c769003285e67e8ff09edcde092b8 = UNSTREAM_STRING( &constant_bin[ 344330 ], 84, 0 );
    const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8 = UNSTREAM_STRING( &constant_bin[ 344414 ], 25, 0 );
    const_str_digest_231982acca444de8f23c0288db53eaef = UNSTREAM_STRING( &constant_bin[ 344439 ], 26, 0 );
    const_tuple_d72518de2df0408e06529d45ae68a282_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d72518de2df0408e06529d45ae68a282_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d72518de2df0408e06529d45ae68a282_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_d72518de2df0408e06529d45ae68a282_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_d72518de2df0408e06529d45ae68a282_tuple, 3, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_str_digest_c7a80113e8376f2f52f7ee120f1360d2 = UNSTREAM_STRING( &constant_bin[ 344465 ], 47, 0 );
    const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0 = UNSTREAM_STRING( &constant_bin[ 344512 ], 28, 0 );
    const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc = UNSTREAM_STRING( &constant_bin[ 344540 ], 23, 0 );
    const_str_digest_ea56dc5a3b56c4e15d242614ac8cb3d0 = UNSTREAM_STRING( &constant_bin[ 344563 ], 84, 0 );
    const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8 = UNSTREAM_STRING( &constant_bin[ 344647 ], 130, 0 );
    const_str_digest_b3f79f0ff88ef53ddf2012488144e436 = UNSTREAM_STRING( &constant_bin[ 344777 ], 27, 0 );
    const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 3, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 4, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_996ca0287ba17b2bd04e8b99ebbe901c = UNSTREAM_STRING( &constant_bin[ 344804 ], 97, 0 );
    const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2 = UNSTREAM_STRING( &constant_bin[ 344805 ], 19, 0 );
    const_str_digest_3aedd4c9c88f311ca62d0cad34678af2 = UNSTREAM_STRING( &constant_bin[ 344901 ], 23, 0 );
    const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e = UNSTREAM_STRING( &constant_bin[ 344924 ], 19, 0 );
    const_str_digest_e91f0a06d295e9fdd4c3972666eefa40 = UNSTREAM_STRING( &constant_bin[ 344943 ], 33, 0 );
    const_str_digest_b9e68479e5fd461487029587cd3c1cca = UNSTREAM_STRING( &constant_bin[ 344976 ], 79, 0 );
    const_str_plain_RequestsWarning = UNSTREAM_STRING( &constant_bin[ 63334 ], 15, 1 );
    const_str_digest_34a451307fc6aab1649478fed3307568 = UNSTREAM_STRING( &constant_bin[ 345055 ], 171, 0 );
    const_str_digest_b8f960a38723097fb701d7986528073c = UNSTREAM_STRING( &constant_bin[ 345226 ], 64, 0 );
    const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a = UNSTREAM_STRING( &constant_bin[ 345290 ], 63, 0 );
    const_str_digest_be3ed29f90897a30bd2c1893d8f83969 = UNSTREAM_STRING( &constant_bin[ 345353 ], 39, 0 );
    const_str_digest_841f485de6d4157389a41ea63dc14155 = UNSTREAM_STRING( &constant_bin[ 345392 ], 42, 0 );
    const_str_digest_35d6e09b700b272e1f4429814168031d = UNSTREAM_STRING( &constant_bin[ 345434 ], 22, 0 );
    const_str_digest_0689849403be684eb33eb3512cfc2389 = UNSTREAM_STRING( &constant_bin[ 345456 ], 34, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$exceptions( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1d238cd2ca7e1b809a5d238876e78553;
static PyCodeObject *codeobj_cd3bec136efe5ca280bcad1a4ddcdaf8;
static PyCodeObject *codeobj_0d09b8b9d29c4dad0716b82e97269e66;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_0de3268b55764ef7ad27033bf1d3ceb9 );
    codeobj_1d238cd2ca7e1b809a5d238876e78553 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 17, const_tuple_d72518de2df0408e06529d45ae68a282_tuple, 1, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_cd3bec136efe5ca280bcad1a4ddcdaf8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 17, const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 3, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_0d09b8b9d29c4dad0716b82e97269e66 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_exceptions, 0, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_RequestException_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_1__bases, PyObject *&closure_requests$exceptions_class_creation_1__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_1__metaclass, PyObject *&closure_requests$exceptions_class_creation_1__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_HTTPError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_2__bases, PyObject *&closure_requests$exceptions_class_creation_2__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_2__metaclass, PyObject *&closure_requests$exceptions_class_creation_2__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_ConnectionError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_3__bases, PyObject *&closure_requests$exceptions_class_creation_3__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_3__metaclass, PyObject *&closure_requests$exceptions_class_creation_3__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_ProxyError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_4__bases, PyObject *&closure_requests$exceptions_class_creation_4__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_4__metaclass, PyObject *&closure_requests$exceptions_class_creation_4__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_SSLError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_5__bases, PyObject *&closure_requests$exceptions_class_creation_5__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_5__metaclass, PyObject *&closure_requests$exceptions_class_creation_5__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_Timeout_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_6__bases, PyObject *&closure_requests$exceptions_class_creation_6__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_6__metaclass, PyObject *&closure_requests$exceptions_class_creation_6__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_ConnectTimeout_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_7__bases, PyObject *&closure_requests$exceptions_class_creation_7__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_7__metaclass, PyObject *&closure_requests$exceptions_class_creation_7__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_ReadTimeout_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_8__bases, PyObject *&closure_requests$exceptions_class_creation_8__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_8__metaclass, PyObject *&closure_requests$exceptions_class_creation_8__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_9_URLRequired_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_9__bases, PyObject *&closure_requests$exceptions_class_creation_9__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_9__metaclass, PyObject *&closure_requests$exceptions_class_creation_9__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_10_TooManyRedirects_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_10__bases, PyObject *&closure_requests$exceptions_class_creation_10__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_10__metaclass, PyObject *&closure_requests$exceptions_class_creation_10__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_11_MissingSchema_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_11__bases, PyObject *&closure_requests$exceptions_class_creation_11__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_11__metaclass, PyObject *&closure_requests$exceptions_class_creation_11__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_12_InvalidSchema_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_12__bases, PyObject *&closure_requests$exceptions_class_creation_12__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_12__metaclass, PyObject *&closure_requests$exceptions_class_creation_12__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_13_InvalidURL_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_13__bases, PyObject *&closure_requests$exceptions_class_creation_13__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_13__metaclass, PyObject *&closure_requests$exceptions_class_creation_13__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_14_ChunkedEncodingError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_14__bases, PyObject *&closure_requests$exceptions_class_creation_14__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_14__metaclass, PyObject *&closure_requests$exceptions_class_creation_14__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_15_ContentDecodingError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_15__bases, PyObject *&closure_requests$exceptions_class_creation_15__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_15__metaclass, PyObject *&closure_requests$exceptions_class_creation_15__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_16_StreamConsumedError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_16__bases, PyObject *&closure_requests$exceptions_class_creation_16__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_16__metaclass, PyObject *&closure_requests$exceptions_class_creation_16__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_17_RetryError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_17__bases, PyObject *&closure_requests$exceptions_class_creation_17__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_17__metaclass, PyObject *&closure_requests$exceptions_class_creation_17__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_18_RequestsWarning_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_18__bases, PyObject *&closure_requests$exceptions_class_creation_18__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_18__metaclass, PyObject *&closure_requests$exceptions_class_creation_18__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_19_FileModeWarning_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_19__bases, PyObject *&closure_requests$exceptions_class_creation_19__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_19__metaclass, PyObject *&closure_requests$exceptions_class_creation_19__prepared );


NUITKA_CROSS_MODULE PyObject *impl_function_1_complex_call_helper_star_list_star_dict_of___internal__( PyObject *_python_par_called, PyObject *_python_par_star_arg_list, PyObject *_python_par_star_arg_dict );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_RequestException_of_requests$exceptions(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_RequestException_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_1__bases, PyObject *&closure_requests$exceptions_class_creation_1__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_1__metaclass, PyObject *&closure_requests$exceptions_class_creation_1__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_b9e68479e5fd461487029587cd3c1cca;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_RequestException;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_1_RequestException_of_requests$exceptions(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_RequestException;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_1__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_1__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_1_RequestException_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_1_RequestException_of_requests$exceptions );
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


static PyObject *impl_function_1___init___of_class_1_RequestException_of_requests$exceptions( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_args = _python_par_args;
    PyObject *par_kwargs = _python_par_kwargs;
    PyObject *var_response = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    PyObject *tmp_operand_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_super_object_1;
    PyObject *tmp_super_type_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_cd3bec136efe5ca280bcad1a4ddcdaf8, module_requests$exceptions );
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
    tmp_source_name_1 = par_kwargs;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pop );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_response;
    tmp_call_arg_element_2 = Py_None;
    frame_function->f_lineno = 21;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    assert( var_response == NULL );
    var_response = tmp_assign_source_1;

    tmp_assattr_name_1 = var_response;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_response, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_kwargs;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 32092 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pop );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_str_plain_request;
    tmp_call_arg_element_4 = Py_None;
    frame_function->f_lineno = 23;
    tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_request, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_compexpr_left_1 = var_response;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18962 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_request );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_hasattr_value_1 = var_response;

    if ( tmp_hasattr_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18962 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_request;
    tmp_and_right_value_2 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
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
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_response );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_request );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_request, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    branch_no_1:;
    tmp_super_type_1 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_super_type_1 == NULL ))
    {
        tmp_super_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_super_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63226 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_super_object_1 = par_self;

    if ( tmp_super_object_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = BUILTIN_SUPER( tmp_super_type_1, tmp_super_object_1 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_args;

    tmp_dircall_arg3_1 = par_kwargs;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 32092 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );
    tmp_unused = impl_function_1_complex_call_helper_star_list_star_dict_of___internal__( tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
            if ( var_response != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_response,
                    var_response
                );
                assert( tmp_res != -1 );

            }
            if ( par_self != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );
                assert( tmp_res != -1 );

            }
            if ( par_args != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_args,
                    par_args
                );
                assert( tmp_res != -1 );

            }
            if ( par_kwargs != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kwargs,
                    par_kwargs
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_RequestException_of_requests$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

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

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_RequestException_of_requests$exceptions );
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
static PyObject *fparse_function_1___init___of_class_1_RequestException_of_requests$exceptions( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_kwargs = NULL;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_kwargs = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_kwargs = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

            for ( int i = 0; i <= ((PyDictObject *)kw)->ma_mask; i++ )
            {
                PyDictEntry *entry = &((PyDictObject *)kw)->ma_table[ i ];

                if ( entry->me_value != NULL )
                {

#if PYTHON_VERSION < 300
                    if (unlikely( !PyString_Check( entry->me_key ) && !PyUnicode_Check( entry->me_key ) ))
#else
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
#endif
                    {
                        PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwargs, entry->me_key, entry->me_value );

                    if (unlikely( res != 0 ))
                    {
                        goto error_exit;
                    }
                }
            }
#else
        if ( _PyDict_HasSplitTable( (PyDictObject *)kw) )
        {
            PyDictObject *mp = (PyDictObject *)kw;

            PyObject **newvalues = PyMem_NEW( PyObject *, mp->ma_keys->dk_size );
            assert( newvalues != NULL );

            PyDictObject *split_copy = PyObject_GC_New( PyDictObject, &PyDict_Type );
            assert( split_copy != NULL );

            split_copy->ma_values = newvalues;
            split_copy->ma_keys = mp->ma_keys;
            split_copy->ma_used = mp->ma_used;

            mp->ma_keys->dk_refcnt += 1;

            Nuitka_GC_Track( split_copy );

            Py_ssize_t size = mp->ma_keys->dk_size;
            for ( Py_ssize_t i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &split_copy->ma_keys->dk_entries[ i ];

                if ( ( entry->me_key != NULL ) && unlikely( !PyUnicode_Check( entry->me_key ) ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = mp->ma_values[ i ];
                Py_XINCREF( split_copy->ma_values[ i ] );
            }

            _python_par_kwargs = (PyObject *)split_copy;
        }
        else
        {
            _python_par_kwargs = PyDict_New();

            PyDictObject *mp = (PyDictObject *)kw;

            Py_ssize_t size = mp->ma_keys->dk_size;
            for ( Py_ssize_t i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &mp->ma_keys->dk_entries[i];

                // TODO: One of these cases has been dealt with above.
                PyObject *value;
                if ( mp->ma_values )
                {
                    value = mp->ma_values[ i ];
                }
                else
                {
                    value = entry->me_value;
                }

                if ( value != NULL )
                {
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
                    {
                        PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwargs, entry->me_key, value );

                    if (unlikely( res != 0 ))
                    {
                        goto error_exit;
                    }
                }
            }
        }
#endif
        }
        else
        {
            _python_par_kwargs = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, const_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kwargs, const_str_plain_self );

            kw_found += 1;
        }
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
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
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

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Copy left-over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
            PyObject *value = args[1+i];
            PyTuple_SET_ITEM( _python_par_args, i, value );
            Py_INCREF( value );
        }
    }
    else
    {
        _python_par_args = const_tuple_empty;
        Py_INCREF( const_tuple_empty );
    }


    return impl_function_1___init___of_class_1_RequestException_of_requests$exceptions( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_RequestException_of_requests$exceptions( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_1___init___of_class_1_RequestException_of_requests$exceptions( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_RequestException_of_requests$exceptions( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_HTTPError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_2__bases, PyObject *&closure_requests$exceptions_class_creation_2__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_2__metaclass, PyObject *&closure_requests$exceptions_class_creation_2__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_2__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_HTTPError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_2__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_HTTPError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_2__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_2__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_2_HTTPError_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_2_HTTPError_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_3_ConnectionError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_3__bases, PyObject *&closure_requests$exceptions_class_creation_3__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_3__metaclass, PyObject *&closure_requests$exceptions_class_creation_3__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_3__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_ConnectionError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_3__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_ConnectionError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_3__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_3__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_3_ConnectionError_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_3_ConnectionError_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_4_ProxyError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_4__bases, PyObject *&closure_requests$exceptions_class_creation_4__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_4__metaclass, PyObject *&closure_requests$exceptions_class_creation_4__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_4__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_3aedd4c9c88f311ca62d0cad34678af2;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_ProxyError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_4__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_ProxyError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_4__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_4__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_4_ProxyError_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_4_ProxyError_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_5_SSLError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_5__bases, PyObject *&closure_requests$exceptions_class_creation_5__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_5__metaclass, PyObject *&closure_requests$exceptions_class_creation_5__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_5__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_35d6e09b700b272e1f4429814168031d;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_SSLError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_5__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_SSLError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_5__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_5__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_5_SSLError_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_5_SSLError_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_6_Timeout_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_6__bases, PyObject *&closure_requests$exceptions_class_creation_6__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_6__metaclass, PyObject *&closure_requests$exceptions_class_creation_6__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_6__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_34a451307fc6aab1649478fed3307568;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_Timeout;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_6__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_Timeout;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_6__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_6__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_6_Timeout_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_6_Timeout_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_7_ConnectTimeout_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_7__bases, PyObject *&closure_requests$exceptions_class_creation_7__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_7__metaclass, PyObject *&closure_requests$exceptions_class_creation_7__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_7__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_ConnectTimeout;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_7__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_ConnectTimeout;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_7__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_7__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_7_ConnectTimeout_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_7_ConnectTimeout_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_8_ReadTimeout_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_8__bases, PyObject *&closure_requests$exceptions_class_creation_8__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_8__metaclass, PyObject *&closure_requests$exceptions_class_creation_8__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_8__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_b8f960a38723097fb701d7986528073c;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_ReadTimeout;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_8__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_ReadTimeout;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_8__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_8__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_8_ReadTimeout_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_8_ReadTimeout_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_9_URLRequired_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_9__bases, PyObject *&closure_requests$exceptions_class_creation_9__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_9__metaclass, PyObject *&closure_requests$exceptions_class_creation_9__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_9__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_841f485de6d4157389a41ea63dc14155;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_URLRequired;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_9__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_URLRequired;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_9__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_9__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_9_URLRequired_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_9_URLRequired_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_10_TooManyRedirects_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_10__bases, PyObject *&closure_requests$exceptions_class_creation_10__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_10__metaclass, PyObject *&closure_requests$exceptions_class_creation_10__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_10__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_TooManyRedirects;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_10__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_TooManyRedirects;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_10__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_10__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_10_TooManyRedirects_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_10_TooManyRedirects_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_11_MissingSchema_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_11__bases, PyObject *&closure_requests$exceptions_class_creation_11__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_11__metaclass, PyObject *&closure_requests$exceptions_class_creation_11__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_11__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_c7a80113e8376f2f52f7ee120f1360d2;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_MissingSchema;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_11__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_MissingSchema;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_11__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_11__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_11_MissingSchema_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_11_MissingSchema_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_12_InvalidSchema_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_12__bases, PyObject *&closure_requests$exceptions_class_creation_12__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_12__metaclass, PyObject *&closure_requests$exceptions_class_creation_12__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_12__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_0689849403be684eb33eb3512cfc2389;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_InvalidSchema;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_12__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_InvalidSchema;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_12__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_12__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_12_InvalidSchema_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_12_InvalidSchema_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_13_InvalidURL_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_13__bases, PyObject *&closure_requests$exceptions_class_creation_13__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_13__metaclass, PyObject *&closure_requests$exceptions_class_creation_13__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_13__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_be3ed29f90897a30bd2c1893d8f83969;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_InvalidURL;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_13__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_InvalidURL;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_13__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_13__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_13_InvalidURL_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_13_InvalidURL_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_14_ChunkedEncodingError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_14__bases, PyObject *&closure_requests$exceptions_class_creation_14__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_14__metaclass, PyObject *&closure_requests$exceptions_class_creation_14__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_14__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_ChunkedEncodingError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_14__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_ChunkedEncodingError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_14__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_14__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_14_ChunkedEncodingError_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_14_ChunkedEncodingError_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_15_ContentDecodingError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_15__bases, PyObject *&closure_requests$exceptions_class_creation_15__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_15__metaclass, PyObject *&closure_requests$exceptions_class_creation_15__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_15__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_e91f0a06d295e9fdd4c3972666eefa40;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_ContentDecodingError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_15__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_ContentDecodingError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_15__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_15__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_15_ContentDecodingError_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_15_ContentDecodingError_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_16_StreamConsumedError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_16__bases, PyObject *&closure_requests$exceptions_class_creation_16__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_16__metaclass, PyObject *&closure_requests$exceptions_class_creation_16__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_16__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_c1f4dcdf3195a093500cff5b8859ecc9;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_StreamConsumedError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_16__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_StreamConsumedError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_16__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_16__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_16_StreamConsumedError_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_16_StreamConsumedError_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_17_RetryError_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_17__bases, PyObject *&closure_requests$exceptions_class_creation_17__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_17__metaclass, PyObject *&closure_requests$exceptions_class_creation_17__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_17__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_b3f79f0ff88ef53ddf2012488144e436;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_RetryError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_17__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_RetryError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_17__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_17__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_17_RetryError_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_17_RetryError_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_18_RequestsWarning_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_18__bases, PyObject *&closure_requests$exceptions_class_creation_18__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_18__metaclass, PyObject *&closure_requests$exceptions_class_creation_18__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_18__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_231982acca444de8f23c0288db53eaef;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_RequestsWarning;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_18__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_RequestsWarning;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_18__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_18__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_18_RequestsWarning_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_18_RequestsWarning_of_requests$exceptions );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_19_FileModeWarning_of_requests$exceptions( PyObject *&closure_requests$exceptions_class_creation_19__bases, PyObject *&closure_requests$exceptions_class_creation_19__class_decl_dict, PyObject *&closure_requests$exceptions_class_creation_19__metaclass, PyObject *&closure_requests$exceptions_class_creation_19__prepared )
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
    tmp_set_locals = closure_requests$exceptions_class_creation_19__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_f22c769003285e67e8ff09edcde092b8;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_FileModeWarning;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_requests$exceptions_class_creation_19__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_FileModeWarning;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$exceptions_class_creation_19__bases;

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
    tmp_kw_name_1 = closure_requests$exceptions_class_creation_19__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_19_FileModeWarning_of_requests$exceptions );
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
    NUITKA_CANNOT_GET_HERE( class_19_FileModeWarning_of_requests$exceptions );
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



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_RequestException_of_requests$exceptions(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_RequestException_of_requests$exceptions,
        dparse_function_1___init___of_class_1_RequestException_of_requests$exceptions,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8,
#endif
        codeobj_1d238cd2ca7e1b809a5d238876e78553,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$exceptions,
        const_str_digest_ea56dc5a3b56c4e15d242614ac8cb3d0
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$exceptions =
{
    PyModuleDef_HEAD_INIT,
    "requests.exceptions",   /* m_name */
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

MOD_INIT_DECL( requests$exceptions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$exceptions );
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

    // puts( "in initrequests$exceptions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$exceptions = Py_InitModule4(
        "requests.exceptions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_requests$exceptions = PyModule_Create( &mdef_requests$exceptions );
#endif

    moduledict_requests$exceptions = (PyDictObject *)((PyModuleObject *)module_requests$exceptions)->md_dict;

    CHECK_OBJECT( module_requests$exceptions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2, module_requests$exceptions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_requests$exceptions );

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
    PyObject *tmp_requests$exceptions_class_creation_1__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_1__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_1__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_2__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_2__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_2__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_3__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_3__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_3__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_4__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_4__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_4__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_5__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_5__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_5__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_6__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_6__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_6__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_7__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_7__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_7__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_8__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_8__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_8__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_9__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_9__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_9__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_10__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_10__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_10__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_11__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_11__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_11__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_12__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_12__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_12__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_13__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_13__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_13__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_14__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_14__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_14__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_15__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_15__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_15__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_16__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_16__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_16__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_17__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_17__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_17__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_18__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_18__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_18__prepared = NULL;
    PyObject *tmp_requests$exceptions_class_creation_19__bases = NULL;
    PyObject *tmp_requests$exceptions_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_requests$exceptions_class_creation_19__metaclass = NULL;
    PyObject *tmp_requests$exceptions_class_creation_19__prepared = NULL;
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
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
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
    PyObject *tmp_args_name_13;
    PyObject *tmp_args_name_14;
    PyObject *tmp_args_name_15;
    PyObject *tmp_args_name_16;
    PyObject *tmp_args_name_17;
    PyObject *tmp_args_name_18;
    PyObject *tmp_args_name_19;
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
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
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
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
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
    PyObject *tmp_class_bases_13;
    PyObject *tmp_class_bases_14;
    PyObject *tmp_class_bases_15;
    PyObject *tmp_class_bases_16;
    PyObject *tmp_class_bases_17;
    PyObject *tmp_class_bases_18;
    PyObject *tmp_class_bases_19;
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
    PyObject *tmp_class_meta_13;
    PyObject *tmp_class_meta_14;
    PyObject *tmp_class_meta_15;
    PyObject *tmp_class_meta_16;
    PyObject *tmp_class_meta_17;
    PyObject *tmp_class_meta_18;
    PyObject *tmp_class_meta_19;
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
    int tmp_cmp_In_25;
    int tmp_cmp_In_26;
    int tmp_cmp_In_27;
    int tmp_cmp_In_28;
    int tmp_cmp_In_29;
    int tmp_cmp_In_30;
    int tmp_cmp_In_31;
    int tmp_cmp_In_32;
    int tmp_cmp_In_33;
    int tmp_cmp_In_34;
    int tmp_cmp_In_35;
    int tmp_cmp_In_36;
    int tmp_cmp_In_37;
    int tmp_cmp_In_38;
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
    PyObject *tmp_compare_left_25;
    PyObject *tmp_compare_left_26;
    PyObject *tmp_compare_left_27;
    PyObject *tmp_compare_left_28;
    PyObject *tmp_compare_left_29;
    PyObject *tmp_compare_left_30;
    PyObject *tmp_compare_left_31;
    PyObject *tmp_compare_left_32;
    PyObject *tmp_compare_left_33;
    PyObject *tmp_compare_left_34;
    PyObject *tmp_compare_left_35;
    PyObject *tmp_compare_left_36;
    PyObject *tmp_compare_left_37;
    PyObject *tmp_compare_left_38;
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
    PyObject *tmp_compare_right_25;
    PyObject *tmp_compare_right_26;
    PyObject *tmp_compare_right_27;
    PyObject *tmp_compare_right_28;
    PyObject *tmp_compare_right_29;
    PyObject *tmp_compare_right_30;
    PyObject *tmp_compare_right_31;
    PyObject *tmp_compare_right_32;
    PyObject *tmp_compare_right_33;
    PyObject *tmp_compare_right_34;
    PyObject *tmp_compare_right_35;
    PyObject *tmp_compare_right_36;
    PyObject *tmp_compare_right_37;
    PyObject *tmp_compare_right_38;
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
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    int tmp_cond_truth_18;
    int tmp_cond_truth_19;
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
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_cond_value_18;
    PyObject *tmp_cond_value_19;
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
    PyObject *tmp_dget_dict_13;
    PyObject *tmp_dget_dict_14;
    PyObject *tmp_dget_dict_15;
    PyObject *tmp_dget_dict_16;
    PyObject *tmp_dget_dict_17;
    PyObject *tmp_dget_dict_18;
    PyObject *tmp_dget_dict_19;
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
    PyObject *tmp_dget_key_13;
    PyObject *tmp_dget_key_14;
    PyObject *tmp_dget_key_15;
    PyObject *tmp_dget_key_16;
    PyObject *tmp_dget_key_17;
    PyObject *tmp_dget_key_18;
    PyObject *tmp_dget_key_19;
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
    PyObject *tmp_hasattr_attr_13;
    PyObject *tmp_hasattr_attr_14;
    PyObject *tmp_hasattr_attr_15;
    PyObject *tmp_hasattr_attr_16;
    PyObject *tmp_hasattr_attr_17;
    PyObject *tmp_hasattr_attr_18;
    PyObject *tmp_hasattr_attr_19;
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
    PyObject *tmp_hasattr_source_13;
    PyObject *tmp_hasattr_source_14;
    PyObject *tmp_hasattr_source_15;
    PyObject *tmp_hasattr_source_16;
    PyObject *tmp_hasattr_source_17;
    PyObject *tmp_hasattr_source_18;
    PyObject *tmp_hasattr_source_19;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_name_from_1;
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
    PyObject *tmp_kw_name_13;
    PyObject *tmp_kw_name_14;
    PyObject *tmp_kw_name_15;
    PyObject *tmp_kw_name_16;
    PyObject *tmp_kw_name_17;
    PyObject *tmp_kw_name_18;
    PyObject *tmp_kw_name_19;
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
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
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
    PyObject *tmp_subscribed_name_13;
    PyObject *tmp_subscribed_name_14;
    PyObject *tmp_subscribed_name_15;
    PyObject *tmp_subscribed_name_16;
    PyObject *tmp_subscribed_name_17;
    PyObject *tmp_subscribed_name_18;
    PyObject *tmp_subscribed_name_19;
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
    PyObject *tmp_subscript_name_13;
    PyObject *tmp_subscript_name_14;
    PyObject *tmp_subscript_name_15;
    PyObject *tmp_subscript_name_16;
    PyObject *tmp_subscript_name_17;
    PyObject *tmp_subscript_name_18;
    PyObject *tmp_subscript_name_19;
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
    PyObject *tmp_tuple_element_25;
    PyObject *tmp_tuple_element_26;
    PyObject *tmp_tuple_element_27;
    PyObject *tmp_tuple_element_28;
    PyObject *tmp_tuple_element_29;
    PyObject *tmp_tuple_element_30;
    PyObject *tmp_tuple_element_31;
    PyObject *tmp_tuple_element_32;
    PyObject *tmp_tuple_element_33;
    PyObject *tmp_tuple_element_34;
    PyObject *tmp_tuple_element_35;
    PyObject *tmp_tuple_element_36;
    PyObject *tmp_tuple_element_37;
    PyObject *tmp_tuple_element_38;
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
    PyObject *tmp_type_arg_13;
    PyObject *tmp_type_arg_14;
    PyObject *tmp_type_arg_15;
    PyObject *tmp_type_arg_16;
    PyObject *tmp_type_arg_17;
    PyObject *tmp_type_arg_18;
    PyObject *tmp_type_arg_19;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_996ca0287ba17b2bd04e8b99ebbe901c;
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_0de3268b55764ef7ad27033bf1d3ceb9;
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_requests;
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_FRAME( codeobj_0d09b8b9d29c4dad0716b82e97269e66, module_requests$exceptions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_requests$exceptions)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_4435d749a463077641a36078c5a669e2, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_HTTPError_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_HTTPError );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_BaseHTTPError, tmp_assign_source_5 );
    tmp_assign_source_6 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_IOError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_6, 0, tmp_tuple_element_1 );
    assert( tmp_requests$exceptions_class_creation_1__bases == NULL );
    tmp_requests$exceptions_class_creation_1__bases = tmp_assign_source_6;

    tmp_assign_source_7 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_1__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_1__class_decl_dict = tmp_assign_source_7;

    // Tried code:
    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_requests$exceptions_class_creation_1__class_decl_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
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
    tmp_dget_dict_1 = tmp_requests$exceptions_class_creation_1__class_decl_dict;

    tmp_dget_key_1 = const_str_plain_metaclass;
    tmp_class_meta_1 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_class_meta_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_requests$exceptions_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
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
    tmp_subscribed_name_1 = tmp_requests$exceptions_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_1;
    }
    tmp_class_meta_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_class_meta_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_meta_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_1 != NULL );
    Py_INCREF( tmp_class_meta_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_class_bases_1 = tmp_requests$exceptions_class_creation_1__bases;

    tmp_assign_source_8 = SELECT_METACLASS( tmp_class_meta_1, tmp_class_bases_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_1 );

        exception_lineno = 13;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_class_meta_1 );
    assert( tmp_requests$exceptions_class_creation_1__metaclass == NULL );
    tmp_requests$exceptions_class_creation_1__metaclass = tmp_assign_source_8;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_requests$exceptions_class_creation_1__class_decl_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
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
    tmp_remove_dict = tmp_requests$exceptions_class_creation_1__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_requests$exceptions_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
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
    tmp_source_name_1 = tmp_requests$exceptions_class_creation_1__metaclass;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_RequestException;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_requests$exceptions_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_requests$exceptions_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 13;
    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_9 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_requests$exceptions_class_creation_1__prepared == NULL );
    tmp_requests$exceptions_class_creation_1__prepared = tmp_assign_source_9;

    tmp_assign_source_10 = impl_class_1_RequestException_of_requests$exceptions( tmp_requests$exceptions_class_creation_1__bases, tmp_requests$exceptions_class_creation_1__class_decl_dict, tmp_requests$exceptions_class_creation_1__metaclass, tmp_requests$exceptions_class_creation_1__prepared );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException, tmp_assign_source_10 );
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

    Py_XDECREF( tmp_requests$exceptions_class_creation_1__bases );
    tmp_requests$exceptions_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_1__class_decl_dict );
    tmp_requests$exceptions_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_1__metaclass );
    tmp_requests$exceptions_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_1__prepared );
    tmp_requests$exceptions_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_1__bases );
    tmp_requests$exceptions_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_1__class_decl_dict );
    tmp_requests$exceptions_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_1__metaclass );
    tmp_requests$exceptions_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_1__prepared );
    tmp_requests$exceptions_class_creation_1__prepared = NULL;

    // Tried code:
    tmp_assign_source_11 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63226 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_11, 0, tmp_tuple_element_3 );
    assert( tmp_requests$exceptions_class_creation_2__bases == NULL );
    tmp_requests$exceptions_class_creation_2__bases = tmp_assign_source_11;

    tmp_assign_source_12 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_2__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_2__class_decl_dict = tmp_assign_source_12;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_requests$exceptions_class_creation_2__class_decl_dict;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
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
    tmp_dget_dict_2 = tmp_requests$exceptions_class_creation_2__class_decl_dict;

    tmp_dget_key_2 = const_str_plain_metaclass;
    tmp_class_meta_2 = DICT_GET_ITEM( tmp_dget_dict_2, tmp_dget_key_2 );
    if ( tmp_class_meta_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_2 = tmp_requests$exceptions_class_creation_2__bases;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
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
    tmp_subscribed_name_2 = tmp_requests$exceptions_class_creation_2__bases;

    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    tmp_class_meta_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_class_meta_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_class_meta_2 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_2 != NULL );
    Py_INCREF( tmp_class_meta_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_class_bases_2 = tmp_requests$exceptions_class_creation_2__bases;

    tmp_assign_source_13 = SELECT_METACLASS( tmp_class_meta_2, tmp_class_bases_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_2 );

        exception_lineno = 30;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_class_meta_2 );
    assert( tmp_requests$exceptions_class_creation_2__metaclass == NULL );
    tmp_requests$exceptions_class_creation_2__metaclass = tmp_assign_source_13;

    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_requests$exceptions_class_creation_2__class_decl_dict;

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
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
    tmp_remove_dict = tmp_requests$exceptions_class_creation_2__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    branch_no_2:;
    tmp_hasattr_source_2 = tmp_requests$exceptions_class_creation_2__metaclass;

    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
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
    tmp_source_name_2 = tmp_requests$exceptions_class_creation_2__metaclass;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_HTTPError;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_requests$exceptions_class_creation_2__bases;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_kw_name_2 = tmp_requests$exceptions_class_creation_2__class_decl_dict;

    frame_module->f_lineno = 30;
    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_14 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_requests$exceptions_class_creation_2__prepared == NULL );
    tmp_requests$exceptions_class_creation_2__prepared = tmp_assign_source_14;

    tmp_assign_source_15 = impl_class_2_HTTPError_of_requests$exceptions( tmp_requests$exceptions_class_creation_2__bases, tmp_requests$exceptions_class_creation_2__class_decl_dict, tmp_requests$exceptions_class_creation_2__metaclass, tmp_requests$exceptions_class_creation_2__prepared );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError, tmp_assign_source_15 );
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

    Py_XDECREF( tmp_requests$exceptions_class_creation_2__bases );
    tmp_requests$exceptions_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_2__class_decl_dict );
    tmp_requests$exceptions_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_2__metaclass );
    tmp_requests$exceptions_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_2__prepared );
    tmp_requests$exceptions_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_2__bases );
    tmp_requests$exceptions_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_2__class_decl_dict );
    tmp_requests$exceptions_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_2__metaclass );
    tmp_requests$exceptions_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_2__prepared );
    tmp_requests$exceptions_class_creation_2__prepared = NULL;

    // Tried code:
    tmp_assign_source_16 = PyTuple_New( 1 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63226 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_16, 0, tmp_tuple_element_5 );
    assert( tmp_requests$exceptions_class_creation_3__bases == NULL );
    tmp_requests$exceptions_class_creation_3__bases = tmp_assign_source_16;

    tmp_assign_source_17 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_3__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_3__class_decl_dict = tmp_assign_source_17;

    tmp_compare_left_5 = const_str_plain_metaclass;
    tmp_compare_right_5 = tmp_requests$exceptions_class_creation_3__class_decl_dict;

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    if ( tmp_cmp_In_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
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
    tmp_dget_dict_3 = tmp_requests$exceptions_class_creation_3__class_decl_dict;

    tmp_dget_key_3 = const_str_plain_metaclass;
    tmp_class_meta_3 = DICT_GET_ITEM( tmp_dget_dict_3, tmp_dget_key_3 );
    if ( tmp_class_meta_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto try_except_handler_3;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_cond_value_3 = tmp_requests$exceptions_class_creation_3__bases;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
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
    tmp_subscribed_name_3 = tmp_requests$exceptions_class_creation_3__bases;

    tmp_subscript_name_3 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto try_except_handler_3;
    }
    tmp_class_meta_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_class_meta_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto try_except_handler_3;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_class_meta_3 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_3 != NULL );
    Py_INCREF( tmp_class_meta_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_class_bases_3 = tmp_requests$exceptions_class_creation_3__bases;

    tmp_assign_source_18 = SELECT_METACLASS( tmp_class_meta_3, tmp_class_bases_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_3 );

        exception_lineno = 34;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_class_meta_3 );
    assert( tmp_requests$exceptions_class_creation_3__metaclass == NULL );
    tmp_requests$exceptions_class_creation_3__metaclass = tmp_assign_source_18;

    tmp_compare_left_6 = const_str_plain_metaclass;
    tmp_compare_right_6 = tmp_requests$exceptions_class_creation_3__class_decl_dict;

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    if ( tmp_cmp_In_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
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
    tmp_remove_dict = tmp_requests$exceptions_class_creation_3__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto try_except_handler_3;
    }
    branch_no_3:;
    tmp_hasattr_source_3 = tmp_requests$exceptions_class_creation_3__metaclass;

    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
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
    tmp_source_name_3 = tmp_requests$exceptions_class_creation_3__metaclass;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto try_except_handler_3;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_6 = const_str_plain_ConnectionError;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_requests$exceptions_class_creation_3__bases;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
    tmp_kw_name_3 = tmp_requests$exceptions_class_creation_3__class_decl_dict;

    frame_module->f_lineno = 34;
    tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto try_except_handler_3;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_19 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_requests$exceptions_class_creation_3__prepared == NULL );
    tmp_requests$exceptions_class_creation_3__prepared = tmp_assign_source_19;

    tmp_assign_source_20 = impl_class_3_ConnectionError_of_requests$exceptions( tmp_requests$exceptions_class_creation_3__bases, tmp_requests$exceptions_class_creation_3__class_decl_dict, tmp_requests$exceptions_class_creation_3__metaclass, tmp_requests$exceptions_class_creation_3__prepared );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_20 );
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

    Py_XDECREF( tmp_requests$exceptions_class_creation_3__bases );
    tmp_requests$exceptions_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_3__class_decl_dict );
    tmp_requests$exceptions_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_3__metaclass );
    tmp_requests$exceptions_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_3__prepared );
    tmp_requests$exceptions_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_3__bases );
    tmp_requests$exceptions_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_3__class_decl_dict );
    tmp_requests$exceptions_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_3__metaclass );
    tmp_requests$exceptions_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_3__prepared );
    tmp_requests$exceptions_class_creation_3__prepared = NULL;

    // Tried code:
    tmp_assign_source_21 = PyTuple_New( 1 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60068 ], 37, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 0, tmp_tuple_element_7 );
    assert( tmp_requests$exceptions_class_creation_4__bases == NULL );
    tmp_requests$exceptions_class_creation_4__bases = tmp_assign_source_21;

    tmp_assign_source_22 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_4__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_4__class_decl_dict = tmp_assign_source_22;

    tmp_compare_left_7 = const_str_plain_metaclass;
    tmp_compare_right_7 = tmp_requests$exceptions_class_creation_4__class_decl_dict;

    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    if ( tmp_cmp_In_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
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
    tmp_dget_dict_4 = tmp_requests$exceptions_class_creation_4__class_decl_dict;

    tmp_dget_key_4 = const_str_plain_metaclass;
    tmp_class_meta_4 = DICT_GET_ITEM( tmp_dget_dict_4, tmp_dget_key_4 );
    if ( tmp_class_meta_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_4;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_cond_value_4 = tmp_requests$exceptions_class_creation_4__bases;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
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
    tmp_subscribed_name_4 = tmp_requests$exceptions_class_creation_4__bases;

    tmp_subscript_name_4 = const_int_0;
    tmp_type_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_type_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_4;
    }
    tmp_class_meta_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_class_meta_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_4;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_class_meta_4 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_4 != NULL );
    Py_INCREF( tmp_class_meta_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_class_bases_4 = tmp_requests$exceptions_class_creation_4__bases;

    tmp_assign_source_23 = SELECT_METACLASS( tmp_class_meta_4, tmp_class_bases_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_4 );

        exception_lineno = 38;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_class_meta_4 );
    assert( tmp_requests$exceptions_class_creation_4__metaclass == NULL );
    tmp_requests$exceptions_class_creation_4__metaclass = tmp_assign_source_23;

    tmp_compare_left_8 = const_str_plain_metaclass;
    tmp_compare_right_8 = tmp_requests$exceptions_class_creation_4__class_decl_dict;

    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    if ( tmp_cmp_In_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
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
    tmp_remove_dict = tmp_requests$exceptions_class_creation_4__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_4;
    }
    branch_no_4:;
    tmp_hasattr_source_4 = tmp_requests$exceptions_class_creation_4__metaclass;

    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
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
    tmp_source_name_4 = tmp_requests$exceptions_class_creation_4__metaclass;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_4;
    }
    tmp_args_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_8 = const_str_plain_ProxyError;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_requests$exceptions_class_creation_4__bases;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
    tmp_kw_name_4 = tmp_requests$exceptions_class_creation_4__class_decl_dict;

    frame_module->f_lineno = 38;
    tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_4;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_24 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_requests$exceptions_class_creation_4__prepared == NULL );
    tmp_requests$exceptions_class_creation_4__prepared = tmp_assign_source_24;

    tmp_assign_source_25 = impl_class_4_ProxyError_of_requests$exceptions( tmp_requests$exceptions_class_creation_4__bases, tmp_requests$exceptions_class_creation_4__class_decl_dict, tmp_requests$exceptions_class_creation_4__metaclass, tmp_requests$exceptions_class_creation_4__prepared );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ProxyError, tmp_assign_source_25 );
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

    Py_XDECREF( tmp_requests$exceptions_class_creation_4__bases );
    tmp_requests$exceptions_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_4__class_decl_dict );
    tmp_requests$exceptions_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_4__metaclass );
    tmp_requests$exceptions_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_4__prepared );
    tmp_requests$exceptions_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_4__bases );
    tmp_requests$exceptions_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_4__class_decl_dict );
    tmp_requests$exceptions_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_4__metaclass );
    tmp_requests$exceptions_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_4__prepared );
    tmp_requests$exceptions_class_creation_4__prepared = NULL;

    // Tried code:
    tmp_assign_source_26 = PyTuple_New( 1 );
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
    }

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_26 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60068 ], 37, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_26, 0, tmp_tuple_element_9 );
    assert( tmp_requests$exceptions_class_creation_5__bases == NULL );
    tmp_requests$exceptions_class_creation_5__bases = tmp_assign_source_26;

    tmp_assign_source_27 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_5__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_5__class_decl_dict = tmp_assign_source_27;

    tmp_compare_left_9 = const_str_plain_metaclass;
    tmp_compare_right_9 = tmp_requests$exceptions_class_creation_5__class_decl_dict;

    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    if ( tmp_cmp_In_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
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
    tmp_dget_dict_5 = tmp_requests$exceptions_class_creation_5__class_decl_dict;

    tmp_dget_key_5 = const_str_plain_metaclass;
    tmp_class_meta_5 = DICT_GET_ITEM( tmp_dget_dict_5, tmp_dget_key_5 );
    if ( tmp_class_meta_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_5;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_cond_value_5 = tmp_requests$exceptions_class_creation_5__bases;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
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
    tmp_subscribed_name_5 = tmp_requests$exceptions_class_creation_5__bases;

    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_5;
    }
    tmp_class_meta_5 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_class_meta_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_5;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_class_meta_5 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_5 != NULL );
    Py_INCREF( tmp_class_meta_5 );
    condexpr_end_14:;
    condexpr_end_13:;
    tmp_class_bases_5 = tmp_requests$exceptions_class_creation_5__bases;

    tmp_assign_source_28 = SELECT_METACLASS( tmp_class_meta_5, tmp_class_bases_5 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_5 );

        exception_lineno = 42;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_class_meta_5 );
    assert( tmp_requests$exceptions_class_creation_5__metaclass == NULL );
    tmp_requests$exceptions_class_creation_5__metaclass = tmp_assign_source_28;

    tmp_compare_left_10 = const_str_plain_metaclass;
    tmp_compare_right_10 = tmp_requests$exceptions_class_creation_5__class_decl_dict;

    tmp_cmp_In_10 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    if ( tmp_cmp_In_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
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
    tmp_remove_dict = tmp_requests$exceptions_class_creation_5__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_5;
    }
    branch_no_5:;
    tmp_hasattr_source_5 = tmp_requests$exceptions_class_creation_5__metaclass;

    tmp_hasattr_attr_5 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_5, tmp_hasattr_attr_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
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
    tmp_source_name_5 = tmp_requests$exceptions_class_creation_5__metaclass;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_5;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_10 = const_str_plain_SSLError;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_requests$exceptions_class_creation_5__bases;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_10 );
    tmp_kw_name_5 = tmp_requests$exceptions_class_creation_5__class_decl_dict;

    frame_module->f_lineno = 42;
    tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_5;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_29 = PyDict_New();
    condexpr_end_15:;
    assert( tmp_requests$exceptions_class_creation_5__prepared == NULL );
    tmp_requests$exceptions_class_creation_5__prepared = tmp_assign_source_29;

    tmp_assign_source_30 = impl_class_5_SSLError_of_requests$exceptions( tmp_requests$exceptions_class_creation_5__bases, tmp_requests$exceptions_class_creation_5__class_decl_dict, tmp_requests$exceptions_class_creation_5__metaclass, tmp_requests$exceptions_class_creation_5__prepared );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_30 );
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

    Py_XDECREF( tmp_requests$exceptions_class_creation_5__bases );
    tmp_requests$exceptions_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_5__class_decl_dict );
    tmp_requests$exceptions_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_5__metaclass );
    tmp_requests$exceptions_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_5__prepared );
    tmp_requests$exceptions_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_5__bases );
    tmp_requests$exceptions_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_5__class_decl_dict );
    tmp_requests$exceptions_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_5__metaclass );
    tmp_requests$exceptions_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_5__prepared );
    tmp_requests$exceptions_class_creation_5__prepared = NULL;

    // Tried code:
    tmp_assign_source_31 = PyTuple_New( 1 );
    tmp_tuple_element_11 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_11 == NULL ))
    {
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63226 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        goto try_except_handler_6;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_assign_source_31, 0, tmp_tuple_element_11 );
    assert( tmp_requests$exceptions_class_creation_6__bases == NULL );
    tmp_requests$exceptions_class_creation_6__bases = tmp_assign_source_31;

    tmp_assign_source_32 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_6__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_6__class_decl_dict = tmp_assign_source_32;

    tmp_compare_left_11 = const_str_plain_metaclass;
    tmp_compare_right_11 = tmp_requests$exceptions_class_creation_6__class_decl_dict;

    tmp_cmp_In_11 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    if ( tmp_cmp_In_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
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
    tmp_dget_dict_6 = tmp_requests$exceptions_class_creation_6__class_decl_dict;

    tmp_dget_key_6 = const_str_plain_metaclass;
    tmp_class_meta_6 = DICT_GET_ITEM( tmp_dget_dict_6, tmp_dget_key_6 );
    if ( tmp_class_meta_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_6;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_cond_value_6 = tmp_requests$exceptions_class_creation_6__bases;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
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
    tmp_subscribed_name_6 = tmp_requests$exceptions_class_creation_6__bases;

    tmp_subscript_name_6 = const_int_0;
    tmp_type_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_type_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_6;
    }
    tmp_class_meta_6 = BUILTIN_TYPE1( tmp_type_arg_6 );
    Py_DECREF( tmp_type_arg_6 );
    if ( tmp_class_meta_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_6;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_class_meta_6 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_6 != NULL );
    Py_INCREF( tmp_class_meta_6 );
    condexpr_end_17:;
    condexpr_end_16:;
    tmp_class_bases_6 = tmp_requests$exceptions_class_creation_6__bases;

    tmp_assign_source_33 = SELECT_METACLASS( tmp_class_meta_6, tmp_class_bases_6 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_6 );

        exception_lineno = 46;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_class_meta_6 );
    assert( tmp_requests$exceptions_class_creation_6__metaclass == NULL );
    tmp_requests$exceptions_class_creation_6__metaclass = tmp_assign_source_33;

    tmp_compare_left_12 = const_str_plain_metaclass;
    tmp_compare_right_12 = tmp_requests$exceptions_class_creation_6__class_decl_dict;

    tmp_cmp_In_12 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    if ( tmp_cmp_In_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
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
    tmp_remove_dict = tmp_requests$exceptions_class_creation_6__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_6;
    }
    branch_no_6:;
    tmp_hasattr_source_6 = tmp_requests$exceptions_class_creation_6__metaclass;

    tmp_hasattr_attr_6 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_6, tmp_hasattr_attr_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
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
    tmp_source_name_6 = tmp_requests$exceptions_class_creation_6__metaclass;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_6;
    }
    tmp_args_name_6 = PyTuple_New( 2 );
    tmp_tuple_element_12 = const_str_plain_Timeout;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = tmp_requests$exceptions_class_creation_6__bases;

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_12 );
    tmp_kw_name_6 = tmp_requests$exceptions_class_creation_6__class_decl_dict;

    frame_module->f_lineno = 46;
    tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_6;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_34 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_requests$exceptions_class_creation_6__prepared == NULL );
    tmp_requests$exceptions_class_creation_6__prepared = tmp_assign_source_34;

    tmp_assign_source_35 = impl_class_6_Timeout_of_requests$exceptions( tmp_requests$exceptions_class_creation_6__bases, tmp_requests$exceptions_class_creation_6__class_decl_dict, tmp_requests$exceptions_class_creation_6__metaclass, tmp_requests$exceptions_class_creation_6__prepared );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout, tmp_assign_source_35 );
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

    Py_XDECREF( tmp_requests$exceptions_class_creation_6__bases );
    tmp_requests$exceptions_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_6__class_decl_dict );
    tmp_requests$exceptions_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_6__metaclass );
    tmp_requests$exceptions_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_6__prepared );
    tmp_requests$exceptions_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_6__bases );
    tmp_requests$exceptions_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_6__class_decl_dict );
    tmp_requests$exceptions_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_6__metaclass );
    tmp_requests$exceptions_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_6__prepared );
    tmp_requests$exceptions_class_creation_6__prepared = NULL;

    // Tried code:
    tmp_assign_source_36 = PyTuple_New( 2 );
    tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError );

    if (unlikely( tmp_tuple_element_13 == NULL ))
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
    }

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60068 ], 37, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        goto try_except_handler_7;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_36, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout );

    if (unlikely( tmp_tuple_element_13 == NULL ))
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout );
    }

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63264 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        goto try_except_handler_7;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_36, 1, tmp_tuple_element_13 );
    assert( tmp_requests$exceptions_class_creation_7__bases == NULL );
    tmp_requests$exceptions_class_creation_7__bases = tmp_assign_source_36;

    tmp_assign_source_37 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_7__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_7__class_decl_dict = tmp_assign_source_37;

    tmp_compare_left_13 = const_str_plain_metaclass;
    tmp_compare_right_13 = tmp_requests$exceptions_class_creation_7__class_decl_dict;

    tmp_cmp_In_13 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    if ( tmp_cmp_In_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
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
    tmp_dget_dict_7 = tmp_requests$exceptions_class_creation_7__class_decl_dict;

    tmp_dget_key_7 = const_str_plain_metaclass;
    tmp_class_meta_7 = DICT_GET_ITEM( tmp_dget_dict_7, tmp_dget_key_7 );
    if ( tmp_class_meta_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_7;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_cond_value_7 = tmp_requests$exceptions_class_creation_7__bases;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
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
    tmp_subscribed_name_7 = tmp_requests$exceptions_class_creation_7__bases;

    tmp_subscript_name_7 = const_int_0;
    tmp_type_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_type_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_7;
    }
    tmp_class_meta_7 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_class_meta_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_7;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_class_meta_7 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_7 != NULL );
    Py_INCREF( tmp_class_meta_7 );
    condexpr_end_20:;
    condexpr_end_19:;
    tmp_class_bases_7 = tmp_requests$exceptions_class_creation_7__bases;

    tmp_assign_source_38 = SELECT_METACLASS( tmp_class_meta_7, tmp_class_bases_7 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_7 );

        exception_lineno = 55;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_class_meta_7 );
    assert( tmp_requests$exceptions_class_creation_7__metaclass == NULL );
    tmp_requests$exceptions_class_creation_7__metaclass = tmp_assign_source_38;

    tmp_compare_left_14 = const_str_plain_metaclass;
    tmp_compare_right_14 = tmp_requests$exceptions_class_creation_7__class_decl_dict;

    tmp_cmp_In_14 = PySequence_Contains( tmp_compare_right_14, tmp_compare_left_14 );
    if ( tmp_cmp_In_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
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
    tmp_remove_dict = tmp_requests$exceptions_class_creation_7__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_7;
    }
    branch_no_7:;
    tmp_hasattr_source_7 = tmp_requests$exceptions_class_creation_7__metaclass;

    tmp_hasattr_attr_7 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_7, tmp_hasattr_attr_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
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
    tmp_source_name_7 = tmp_requests$exceptions_class_creation_7__metaclass;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_7;
    }
    tmp_args_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_14 = const_str_plain_ConnectTimeout;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = tmp_requests$exceptions_class_creation_7__bases;

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_14 );
    tmp_kw_name_7 = tmp_requests$exceptions_class_creation_7__class_decl_dict;

    frame_module->f_lineno = 55;
    tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_7;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_assign_source_39 = PyDict_New();
    condexpr_end_21:;
    assert( tmp_requests$exceptions_class_creation_7__prepared == NULL );
    tmp_requests$exceptions_class_creation_7__prepared = tmp_assign_source_39;

    tmp_assign_source_40 = impl_class_7_ConnectTimeout_of_requests$exceptions( tmp_requests$exceptions_class_creation_7__bases, tmp_requests$exceptions_class_creation_7__class_decl_dict, tmp_requests$exceptions_class_creation_7__metaclass, tmp_requests$exceptions_class_creation_7__prepared );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectTimeout, tmp_assign_source_40 );
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

    Py_XDECREF( tmp_requests$exceptions_class_creation_7__bases );
    tmp_requests$exceptions_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_7__class_decl_dict );
    tmp_requests$exceptions_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_7__metaclass );
    tmp_requests$exceptions_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_7__prepared );
    tmp_requests$exceptions_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_7__bases );
    tmp_requests$exceptions_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_7__class_decl_dict );
    tmp_requests$exceptions_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_7__metaclass );
    tmp_requests$exceptions_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_7__prepared );
    tmp_requests$exceptions_class_creation_7__prepared = NULL;

    // Tried code:
    tmp_assign_source_41 = PyTuple_New( 1 );
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout );
    }

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_41 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63264 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        goto try_except_handler_8;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_assign_source_41, 0, tmp_tuple_element_15 );
    assert( tmp_requests$exceptions_class_creation_8__bases == NULL );
    tmp_requests$exceptions_class_creation_8__bases = tmp_assign_source_41;

    tmp_assign_source_42 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_8__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_8__class_decl_dict = tmp_assign_source_42;

    tmp_compare_left_15 = const_str_plain_metaclass;
    tmp_compare_right_15 = tmp_requests$exceptions_class_creation_8__class_decl_dict;

    tmp_cmp_In_15 = PySequence_Contains( tmp_compare_right_15, tmp_compare_left_15 );
    if ( tmp_cmp_In_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
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
    tmp_dget_dict_8 = tmp_requests$exceptions_class_creation_8__class_decl_dict;

    tmp_dget_key_8 = const_str_plain_metaclass;
    tmp_class_meta_8 = DICT_GET_ITEM( tmp_dget_dict_8, tmp_dget_key_8 );
    if ( tmp_class_meta_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_8;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_cond_value_8 = tmp_requests$exceptions_class_creation_8__bases;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
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
    tmp_subscribed_name_8 = tmp_requests$exceptions_class_creation_8__bases;

    tmp_subscript_name_8 = const_int_0;
    tmp_type_arg_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_type_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_8;
    }
    tmp_class_meta_8 = BUILTIN_TYPE1( tmp_type_arg_8 );
    Py_DECREF( tmp_type_arg_8 );
    if ( tmp_class_meta_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_8;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_class_meta_8 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_8 != NULL );
    Py_INCREF( tmp_class_meta_8 );
    condexpr_end_23:;
    condexpr_end_22:;
    tmp_class_bases_8 = tmp_requests$exceptions_class_creation_8__bases;

    tmp_assign_source_43 = SELECT_METACLASS( tmp_class_meta_8, tmp_class_bases_8 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_8 );

        exception_lineno = 62;
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_class_meta_8 );
    assert( tmp_requests$exceptions_class_creation_8__metaclass == NULL );
    tmp_requests$exceptions_class_creation_8__metaclass = tmp_assign_source_43;

    tmp_compare_left_16 = const_str_plain_metaclass;
    tmp_compare_right_16 = tmp_requests$exceptions_class_creation_8__class_decl_dict;

    tmp_cmp_In_16 = PySequence_Contains( tmp_compare_right_16, tmp_compare_left_16 );
    if ( tmp_cmp_In_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
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
    tmp_remove_dict = tmp_requests$exceptions_class_creation_8__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_8;
    }
    branch_no_8:;
    tmp_hasattr_source_8 = tmp_requests$exceptions_class_creation_8__metaclass;

    tmp_hasattr_attr_8 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_8, tmp_hasattr_attr_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
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
    tmp_source_name_8 = tmp_requests$exceptions_class_creation_8__metaclass;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_8;
    }
    tmp_args_name_8 = PyTuple_New( 2 );
    tmp_tuple_element_16 = const_str_plain_ReadTimeout;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = tmp_requests$exceptions_class_creation_8__bases;

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_16 );
    tmp_kw_name_8 = tmp_requests$exceptions_class_creation_8__class_decl_dict;

    frame_module->f_lineno = 62;
    tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_8;
    }
    goto condexpr_end_24;
    condexpr_false_24:;
    tmp_assign_source_44 = PyDict_New();
    condexpr_end_24:;
    assert( tmp_requests$exceptions_class_creation_8__prepared == NULL );
    tmp_requests$exceptions_class_creation_8__prepared = tmp_assign_source_44;

    tmp_assign_source_45 = impl_class_8_ReadTimeout_of_requests$exceptions( tmp_requests$exceptions_class_creation_8__bases, tmp_requests$exceptions_class_creation_8__class_decl_dict, tmp_requests$exceptions_class_creation_8__metaclass, tmp_requests$exceptions_class_creation_8__prepared );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ReadTimeout, tmp_assign_source_45 );
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

    Py_XDECREF( tmp_requests$exceptions_class_creation_8__bases );
    tmp_requests$exceptions_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_8__class_decl_dict );
    tmp_requests$exceptions_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_8__metaclass );
    tmp_requests$exceptions_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_8__prepared );
    tmp_requests$exceptions_class_creation_8__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_8__bases );
    tmp_requests$exceptions_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_8__class_decl_dict );
    tmp_requests$exceptions_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_8__metaclass );
    tmp_requests$exceptions_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_8__prepared );
    tmp_requests$exceptions_class_creation_8__prepared = NULL;

    // Tried code:
    tmp_assign_source_46 = PyTuple_New( 1 );
    tmp_tuple_element_17 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_17 == NULL ))
    {
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_46 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63226 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_assign_source_46, 0, tmp_tuple_element_17 );
    assert( tmp_requests$exceptions_class_creation_9__bases == NULL );
    tmp_requests$exceptions_class_creation_9__bases = tmp_assign_source_46;

    tmp_assign_source_47 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_9__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_9__class_decl_dict = tmp_assign_source_47;

    tmp_compare_left_17 = const_str_plain_metaclass;
    tmp_compare_right_17 = tmp_requests$exceptions_class_creation_9__class_decl_dict;

    tmp_cmp_In_17 = PySequence_Contains( tmp_compare_right_17, tmp_compare_left_17 );
    if ( tmp_cmp_In_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
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
    tmp_dget_dict_9 = tmp_requests$exceptions_class_creation_9__class_decl_dict;

    tmp_dget_key_9 = const_str_plain_metaclass;
    tmp_class_meta_9 = DICT_GET_ITEM( tmp_dget_dict_9, tmp_dget_key_9 );
    if ( tmp_class_meta_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto try_except_handler_9;
    }
    goto condexpr_end_25;
    condexpr_false_25:;
    tmp_cond_value_9 = tmp_requests$exceptions_class_creation_9__bases;

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
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
    tmp_subscribed_name_9 = tmp_requests$exceptions_class_creation_9__bases;

    tmp_subscript_name_9 = const_int_0;
    tmp_type_arg_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_type_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto try_except_handler_9;
    }
    tmp_class_meta_9 = BUILTIN_TYPE1( tmp_type_arg_9 );
    Py_DECREF( tmp_type_arg_9 );
    if ( tmp_class_meta_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto try_except_handler_9;
    }
    goto condexpr_end_26;
    condexpr_false_26:;
    tmp_class_meta_9 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_9 != NULL );
    Py_INCREF( tmp_class_meta_9 );
    condexpr_end_26:;
    condexpr_end_25:;
    tmp_class_bases_9 = tmp_requests$exceptions_class_creation_9__bases;

    tmp_assign_source_48 = SELECT_METACLASS( tmp_class_meta_9, tmp_class_bases_9 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_9 );

        exception_lineno = 66;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_class_meta_9 );
    assert( tmp_requests$exceptions_class_creation_9__metaclass == NULL );
    tmp_requests$exceptions_class_creation_9__metaclass = tmp_assign_source_48;

    tmp_compare_left_18 = const_str_plain_metaclass;
    tmp_compare_right_18 = tmp_requests$exceptions_class_creation_9__class_decl_dict;

    tmp_cmp_In_18 = PySequence_Contains( tmp_compare_right_18, tmp_compare_left_18 );
    if ( tmp_cmp_In_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
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
    tmp_remove_dict = tmp_requests$exceptions_class_creation_9__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto try_except_handler_9;
    }
    branch_no_9:;
    tmp_hasattr_source_9 = tmp_requests$exceptions_class_creation_9__metaclass;

    tmp_hasattr_attr_9 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_9, tmp_hasattr_attr_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
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
    tmp_source_name_9 = tmp_requests$exceptions_class_creation_9__metaclass;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto try_except_handler_9;
    }
    tmp_args_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_18 = const_str_plain_URLRequired;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_18 );
    tmp_tuple_element_18 = tmp_requests$exceptions_class_creation_9__bases;

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_18 );
    tmp_kw_name_9 = tmp_requests$exceptions_class_creation_9__class_decl_dict;

    frame_module->f_lineno = 66;
    tmp_assign_source_49 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto try_except_handler_9;
    }
    goto condexpr_end_27;
    condexpr_false_27:;
    tmp_assign_source_49 = PyDict_New();
    condexpr_end_27:;
    assert( tmp_requests$exceptions_class_creation_9__prepared == NULL );
    tmp_requests$exceptions_class_creation_9__prepared = tmp_assign_source_49;

    tmp_assign_source_50 = impl_class_9_URLRequired_of_requests$exceptions( tmp_requests$exceptions_class_creation_9__bases, tmp_requests$exceptions_class_creation_9__class_decl_dict, tmp_requests$exceptions_class_creation_9__metaclass, tmp_requests$exceptions_class_creation_9__prepared );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_URLRequired, tmp_assign_source_50 );
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

    Py_XDECREF( tmp_requests$exceptions_class_creation_9__bases );
    tmp_requests$exceptions_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_9__class_decl_dict );
    tmp_requests$exceptions_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_9__metaclass );
    tmp_requests$exceptions_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_9__prepared );
    tmp_requests$exceptions_class_creation_9__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_9__bases );
    tmp_requests$exceptions_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_9__class_decl_dict );
    tmp_requests$exceptions_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_9__metaclass );
    tmp_requests$exceptions_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_9__prepared );
    tmp_requests$exceptions_class_creation_9__prepared = NULL;

    // Tried code:
    tmp_assign_source_51 = PyTuple_New( 1 );
    tmp_tuple_element_19 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_19 == NULL ))
    {
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_19 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63226 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        goto try_except_handler_10;
    }

    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_assign_source_51, 0, tmp_tuple_element_19 );
    assert( tmp_requests$exceptions_class_creation_10__bases == NULL );
    tmp_requests$exceptions_class_creation_10__bases = tmp_assign_source_51;

    tmp_assign_source_52 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_10__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_10__class_decl_dict = tmp_assign_source_52;

    tmp_compare_left_19 = const_str_plain_metaclass;
    tmp_compare_right_19 = tmp_requests$exceptions_class_creation_10__class_decl_dict;

    tmp_cmp_In_19 = PySequence_Contains( tmp_compare_right_19, tmp_compare_left_19 );
    if ( tmp_cmp_In_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
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
    tmp_dget_dict_10 = tmp_requests$exceptions_class_creation_10__class_decl_dict;

    tmp_dget_key_10 = const_str_plain_metaclass;
    tmp_class_meta_10 = DICT_GET_ITEM( tmp_dget_dict_10, tmp_dget_key_10 );
    if ( tmp_class_meta_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_10;
    }
    goto condexpr_end_28;
    condexpr_false_28:;
    tmp_cond_value_10 = tmp_requests$exceptions_class_creation_10__bases;

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
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
    tmp_subscribed_name_10 = tmp_requests$exceptions_class_creation_10__bases;

    tmp_subscript_name_10 = const_int_0;
    tmp_type_arg_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_type_arg_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_10;
    }
    tmp_class_meta_10 = BUILTIN_TYPE1( tmp_type_arg_10 );
    Py_DECREF( tmp_type_arg_10 );
    if ( tmp_class_meta_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_10;
    }
    goto condexpr_end_29;
    condexpr_false_29:;
    tmp_class_meta_10 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_10 != NULL );
    Py_INCREF( tmp_class_meta_10 );
    condexpr_end_29:;
    condexpr_end_28:;
    tmp_class_bases_10 = tmp_requests$exceptions_class_creation_10__bases;

    tmp_assign_source_53 = SELECT_METACLASS( tmp_class_meta_10, tmp_class_bases_10 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_10 );

        exception_lineno = 70;
        goto try_except_handler_10;
    }
    Py_DECREF( tmp_class_meta_10 );
    assert( tmp_requests$exceptions_class_creation_10__metaclass == NULL );
    tmp_requests$exceptions_class_creation_10__metaclass = tmp_assign_source_53;

    tmp_compare_left_20 = const_str_plain_metaclass;
    tmp_compare_right_20 = tmp_requests$exceptions_class_creation_10__class_decl_dict;

    tmp_cmp_In_20 = PySequence_Contains( tmp_compare_right_20, tmp_compare_left_20 );
    if ( tmp_cmp_In_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
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
    tmp_remove_dict = tmp_requests$exceptions_class_creation_10__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_10;
    }
    branch_no_10:;
    tmp_hasattr_source_10 = tmp_requests$exceptions_class_creation_10__metaclass;

    tmp_hasattr_attr_10 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_10, tmp_hasattr_attr_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
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
    tmp_source_name_10 = tmp_requests$exceptions_class_creation_10__metaclass;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_10;
    }
    tmp_args_name_10 = PyTuple_New( 2 );
    tmp_tuple_element_20 = const_str_plain_TooManyRedirects;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = tmp_requests$exceptions_class_creation_10__bases;

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_20 );
    tmp_kw_name_10 = tmp_requests$exceptions_class_creation_10__class_decl_dict;

    frame_module->f_lineno = 70;
    tmp_assign_source_54 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_10;
    }
    goto condexpr_end_30;
    condexpr_false_30:;
    tmp_assign_source_54 = PyDict_New();
    condexpr_end_30:;
    assert( tmp_requests$exceptions_class_creation_10__prepared == NULL );
    tmp_requests$exceptions_class_creation_10__prepared = tmp_assign_source_54;

    tmp_assign_source_55 = impl_class_10_TooManyRedirects_of_requests$exceptions( tmp_requests$exceptions_class_creation_10__bases, tmp_requests$exceptions_class_creation_10__class_decl_dict, tmp_requests$exceptions_class_creation_10__metaclass, tmp_requests$exceptions_class_creation_10__prepared );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_TooManyRedirects, tmp_assign_source_55 );
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

    Py_XDECREF( tmp_requests$exceptions_class_creation_10__bases );
    tmp_requests$exceptions_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_10__class_decl_dict );
    tmp_requests$exceptions_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_10__metaclass );
    tmp_requests$exceptions_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_10__prepared );
    tmp_requests$exceptions_class_creation_10__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_10__bases );
    tmp_requests$exceptions_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_10__class_decl_dict );
    tmp_requests$exceptions_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_10__metaclass );
    tmp_requests$exceptions_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_10__prepared );
    tmp_requests$exceptions_class_creation_10__prepared = NULL;

    // Tried code:
    tmp_assign_source_56 = PyTuple_New( 2 );
    tmp_tuple_element_21 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_21 == NULL ))
    {
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_21 == NULL )
    {
        Py_DECREF( tmp_assign_source_56 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63226 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        goto try_except_handler_11;
    }

    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_assign_source_56, 0, tmp_tuple_element_21 );
    tmp_tuple_element_21 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_assign_source_56, 1, tmp_tuple_element_21 );
    assert( tmp_requests$exceptions_class_creation_11__bases == NULL );
    tmp_requests$exceptions_class_creation_11__bases = tmp_assign_source_56;

    tmp_assign_source_57 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_11__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_11__class_decl_dict = tmp_assign_source_57;

    tmp_compare_left_21 = const_str_plain_metaclass;
    tmp_compare_right_21 = tmp_requests$exceptions_class_creation_11__class_decl_dict;

    tmp_cmp_In_21 = PySequence_Contains( tmp_compare_right_21, tmp_compare_left_21 );
    if ( tmp_cmp_In_21 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
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
    tmp_dget_dict_11 = tmp_requests$exceptions_class_creation_11__class_decl_dict;

    tmp_dget_key_11 = const_str_plain_metaclass;
    tmp_class_meta_11 = DICT_GET_ITEM( tmp_dget_dict_11, tmp_dget_key_11 );
    if ( tmp_class_meta_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_11;
    }
    goto condexpr_end_31;
    condexpr_false_31:;
    tmp_cond_value_11 = tmp_requests$exceptions_class_creation_11__bases;

    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
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
    tmp_subscribed_name_11 = tmp_requests$exceptions_class_creation_11__bases;

    tmp_subscript_name_11 = const_int_0;
    tmp_type_arg_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_type_arg_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_11;
    }
    tmp_class_meta_11 = BUILTIN_TYPE1( tmp_type_arg_11 );
    Py_DECREF( tmp_type_arg_11 );
    if ( tmp_class_meta_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_11;
    }
    goto condexpr_end_32;
    condexpr_false_32:;
    tmp_class_meta_11 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_11 != NULL );
    Py_INCREF( tmp_class_meta_11 );
    condexpr_end_32:;
    condexpr_end_31:;
    tmp_class_bases_11 = tmp_requests$exceptions_class_creation_11__bases;

    tmp_assign_source_58 = SELECT_METACLASS( tmp_class_meta_11, tmp_class_bases_11 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_11 );

        exception_lineno = 74;
        goto try_except_handler_11;
    }
    Py_DECREF( tmp_class_meta_11 );
    assert( tmp_requests$exceptions_class_creation_11__metaclass == NULL );
    tmp_requests$exceptions_class_creation_11__metaclass = tmp_assign_source_58;

    tmp_compare_left_22 = const_str_plain_metaclass;
    tmp_compare_right_22 = tmp_requests$exceptions_class_creation_11__class_decl_dict;

    tmp_cmp_In_22 = PySequence_Contains( tmp_compare_right_22, tmp_compare_left_22 );
    if ( tmp_cmp_In_22 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
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
    tmp_remove_dict = tmp_requests$exceptions_class_creation_11__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_11;
    }
    branch_no_11:;
    tmp_hasattr_source_11 = tmp_requests$exceptions_class_creation_11__metaclass;

    tmp_hasattr_attr_11 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_11, tmp_hasattr_attr_11 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
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
    tmp_source_name_11 = tmp_requests$exceptions_class_creation_11__metaclass;

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___prepare__ );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_11;
    }
    tmp_args_name_11 = PyTuple_New( 2 );
    tmp_tuple_element_22 = const_str_plain_MissingSchema;
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = tmp_requests$exceptions_class_creation_11__bases;

    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_22 );
    tmp_kw_name_11 = tmp_requests$exceptions_class_creation_11__class_decl_dict;

    frame_module->f_lineno = 74;
    tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_11 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_11;
    }
    goto condexpr_end_33;
    condexpr_false_33:;
    tmp_assign_source_59 = PyDict_New();
    condexpr_end_33:;
    assert( tmp_requests$exceptions_class_creation_11__prepared == NULL );
    tmp_requests$exceptions_class_creation_11__prepared = tmp_assign_source_59;

    tmp_assign_source_60 = impl_class_11_MissingSchema_of_requests$exceptions( tmp_requests$exceptions_class_creation_11__bases, tmp_requests$exceptions_class_creation_11__class_decl_dict, tmp_requests$exceptions_class_creation_11__metaclass, tmp_requests$exceptions_class_creation_11__prepared );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_11;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_MissingSchema, tmp_assign_source_60 );
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

    Py_XDECREF( tmp_requests$exceptions_class_creation_11__bases );
    tmp_requests$exceptions_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_11__class_decl_dict );
    tmp_requests$exceptions_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_11__metaclass );
    tmp_requests$exceptions_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_11__prepared );
    tmp_requests$exceptions_class_creation_11__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_11__bases );
    tmp_requests$exceptions_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_11__class_decl_dict );
    tmp_requests$exceptions_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_11__metaclass );
    tmp_requests$exceptions_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_11__prepared );
    tmp_requests$exceptions_class_creation_11__prepared = NULL;

    // Tried code:
    tmp_assign_source_61 = PyTuple_New( 2 );
    tmp_tuple_element_23 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_23 == NULL ))
    {
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_23 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63226 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        goto try_except_handler_12;
    }

    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_assign_source_61, 0, tmp_tuple_element_23 );
    tmp_tuple_element_23 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_assign_source_61, 1, tmp_tuple_element_23 );
    assert( tmp_requests$exceptions_class_creation_12__bases == NULL );
    tmp_requests$exceptions_class_creation_12__bases = tmp_assign_source_61;

    tmp_assign_source_62 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_12__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_12__class_decl_dict = tmp_assign_source_62;

    tmp_compare_left_23 = const_str_plain_metaclass;
    tmp_compare_right_23 = tmp_requests$exceptions_class_creation_12__class_decl_dict;

    tmp_cmp_In_23 = PySequence_Contains( tmp_compare_right_23, tmp_compare_left_23 );
    if ( tmp_cmp_In_23 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
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
    tmp_dget_dict_12 = tmp_requests$exceptions_class_creation_12__class_decl_dict;

    tmp_dget_key_12 = const_str_plain_metaclass;
    tmp_class_meta_12 = DICT_GET_ITEM( tmp_dget_dict_12, tmp_dget_key_12 );
    if ( tmp_class_meta_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto try_except_handler_12;
    }
    goto condexpr_end_34;
    condexpr_false_34:;
    tmp_cond_value_12 = tmp_requests$exceptions_class_creation_12__bases;

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
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
    tmp_subscribed_name_12 = tmp_requests$exceptions_class_creation_12__bases;

    tmp_subscript_name_12 = const_int_0;
    tmp_type_arg_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
    if ( tmp_type_arg_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto try_except_handler_12;
    }
    tmp_class_meta_12 = BUILTIN_TYPE1( tmp_type_arg_12 );
    Py_DECREF( tmp_type_arg_12 );
    if ( tmp_class_meta_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto try_except_handler_12;
    }
    goto condexpr_end_35;
    condexpr_false_35:;
    tmp_class_meta_12 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_12 != NULL );
    Py_INCREF( tmp_class_meta_12 );
    condexpr_end_35:;
    condexpr_end_34:;
    tmp_class_bases_12 = tmp_requests$exceptions_class_creation_12__bases;

    tmp_assign_source_63 = SELECT_METACLASS( tmp_class_meta_12, tmp_class_bases_12 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_12 );

        exception_lineno = 78;
        goto try_except_handler_12;
    }
    Py_DECREF( tmp_class_meta_12 );
    assert( tmp_requests$exceptions_class_creation_12__metaclass == NULL );
    tmp_requests$exceptions_class_creation_12__metaclass = tmp_assign_source_63;

    tmp_compare_left_24 = const_str_plain_metaclass;
    tmp_compare_right_24 = tmp_requests$exceptions_class_creation_12__class_decl_dict;

    tmp_cmp_In_24 = PySequence_Contains( tmp_compare_right_24, tmp_compare_left_24 );
    if ( tmp_cmp_In_24 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
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
    tmp_remove_dict = tmp_requests$exceptions_class_creation_12__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto try_except_handler_12;
    }
    branch_no_12:;
    tmp_hasattr_source_12 = tmp_requests$exceptions_class_creation_12__metaclass;

    tmp_hasattr_attr_12 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_12, tmp_hasattr_attr_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
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
    tmp_source_name_12 = tmp_requests$exceptions_class_creation_12__metaclass;

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___prepare__ );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto try_except_handler_12;
    }
    tmp_args_name_12 = PyTuple_New( 2 );
    tmp_tuple_element_24 = const_str_plain_InvalidSchema;
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_24 );
    tmp_tuple_element_24 = tmp_requests$exceptions_class_creation_12__bases;

    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_24 );
    tmp_kw_name_12 = tmp_requests$exceptions_class_creation_12__class_decl_dict;

    frame_module->f_lineno = 78;
    tmp_assign_source_64 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto try_except_handler_12;
    }
    goto condexpr_end_36;
    condexpr_false_36:;
    tmp_assign_source_64 = PyDict_New();
    condexpr_end_36:;
    assert( tmp_requests$exceptions_class_creation_12__prepared == NULL );
    tmp_requests$exceptions_class_creation_12__prepared = tmp_assign_source_64;

    tmp_assign_source_65 = impl_class_12_InvalidSchema_of_requests$exceptions( tmp_requests$exceptions_class_creation_12__bases, tmp_requests$exceptions_class_creation_12__class_decl_dict, tmp_requests$exceptions_class_creation_12__metaclass, tmp_requests$exceptions_class_creation_12__prepared );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidSchema, tmp_assign_source_65 );
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

    Py_XDECREF( tmp_requests$exceptions_class_creation_12__bases );
    tmp_requests$exceptions_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_12__class_decl_dict );
    tmp_requests$exceptions_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_12__metaclass );
    tmp_requests$exceptions_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_12__prepared );
    tmp_requests$exceptions_class_creation_12__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_12__bases );
    tmp_requests$exceptions_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_12__class_decl_dict );
    tmp_requests$exceptions_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_12__metaclass );
    tmp_requests$exceptions_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_12__prepared );
    tmp_requests$exceptions_class_creation_12__prepared = NULL;

    // Tried code:
    tmp_assign_source_66 = PyTuple_New( 2 );
    tmp_tuple_element_25 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_25 == NULL ))
    {
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_25 == NULL )
    {
        Py_DECREF( tmp_assign_source_66 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63226 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        goto try_except_handler_13;
    }

    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_assign_source_66, 0, tmp_tuple_element_25 );
    tmp_tuple_element_25 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_assign_source_66, 1, tmp_tuple_element_25 );
    assert( tmp_requests$exceptions_class_creation_13__bases == NULL );
    tmp_requests$exceptions_class_creation_13__bases = tmp_assign_source_66;

    tmp_assign_source_67 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_13__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_13__class_decl_dict = tmp_assign_source_67;

    tmp_compare_left_25 = const_str_plain_metaclass;
    tmp_compare_right_25 = tmp_requests$exceptions_class_creation_13__class_decl_dict;

    tmp_cmp_In_25 = PySequence_Contains( tmp_compare_right_25, tmp_compare_left_25 );
    if ( tmp_cmp_In_25 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_13;
    }
    if ( tmp_cmp_In_25 == 1 )
    {
        goto condexpr_true_37;
    }
    else
    {
        goto condexpr_false_37;
    }
    condexpr_true_37:;
    tmp_dget_dict_13 = tmp_requests$exceptions_class_creation_13__class_decl_dict;

    tmp_dget_key_13 = const_str_plain_metaclass;
    tmp_class_meta_13 = DICT_GET_ITEM( tmp_dget_dict_13, tmp_dget_key_13 );
    if ( tmp_class_meta_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_13;
    }
    goto condexpr_end_37;
    condexpr_false_37:;
    tmp_cond_value_13 = tmp_requests$exceptions_class_creation_13__bases;

    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_13;
    }
    if ( tmp_cond_truth_13 == 1 )
    {
        goto condexpr_true_38;
    }
    else
    {
        goto condexpr_false_38;
    }
    condexpr_true_38:;
    tmp_subscribed_name_13 = tmp_requests$exceptions_class_creation_13__bases;

    tmp_subscript_name_13 = const_int_0;
    tmp_type_arg_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
    if ( tmp_type_arg_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_13;
    }
    tmp_class_meta_13 = BUILTIN_TYPE1( tmp_type_arg_13 );
    Py_DECREF( tmp_type_arg_13 );
    if ( tmp_class_meta_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_13;
    }
    goto condexpr_end_38;
    condexpr_false_38:;
    tmp_class_meta_13 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_13 != NULL );
    Py_INCREF( tmp_class_meta_13 );
    condexpr_end_38:;
    condexpr_end_37:;
    tmp_class_bases_13 = tmp_requests$exceptions_class_creation_13__bases;

    tmp_assign_source_68 = SELECT_METACLASS( tmp_class_meta_13, tmp_class_bases_13 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_13 );

        exception_lineno = 82;
        goto try_except_handler_13;
    }
    Py_DECREF( tmp_class_meta_13 );
    assert( tmp_requests$exceptions_class_creation_13__metaclass == NULL );
    tmp_requests$exceptions_class_creation_13__metaclass = tmp_assign_source_68;

    tmp_compare_left_26 = const_str_plain_metaclass;
    tmp_compare_right_26 = tmp_requests$exceptions_class_creation_13__class_decl_dict;

    tmp_cmp_In_26 = PySequence_Contains( tmp_compare_right_26, tmp_compare_left_26 );
    if ( tmp_cmp_In_26 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_13;
    }
    if ( tmp_cmp_In_26 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_remove_dict = tmp_requests$exceptions_class_creation_13__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_13;
    }
    branch_no_13:;
    tmp_hasattr_source_13 = tmp_requests$exceptions_class_creation_13__metaclass;

    tmp_hasattr_attr_13 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_13, tmp_hasattr_attr_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_13;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_39;
    }
    else
    {
        goto condexpr_false_39;
    }
    condexpr_true_39:;
    tmp_source_name_13 = tmp_requests$exceptions_class_creation_13__metaclass;

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___prepare__ );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_13;
    }
    tmp_args_name_13 = PyTuple_New( 2 );
    tmp_tuple_element_26 = const_str_plain_InvalidURL;
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_26 );
    tmp_tuple_element_26 = tmp_requests$exceptions_class_creation_13__bases;

    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_13, 1, tmp_tuple_element_26 );
    tmp_kw_name_13 = tmp_requests$exceptions_class_creation_13__class_decl_dict;

    frame_module->f_lineno = 82;
    tmp_assign_source_69 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_name_13 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_13;
    }
    goto condexpr_end_39;
    condexpr_false_39:;
    tmp_assign_source_69 = PyDict_New();
    condexpr_end_39:;
    assert( tmp_requests$exceptions_class_creation_13__prepared == NULL );
    tmp_requests$exceptions_class_creation_13__prepared = tmp_assign_source_69;

    tmp_assign_source_70 = impl_class_13_InvalidURL_of_requests$exceptions( tmp_requests$exceptions_class_creation_13__bases, tmp_requests$exceptions_class_creation_13__class_decl_dict, tmp_requests$exceptions_class_creation_13__metaclass, tmp_requests$exceptions_class_creation_13__prepared );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_13;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidURL, tmp_assign_source_70 );
    goto try_end_13;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_requests$exceptions_class_creation_13__bases );
    tmp_requests$exceptions_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_13__class_decl_dict );
    tmp_requests$exceptions_class_creation_13__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_13__metaclass );
    tmp_requests$exceptions_class_creation_13__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_13__prepared );
    tmp_requests$exceptions_class_creation_13__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_13__bases );
    tmp_requests$exceptions_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_13__class_decl_dict );
    tmp_requests$exceptions_class_creation_13__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_13__metaclass );
    tmp_requests$exceptions_class_creation_13__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_13__prepared );
    tmp_requests$exceptions_class_creation_13__prepared = NULL;

    // Tried code:
    tmp_assign_source_71 = PyTuple_New( 1 );
    tmp_tuple_element_27 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_27 == NULL ))
    {
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_27 == NULL )
    {
        Py_DECREF( tmp_assign_source_71 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63226 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto try_except_handler_14;
    }

    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_assign_source_71, 0, tmp_tuple_element_27 );
    assert( tmp_requests$exceptions_class_creation_14__bases == NULL );
    tmp_requests$exceptions_class_creation_14__bases = tmp_assign_source_71;

    tmp_assign_source_72 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_14__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_14__class_decl_dict = tmp_assign_source_72;

    tmp_compare_left_27 = const_str_plain_metaclass;
    tmp_compare_right_27 = tmp_requests$exceptions_class_creation_14__class_decl_dict;

    tmp_cmp_In_27 = PySequence_Contains( tmp_compare_right_27, tmp_compare_left_27 );
    if ( tmp_cmp_In_27 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_14;
    }
    if ( tmp_cmp_In_27 == 1 )
    {
        goto condexpr_true_40;
    }
    else
    {
        goto condexpr_false_40;
    }
    condexpr_true_40:;
    tmp_dget_dict_14 = tmp_requests$exceptions_class_creation_14__class_decl_dict;

    tmp_dget_key_14 = const_str_plain_metaclass;
    tmp_class_meta_14 = DICT_GET_ITEM( tmp_dget_dict_14, tmp_dget_key_14 );
    if ( tmp_class_meta_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_14;
    }
    goto condexpr_end_40;
    condexpr_false_40:;
    tmp_cond_value_14 = tmp_requests$exceptions_class_creation_14__bases;

    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_14;
    }
    if ( tmp_cond_truth_14 == 1 )
    {
        goto condexpr_true_41;
    }
    else
    {
        goto condexpr_false_41;
    }
    condexpr_true_41:;
    tmp_subscribed_name_14 = tmp_requests$exceptions_class_creation_14__bases;

    tmp_subscript_name_14 = const_int_0;
    tmp_type_arg_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
    if ( tmp_type_arg_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_14;
    }
    tmp_class_meta_14 = BUILTIN_TYPE1( tmp_type_arg_14 );
    Py_DECREF( tmp_type_arg_14 );
    if ( tmp_class_meta_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_14;
    }
    goto condexpr_end_41;
    condexpr_false_41:;
    tmp_class_meta_14 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_14 != NULL );
    Py_INCREF( tmp_class_meta_14 );
    condexpr_end_41:;
    condexpr_end_40:;
    tmp_class_bases_14 = tmp_requests$exceptions_class_creation_14__bases;

    tmp_assign_source_73 = SELECT_METACLASS( tmp_class_meta_14, tmp_class_bases_14 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_14 );

        exception_lineno = 86;
        goto try_except_handler_14;
    }
    Py_DECREF( tmp_class_meta_14 );
    assert( tmp_requests$exceptions_class_creation_14__metaclass == NULL );
    tmp_requests$exceptions_class_creation_14__metaclass = tmp_assign_source_73;

    tmp_compare_left_28 = const_str_plain_metaclass;
    tmp_compare_right_28 = tmp_requests$exceptions_class_creation_14__class_decl_dict;

    tmp_cmp_In_28 = PySequence_Contains( tmp_compare_right_28, tmp_compare_left_28 );
    if ( tmp_cmp_In_28 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_14;
    }
    if ( tmp_cmp_In_28 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_remove_dict = tmp_requests$exceptions_class_creation_14__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_14;
    }
    branch_no_14:;
    tmp_hasattr_source_14 = tmp_requests$exceptions_class_creation_14__metaclass;

    tmp_hasattr_attr_14 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_14, tmp_hasattr_attr_14 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_14;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_42;
    }
    else
    {
        goto condexpr_false_42;
    }
    condexpr_true_42:;
    tmp_source_name_14 = tmp_requests$exceptions_class_creation_14__metaclass;

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_14;
    }
    tmp_args_name_14 = PyTuple_New( 2 );
    tmp_tuple_element_28 = const_str_plain_ChunkedEncodingError;
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_28 );
    tmp_tuple_element_28 = tmp_requests$exceptions_class_creation_14__bases;

    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_28 );
    tmp_kw_name_14 = tmp_requests$exceptions_class_creation_14__class_decl_dict;

    frame_module->f_lineno = 86;
    tmp_assign_source_74 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_14, tmp_kw_name_14 );
    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_name_14 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_14;
    }
    goto condexpr_end_42;
    condexpr_false_42:;
    tmp_assign_source_74 = PyDict_New();
    condexpr_end_42:;
    assert( tmp_requests$exceptions_class_creation_14__prepared == NULL );
    tmp_requests$exceptions_class_creation_14__prepared = tmp_assign_source_74;

    tmp_assign_source_75 = impl_class_14_ChunkedEncodingError_of_requests$exceptions( tmp_requests$exceptions_class_creation_14__bases, tmp_requests$exceptions_class_creation_14__class_decl_dict, tmp_requests$exceptions_class_creation_14__metaclass, tmp_requests$exceptions_class_creation_14__prepared );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_14;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ChunkedEncodingError, tmp_assign_source_75 );
    goto try_end_14;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_requests$exceptions_class_creation_14__bases );
    tmp_requests$exceptions_class_creation_14__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_14__class_decl_dict );
    tmp_requests$exceptions_class_creation_14__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_14__metaclass );
    tmp_requests$exceptions_class_creation_14__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_14__prepared );
    tmp_requests$exceptions_class_creation_14__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_14__bases );
    tmp_requests$exceptions_class_creation_14__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_14__class_decl_dict );
    tmp_requests$exceptions_class_creation_14__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_14__metaclass );
    tmp_requests$exceptions_class_creation_14__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_14__prepared );
    tmp_requests$exceptions_class_creation_14__prepared = NULL;

    // Tried code:
    tmp_assign_source_76 = PyTuple_New( 2 );
    tmp_tuple_element_29 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_29 == NULL ))
    {
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_29 == NULL )
    {
        Py_DECREF( tmp_assign_source_76 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63226 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto try_except_handler_15;
    }

    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_assign_source_76, 0, tmp_tuple_element_29 );
    tmp_tuple_element_29 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_BaseHTTPError );

    if (unlikely( tmp_tuple_element_29 == NULL ))
    {
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseHTTPError );
    }

    if ( tmp_tuple_element_29 == NULL )
    {
        Py_DECREF( tmp_assign_source_76 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63293 ], 35, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto try_except_handler_15;
    }

    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_assign_source_76, 1, tmp_tuple_element_29 );
    assert( tmp_requests$exceptions_class_creation_15__bases == NULL );
    tmp_requests$exceptions_class_creation_15__bases = tmp_assign_source_76;

    tmp_assign_source_77 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_15__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_15__class_decl_dict = tmp_assign_source_77;

    tmp_compare_left_29 = const_str_plain_metaclass;
    tmp_compare_right_29 = tmp_requests$exceptions_class_creation_15__class_decl_dict;

    tmp_cmp_In_29 = PySequence_Contains( tmp_compare_right_29, tmp_compare_left_29 );
    if ( tmp_cmp_In_29 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_15;
    }
    if ( tmp_cmp_In_29 == 1 )
    {
        goto condexpr_true_43;
    }
    else
    {
        goto condexpr_false_43;
    }
    condexpr_true_43:;
    tmp_dget_dict_15 = tmp_requests$exceptions_class_creation_15__class_decl_dict;

    tmp_dget_key_15 = const_str_plain_metaclass;
    tmp_class_meta_15 = DICT_GET_ITEM( tmp_dget_dict_15, tmp_dget_key_15 );
    if ( tmp_class_meta_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_15;
    }
    goto condexpr_end_43;
    condexpr_false_43:;
    tmp_cond_value_15 = tmp_requests$exceptions_class_creation_15__bases;

    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_15;
    }
    if ( tmp_cond_truth_15 == 1 )
    {
        goto condexpr_true_44;
    }
    else
    {
        goto condexpr_false_44;
    }
    condexpr_true_44:;
    tmp_subscribed_name_15 = tmp_requests$exceptions_class_creation_15__bases;

    tmp_subscript_name_15 = const_int_0;
    tmp_type_arg_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
    if ( tmp_type_arg_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_15;
    }
    tmp_class_meta_15 = BUILTIN_TYPE1( tmp_type_arg_15 );
    Py_DECREF( tmp_type_arg_15 );
    if ( tmp_class_meta_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_15;
    }
    goto condexpr_end_44;
    condexpr_false_44:;
    tmp_class_meta_15 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_15 != NULL );
    Py_INCREF( tmp_class_meta_15 );
    condexpr_end_44:;
    condexpr_end_43:;
    tmp_class_bases_15 = tmp_requests$exceptions_class_creation_15__bases;

    tmp_assign_source_78 = SELECT_METACLASS( tmp_class_meta_15, tmp_class_bases_15 );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_15 );

        exception_lineno = 90;
        goto try_except_handler_15;
    }
    Py_DECREF( tmp_class_meta_15 );
    assert( tmp_requests$exceptions_class_creation_15__metaclass == NULL );
    tmp_requests$exceptions_class_creation_15__metaclass = tmp_assign_source_78;

    tmp_compare_left_30 = const_str_plain_metaclass;
    tmp_compare_right_30 = tmp_requests$exceptions_class_creation_15__class_decl_dict;

    tmp_cmp_In_30 = PySequence_Contains( tmp_compare_right_30, tmp_compare_left_30 );
    if ( tmp_cmp_In_30 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_15;
    }
    if ( tmp_cmp_In_30 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_remove_dict = tmp_requests$exceptions_class_creation_15__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_15;
    }
    branch_no_15:;
    tmp_hasattr_source_15 = tmp_requests$exceptions_class_creation_15__metaclass;

    tmp_hasattr_attr_15 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_15, tmp_hasattr_attr_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_15;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_45;
    }
    else
    {
        goto condexpr_false_45;
    }
    condexpr_true_45:;
    tmp_source_name_15 = tmp_requests$exceptions_class_creation_15__metaclass;

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain___prepare__ );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_15;
    }
    tmp_args_name_15 = PyTuple_New( 2 );
    tmp_tuple_element_30 = const_str_plain_ContentDecodingError;
    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_args_name_15, 0, tmp_tuple_element_30 );
    tmp_tuple_element_30 = tmp_requests$exceptions_class_creation_15__bases;

    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_args_name_15, 1, tmp_tuple_element_30 );
    tmp_kw_name_15 = tmp_requests$exceptions_class_creation_15__class_decl_dict;

    frame_module->f_lineno = 90;
    tmp_assign_source_79 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_15, tmp_kw_name_15 );
    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_name_15 );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_15;
    }
    goto condexpr_end_45;
    condexpr_false_45:;
    tmp_assign_source_79 = PyDict_New();
    condexpr_end_45:;
    assert( tmp_requests$exceptions_class_creation_15__prepared == NULL );
    tmp_requests$exceptions_class_creation_15__prepared = tmp_assign_source_79;

    tmp_assign_source_80 = impl_class_15_ContentDecodingError_of_requests$exceptions( tmp_requests$exceptions_class_creation_15__bases, tmp_requests$exceptions_class_creation_15__class_decl_dict, tmp_requests$exceptions_class_creation_15__metaclass, tmp_requests$exceptions_class_creation_15__prepared );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_15;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ContentDecodingError, tmp_assign_source_80 );
    goto try_end_15;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_requests$exceptions_class_creation_15__bases );
    tmp_requests$exceptions_class_creation_15__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_15__class_decl_dict );
    tmp_requests$exceptions_class_creation_15__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_15__metaclass );
    tmp_requests$exceptions_class_creation_15__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_15__prepared );
    tmp_requests$exceptions_class_creation_15__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_15__bases );
    tmp_requests$exceptions_class_creation_15__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_15__class_decl_dict );
    tmp_requests$exceptions_class_creation_15__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_15__metaclass );
    tmp_requests$exceptions_class_creation_15__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_15__prepared );
    tmp_requests$exceptions_class_creation_15__prepared = NULL;

    // Tried code:
    tmp_assign_source_81 = PyTuple_New( 2 );
    tmp_tuple_element_31 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_31 == NULL ))
    {
        tmp_tuple_element_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_31 == NULL )
    {
        Py_DECREF( tmp_assign_source_81 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63226 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        goto try_except_handler_16;
    }

    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_assign_source_81, 0, tmp_tuple_element_31 );
    tmp_tuple_element_31 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_assign_source_81, 1, tmp_tuple_element_31 );
    assert( tmp_requests$exceptions_class_creation_16__bases == NULL );
    tmp_requests$exceptions_class_creation_16__bases = tmp_assign_source_81;

    tmp_assign_source_82 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_16__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_16__class_decl_dict = tmp_assign_source_82;

    tmp_compare_left_31 = const_str_plain_metaclass;
    tmp_compare_right_31 = tmp_requests$exceptions_class_creation_16__class_decl_dict;

    tmp_cmp_In_31 = PySequence_Contains( tmp_compare_right_31, tmp_compare_left_31 );
    if ( tmp_cmp_In_31 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_16;
    }
    if ( tmp_cmp_In_31 == 1 )
    {
        goto condexpr_true_46;
    }
    else
    {
        goto condexpr_false_46;
    }
    condexpr_true_46:;
    tmp_dget_dict_16 = tmp_requests$exceptions_class_creation_16__class_decl_dict;

    tmp_dget_key_16 = const_str_plain_metaclass;
    tmp_class_meta_16 = DICT_GET_ITEM( tmp_dget_dict_16, tmp_dget_key_16 );
    if ( tmp_class_meta_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_16;
    }
    goto condexpr_end_46;
    condexpr_false_46:;
    tmp_cond_value_16 = tmp_requests$exceptions_class_creation_16__bases;

    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_16;
    }
    if ( tmp_cond_truth_16 == 1 )
    {
        goto condexpr_true_47;
    }
    else
    {
        goto condexpr_false_47;
    }
    condexpr_true_47:;
    tmp_subscribed_name_16 = tmp_requests$exceptions_class_creation_16__bases;

    tmp_subscript_name_16 = const_int_0;
    tmp_type_arg_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
    if ( tmp_type_arg_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_16;
    }
    tmp_class_meta_16 = BUILTIN_TYPE1( tmp_type_arg_16 );
    Py_DECREF( tmp_type_arg_16 );
    if ( tmp_class_meta_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_16;
    }
    goto condexpr_end_47;
    condexpr_false_47:;
    tmp_class_meta_16 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_16 != NULL );
    Py_INCREF( tmp_class_meta_16 );
    condexpr_end_47:;
    condexpr_end_46:;
    tmp_class_bases_16 = tmp_requests$exceptions_class_creation_16__bases;

    tmp_assign_source_83 = SELECT_METACLASS( tmp_class_meta_16, tmp_class_bases_16 );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_16 );

        exception_lineno = 94;
        goto try_except_handler_16;
    }
    Py_DECREF( tmp_class_meta_16 );
    assert( tmp_requests$exceptions_class_creation_16__metaclass == NULL );
    tmp_requests$exceptions_class_creation_16__metaclass = tmp_assign_source_83;

    tmp_compare_left_32 = const_str_plain_metaclass;
    tmp_compare_right_32 = tmp_requests$exceptions_class_creation_16__class_decl_dict;

    tmp_cmp_In_32 = PySequence_Contains( tmp_compare_right_32, tmp_compare_left_32 );
    if ( tmp_cmp_In_32 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_16;
    }
    if ( tmp_cmp_In_32 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_remove_dict = tmp_requests$exceptions_class_creation_16__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_16;
    }
    branch_no_16:;
    tmp_hasattr_source_16 = tmp_requests$exceptions_class_creation_16__metaclass;

    tmp_hasattr_attr_16 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_16, tmp_hasattr_attr_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_16;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_48;
    }
    else
    {
        goto condexpr_false_48;
    }
    condexpr_true_48:;
    tmp_source_name_16 = tmp_requests$exceptions_class_creation_16__metaclass;

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___prepare__ );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_16;
    }
    tmp_args_name_16 = PyTuple_New( 2 );
    tmp_tuple_element_32 = const_str_plain_StreamConsumedError;
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_16, 0, tmp_tuple_element_32 );
    tmp_tuple_element_32 = tmp_requests$exceptions_class_creation_16__bases;

    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_16, 1, tmp_tuple_element_32 );
    tmp_kw_name_16 = tmp_requests$exceptions_class_creation_16__class_decl_dict;

    frame_module->f_lineno = 94;
    tmp_assign_source_84 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_16, tmp_kw_name_16 );
    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_name_16 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_16;
    }
    goto condexpr_end_48;
    condexpr_false_48:;
    tmp_assign_source_84 = PyDict_New();
    condexpr_end_48:;
    assert( tmp_requests$exceptions_class_creation_16__prepared == NULL );
    tmp_requests$exceptions_class_creation_16__prepared = tmp_assign_source_84;

    tmp_assign_source_85 = impl_class_16_StreamConsumedError_of_requests$exceptions( tmp_requests$exceptions_class_creation_16__bases, tmp_requests$exceptions_class_creation_16__class_decl_dict, tmp_requests$exceptions_class_creation_16__metaclass, tmp_requests$exceptions_class_creation_16__prepared );
    if ( tmp_assign_source_85 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_16;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_StreamConsumedError, tmp_assign_source_85 );
    goto try_end_16;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_requests$exceptions_class_creation_16__bases );
    tmp_requests$exceptions_class_creation_16__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_16__class_decl_dict );
    tmp_requests$exceptions_class_creation_16__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_16__metaclass );
    tmp_requests$exceptions_class_creation_16__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_16__prepared );
    tmp_requests$exceptions_class_creation_16__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_16__bases );
    tmp_requests$exceptions_class_creation_16__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_16__class_decl_dict );
    tmp_requests$exceptions_class_creation_16__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_16__metaclass );
    tmp_requests$exceptions_class_creation_16__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_16__prepared );
    tmp_requests$exceptions_class_creation_16__prepared = NULL;

    // Tried code:
    tmp_assign_source_86 = PyTuple_New( 1 );
    tmp_tuple_element_33 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_33 == NULL ))
    {
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_33 == NULL )
    {
        Py_DECREF( tmp_assign_source_86 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63226 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        goto try_except_handler_17;
    }

    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_assign_source_86, 0, tmp_tuple_element_33 );
    assert( tmp_requests$exceptions_class_creation_17__bases == NULL );
    tmp_requests$exceptions_class_creation_17__bases = tmp_assign_source_86;

    tmp_assign_source_87 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_17__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_17__class_decl_dict = tmp_assign_source_87;

    tmp_compare_left_33 = const_str_plain_metaclass;
    tmp_compare_right_33 = tmp_requests$exceptions_class_creation_17__class_decl_dict;

    tmp_cmp_In_33 = PySequence_Contains( tmp_compare_right_33, tmp_compare_left_33 );
    if ( tmp_cmp_In_33 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_17;
    }
    if ( tmp_cmp_In_33 == 1 )
    {
        goto condexpr_true_49;
    }
    else
    {
        goto condexpr_false_49;
    }
    condexpr_true_49:;
    tmp_dget_dict_17 = tmp_requests$exceptions_class_creation_17__class_decl_dict;

    tmp_dget_key_17 = const_str_plain_metaclass;
    tmp_class_meta_17 = DICT_GET_ITEM( tmp_dget_dict_17, tmp_dget_key_17 );
    if ( tmp_class_meta_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_17;
    }
    goto condexpr_end_49;
    condexpr_false_49:;
    tmp_cond_value_17 = tmp_requests$exceptions_class_creation_17__bases;

    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_17;
    }
    if ( tmp_cond_truth_17 == 1 )
    {
        goto condexpr_true_50;
    }
    else
    {
        goto condexpr_false_50;
    }
    condexpr_true_50:;
    tmp_subscribed_name_17 = tmp_requests$exceptions_class_creation_17__bases;

    tmp_subscript_name_17 = const_int_0;
    tmp_type_arg_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
    if ( tmp_type_arg_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_17;
    }
    tmp_class_meta_17 = BUILTIN_TYPE1( tmp_type_arg_17 );
    Py_DECREF( tmp_type_arg_17 );
    if ( tmp_class_meta_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_17;
    }
    goto condexpr_end_50;
    condexpr_false_50:;
    tmp_class_meta_17 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_17 != NULL );
    Py_INCREF( tmp_class_meta_17 );
    condexpr_end_50:;
    condexpr_end_49:;
    tmp_class_bases_17 = tmp_requests$exceptions_class_creation_17__bases;

    tmp_assign_source_88 = SELECT_METACLASS( tmp_class_meta_17, tmp_class_bases_17 );
    if ( tmp_assign_source_88 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_17 );

        exception_lineno = 98;
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_class_meta_17 );
    assert( tmp_requests$exceptions_class_creation_17__metaclass == NULL );
    tmp_requests$exceptions_class_creation_17__metaclass = tmp_assign_source_88;

    tmp_compare_left_34 = const_str_plain_metaclass;
    tmp_compare_right_34 = tmp_requests$exceptions_class_creation_17__class_decl_dict;

    tmp_cmp_In_34 = PySequence_Contains( tmp_compare_right_34, tmp_compare_left_34 );
    if ( tmp_cmp_In_34 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_17;
    }
    if ( tmp_cmp_In_34 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_remove_dict = tmp_requests$exceptions_class_creation_17__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_17;
    }
    branch_no_17:;
    tmp_hasattr_source_17 = tmp_requests$exceptions_class_creation_17__metaclass;

    tmp_hasattr_attr_17 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_17, tmp_hasattr_attr_17 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_17;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_51;
    }
    else
    {
        goto condexpr_false_51;
    }
    condexpr_true_51:;
    tmp_source_name_17 = tmp_requests$exceptions_class_creation_17__metaclass;

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain___prepare__ );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_17;
    }
    tmp_args_name_17 = PyTuple_New( 2 );
    tmp_tuple_element_34 = const_str_plain_RetryError;
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_17, 0, tmp_tuple_element_34 );
    tmp_tuple_element_34 = tmp_requests$exceptions_class_creation_17__bases;

    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_17, 1, tmp_tuple_element_34 );
    tmp_kw_name_17 = tmp_requests$exceptions_class_creation_17__class_decl_dict;

    frame_module->f_lineno = 98;
    tmp_assign_source_89 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_17, tmp_kw_name_17 );
    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_name_17 );
    if ( tmp_assign_source_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_17;
    }
    goto condexpr_end_51;
    condexpr_false_51:;
    tmp_assign_source_89 = PyDict_New();
    condexpr_end_51:;
    assert( tmp_requests$exceptions_class_creation_17__prepared == NULL );
    tmp_requests$exceptions_class_creation_17__prepared = tmp_assign_source_89;

    tmp_assign_source_90 = impl_class_17_RetryError_of_requests$exceptions( tmp_requests$exceptions_class_creation_17__bases, tmp_requests$exceptions_class_creation_17__class_decl_dict, tmp_requests$exceptions_class_creation_17__metaclass, tmp_requests$exceptions_class_creation_17__prepared );
    if ( tmp_assign_source_90 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_17;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RetryError, tmp_assign_source_90 );
    goto try_end_17;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_requests$exceptions_class_creation_17__bases );
    tmp_requests$exceptions_class_creation_17__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_17__class_decl_dict );
    tmp_requests$exceptions_class_creation_17__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_17__metaclass );
    tmp_requests$exceptions_class_creation_17__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_17__prepared );
    tmp_requests$exceptions_class_creation_17__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_17__bases );
    tmp_requests$exceptions_class_creation_17__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_17__class_decl_dict );
    tmp_requests$exceptions_class_creation_17__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_17__metaclass );
    tmp_requests$exceptions_class_creation_17__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_17__prepared );
    tmp_requests$exceptions_class_creation_17__prepared = NULL;

    // Tried code:
    tmp_assign_source_91 = PyTuple_New( 1 );
    tmp_tuple_element_35 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_tuple_element_35 == NULL ))
    {
        tmp_tuple_element_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_tuple_element_35 == NULL )
    {
        Py_DECREF( tmp_assign_source_91 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 17410 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        goto try_except_handler_18;
    }

    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_assign_source_91, 0, tmp_tuple_element_35 );
    assert( tmp_requests$exceptions_class_creation_18__bases == NULL );
    tmp_requests$exceptions_class_creation_18__bases = tmp_assign_source_91;

    tmp_assign_source_92 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_18__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_18__class_decl_dict = tmp_assign_source_92;

    tmp_compare_left_35 = const_str_plain_metaclass;
    tmp_compare_right_35 = tmp_requests$exceptions_class_creation_18__class_decl_dict;

    tmp_cmp_In_35 = PySequence_Contains( tmp_compare_right_35, tmp_compare_left_35 );
    if ( tmp_cmp_In_35 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_18;
    }
    if ( tmp_cmp_In_35 == 1 )
    {
        goto condexpr_true_52;
    }
    else
    {
        goto condexpr_false_52;
    }
    condexpr_true_52:;
    tmp_dget_dict_18 = tmp_requests$exceptions_class_creation_18__class_decl_dict;

    tmp_dget_key_18 = const_str_plain_metaclass;
    tmp_class_meta_18 = DICT_GET_ITEM( tmp_dget_dict_18, tmp_dget_key_18 );
    if ( tmp_class_meta_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_18;
    }
    goto condexpr_end_52;
    condexpr_false_52:;
    tmp_cond_value_18 = tmp_requests$exceptions_class_creation_18__bases;

    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_18;
    }
    if ( tmp_cond_truth_18 == 1 )
    {
        goto condexpr_true_53;
    }
    else
    {
        goto condexpr_false_53;
    }
    condexpr_true_53:;
    tmp_subscribed_name_18 = tmp_requests$exceptions_class_creation_18__bases;

    tmp_subscript_name_18 = const_int_0;
    tmp_type_arg_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
    if ( tmp_type_arg_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_18;
    }
    tmp_class_meta_18 = BUILTIN_TYPE1( tmp_type_arg_18 );
    Py_DECREF( tmp_type_arg_18 );
    if ( tmp_class_meta_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_18;
    }
    goto condexpr_end_53;
    condexpr_false_53:;
    tmp_class_meta_18 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_18 != NULL );
    Py_INCREF( tmp_class_meta_18 );
    condexpr_end_53:;
    condexpr_end_52:;
    tmp_class_bases_18 = tmp_requests$exceptions_class_creation_18__bases;

    tmp_assign_source_93 = SELECT_METACLASS( tmp_class_meta_18, tmp_class_bases_18 );
    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_18 );

        exception_lineno = 105;
        goto try_except_handler_18;
    }
    Py_DECREF( tmp_class_meta_18 );
    assert( tmp_requests$exceptions_class_creation_18__metaclass == NULL );
    tmp_requests$exceptions_class_creation_18__metaclass = tmp_assign_source_93;

    tmp_compare_left_36 = const_str_plain_metaclass;
    tmp_compare_right_36 = tmp_requests$exceptions_class_creation_18__class_decl_dict;

    tmp_cmp_In_36 = PySequence_Contains( tmp_compare_right_36, tmp_compare_left_36 );
    if ( tmp_cmp_In_36 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_18;
    }
    if ( tmp_cmp_In_36 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_remove_dict = tmp_requests$exceptions_class_creation_18__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_18;
    }
    branch_no_18:;
    tmp_hasattr_source_18 = tmp_requests$exceptions_class_creation_18__metaclass;

    tmp_hasattr_attr_18 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_18, tmp_hasattr_attr_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_18;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_54;
    }
    else
    {
        goto condexpr_false_54;
    }
    condexpr_true_54:;
    tmp_source_name_18 = tmp_requests$exceptions_class_creation_18__metaclass;

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain___prepare__ );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_18;
    }
    tmp_args_name_18 = PyTuple_New( 2 );
    tmp_tuple_element_36 = const_str_plain_RequestsWarning;
    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_args_name_18, 0, tmp_tuple_element_36 );
    tmp_tuple_element_36 = tmp_requests$exceptions_class_creation_18__bases;

    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_args_name_18, 1, tmp_tuple_element_36 );
    tmp_kw_name_18 = tmp_requests$exceptions_class_creation_18__class_decl_dict;

    frame_module->f_lineno = 105;
    tmp_assign_source_94 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_18, tmp_kw_name_18 );
    Py_DECREF( tmp_called_name_18 );
    Py_DECREF( tmp_args_name_18 );
    if ( tmp_assign_source_94 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_18;
    }
    goto condexpr_end_54;
    condexpr_false_54:;
    tmp_assign_source_94 = PyDict_New();
    condexpr_end_54:;
    assert( tmp_requests$exceptions_class_creation_18__prepared == NULL );
    tmp_requests$exceptions_class_creation_18__prepared = tmp_assign_source_94;

    tmp_assign_source_95 = impl_class_18_RequestsWarning_of_requests$exceptions( tmp_requests$exceptions_class_creation_18__bases, tmp_requests$exceptions_class_creation_18__class_decl_dict, tmp_requests$exceptions_class_creation_18__metaclass, tmp_requests$exceptions_class_creation_18__prepared );
    if ( tmp_assign_source_95 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_18;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsWarning, tmp_assign_source_95 );
    goto try_end_18;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_requests$exceptions_class_creation_18__bases );
    tmp_requests$exceptions_class_creation_18__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_18__class_decl_dict );
    tmp_requests$exceptions_class_creation_18__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_18__metaclass );
    tmp_requests$exceptions_class_creation_18__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_18__prepared );
    tmp_requests$exceptions_class_creation_18__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    Py_XDECREF( tmp_requests$exceptions_class_creation_18__bases );
    tmp_requests$exceptions_class_creation_18__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_18__class_decl_dict );
    tmp_requests$exceptions_class_creation_18__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_18__metaclass );
    tmp_requests$exceptions_class_creation_18__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_18__prepared );
    tmp_requests$exceptions_class_creation_18__prepared = NULL;

    // Tried code:
    tmp_assign_source_96 = PyTuple_New( 2 );
    tmp_tuple_element_37 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsWarning );

    if (unlikely( tmp_tuple_element_37 == NULL ))
    {
        tmp_tuple_element_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsWarning );
    }

    if ( tmp_tuple_element_37 == NULL )
    {
        Py_DECREF( tmp_assign_source_96 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63328 ], 37, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        goto try_except_handler_19;
    }

    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_assign_source_96, 0, tmp_tuple_element_37 );
    tmp_tuple_element_37 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

    if (unlikely( tmp_tuple_element_37 == NULL ))
    {
        tmp_tuple_element_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
    }

    if ( tmp_tuple_element_37 == NULL )
    {
        Py_DECREF( tmp_assign_source_96 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7610 ], 40, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        goto try_except_handler_19;
    }

    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_assign_source_96, 1, tmp_tuple_element_37 );
    assert( tmp_requests$exceptions_class_creation_19__bases == NULL );
    tmp_requests$exceptions_class_creation_19__bases = tmp_assign_source_96;

    tmp_assign_source_97 = PyDict_New();
    assert( tmp_requests$exceptions_class_creation_19__class_decl_dict == NULL );
    tmp_requests$exceptions_class_creation_19__class_decl_dict = tmp_assign_source_97;

    tmp_compare_left_37 = const_str_plain_metaclass;
    tmp_compare_right_37 = tmp_requests$exceptions_class_creation_19__class_decl_dict;

    tmp_cmp_In_37 = PySequence_Contains( tmp_compare_right_37, tmp_compare_left_37 );
    if ( tmp_cmp_In_37 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto try_except_handler_19;
    }
    if ( tmp_cmp_In_37 == 1 )
    {
        goto condexpr_true_55;
    }
    else
    {
        goto condexpr_false_55;
    }
    condexpr_true_55:;
    tmp_dget_dict_19 = tmp_requests$exceptions_class_creation_19__class_decl_dict;

    tmp_dget_key_19 = const_str_plain_metaclass;
    tmp_class_meta_19 = DICT_GET_ITEM( tmp_dget_dict_19, tmp_dget_key_19 );
    if ( tmp_class_meta_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto try_except_handler_19;
    }
    goto condexpr_end_55;
    condexpr_false_55:;
    tmp_cond_value_19 = tmp_requests$exceptions_class_creation_19__bases;

    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto try_except_handler_19;
    }
    if ( tmp_cond_truth_19 == 1 )
    {
        goto condexpr_true_56;
    }
    else
    {
        goto condexpr_false_56;
    }
    condexpr_true_56:;
    tmp_subscribed_name_19 = tmp_requests$exceptions_class_creation_19__bases;

    tmp_subscript_name_19 = const_int_0;
    tmp_type_arg_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
    if ( tmp_type_arg_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto try_except_handler_19;
    }
    tmp_class_meta_19 = BUILTIN_TYPE1( tmp_type_arg_19 );
    Py_DECREF( tmp_type_arg_19 );
    if ( tmp_class_meta_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto try_except_handler_19;
    }
    goto condexpr_end_56;
    condexpr_false_56:;
    tmp_class_meta_19 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_19 != NULL );
    Py_INCREF( tmp_class_meta_19 );
    condexpr_end_56:;
    condexpr_end_55:;
    tmp_class_bases_19 = tmp_requests$exceptions_class_creation_19__bases;

    tmp_assign_source_98 = SELECT_METACLASS( tmp_class_meta_19, tmp_class_bases_19 );
    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_19 );

        exception_lineno = 110;
        goto try_except_handler_19;
    }
    Py_DECREF( tmp_class_meta_19 );
    assert( tmp_requests$exceptions_class_creation_19__metaclass == NULL );
    tmp_requests$exceptions_class_creation_19__metaclass = tmp_assign_source_98;

    tmp_compare_left_38 = const_str_plain_metaclass;
    tmp_compare_right_38 = tmp_requests$exceptions_class_creation_19__class_decl_dict;

    tmp_cmp_In_38 = PySequence_Contains( tmp_compare_right_38, tmp_compare_left_38 );
    if ( tmp_cmp_In_38 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto try_except_handler_19;
    }
    if ( tmp_cmp_In_38 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_remove_dict = tmp_requests$exceptions_class_creation_19__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto try_except_handler_19;
    }
    branch_no_19:;
    tmp_hasattr_source_19 = tmp_requests$exceptions_class_creation_19__metaclass;

    tmp_hasattr_attr_19 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_19, tmp_hasattr_attr_19 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto try_except_handler_19;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_57;
    }
    else
    {
        goto condexpr_false_57;
    }
    condexpr_true_57:;
    tmp_source_name_19 = tmp_requests$exceptions_class_creation_19__metaclass;

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain___prepare__ );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto try_except_handler_19;
    }
    tmp_args_name_19 = PyTuple_New( 2 );
    tmp_tuple_element_38 = const_str_plain_FileModeWarning;
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_args_name_19, 0, tmp_tuple_element_38 );
    tmp_tuple_element_38 = tmp_requests$exceptions_class_creation_19__bases;

    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_args_name_19, 1, tmp_tuple_element_38 );
    tmp_kw_name_19 = tmp_requests$exceptions_class_creation_19__class_decl_dict;

    frame_module->f_lineno = 110;
    tmp_assign_source_99 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_19, tmp_kw_name_19 );
    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_name_19 );
    if ( tmp_assign_source_99 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto try_except_handler_19;
    }
    goto condexpr_end_57;
    condexpr_false_57:;
    tmp_assign_source_99 = PyDict_New();
    condexpr_end_57:;
    assert( tmp_requests$exceptions_class_creation_19__prepared == NULL );
    tmp_requests$exceptions_class_creation_19__prepared = tmp_assign_source_99;

    tmp_assign_source_100 = impl_class_19_FileModeWarning_of_requests$exceptions( tmp_requests$exceptions_class_creation_19__bases, tmp_requests$exceptions_class_creation_19__class_decl_dict, tmp_requests$exceptions_class_creation_19__metaclass, tmp_requests$exceptions_class_creation_19__prepared );
    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto try_except_handler_19;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_FileModeWarning, tmp_assign_source_100 );
    goto try_end_19;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_requests$exceptions_class_creation_19__bases );
    tmp_requests$exceptions_class_creation_19__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_19__class_decl_dict );
    tmp_requests$exceptions_class_creation_19__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_19__metaclass );
    tmp_requests$exceptions_class_creation_19__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_19__prepared );
    tmp_requests$exceptions_class_creation_19__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;

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
    Py_XDECREF( tmp_requests$exceptions_class_creation_19__bases );
    tmp_requests$exceptions_class_creation_19__bases = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_19__class_decl_dict );
    tmp_requests$exceptions_class_creation_19__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_19__metaclass );
    tmp_requests$exceptions_class_creation_19__metaclass = NULL;

    Py_XDECREF( tmp_requests$exceptions_class_creation_19__prepared );
    tmp_requests$exceptions_class_creation_19__prepared = NULL;


    return MOD_RETURN_VALUE( module_requests$exceptions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
