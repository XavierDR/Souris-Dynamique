// Generated code for Python source for module 'requests.packages.urllib3.request'
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

// The _module_requests$packages$urllib3$request is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_requests$packages$urllib3$request;
PyDictObject *moduledict_requests$packages$urllib3$request;

// The module constants used
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_803c204d6b852d61542b6d5b2804eb65;
extern PyObject *const_str_plain_headers;
static PyObject *const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_urllib;
extern PyObject *const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain_kw;
static PyObject *const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_set_1e5d01a871ee9ed2508149d7a5ff9d0a;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_none_none_true_none_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_request_encode_body;
static PyObject *const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple;
extern PyObject *const_str_plain_OPTIONS;
extern PyObject *const_int_0;
static PyObject *const_str_digest_5316afcabf660110d5223c7f1932919c;
static PyObject *const_str_digest_d10c66bbde8616415f45b76f1584f992;
extern PyObject *const_str_plain_upper;
static PyObject *const_str_plain_multipart_boundary;
extern PyObject *const_str_plain_content_type;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_RequestMethods;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_boundary;
extern PyObject *const_str_plain_HEAD;
extern PyObject *const_str_plain_filepost;
static PyObject *const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18;
extern PyObject *const_str_plain_urlencode;
extern PyObject *const_str_plain_urlopen;
static PyObject *const_str_digest_a8dc03041fcfca293a0e4fc32a1fd72d;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_fields;
static PyObject *const_dict_1bcbbc3c0665ad6489dc2a2c06e21a9a;
static PyObject *const_str_digest_0597c9bfd7bacd5702e520c55a306385;
extern PyObject *const_str_plain_GET;
static PyObject *const_str_plain__encode_url_methods;
extern PyObject *const_str_plain_extra_kw;
static PyObject *const_tuple_75b174c31704c607c9d508ab21bcd950_tuple;
extern PyObject *const_str_plain_method;
static PyObject *const_str_plain_request_encode_url;
static PyObject *const_str_digest_4661d24aaa9eb1cc60cb4bc53d79ac83;
static PyObject *const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d;
static PyObject *const_list_str_plain_RequestMethods_list;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_encode_multipart_formdata;
extern PyObject *const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
extern PyObject *const_str_plain_DELETE;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_str_plain_encode_multipart_formdata_tuple;
static PyObject *const_str_digest_222b7096876e0f27e78980578536ebfb;
extern PyObject *const_str_plain_body;
static PyObject *const_str_digest_aba19cc0089212746f300ab958df1197;
static PyObject *const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_plain_encode_multipart;
static PyObject *const_str_digest_7d13004a6b21c498177feb48163642d9;
static PyObject *const_str_plain_urlopen_kw;
extern PyObject *const_str_chr_63;
extern PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_str_plain_urlencode_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_headers_tuple;
extern PyObject *const_str_digest_ed694c6a900e924766dccd670fa8ccb4;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_803c204d6b852d61542b6d5b2804eb65 = UNSTREAM_STRING( &constant_bin[ 809331 ], 166, 0 );
    const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 3, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 4, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    const_str_plain_encode_multipart = UNSTREAM_STRING( &constant_bin[ 64204 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 5, const_str_plain_encode_multipart ); Py_INCREF( const_str_plain_encode_multipart );
    const_str_plain_multipart_boundary = UNSTREAM_STRING( &constant_bin[ 809497 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 6, const_str_plain_multipart_boundary ); Py_INCREF( const_str_plain_multipart_boundary );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 7, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple, 3, const_str_plain_fields ); Py_INCREF( const_str_plain_fields );
    PyTuple_SET_ITEM( const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple, 4, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    const_str_plain_urlopen_kw = UNSTREAM_STRING( &constant_bin[ 83287 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple, 5, const_str_plain_urlopen_kw ); Py_INCREF( const_str_plain_urlopen_kw );
    const_set_1e5d01a871ee9ed2508149d7a5ff9d0a = PySet_New( NULL );
    PySet_Add( const_set_1e5d01a871ee9ed2508149d7a5ff9d0a, const_str_plain_DELETE );
    PySet_Add( const_set_1e5d01a871ee9ed2508149d7a5ff9d0a, const_str_plain_GET );
    PySet_Add( const_set_1e5d01a871ee9ed2508149d7a5ff9d0a, const_str_plain_HEAD );
    PySet_Add( const_set_1e5d01a871ee9ed2508149d7a5ff9d0a, const_str_plain_OPTIONS );
    assert( PySet_Size( const_set_1e5d01a871ee9ed2508149d7a5ff9d0a ) == 4 );
    const_tuple_none_none_true_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_none_true_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_true_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_true_none_tuple, 2, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_none_none_true_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_plain_request_encode_body = UNSTREAM_STRING( &constant_bin[ 809515 ], 19, 1 );
    const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 3, const_str_plain_fields ); Py_INCREF( const_str_plain_fields );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 4, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 5, const_str_plain_encode_multipart ); Py_INCREF( const_str_plain_encode_multipart );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 6, const_str_plain_multipart_boundary ); Py_INCREF( const_str_plain_multipart_boundary );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 7, const_str_plain_urlopen_kw ); Py_INCREF( const_str_plain_urlopen_kw );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 8, const_str_plain_extra_kw ); Py_INCREF( const_str_plain_extra_kw );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 9, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 10, const_str_plain_content_type ); Py_INCREF( const_str_plain_content_type );
    const_str_digest_5316afcabf660110d5223c7f1932919c = UNSTREAM_STRING( &constant_bin[ 809534 ], 980, 0 );
    const_str_digest_d10c66bbde8616415f45b76f1584f992 = UNSTREAM_STRING( &constant_bin[ 810514 ], 33, 0 );
    const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18 = UNSTREAM_STRING( &constant_bin[ 810547 ], 23, 0 );
    const_str_digest_a8dc03041fcfca293a0e4fc32a1fd72d = UNSTREAM_STRING( &constant_bin[ 810570 ], 1728, 0 );
    const_dict_1bcbbc3c0665ad6489dc2a2c06e21a9a = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_1bcbbc3c0665ad6489dc2a2c06e21a9a, const_str_plain_headers, const_dict_empty );
    assert( PyDict_Size( const_dict_1bcbbc3c0665ad6489dc2a2c06e21a9a ) == 1 );
    const_str_digest_0597c9bfd7bacd5702e520c55a306385 = UNSTREAM_STRING( &constant_bin[ 812298 ], 70, 0 );
    const_str_plain__encode_url_methods = UNSTREAM_STRING( &constant_bin[ 812368 ], 19, 1 );
    const_tuple_75b174c31704c607c9d508ab21bcd950_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 3, const_str_plain_fields ); Py_INCREF( const_str_plain_fields );
    PyTuple_SET_ITEM( const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 4, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 5, const_str_plain_urlopen_kw ); Py_INCREF( const_str_plain_urlopen_kw );
    PyTuple_SET_ITEM( const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 6, const_str_plain_extra_kw ); Py_INCREF( const_str_plain_extra_kw );
    const_str_plain_request_encode_url = UNSTREAM_STRING( &constant_bin[ 809888 ], 18, 1 );
    const_str_digest_4661d24aaa9eb1cc60cb4bc53d79ac83 = UNSTREAM_STRING( &constant_bin[ 812387 ], 481, 0 );
    const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d = UNSTREAM_STRING( &constant_bin[ 812868 ], 33, 0 );
    const_list_str_plain_RequestMethods_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_RequestMethods_list, 0, const_str_plain_RequestMethods ); Py_INCREF( const_str_plain_RequestMethods );
    const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9 = UNSTREAM_STRING( &constant_bin[ 812901 ], 34, 0 );
    const_str_digest_222b7096876e0f27e78980578536ebfb = UNSTREAM_STRING( &constant_bin[ 812935 ], 77, 0 );
    const_str_digest_aba19cc0089212746f300ab958df1197 = UNSTREAM_STRING( &constant_bin[ 813012 ], 66, 0 );
    const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c = UNSTREAM_STRING( &constant_bin[ 813078 ], 22, 0 );
    const_str_digest_7d13004a6b21c498177feb48163642d9 = UNSTREAM_STRING( &constant_bin[ 812868 ], 22, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$packages$urllib3$request( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_35a064234d02537fe8430cc131fd2133;
static PyCodeObject *codeobj_4b5fd0903e2d0c735803f185ab235183;
static PyCodeObject *codeobj_defd648e65718f44e4707b379fecd362;
static PyCodeObject *codeobj_ce34bb606d2dab90d00c864d21431c50;
static PyCodeObject *codeobj_a94534f9870c0caa8ed9095102120f9a;
static PyCodeObject *codeobj_35d8f2519e2a37c94f8d13e71eedf1ed;
static PyCodeObject *codeobj_2c864c9a7cbc4781be713d0eb5eba66d;
static PyCodeObject *codeobj_dea5a6c5235b2667fd9ec5416aa1803f;
static PyCodeObject *codeobj_497c9d7073804e56a8a208a6e7c0a13a;
static PyCodeObject *codeobj_f5a1c3b1a6b802122bb9d09c70f76785;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_aba19cc0089212746f300ab958df1197 );
    codeobj_35a064234d02537fe8430cc131fd2133 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 44, const_tuple_str_plain_self_str_plain_headers_tuple, 2, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_4b5fd0903e2d0c735803f185ab235183 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request, 0, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_defd648e65718f44e4707b379fecd362 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request, 53, const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple, 5, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_ce34bb606d2dab90d00c864d21431c50 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request, 53, const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple, 6, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_a94534f9870c0caa8ed9095102120f9a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request_encode_body, 92, const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 7, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_35d8f2519e2a37c94f8d13e71eedf1ed = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request_encode_body, 92, const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 8, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_2c864c9a7cbc4781be713d0eb5eba66d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request_encode_url, 75, const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 5, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_dea5a6c5235b2667fd9ec5416aa1803f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request_encode_url, 75, const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 6, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_497c9d7073804e56a8a208a6e7c0a13a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_urlopen, 47, const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 7, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_f5a1c3b1a6b802122bb9d09c70f76785 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_urlopen, 47, const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 8, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_RequestMethods_of_requests$packages$urllib3$request( PyObject *&closure_requests$packages$urllib3$request_class_creation_1__bases, PyObject *&closure_requests$packages$urllib3$request_class_creation_1__class_decl_dict, PyObject *&closure_requests$packages$urllib3$request_class_creation_1__metaclass, PyObject *&closure_requests$packages$urllib3$request_class_creation_1__prepared );


NUITKA_CROSS_MODULE PyObject *impl_function_4_complex_call_helper_pos_keywords_star_dict_of___internal__( PyObject *_python_par_called, PyObject *_python_par_args, PyObject *_python_par_kw, PyObject *_python_par_star_arg_dict );


NUITKA_CROSS_MODULE PyObject *impl_function_6_complex_call_helper_pos_star_dict_of___internal__( PyObject *_python_par_called, PyObject *_python_par_args, PyObject *_python_par_star_arg_dict );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_RequestMethods_of_requests$packages$urllib3$request( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_urlopen_of_class_1_RequestMethods_of_requests$packages$urllib3$request( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_request_of_class_1_RequestMethods_of_requests$packages$urllib3$request( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_request_encode_url_of_class_1_RequestMethods_of_requests$packages$urllib3$request( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_5_request_encode_body_of_class_1_RequestMethods_of_requests$packages$urllib3$request( PyObject *defaults );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_RequestMethods_of_requests$packages$urllib3$request( PyObject *&closure_requests$packages$urllib3$request_class_creation_1__bases, PyObject *&closure_requests$packages$urllib3$request_class_creation_1__class_decl_dict, PyObject *&closure_requests$packages$urllib3$request_class_creation_1__metaclass, PyObject *&closure_requests$packages$urllib3$request_class_creation_1__prepared )
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
    PyObject *var__encode_url_methods = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_urlopen = NULL;
    PyObject *var_request = NULL;
    PyObject *var_request_encode_url = NULL;
    PyObject *var_request_encode_body = NULL;
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
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_requests$packages$urllib3$request_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_d10c66bbde8616415f45b76f1584f992;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_5316afcabf660110d5223c7f1932919c;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_RequestMethods;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    tmp_assign_source_4 = PySet_New( const_set_1e5d01a871ee9ed2508149d7a5ff9d0a );
    assert( var__encode_url_methods == NULL );
    var__encode_url_methods = tmp_assign_source_4;

    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_assign_source_5 = MAKE_FUNCTION_function_1___init___of_class_1_RequestMethods_of_requests$packages$urllib3$request( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_5;

    tmp_defaults_2 = const_tuple_none_none_true_none_tuple;
    tmp_assign_source_6 = MAKE_FUNCTION_function_2_urlopen_of_class_1_RequestMethods_of_requests$packages$urllib3$request( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    assert( var_urlopen == NULL );
    var_urlopen = tmp_assign_source_6;

    tmp_defaults_3 = const_tuple_none_none_tuple;
    tmp_assign_source_7 = MAKE_FUNCTION_function_3_request_of_class_1_RequestMethods_of_requests$packages$urllib3$request( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    assert( var_request == NULL );
    var_request = tmp_assign_source_7;

    tmp_defaults_4 = const_tuple_none_none_tuple;
    tmp_assign_source_8 = MAKE_FUNCTION_function_4_request_encode_url_of_class_1_RequestMethods_of_requests$packages$urllib3$request( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    assert( var_request_encode_url == NULL );
    var_request_encode_url = tmp_assign_source_8;

    tmp_defaults_5 = const_tuple_none_none_true_none_tuple;
    tmp_assign_source_9 = MAKE_FUNCTION_function_5_request_encode_body_of_class_1_RequestMethods_of_requests$packages$urllib3$request( INCREASE_REFCOUNT( tmp_defaults_5 ) );
    assert( var_request_encode_body == NULL );
    var_request_encode_body = tmp_assign_source_9;

    // Tried code:
    tmp_called_name_1 = closure_requests$packages$urllib3$request_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_RequestMethods;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$packages$urllib3$request_class_creation_1__bases;

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
    if ( var__encode_url_methods != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain__encode_url_methods,
            var__encode_url_methods
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
    if ( var_urlopen != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_urlopen,
            var_urlopen
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var_request != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_request,
            var_request
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var_request_encode_url != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_request_encode_url,
            var_request_encode_url
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var_request_encode_body != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_request_encode_body,
            var_request_encode_body
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
    tmp_kw_name_1 = closure_requests$packages$urllib3$request_class_creation_1__class_decl_dict;

    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_10;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_RequestMethods_of_requests$packages$urllib3$request );
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

    Py_XDECREF( var__encode_url_methods );
    var__encode_url_methods = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_urlopen );
    var_urlopen = NULL;

    Py_XDECREF( var_request );
    var_request = NULL;

    Py_XDECREF( var_request_encode_url );
    var_request_encode_url = NULL;

    Py_XDECREF( var_request_encode_body );
    var_request_encode_body = NULL;

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

    Py_XDECREF( var__encode_url_methods );
    var__encode_url_methods = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_urlopen );
    var_urlopen = NULL;

    Py_XDECREF( var_request );
    var_request = NULL;

    Py_XDECREF( var_request_encode_url );
    var_request_encode_url = NULL;

    Py_XDECREF( var_request_encode_body );
    var_request_encode_body = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_RequestMethods_of_requests$packages$urllib3$request );
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


static PyObject *impl_function_1___init___of_class_1_RequestMethods_of_requests$packages$urllib3$request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_headers )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_headers = _python_par_headers;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_frame_locals;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_35a064234d02537fe8430cc131fd2133, module_requests$packages$urllib3$request );
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
    tmp_or_left_value_1 = par_headers;

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_or_right_value_1 = PyDict_New();
    tmp_assattr_name_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_assattr_name_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_headers, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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
            if ( par_headers != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_headers,
                    par_headers
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_RequestMethods_of_requests$packages$urllib3$request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

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

    Py_XDECREF( par_headers );
    par_headers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_RequestMethods_of_requests$packages$urllib3$request );
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
static PyObject *fparse_function_1___init___of_class_1_RequestMethods_of_requests$packages$urllib3$request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_headers = NULL;
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
            if ( found == false && const_str_plain_headers == key )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_headers, key ) == 1 )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

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
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_self = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 );
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
         if (unlikely( _python_par_headers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_headers = args[ 1 ];
        Py_INCREF( _python_par_headers );
    }
    else if ( _python_par_headers == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_headers = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 );
            Py_INCREF( _python_par_headers );
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
    if (unlikely( _python_par_self == NULL || _python_par_headers == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_headers };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
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



    return impl_function_1___init___of_class_1_RequestMethods_of_requests$packages$urllib3$request( self, _python_par_self, _python_par_headers );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_headers );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_RequestMethods_of_requests$packages$urllib3$request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1___init___of_class_1_RequestMethods_of_requests$packages$urllib3$request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_RequestMethods_of_requests$packages$urllib3$request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_urlopen_of_class_1_RequestMethods_of_requests$packages$urllib3$request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_method, PyObject *_python_par_url, PyObject *_python_par_body, PyObject *_python_par_headers, PyObject *_python_par_encode_multipart, PyObject *_python_par_multipart_boundary, PyObject *_python_par_kw )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_method = _python_par_method;
    PyObject *par_url = _python_par_url;
    PyObject *par_body = _python_par_body;
    PyObject *par_headers = _python_par_headers;
    PyObject *par_encode_multipart = _python_par_encode_multipart;
    PyObject *par_multipart_boundary = _python_par_multipart_boundary;
    PyObject *par_kw = _python_par_kw;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f5a1c3b1a6b802122bb9d09c70f76785, module_requests$packages$urllib3$request );
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
    tmp_make_exception_arg_1 = const_str_digest_222b7096876e0f27e78980578536ebfb;
    frame_function->f_lineno = 50;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( Py_NotImplemented, tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 50;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;

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
            if ( par_method != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_method,
                    par_method
                );
                assert( tmp_res != -1 );

            }
            if ( par_url != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_url,
                    par_url
                );
                assert( tmp_res != -1 );

            }
            if ( par_body != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_body,
                    par_body
                );
                assert( tmp_res != -1 );

            }
            if ( par_headers != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_headers,
                    par_headers
                );
                assert( tmp_res != -1 );

            }
            if ( par_encode_multipart != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encode_multipart,
                    par_encode_multipart
                );
                assert( tmp_res != -1 );

            }
            if ( par_multipart_boundary != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_multipart_boundary,
                    par_multipart_boundary
                );
                assert( tmp_res != -1 );

            }
            if ( par_kw != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kw,
                    par_kw
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
    NUITKA_CANNOT_GET_HERE( function_2_urlopen_of_class_1_RequestMethods_of_requests$packages$urllib3$request );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_body );
    Py_DECREF( par_body );
    par_body = NULL;

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

    CHECK_OBJECT( (PyObject *)par_encode_multipart );
    Py_DECREF( par_encode_multipart );
    par_encode_multipart = NULL;

    CHECK_OBJECT( (PyObject *)par_multipart_boundary );
    Py_DECREF( par_multipart_boundary );
    par_multipart_boundary = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_urlopen_of_class_1_RequestMethods_of_requests$packages$urllib3$request );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}
static PyObject *fparse_function_2_urlopen_of_class_1_RequestMethods_of_requests$packages$urllib3$request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_method = NULL;
    PyObject *_python_par_url = NULL;
    PyObject *_python_par_body = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_encode_multipart = NULL;
    PyObject *_python_par_multipart_boundary = NULL;
    PyObject *_python_par_kw = NULL;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_kw = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_kw = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "urlopen() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kw, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "urlopen() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = mp->ma_values[ i ];
                Py_XINCREF( split_copy->ma_values[ i ] );
            }

            _python_par_kw = (PyObject *)split_copy;
        }
        else
        {
            _python_par_kw = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "urlopen() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kw, entry->me_key, value );

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
            _python_par_kw = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument method was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_method );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_method == NULL );

            _python_par_method = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_method );

            kw_found += 1;
        }
    }

    // Check if argument url was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_url );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_url == NULL );

            _python_par_url = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_url );

            kw_found += 1;
        }
    }

    // Check if argument body was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_body );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_body == NULL );

            _python_par_body = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_body );

            kw_found += 1;
        }
    }

    // Check if argument headers was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_headers );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_headers == NULL );

            _python_par_headers = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_headers );

            kw_found += 1;
        }
    }

    // Check if argument encode_multipart was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_encode_multipart );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_encode_multipart == NULL );

            _python_par_encode_multipart = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_encode_multipart );

            kw_found += 1;
        }
    }

    // Check if argument multipart_boundary was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_multipart_boundary );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_multipart_boundary == NULL );

            _python_par_multipart_boundary = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_multipart_boundary );

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
        if ( 0 + self->m_defaults_given >= 7  )
        {
            _python_par_self = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 7 );
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
         if (unlikely( _python_par_method != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_method = args[ 1 ];
        Py_INCREF( _python_par_method );
    }
    else if ( _python_par_method == NULL )
    {
        if ( 1 + self->m_defaults_given >= 7  )
        {
            _python_par_method = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 7 );
            Py_INCREF( _python_par_method );
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
         if (unlikely( _python_par_url != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_url = args[ 2 ];
        Py_INCREF( _python_par_url );
    }
    else if ( _python_par_url == NULL )
    {
        if ( 2 + self->m_defaults_given >= 7  )
        {
            _python_par_url = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 7 );
            Py_INCREF( _python_par_url );
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
         if (unlikely( _python_par_body != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_body = args[ 3 ];
        Py_INCREF( _python_par_body );
    }
    else if ( _python_par_body == NULL )
    {
        if ( 3 + self->m_defaults_given >= 7  )
        {
            _python_par_body = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 7 );
            Py_INCREF( _python_par_body );
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
         if (unlikely( _python_par_headers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_headers = args[ 4 ];
        Py_INCREF( _python_par_headers );
    }
    else if ( _python_par_headers == NULL )
    {
        if ( 4 + self->m_defaults_given >= 7  )
        {
            _python_par_headers = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 7 );
            Py_INCREF( _python_par_headers );
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
         if (unlikely( _python_par_encode_multipart != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_encode_multipart = args[ 5 ];
        Py_INCREF( _python_par_encode_multipart );
    }
    else if ( _python_par_encode_multipart == NULL )
    {
        if ( 5 + self->m_defaults_given >= 7  )
        {
            _python_par_encode_multipart = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 7 );
            Py_INCREF( _python_par_encode_multipart );
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
    if (likely( 6 < args_given ))
    {
         if (unlikely( _python_par_multipart_boundary != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_multipart_boundary = args[ 6 ];
        Py_INCREF( _python_par_multipart_boundary );
    }
    else if ( _python_par_multipart_boundary == NULL )
    {
        if ( 6 + self->m_defaults_given >= 7  )
        {
            _python_par_multipart_boundary = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 7 );
            Py_INCREF( _python_par_multipart_boundary );
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
    if (unlikely( _python_par_self == NULL || _python_par_method == NULL || _python_par_url == NULL || _python_par_body == NULL || _python_par_headers == NULL || _python_par_encode_multipart == NULL || _python_par_multipart_boundary == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_method, _python_par_url, _python_par_body, _python_par_headers, _python_par_encode_multipart, _python_par_multipart_boundary };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 7 ))
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



    return impl_function_2_urlopen_of_class_1_RequestMethods_of_requests$packages$urllib3$request( self, _python_par_self, _python_par_method, _python_par_url, _python_par_body, _python_par_headers, _python_par_encode_multipart, _python_par_multipart_boundary, _python_par_kw );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_method );
    Py_XDECREF( _python_par_url );
    Py_XDECREF( _python_par_body );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_encode_multipart );
    Py_XDECREF( _python_par_multipart_boundary );
    Py_XDECREF( _python_par_kw );

    return NULL;
}

static PyObject *dparse_function_2_urlopen_of_class_1_RequestMethods_of_requests$packages$urllib3$request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 8 )
    {
        return impl_function_2_urlopen_of_class_1_RequestMethods_of_requests$packages$urllib3$request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_2_urlopen_of_class_1_RequestMethods_of_requests$packages$urllib3$request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_request_of_class_1_RequestMethods_of_requests$packages$urllib3$request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_method, PyObject *_python_par_url, PyObject *_python_par_fields, PyObject *_python_par_headers, PyObject *_python_par_urlopen_kw )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_method = _python_par_method;
    PyObject *par_url = _python_par_url;
    PyObject *par_fields = _python_par_fields;
    PyObject *par_headers = _python_par_headers;
    PyObject *par_urlopen_kw = _python_par_urlopen_kw;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_dircall_arg4_2;
    PyObject *tmp_frame_locals;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ce34bb606d2dab90d00c864d21431c50, module_requests$packages$urllib3$request );
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
    tmp_source_name_1 = par_method;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_upper );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 64;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_method;
        par_method = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = par_method;

    tmp_source_name_2 = par_self;

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__encode_url_methods );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_request_encode_url );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_method;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3453 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_fields;

    tmp_dict_key_1 = const_str_plain_fields;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_headers;

    tmp_dict_key_2 = const_str_plain_headers;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dircall_arg4_1 = par_urlopen_kw;

    Py_INCREF( tmp_dircall_arg4_1 );
    tmp_return_value = impl_function_4_complex_call_helper_pos_keywords_star_dict_of___internal__( tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_request_encode_body );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_method;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3453 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_url;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_2 );
    tmp_dircall_arg3_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_3 = par_fields;

    tmp_dict_key_3 = const_str_plain_fields;
    PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_headers;

    tmp_dict_key_4 = const_str_plain_headers;
    PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dircall_arg4_2 = par_urlopen_kw;

    Py_INCREF( tmp_dircall_arg4_2 );
    tmp_return_value = impl_function_4_complex_call_helper_pos_keywords_star_dict_of___internal__( tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

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
            if ( par_self != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );
                assert( tmp_res != -1 );

            }
            if ( par_method != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_method,
                    par_method
                );
                assert( tmp_res != -1 );

            }
            if ( par_url != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_url,
                    par_url
                );
                assert( tmp_res != -1 );

            }
            if ( par_fields != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fields,
                    par_fields
                );
                assert( tmp_res != -1 );

            }
            if ( par_headers != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_headers,
                    par_headers
                );
                assert( tmp_res != -1 );

            }
            if ( par_urlopen_kw != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_urlopen_kw,
                    par_urlopen_kw
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
    NUITKA_CANNOT_GET_HERE( function_3_request_of_class_1_RequestMethods_of_requests$packages$urllib3$request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_fields );
    par_fields = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_urlopen_kw );
    par_urlopen_kw = NULL;

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

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_fields );
    par_fields = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_urlopen_kw );
    par_urlopen_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_request_of_class_1_RequestMethods_of_requests$packages$urllib3$request );
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
static PyObject *fparse_function_3_request_of_class_1_RequestMethods_of_requests$packages$urllib3$request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_method = NULL;
    PyObject *_python_par_url = NULL;
    PyObject *_python_par_fields = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_urlopen_kw = NULL;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_urlopen_kw = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_urlopen_kw = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "request() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_urlopen_kw, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "request() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = mp->ma_values[ i ];
                Py_XINCREF( split_copy->ma_values[ i ] );
            }

            _python_par_urlopen_kw = (PyObject *)split_copy;
        }
        else
        {
            _python_par_urlopen_kw = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "request() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_urlopen_kw, entry->me_key, value );

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
            _python_par_urlopen_kw = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument method was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_method );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_method == NULL );

            _python_par_method = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_method );

            kw_found += 1;
        }
    }

    // Check if argument url was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_url );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_url == NULL );

            _python_par_url = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_url );

            kw_found += 1;
        }
    }

    // Check if argument fields was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_fields );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_fields == NULL );

            _python_par_fields = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_fields );

            kw_found += 1;
        }
    }

    // Check if argument headers was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_headers );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_headers == NULL );

            _python_par_headers = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_headers );

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
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_self = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 );
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
         if (unlikely( _python_par_method != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_method = args[ 1 ];
        Py_INCREF( _python_par_method );
    }
    else if ( _python_par_method == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_method = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 );
            Py_INCREF( _python_par_method );
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
         if (unlikely( _python_par_url != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_url = args[ 2 ];
        Py_INCREF( _python_par_url );
    }
    else if ( _python_par_url == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_url = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 );
            Py_INCREF( _python_par_url );
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
         if (unlikely( _python_par_fields != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_fields = args[ 3 ];
        Py_INCREF( _python_par_fields );
    }
    else if ( _python_par_fields == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_fields = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 );
            Py_INCREF( _python_par_fields );
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
         if (unlikely( _python_par_headers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_headers = args[ 4 ];
        Py_INCREF( _python_par_headers );
    }
    else if ( _python_par_headers == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_headers = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 );
            Py_INCREF( _python_par_headers );
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
    if (unlikely( _python_par_self == NULL || _python_par_method == NULL || _python_par_url == NULL || _python_par_fields == NULL || _python_par_headers == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_method, _python_par_url, _python_par_fields, _python_par_headers };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 5 ))
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



    return impl_function_3_request_of_class_1_RequestMethods_of_requests$packages$urllib3$request( self, _python_par_self, _python_par_method, _python_par_url, _python_par_fields, _python_par_headers, _python_par_urlopen_kw );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_method );
    Py_XDECREF( _python_par_url );
    Py_XDECREF( _python_par_fields );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_urlopen_kw );

    return NULL;
}

static PyObject *dparse_function_3_request_of_class_1_RequestMethods_of_requests$packages$urllib3$request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6 )
    {
        return impl_function_3_request_of_class_1_RequestMethods_of_requests$packages$urllib3$request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_3_request_of_class_1_RequestMethods_of_requests$packages$urllib3$request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_request_encode_url_of_class_1_RequestMethods_of_requests$packages$urllib3$request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_method, PyObject *_python_par_url, PyObject *_python_par_fields, PyObject *_python_par_headers, PyObject *_python_par_urlopen_kw )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_method = _python_par_method;
    PyObject *par_url = _python_par_url;
    PyObject *par_fields = _python_par_fields;
    PyObject *par_headers = _python_par_headers;
    PyObject *par_urlopen_kw = _python_par_urlopen_kw;
    PyObject *var_extra_kw = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
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
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_dea5a6c5235b2667fd9ec5416aa1803f, module_requests$packages$urllib3$request );
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
    tmp_compare_left_1 = par_headers;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = par_self;

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_headers;
        par_headers = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_assign_source_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_headers;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18526 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_headers;
    PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1 );
    assert( var_extra_kw == NULL );
    var_extra_kw = tmp_assign_source_2;

    tmp_source_name_2 = var_extra_kw;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_update );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_urlopen_kw;

    frame_function->f_lineno = 85;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_1 = par_fields;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_1 = par_url;

    tmp_left_name_2 = const_str_chr_63;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$request, (Nuitka_StringObject *)const_str_plain_urlencode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlencode );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18495 ], 31, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_fields;

    frame_function->f_lineno = 88;
    tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_2 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_3 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    par_url = tmp_assign_source_3;

    branch_no_2:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_urlopen );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_method;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 17660 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = var_extra_kw;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75515 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );
    tmp_return_value = impl_function_6_complex_call_helper_pos_star_dict_of___internal__( tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
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
            if ( var_extra_kw != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_extra_kw,
                    var_extra_kw
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
            if ( par_method != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_method,
                    par_method
                );
                assert( tmp_res != -1 );

            }
            if ( par_url != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_url,
                    par_url
                );
                assert( tmp_res != -1 );

            }
            if ( par_fields != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fields,
                    par_fields
                );
                assert( tmp_res != -1 );

            }
            if ( par_headers != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_headers,
                    par_headers
                );
                assert( tmp_res != -1 );

            }
            if ( par_urlopen_kw != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_urlopen_kw,
                    par_urlopen_kw
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
    NUITKA_CANNOT_GET_HERE( function_4_request_encode_url_of_class_1_RequestMethods_of_requests$packages$urllib3$request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_fields );
    par_fields = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_urlopen_kw );
    par_urlopen_kw = NULL;

    Py_XDECREF( var_extra_kw );
    var_extra_kw = NULL;

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

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_fields );
    par_fields = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_urlopen_kw );
    par_urlopen_kw = NULL;

    Py_XDECREF( var_extra_kw );
    var_extra_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_request_encode_url_of_class_1_RequestMethods_of_requests$packages$urllib3$request );
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
static PyObject *fparse_function_4_request_encode_url_of_class_1_RequestMethods_of_requests$packages$urllib3$request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_method = NULL;
    PyObject *_python_par_url = NULL;
    PyObject *_python_par_fields = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_urlopen_kw = NULL;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_urlopen_kw = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_urlopen_kw = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "request_encode_url() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_urlopen_kw, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "request_encode_url() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = mp->ma_values[ i ];
                Py_XINCREF( split_copy->ma_values[ i ] );
            }

            _python_par_urlopen_kw = (PyObject *)split_copy;
        }
        else
        {
            _python_par_urlopen_kw = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "request_encode_url() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_urlopen_kw, entry->me_key, value );

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
            _python_par_urlopen_kw = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument method was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_method );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_method == NULL );

            _python_par_method = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_method );

            kw_found += 1;
        }
    }

    // Check if argument url was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_url );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_url == NULL );

            _python_par_url = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_url );

            kw_found += 1;
        }
    }

    // Check if argument fields was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_fields );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_fields == NULL );

            _python_par_fields = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_fields );

            kw_found += 1;
        }
    }

    // Check if argument headers was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_headers );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_headers == NULL );

            _python_par_headers = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_headers );

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
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_self = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 );
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
         if (unlikely( _python_par_method != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_method = args[ 1 ];
        Py_INCREF( _python_par_method );
    }
    else if ( _python_par_method == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_method = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 );
            Py_INCREF( _python_par_method );
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
         if (unlikely( _python_par_url != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_url = args[ 2 ];
        Py_INCREF( _python_par_url );
    }
    else if ( _python_par_url == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_url = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 );
            Py_INCREF( _python_par_url );
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
         if (unlikely( _python_par_fields != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_fields = args[ 3 ];
        Py_INCREF( _python_par_fields );
    }
    else if ( _python_par_fields == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_fields = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 );
            Py_INCREF( _python_par_fields );
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
         if (unlikely( _python_par_headers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_headers = args[ 4 ];
        Py_INCREF( _python_par_headers );
    }
    else if ( _python_par_headers == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_headers = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 );
            Py_INCREF( _python_par_headers );
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
    if (unlikely( _python_par_self == NULL || _python_par_method == NULL || _python_par_url == NULL || _python_par_fields == NULL || _python_par_headers == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_method, _python_par_url, _python_par_fields, _python_par_headers };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 5 ))
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



    return impl_function_4_request_encode_url_of_class_1_RequestMethods_of_requests$packages$urllib3$request( self, _python_par_self, _python_par_method, _python_par_url, _python_par_fields, _python_par_headers, _python_par_urlopen_kw );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_method );
    Py_XDECREF( _python_par_url );
    Py_XDECREF( _python_par_fields );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_urlopen_kw );

    return NULL;
}

static PyObject *dparse_function_4_request_encode_url_of_class_1_RequestMethods_of_requests$packages$urllib3$request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6 )
    {
        return impl_function_4_request_encode_url_of_class_1_RequestMethods_of_requests$packages$urllib3$request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_4_request_encode_url_of_class_1_RequestMethods_of_requests$packages$urllib3$request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_request_encode_body_of_class_1_RequestMethods_of_requests$packages$urllib3$request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_method, PyObject *_python_par_url, PyObject *_python_par_fields, PyObject *_python_par_headers, PyObject *_python_par_encode_multipart, PyObject *_python_par_multipart_boundary, PyObject *_python_par_urlopen_kw )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_method = _python_par_method;
    PyObject *par_url = _python_par_url;
    PyObject *par_fields = _python_par_fields;
    PyObject *par_headers = _python_par_headers;
    PyObject *par_encode_multipart = _python_par_encode_multipart;
    PyObject *par_multipart_boundary = _python_par_multipart_boundary;
    PyObject *par_urlopen_kw = _python_par_urlopen_kw;
    PyObject *var_extra_kw = NULL;
    PyObject *var_body = NULL;
    PyObject *var_content_type = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_35d8f2519e2a37c94f8d13e71eedf1ed, module_requests$packages$urllib3$request );
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
    tmp_compare_left_1 = par_headers;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = par_self;

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_headers;
        par_headers = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_assign_source_2 = DEEP_COPY( const_dict_1bcbbc3c0665ad6489dc2a2c06e21a9a );
    assert( var_extra_kw == NULL );
    var_extra_kw = tmp_assign_source_2;

    tmp_cond_value_1 = par_fields;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_compare_left_2 = const_str_plain_body;
    tmp_compare_right_2 = par_urlopen_kw;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_1 = const_str_digest_0597c9bfd7bacd5702e520c55a306385;
    frame_function->f_lineno = 137;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 138;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_cond_value_2 = par_encode_multipart;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
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
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$request, (Nuitka_StringObject *)const_str_plain_encode_multipart_formdata );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encode_multipart_formdata );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 64198 ], 47, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        goto try_except_handler_2;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_fields;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63777 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_multipart_boundary;

    tmp_dict_key_1 = const_str_plain_boundary;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 141;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 141;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 141;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_2;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    assert( var_body == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_body = tmp_assign_source_6;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    assert( var_content_type == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_content_type = tmp_assign_source_7;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    goto branch_end_4;
    branch_no_4:;
    // Tried code:
    tmp_iter_arg_2 = PyTuple_New( 2 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$request, (Nuitka_StringObject *)const_str_plain_urlencode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlencode );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_iter_arg_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18495 ], 31, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        goto try_except_handler_3;
    }

    tmp_args_element_name_1 = par_fields;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_iter_arg_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63777 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        goto try_except_handler_3;
    }

    frame_function->f_lineno = 143;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_2 );

        exception_lineno = 143;
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_2 );
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 143;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_10 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 143;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_3;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_3;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;

    {
        PyObject *old = var_body;
        var_body = tmp_assign_source_11;
        Py_INCREF( var_body );
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;

    {
        PyObject *old = var_content_type;
        var_content_type = tmp_assign_source_12;
        Py_INCREF( var_content_type );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    branch_end_4:;
    tmp_ass_subvalue_1 = var_body;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28907 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = var_extra_kw;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75515 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_body;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_content_type;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 64245 ], 58, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
    PyDict_SetItem( tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_ass_subscribed_2 = var_extra_kw;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75515 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain_headers;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_subscribed_name_1 = var_extra_kw;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75515 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_str_plain_headers;
    tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_update );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_headers;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18526 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 148;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = var_extra_kw;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75515 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_update );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_urlopen_kw;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83271 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 149;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, tmp_args_element_name_3 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_urlopen );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_3 = par_method;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_url;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_3 );
    tmp_dircall_arg3_1 = var_extra_kw;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75515 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 151;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );
    tmp_return_value = impl_function_6_complex_call_helper_pos_star_dict_of___internal__( tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        goto frame_exception_exit_1;
    }
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
            if ( var_extra_kw != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_extra_kw,
                    var_extra_kw
                );
                assert( tmp_res != -1 );

            }
            if ( var_body != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_body,
                    var_body
                );
                assert( tmp_res != -1 );

            }
            if ( var_content_type != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_content_type,
                    var_content_type
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
            if ( par_method != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_method,
                    par_method
                );
                assert( tmp_res != -1 );

            }
            if ( par_url != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_url,
                    par_url
                );
                assert( tmp_res != -1 );

            }
            if ( par_fields != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fields,
                    par_fields
                );
                assert( tmp_res != -1 );

            }
            if ( par_headers != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_headers,
                    par_headers
                );
                assert( tmp_res != -1 );

            }
            if ( par_encode_multipart != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encode_multipart,
                    par_encode_multipart
                );
                assert( tmp_res != -1 );

            }
            if ( par_multipart_boundary != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_multipart_boundary,
                    par_multipart_boundary
                );
                assert( tmp_res != -1 );

            }
            if ( par_urlopen_kw != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_urlopen_kw,
                    par_urlopen_kw
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
    NUITKA_CANNOT_GET_HERE( function_5_request_encode_body_of_class_1_RequestMethods_of_requests$packages$urllib3$request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_fields );
    par_fields = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_encode_multipart );
    par_encode_multipart = NULL;

    Py_XDECREF( par_multipart_boundary );
    par_multipart_boundary = NULL;

    Py_XDECREF( par_urlopen_kw );
    par_urlopen_kw = NULL;

    Py_XDECREF( var_extra_kw );
    var_extra_kw = NULL;

    Py_XDECREF( var_body );
    var_body = NULL;

    Py_XDECREF( var_content_type );
    var_content_type = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_fields );
    par_fields = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_encode_multipart );
    par_encode_multipart = NULL;

    Py_XDECREF( par_multipart_boundary );
    par_multipart_boundary = NULL;

    Py_XDECREF( par_urlopen_kw );
    par_urlopen_kw = NULL;

    Py_XDECREF( var_extra_kw );
    var_extra_kw = NULL;

    Py_XDECREF( var_body );
    var_body = NULL;

    Py_XDECREF( var_content_type );
    var_content_type = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5_request_encode_body_of_class_1_RequestMethods_of_requests$packages$urllib3$request );
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
static PyObject *fparse_function_5_request_encode_body_of_class_1_RequestMethods_of_requests$packages$urllib3$request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_method = NULL;
    PyObject *_python_par_url = NULL;
    PyObject *_python_par_fields = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_encode_multipart = NULL;
    PyObject *_python_par_multipart_boundary = NULL;
    PyObject *_python_par_urlopen_kw = NULL;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_urlopen_kw = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_urlopen_kw = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "request_encode_body() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_urlopen_kw, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "request_encode_body() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = mp->ma_values[ i ];
                Py_XINCREF( split_copy->ma_values[ i ] );
            }

            _python_par_urlopen_kw = (PyObject *)split_copy;
        }
        else
        {
            _python_par_urlopen_kw = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "request_encode_body() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_urlopen_kw, entry->me_key, value );

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
            _python_par_urlopen_kw = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument method was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_method );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_method == NULL );

            _python_par_method = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_method );

            kw_found += 1;
        }
    }

    // Check if argument url was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_url );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_url == NULL );

            _python_par_url = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_url );

            kw_found += 1;
        }
    }

    // Check if argument fields was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_fields );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_fields == NULL );

            _python_par_fields = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_fields );

            kw_found += 1;
        }
    }

    // Check if argument headers was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_headers );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_headers == NULL );

            _python_par_headers = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_headers );

            kw_found += 1;
        }
    }

    // Check if argument encode_multipart was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_encode_multipart );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_encode_multipart == NULL );

            _python_par_encode_multipart = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_encode_multipart );

            kw_found += 1;
        }
    }

    // Check if argument multipart_boundary was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_urlopen_kw, const_str_plain_multipart_boundary );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_multipart_boundary == NULL );

            _python_par_multipart_boundary = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_urlopen_kw, const_str_plain_multipart_boundary );

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
        if ( 0 + self->m_defaults_given >= 7  )
        {
            _python_par_self = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 7 );
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
         if (unlikely( _python_par_method != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_method = args[ 1 ];
        Py_INCREF( _python_par_method );
    }
    else if ( _python_par_method == NULL )
    {
        if ( 1 + self->m_defaults_given >= 7  )
        {
            _python_par_method = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 7 );
            Py_INCREF( _python_par_method );
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
         if (unlikely( _python_par_url != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_url = args[ 2 ];
        Py_INCREF( _python_par_url );
    }
    else if ( _python_par_url == NULL )
    {
        if ( 2 + self->m_defaults_given >= 7  )
        {
            _python_par_url = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 7 );
            Py_INCREF( _python_par_url );
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
         if (unlikely( _python_par_fields != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_fields = args[ 3 ];
        Py_INCREF( _python_par_fields );
    }
    else if ( _python_par_fields == NULL )
    {
        if ( 3 + self->m_defaults_given >= 7  )
        {
            _python_par_fields = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 7 );
            Py_INCREF( _python_par_fields );
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
         if (unlikely( _python_par_headers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_headers = args[ 4 ];
        Py_INCREF( _python_par_headers );
    }
    else if ( _python_par_headers == NULL )
    {
        if ( 4 + self->m_defaults_given >= 7  )
        {
            _python_par_headers = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 7 );
            Py_INCREF( _python_par_headers );
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
         if (unlikely( _python_par_encode_multipart != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_encode_multipart = args[ 5 ];
        Py_INCREF( _python_par_encode_multipart );
    }
    else if ( _python_par_encode_multipart == NULL )
    {
        if ( 5 + self->m_defaults_given >= 7  )
        {
            _python_par_encode_multipart = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 7 );
            Py_INCREF( _python_par_encode_multipart );
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
    if (likely( 6 < args_given ))
    {
         if (unlikely( _python_par_multipart_boundary != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_multipart_boundary = args[ 6 ];
        Py_INCREF( _python_par_multipart_boundary );
    }
    else if ( _python_par_multipart_boundary == NULL )
    {
        if ( 6 + self->m_defaults_given >= 7  )
        {
            _python_par_multipart_boundary = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 7 );
            Py_INCREF( _python_par_multipart_boundary );
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
    if (unlikely( _python_par_self == NULL || _python_par_method == NULL || _python_par_url == NULL || _python_par_fields == NULL || _python_par_headers == NULL || _python_par_encode_multipart == NULL || _python_par_multipart_boundary == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_method, _python_par_url, _python_par_fields, _python_par_headers, _python_par_encode_multipart, _python_par_multipart_boundary };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 7 ))
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



    return impl_function_5_request_encode_body_of_class_1_RequestMethods_of_requests$packages$urllib3$request( self, _python_par_self, _python_par_method, _python_par_url, _python_par_fields, _python_par_headers, _python_par_encode_multipart, _python_par_multipart_boundary, _python_par_urlopen_kw );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_method );
    Py_XDECREF( _python_par_url );
    Py_XDECREF( _python_par_fields );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_encode_multipart );
    Py_XDECREF( _python_par_multipart_boundary );
    Py_XDECREF( _python_par_urlopen_kw );

    return NULL;
}

static PyObject *dparse_function_5_request_encode_body_of_class_1_RequestMethods_of_requests$packages$urllib3$request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 8 )
    {
        return impl_function_5_request_encode_body_of_class_1_RequestMethods_of_requests$packages$urllib3$request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_5_request_encode_body_of_class_1_RequestMethods_of_requests$packages$urllib3$request( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_RequestMethods_of_requests$packages$urllib3$request( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_RequestMethods_of_requests$packages$urllib3$request,
        dparse_function_1___init___of_class_1_RequestMethods_of_requests$packages$urllib3$request,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18,
#endif
        codeobj_35a064234d02537fe8430cc131fd2133,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_urlopen_of_class_1_RequestMethods_of_requests$packages$urllib3$request( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_urlopen_of_class_1_RequestMethods_of_requests$packages$urllib3$request,
        dparse_function_2_urlopen_of_class_1_RequestMethods_of_requests$packages$urllib3$request,
        const_str_plain_urlopen,
#if PYTHON_VERSION >= 330
        const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c,
#endif
        codeobj_497c9d7073804e56a8a208a6e7c0a13a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_request_of_class_1_RequestMethods_of_requests$packages$urllib3$request( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_request_of_class_1_RequestMethods_of_requests$packages$urllib3$request,
        dparse_function_3_request_of_class_1_RequestMethods_of_requests$packages$urllib3$request,
        const_str_plain_request,
#if PYTHON_VERSION >= 330
        const_str_digest_7d13004a6b21c498177feb48163642d9,
#endif
        codeobj_defd648e65718f44e4707b379fecd362,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$request,
        const_str_digest_4661d24aaa9eb1cc60cb4bc53d79ac83
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_request_encode_url_of_class_1_RequestMethods_of_requests$packages$urllib3$request( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_request_encode_url_of_class_1_RequestMethods_of_requests$packages$urllib3$request,
        dparse_function_4_request_encode_url_of_class_1_RequestMethods_of_requests$packages$urllib3$request,
        const_str_plain_request_encode_url,
#if PYTHON_VERSION >= 330
        const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d,
#endif
        codeobj_2c864c9a7cbc4781be713d0eb5eba66d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$request,
        const_str_digest_803c204d6b852d61542b6d5b2804eb65
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_request_encode_body_of_class_1_RequestMethods_of_requests$packages$urllib3$request( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_request_encode_body_of_class_1_RequestMethods_of_requests$packages$urllib3$request,
        dparse_function_5_request_encode_body_of_class_1_RequestMethods_of_requests$packages$urllib3$request,
        const_str_plain_request_encode_body,
#if PYTHON_VERSION >= 330
        const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9,
#endif
        codeobj_a94534f9870c0caa8ed9095102120f9a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$request,
        const_str_digest_a8dc03041fcfca293a0e4fc32a1fd72d
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$packages$urllib3$request =
{
    PyModuleDef_HEAD_INIT,
    "requests.packages.urllib3.request",   /* m_name */
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

MOD_INIT_DECL( requests$packages$urllib3$request )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$packages$urllib3$request );
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

    // puts( "in initrequests$packages$urllib3$request" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$packages$urllib3$request = Py_InitModule4(
        "requests.packages.urllib3.request",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_requests$packages$urllib3$request = PyModule_Create( &mdef_requests$packages$urllib3$request );
#endif

    moduledict_requests$packages$urllib3$request = (PyDictObject *)((PyModuleObject *)module_requests$packages$urllib3$request)->md_dict;

    CHECK_OBJECT( module_requests$packages$urllib3$request );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d10c66bbde8616415f45b76f1584f992, module_requests$packages$urllib3$request );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_requests$packages$urllib3$request );

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
    PyObject *tmp_requests$packages$urllib3$request_class_creation_1__bases = NULL;
    PyObject *tmp_requests$packages$urllib3$request_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_requests$packages$urllib3$request_class_creation_1__metaclass = NULL;
    PyObject *tmp_requests$packages$urllib3$request_class_creation_1__prepared = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_meta_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_key_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_remove_dict;
    PyObject *tmp_remove_key;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$request, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_aba19cc0089212746f300ab958df1197;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$request, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$request, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_ed694c6a900e924766dccd670fa8ccb4;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$request, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$request, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_FRAME( codeobj_4b5fd0903e2d0c735803f185ab235183, module_requests$packages$urllib3$request );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    // Tried code:
    tmp_import_globals_1 = ((PyModuleObject *)module_requests$packages$urllib3$request)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_04991ea695faff4a76e4efb6a8a8593f, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_urlencode_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto try_except_handler_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_urlencode );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$request, (Nuitka_StringObject *)const_str_plain_urlencode, tmp_assign_source_6 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_module, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_globals_2 = ((PyModuleObject *)module_requests$packages$urllib3$request)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_urllib, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_urlencode_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto try_except_handler_2;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_urlencode );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$request, (Nuitka_StringObject *)const_str_plain_urlencode, tmp_assign_source_7 );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_end_1:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$packages$urllib3$request );
    PyErr_SetObject( PyExc_RuntimeError, Py_None );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    tmp_import_globals_3 = ((PyModuleObject *)module_requests$packages$urllib3$request)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_filepost, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_encode_multipart_formdata_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_encode_multipart_formdata );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$request, (Nuitka_StringObject *)const_str_plain_encode_multipart_formdata, tmp_assign_source_8 );
    tmp_assign_source_9 = LIST_COPY( const_list_str_plain_RequestMethods_list );
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$request, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    tmp_assign_source_10 = PyTuple_New( 1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_1 != NULL );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_10, 0, tmp_tuple_element_1 );
    assert( tmp_requests$packages$urllib3$request_class_creation_1__bases == NULL );
    tmp_requests$packages$urllib3$request_class_creation_1__bases = tmp_assign_source_10;

    tmp_assign_source_11 = PyDict_New();
    assert( tmp_requests$packages$urllib3$request_class_creation_1__class_decl_dict == NULL );
    tmp_requests$packages$urllib3$request_class_creation_1__class_decl_dict = tmp_assign_source_11;

    // Tried code:
    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_requests$packages$urllib3$request_class_creation_1__class_decl_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_3;
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
    tmp_dget_dict_1 = tmp_requests$packages$urllib3$request_class_creation_1__class_decl_dict;

    tmp_dget_key_1 = const_str_plain_metaclass;
    tmp_class_meta_1 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_class_meta_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_requests$packages$urllib3$request_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_3;
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
    tmp_subscribed_name_1 = tmp_requests$packages$urllib3$request_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_3;
    }
    tmp_class_meta_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_class_meta_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_3;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_meta_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_1 != NULL );
    Py_INCREF( tmp_class_meta_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_class_bases_1 = tmp_requests$packages$urllib3$request_class_creation_1__bases;

    tmp_assign_source_12 = SELECT_METACLASS( tmp_class_meta_1, tmp_class_bases_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_1 );

        exception_lineno = 13;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_class_meta_1 );
    assert( tmp_requests$packages$urllib3$request_class_creation_1__metaclass == NULL );
    tmp_requests$packages$urllib3$request_class_creation_1__metaclass = tmp_assign_source_12;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_requests$packages$urllib3$request_class_creation_1__class_decl_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_3;
    }
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_remove_dict = tmp_requests$packages$urllib3$request_class_creation_1__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_3;
    }
    branch_no_2:;
    tmp_hasattr_source_1 = tmp_requests$packages$urllib3$request_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_3;
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
    tmp_source_name_1 = tmp_requests$packages$urllib3$request_class_creation_1__metaclass;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_3;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_RequestMethods;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_requests$packages$urllib3$request_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_requests$packages$urllib3$request_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 13;
    tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_13 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_requests$packages$urllib3$request_class_creation_1__prepared == NULL );
    tmp_requests$packages$urllib3$request_class_creation_1__prepared = tmp_assign_source_13;

    tmp_assign_source_14 = impl_class_1_RequestMethods_of_requests$packages$urllib3$request( tmp_requests$packages$urllib3$request_class_creation_1__bases, tmp_requests$packages$urllib3$request_class_creation_1__class_decl_dict, tmp_requests$packages$urllib3$request_class_creation_1__metaclass, tmp_requests$packages$urllib3$request_class_creation_1__prepared );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$request, (Nuitka_StringObject *)const_str_plain_RequestMethods, tmp_assign_source_14 );
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

    Py_XDECREF( tmp_requests$packages$urllib3$request_class_creation_1__bases );
    tmp_requests$packages$urllib3$request_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_requests$packages$urllib3$request_class_creation_1__class_decl_dict );
    tmp_requests$packages$urllib3$request_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$packages$urllib3$request_class_creation_1__metaclass );
    tmp_requests$packages$urllib3$request_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_requests$packages$urllib3$request_class_creation_1__prepared );
    tmp_requests$packages$urllib3$request_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
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
    Py_XDECREF( tmp_requests$packages$urllib3$request_class_creation_1__bases );
    tmp_requests$packages$urllib3$request_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_requests$packages$urllib3$request_class_creation_1__class_decl_dict );
    tmp_requests$packages$urllib3$request_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$packages$urllib3$request_class_creation_1__metaclass );
    tmp_requests$packages$urllib3$request_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_requests$packages$urllib3$request_class_creation_1__prepared );
    tmp_requests$packages$urllib3$request_class_creation_1__prepared = NULL;


    return MOD_RETURN_VALUE( module_requests$packages$urllib3$request );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
