// Generated code for Python source for module 'oauth2client.util'
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

// The _module_oauth2client$util is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_oauth2client$util;
PyDictObject *moduledict_oauth2client$util;

// The module constants used
extern PyObject *const_str_plain_scopes;
static PyObject *const_tuple_69da880c2f560537588fff151656f239_tuple;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_sorted;
static PyObject *const_str_digest_08020df32ac56b0d1dfa0e65ca474914;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_dcd8f3be3e2c36c922bfcb72841451e5;
static PyObject *const_str_digest_200d53085feb6ce58a701bff41cdc863;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_urlencode;
extern PyObject *const_str_plain_q;
extern PyObject *const_str_plain_join;
static PyObject *const_tuple_str_plain_scopes_tuple;
static PyObject *const_str_digest_7f030a36ac9e881b57eeb8704fa6542b;
extern PyObject *const_str_plain_wrapped;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_POSITIONAL_IGNORE;
static PyObject *const_str_plain_WARNING;
static PyObject *const_str_digest_a5e674a603cf8cda7dd20d99c2564726;
static PyObject *const_str_plain_positional_parameters_enforcement;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_urllib;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_urlparse;
extern PyObject *const_str_plain_wraps;
static PyObject *const_str_plain_positional_wrapper;
static PyObject *const_str_digest_e7b9b38041276e926d7f3f2062d76453;
static PyObject *const_str_digest_8077f2916c5ecf21f0be28ba34ffe729;
extern PyObject *const_str_plain_string_types;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_value;
extern PyObject *const_tuple_str_plain_urllib_tuple;
static PyObject *const_str_digest_48ecc1e94572ace5575110321b2932be;
static PyObject *const_str_digest_69ad0ae6a7c8f40cd84524b2b000dd16;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_positional;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_integer_types;
extern PyObject *const_str_space;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_POSITIONAL_EXCEPTION;
extern PyObject *const_str_plain_parse_qsl;
extern PyObject *const_str_plain_util;
extern PyObject *const_str_plain_split;
static PyObject *const_str_plain_IGNORE;
extern PyObject *const_str_plain__add_query_parameter;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_frozenset;
static PyObject *const_tuple_str_plain_dictionary_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_oauth2client;
static PyObject *const_list_ba646aee9b3c4b830f0e13783daead36_list;
extern PyObject *const_str_plain___author__;
static PyObject *const_str_plain_POSITIONAL_WARNING;
static PyObject *const_str_digest_ebd44743fce80217ecf519673614d418;
static PyObject *const_tuple_c2f34b7045ba6aff9bfc249dec3f5648_tuple;
static PyObject *const_str_plain_defaults;
extern PyObject *const_str_plain_parsed;
extern PyObject *const_str_plain_warning;
static PyObject *const_tuple_str_plain_wrapped_str_plain_positional_wrapper_tuple;
extern PyObject *const_int_pos_4;
static PyObject *const_str_plain_getargspec;
static PyObject *const_str_plain_plural_s;
static PyObject *const_str_plain_positional_decorator;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain__;
static PyObject *const_tuple_e8e5a5b4a46ab174c1bb210b59f42313_tuple;
extern PyObject *const_str_plain_functools;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_string_to_scopes;
static PyObject *const_str_plain_dict_to_tuple_key;
extern PyObject *const_str_plain_logger;
static PyObject *const_str_digest_c03f45080713182f324f03f61a6e1572;
static PyObject *const_str_digest_8734e486d4b3079ce5824d88af25fe91;
extern PyObject *const_str_plain_parse;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_inspect;
extern PyObject *const_str_plain_urlunparse;
extern PyObject *const_str_digest_d8d4f5e440c7f01129293c18f6555af5;
static PyObject *const_list_0501d91301210cb4dd2b5f8ae3228074_list;
static PyObject *const_str_plain_POSITIONAL_SET;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain_max_positional_args;
extern PyObject *const_str_plain_dictionary;
extern PyObject *const_str_plain_scopes_to_string;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_EXCEPTION;
static PyObject *const_str_digest_3318d108482c02fb8192158151c16211;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_69da880c2f560537588fff151656f239_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_69da880c2f560537588fff151656f239_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_69da880c2f560537588fff151656f239_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_69da880c2f560537588fff151656f239_tuple, 2, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_69da880c2f560537588fff151656f239_tuple, 3, const_str_plain_parsed ); Py_INCREF( const_str_plain_parsed );
    PyTuple_SET_ITEM( const_tuple_69da880c2f560537588fff151656f239_tuple, 4, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    const_str_digest_08020df32ac56b0d1dfa0e65ca474914 = UNSTREAM_STRING( &constant_bin[ 289429 ], 35, 0 );
    const_str_digest_dcd8f3be3e2c36c922bfcb72841451e5 = UNSTREAM_STRING( &constant_bin[ 289464 ], 348, 0 );
    const_str_digest_200d53085feb6ce58a701bff41cdc863 = UNSTREAM_STRING( &constant_bin[ 289812 ], 68, 0 );
    const_tuple_str_plain_scopes_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_scopes_tuple, 0, const_str_plain_scopes ); Py_INCREF( const_str_plain_scopes );
    const_str_digest_7f030a36ac9e881b57eeb8704fa6542b = UNSTREAM_STRING( &constant_bin[ 289880 ], 364, 0 );
    const_str_plain_POSITIONAL_IGNORE = UNSTREAM_STRING( &constant_bin[ 41913 ], 17, 1 );
    const_str_plain_WARNING = UNSTREAM_STRING( &constant_bin[ 7587 ], 7, 1 );
    const_str_digest_a5e674a603cf8cda7dd20d99c2564726 = UNSTREAM_STRING( &constant_bin[ 290244 ], 50, 0 );
    const_str_plain_positional_parameters_enforcement = UNSTREAM_STRING( &constant_bin[ 42540 ], 33, 1 );
    const_str_plain_positional_wrapper = UNSTREAM_STRING( &constant_bin[ 289862 ], 18, 1 );
    const_str_digest_e7b9b38041276e926d7f3f2062d76453 = UNSTREAM_STRING( &constant_bin[ 290294 ], 351, 0 );
    const_str_digest_8077f2916c5ecf21f0be28ba34ffe729 = UNSTREAM_STRING( &constant_bin[ 290645 ], 299, 0 );
    const_str_digest_48ecc1e94572ace5575110321b2932be = UNSTREAM_STRING( &constant_bin[ 290944 ], 30, 0 );
    const_str_digest_69ad0ae6a7c8f40cd84524b2b000dd16 = UNSTREAM_STRING( &constant_bin[ 290974 ], 2182, 0 );
    const_str_plain_POSITIONAL_EXCEPTION = UNSTREAM_STRING( &constant_bin[ 41871 ], 20, 1 );
    const_str_plain_IGNORE = UNSTREAM_STRING( &constant_bin[ 41924 ], 6, 1 );
    const_tuple_str_plain_dictionary_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_dictionary_tuple, 0, const_str_plain_dictionary ); Py_INCREF( const_str_plain_dictionary );
    const_list_ba646aee9b3c4b830f0e13783daead36_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_ba646aee9b3c4b830f0e13783daead36_list, 0, const_str_plain_positional ); Py_INCREF( const_str_plain_positional );
    const_str_plain_POSITIONAL_WARNING = UNSTREAM_STRING( &constant_bin[ 41831 ], 18, 1 );
    PyList_SET_ITEM( const_list_ba646aee9b3c4b830f0e13783daead36_list, 1, const_str_plain_POSITIONAL_WARNING ); Py_INCREF( const_str_plain_POSITIONAL_WARNING );
    PyList_SET_ITEM( const_list_ba646aee9b3c4b830f0e13783daead36_list, 2, const_str_plain_POSITIONAL_EXCEPTION ); Py_INCREF( const_str_plain_POSITIONAL_EXCEPTION );
    PyList_SET_ITEM( const_list_ba646aee9b3c4b830f0e13783daead36_list, 3, const_str_plain_POSITIONAL_IGNORE ); Py_INCREF( const_str_plain_POSITIONAL_IGNORE );
    const_str_digest_ebd44743fce80217ecf519673614d418 = UNSTREAM_STRING( &constant_bin[ 293156 ], 54, 0 );
    const_tuple_c2f34b7045ba6aff9bfc249dec3f5648_tuple = PyTuple_New( 5 );
    const_str_plain_max_positional_args = UNSTREAM_STRING( &constant_bin[ 41962 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_c2f34b7045ba6aff9bfc249dec3f5648_tuple, 0, const_str_plain_max_positional_args ); Py_INCREF( const_str_plain_max_positional_args );
    const_str_plain_positional_decorator = UNSTREAM_STRING( &constant_bin[ 42027 ], 20, 1 );
    PyTuple_SET_ITEM( const_tuple_c2f34b7045ba6aff9bfc249dec3f5648_tuple, 1, const_str_plain_positional_decorator ); Py_INCREF( const_str_plain_positional_decorator );
    PyTuple_SET_ITEM( const_tuple_c2f34b7045ba6aff9bfc249dec3f5648_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_c2f34b7045ba6aff9bfc249dec3f5648_tuple, 3, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    const_str_plain_defaults = UNSTREAM_STRING( &constant_bin[ 42204 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_c2f34b7045ba6aff9bfc249dec3f5648_tuple, 4, const_str_plain_defaults ); Py_INCREF( const_str_plain_defaults );
    const_tuple_str_plain_wrapped_str_plain_positional_wrapper_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_wrapped_str_plain_positional_wrapper_tuple, 0, const_str_plain_wrapped ); Py_INCREF( const_str_plain_wrapped );
    PyTuple_SET_ITEM( const_tuple_str_plain_wrapped_str_plain_positional_wrapper_tuple, 1, const_str_plain_positional_wrapper ); Py_INCREF( const_str_plain_positional_wrapper );
    const_str_plain_getargspec = UNSTREAM_STRING( &constant_bin[ 293210 ], 10, 1 );
    const_str_plain_plural_s = UNSTREAM_STRING( &constant_bin[ 42496 ], 8, 1 );
    const_tuple_e8e5a5b4a46ab174c1bb210b59f42313_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e8e5a5b4a46ab174c1bb210b59f42313_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_e8e5a5b4a46ab174c1bb210b59f42313_tuple, 1, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_e8e5a5b4a46ab174c1bb210b59f42313_tuple, 2, const_str_plain_plural_s ); Py_INCREF( const_str_plain_plural_s );
    PyTuple_SET_ITEM( const_tuple_e8e5a5b4a46ab174c1bb210b59f42313_tuple, 3, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_plain_dict_to_tuple_key = UNSTREAM_STRING( &constant_bin[ 293220 ], 17, 1 );
    const_str_digest_c03f45080713182f324f03f61a6e1572 = UNSTREAM_STRING( &constant_bin[ 293237 ], 17, 0 );
    const_str_digest_8734e486d4b3079ce5824d88af25fe91 = UNSTREAM_STRING( &constant_bin[ 289812 ], 40, 0 );
    const_list_0501d91301210cb4dd2b5f8ae3228074_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_0501d91301210cb4dd2b5f8ae3228074_list, 0, const_str_digest_48ecc1e94572ace5575110321b2932be ); Py_INCREF( const_str_digest_48ecc1e94572ace5575110321b2932be );
    PyList_SET_ITEM( const_list_0501d91301210cb4dd2b5f8ae3228074_list, 1, const_str_digest_08020df32ac56b0d1dfa0e65ca474914 ); Py_INCREF( const_str_digest_08020df32ac56b0d1dfa0e65ca474914 );
    const_str_plain_POSITIONAL_SET = UNSTREAM_STRING( &constant_bin[ 293254 ], 14, 1 );
    const_str_plain_EXCEPTION = UNSTREAM_STRING( &constant_bin[ 41882 ], 9, 1 );
    const_str_digest_3318d108482c02fb8192158151c16211 = UNSTREAM_STRING( &constant_bin[ 293268 ], 23, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_oauth2client$util( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ce07d34cb2c9169f980fb5af0984af25;
static PyCodeObject *codeobj_abbd1d583aa7dfd0c35cfe8135168838;
static PyCodeObject *codeobj_9792aae6e536e95e56944fdf0bd51853;
static PyCodeObject *codeobj_6c434a1a9e0a7cdcecff40165c51252b;
static PyCodeObject *codeobj_0b0643469ccbe7047c4a54dd250a198e;
static PyCodeObject *codeobj_0ae45720f0bdaed218356b3199753869;
static PyCodeObject *codeobj_fa5b669c214a85ef193442e1bca9a49e;
static PyCodeObject *codeobj_40adc5567220a05250cb6ecc009a519b;
static PyCodeObject *codeobj_252a61091aaee8c6a8954a6f386aa2ad;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_a5e674a603cf8cda7dd20d99c2564726 );
    codeobj_ce07d34cb2c9169f980fb5af0984af25 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__add_query_parameter, 204, const_tuple_69da880c2f560537588fff151656f239_tuple, 3, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_abbd1d583aa7dfd0c35cfe8135168838 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dict_to_tuple_key, 189, const_tuple_str_plain_dictionary_tuple, 1, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_9792aae6e536e95e56944fdf0bd51853 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_positional, 51, const_tuple_c2f34b7045ba6aff9bfc249dec3f5648_tuple, 1, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_6c434a1a9e0a7cdcecff40165c51252b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_positional_decorator, 123, const_tuple_str_plain_wrapped_str_plain_positional_wrapper_tuple, 1, 0, CO_NEWLOCALS | CO_OPTIMIZED );
    codeobj_0b0643469ccbe7047c4a54dd250a198e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_positional_wrapper, 124, const_tuple_e8e5a5b4a46ab174c1bb210b59f42313_tuple, 0, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS );
    codeobj_0ae45720f0bdaed218356b3199753869 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_positional_wrapper, 124, const_tuple_e8e5a5b4a46ab174c1bb210b59f42313_tuple, 2, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS );
    codeobj_fa5b669c214a85ef193442e1bca9a49e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_scopes_to_string, 150, const_tuple_str_plain_scopes_tuple, 1, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_40adc5567220a05250cb6ecc009a519b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_string_to_scopes, 169, const_tuple_str_plain_scopes_tuple, 1, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_252a61091aaee8c6a8954a6f386aa2ad = MAKE_CODEOBJ( module_filename_obj, const_str_plain_util, 0, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl_function_1_complex_call_helper_star_list_star_dict_of___internal__( PyObject *_python_par_called, PyObject *_python_par_star_arg_list, PyObject *_python_par_star_arg_dict );


static PyObject *MAKE_FUNCTION_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( PyCellObject *closure_max_positional_args );


static PyObject *MAKE_FUNCTION_function_1_positional_of_oauth2client$util(  );


static PyObject *MAKE_FUNCTION_function_1_positional_wrapper_of_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( PyCellObject *closure_max_positional_args, PyCellObject *closure_wrapped );


static PyObject *MAKE_FUNCTION_function_2_scopes_to_string_of_oauth2client$util(  );


static PyObject *MAKE_FUNCTION_function_3_string_to_scopes_of_oauth2client$util(  );


static PyObject *MAKE_FUNCTION_function_4_dict_to_tuple_key_of_oauth2client$util(  );


static PyObject *MAKE_FUNCTION_function_5__add_query_parameter_of_oauth2client$util(  );


// The module function definitions.
static PyObject *impl_function_1_positional_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject *_python_par_max_positional_args )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_max_positional_args = PyCell_NEW1( _python_par_max_positional_args );
    PyObject *var_positional_decorator = NULL;
    PyObject *var_args = NULL;
    PyObject *var__ = NULL;
    PyObject *var_defaults = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
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
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = MAKE_FUNCTION_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( par_max_positional_args );
    assert( var_positional_decorator == NULL );
    var_positional_decorator = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9792aae6e536e95e56944fdf0bd51853, module_oauth2client$util );
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
    tmp_isinstance_inst_1 = PyCell_GET( par_max_positional_args );

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41946 ], 65, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 30569 ], 25, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_integer_types );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = var_positional_decorator;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42011 ], 66, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_inspect );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42077 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_getargspec );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = PyCell_GET( par_max_positional_args );

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41946 ], 65, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 146;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_3 == NULL )
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


        exception_lineno = 146;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 146;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


        exception_lineno = 146;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_4, 3 );
    if ( tmp_assign_source_6 == NULL )
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


        exception_lineno = 146;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_4 == NULL );
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;

    assert( var_args == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_args = tmp_assign_source_7;

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;

    assert( var__ == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var__ = tmp_assign_source_8;

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;

    {
        PyObject *old = var__;
        assert( old != NULL );
        var__ = tmp_assign_source_9;
        Py_INCREF( var__ );
        Py_DECREF( old );
    }

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;

    assert( var_defaults == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_defaults = tmp_assign_source_10;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_positional );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_positional );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42106 ], 32, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_len_arg_1 = var_args;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42138 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = var_defaults;

    if ( tmp_len_arg_2 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42188 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 147;
    tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = PyCell_GET( par_max_positional_args );

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41946 ], 65, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 147;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_3 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
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
            if ( var_positional_decorator != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_positional_decorator,
                    var_positional_decorator
                );
                assert( tmp_res != -1 );

            }
            if ( var_args != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_args,
                    var_args
                );
                assert( tmp_res != -1 );

            }
            if ( var__ != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__,
                    var__
                );
                assert( tmp_res != -1 );

            }
            if ( var_defaults != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defaults,
                    var_defaults
                );
                assert( tmp_res != -1 );

            }
            if ( par_max_positional_args != NULL && PyCell_GET( par_max_positional_args ) != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_max_positional_args,
                    par_max_positional_args->ob_ref
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
    NUITKA_CANNOT_GET_HERE( function_1_positional_of_oauth2client$util );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_max_positional_args );
    Py_DECREF( par_max_positional_args );
    par_max_positional_args = NULL;

    Py_XDECREF( var_positional_decorator );
    var_positional_decorator = NULL;

    Py_XDECREF( var_args );
    var_args = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_defaults );
    var_defaults = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_max_positional_args );
    Py_DECREF( par_max_positional_args );
    par_max_positional_args = NULL;

    Py_XDECREF( var_positional_decorator );
    var_positional_decorator = NULL;

    Py_XDECREF( var_args );
    var_args = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_defaults );
    var_defaults = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_positional_of_oauth2client$util );
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
static PyObject *fparse_function_1_positional_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_max_positional_args = NULL;
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
                PyErr_Format( PyExc_TypeError, "positional() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_max_positional_args == key )
            {
                assert( _python_par_max_positional_args == NULL );
                _python_par_max_positional_args = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_max_positional_args, key ) == 1 )
            {
                assert( _python_par_max_positional_args == NULL );
                _python_par_max_positional_args = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "positional() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_max_positional_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_max_positional_args = args[ 0 ];
        Py_INCREF( _python_par_max_positional_args );
    }
    else if ( _python_par_max_positional_args == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_max_positional_args = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
            Py_INCREF( _python_par_max_positional_args );
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
    if (unlikely( _python_par_max_positional_args == NULL ))
    {
        PyObject *values[] = { _python_par_max_positional_args };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
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



    return impl_function_1_positional_of_oauth2client$util( self, _python_par_max_positional_args );

error_exit:;

    Py_XDECREF( _python_par_max_positional_args );

    return NULL;
}

static PyObject *dparse_function_1_positional_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_positional_of_oauth2client$util( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_positional_of_oauth2client$util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject *_python_par_wrapped )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_wrapped = PyCell_NEW1( _python_par_wrapped );
    PyObject *var_positional_wrapper = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6c434a1a9e0a7cdcecff40165c51252b, module_oauth2client$util );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_functools );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42242 ], 31, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_wraps );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = PyCell_GET( par_wrapped );

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42273 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 124;
    tmp_called_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = MAKE_FUNCTION_function_1_positional_wrapper_of_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( self->m_closure[0], par_wrapped );
    frame_function->f_lineno = 124;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    assert( var_positional_wrapper == NULL );
    var_positional_wrapper = tmp_assign_source_1;


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
            if ( var_positional_wrapper != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_positional_wrapper,
                    var_positional_wrapper
                );
                assert( tmp_res != -1 );

            }
            if ( par_wrapped != NULL && PyCell_GET( par_wrapped ) != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wrapped,
                    par_wrapped->ob_ref
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

    tmp_return_value = var_positional_wrapper;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_positional_decorator_of_function_1_positional_of_oauth2client$util );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_wrapped );
    Py_DECREF( par_wrapped );
    par_wrapped = NULL;

    Py_XDECREF( var_positional_wrapper );
    var_positional_wrapper = NULL;

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

    CHECK_OBJECT( (PyObject *)par_wrapped );
    Py_DECREF( par_wrapped );
    par_wrapped = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_positional_decorator_of_function_1_positional_of_oauth2client$util );
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
static PyObject *fparse_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_wrapped = NULL;
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
                PyErr_Format( PyExc_TypeError, "positional_decorator() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_wrapped == key )
            {
                assert( _python_par_wrapped == NULL );
                _python_par_wrapped = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_wrapped, key ) == 1 )
            {
                assert( _python_par_wrapped == NULL );
                _python_par_wrapped = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "positional_decorator() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_wrapped != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_wrapped = args[ 0 ];
        Py_INCREF( _python_par_wrapped );
    }
    else if ( _python_par_wrapped == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_wrapped = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
            Py_INCREF( _python_par_wrapped );
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
    if (unlikely( _python_par_wrapped == NULL ))
    {
        PyObject *values[] = { _python_par_wrapped };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
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



    return impl_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( self, _python_par_wrapped );

error_exit:;

    Py_XDECREF( _python_par_wrapped );

    return NULL;
}

static PyObject *dparse_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_positional_wrapper_of_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = _python_par_args;
    PyObject *par_kwargs = _python_par_kwargs;
    PyObject *var_plural_s = NULL;
    PyObject *var_message = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Gt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0ae45720f0bdaed218356b3199753869, module_oauth2client$util );
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
    tmp_len_arg_1 = par_args;

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42326 ], 83, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = const_str_empty;
    assert( var_plural_s == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_plural_s = tmp_assign_source_1;

    tmp_compare_left_2 = PyCell_GET( self->m_closure[0] );

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42326 ], 83, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = const_str_plain_s;
    {
        PyObject *old = var_plural_s;
        var_plural_s = tmp_assign_source_2;
        Py_INCREF( var_plural_s );
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_left_name_1 = const_str_digest_ebd44743fce80217ecf519673614d418;
    tmp_right_name_1 = PyTuple_New( 4 );
    tmp_source_name_1 = PyCell_GET( self->m_closure[1] );

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42409 ], 71, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42326 ], 83, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_plural_s;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42480 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_len_arg_2 = par_args;

    if ( tmp_len_arg_2 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42138 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 133;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 3, tmp_tuple_element_1 );
    tmp_assign_source_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_3;

    tmp_compare_left_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_positional_parameters_enforcement );

    if (unlikely( tmp_compare_left_3 == NULL ))
    {
        tmp_compare_left_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_positional_parameters_enforcement );
    }

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42534 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_POSITIONAL_EXCEPTION );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POSITIONAL_EXCEPTION );
    }

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41865 ], 42, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_1 = var_message;

    if ( tmp_make_exception_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 30815 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 135;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 135;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_positional_parameters_enforcement );

    if (unlikely( tmp_compare_left_4 == NULL ))
    {
        tmp_compare_left_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_positional_parameters_enforcement );
    }

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42534 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_POSITIONAL_WARNING );

    if (unlikely( tmp_compare_right_4 == NULL ))
    {
        tmp_compare_right_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POSITIONAL_WARNING );
    }

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41825 ], 40, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_logger );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 32509 ], 28, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_warning );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_message;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 30815 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 137;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    branch_end_3:;
    branch_no_1:;
    tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[1] );

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42409 ], 71, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = par_args;

    if ( tmp_dircall_arg2_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42138 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_1 = par_kwargs;

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );
    tmp_return_value = impl_function_1_complex_call_helper_star_list_star_dict_of___internal__( tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
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
            if ( var_plural_s != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_plural_s,
                    var_plural_s
                );
                assert( tmp_res != -1 );

            }
            if ( var_message != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_message,
                    var_message
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
            if ( self->m_closure[0] != NULL && PyCell_GET( self->m_closure[0] ) != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_max_positional_args,
                    self->m_closure[0]->ob_ref
                );
                assert( tmp_res != -1 );

            }
            if ( self->m_closure[1] != NULL && PyCell_GET( self->m_closure[1] ) != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wrapped,
                    self->m_closure[1]->ob_ref
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
    NUITKA_CANNOT_GET_HERE( function_1_positional_wrapper_of_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_plural_s );
    var_plural_s = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

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

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_plural_s );
    var_plural_s = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_positional_wrapper_of_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util );
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
static PyObject *fparse_function_1_positional_wrapper_of_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_kwargs = NULL;

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
                        PyErr_Format( PyExc_TypeError, "positional_wrapper() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "positional_wrapper() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "positional_wrapper() keywords must be strings" );
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

    // Copy left-over argument values to the star list parameter given.
    if ( args_given > 0 )
    {
        _python_par_args = PyTuple_New( args_size - 0 );

        for( Py_ssize_t i = 0; i < args_size - 0; i++ )
        {
            PyObject *value = args[0+i];
            PyTuple_SET_ITEM( _python_par_args, i, value );
            Py_INCREF( value );
        }
    }
    else
    {
        _python_par_args = const_tuple_empty;
        Py_INCREF( const_tuple_empty );
    }


    return impl_function_1_positional_wrapper_of_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1_positional_wrapper_of_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1_positional_wrapper_of_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( self, MAKE_TUPLE( &args[ 0 ], size > 0 ? size-0 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1_positional_wrapper_of_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_scopes_to_string_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject *_python_par_scopes )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_scopes = _python_par_scopes;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fa5b669c214a85ef193442e1bca9a49e, module_oauth2client$util );
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
    tmp_isinstance_inst_1 = par_scopes;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 30569 ], 25, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_string_types );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = par_scopes;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 32223 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = const_str_space;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = par_scopes;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 32223 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 166;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
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
            if ( par_scopes != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scopes,
                    par_scopes
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
    NUITKA_CANNOT_GET_HERE( function_2_scopes_to_string_of_oauth2client$util );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_scopes );
    par_scopes = NULL;

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

    Py_XDECREF( par_scopes );
    par_scopes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_scopes_to_string_of_oauth2client$util );
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
static PyObject *fparse_function_2_scopes_to_string_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_scopes = NULL;
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
                PyErr_Format( PyExc_TypeError, "scopes_to_string() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_scopes == key )
            {
                assert( _python_par_scopes == NULL );
                _python_par_scopes = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_scopes, key ) == 1 )
            {
                assert( _python_par_scopes == NULL );
                _python_par_scopes = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "scopes_to_string() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_scopes != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_scopes = args[ 0 ];
        Py_INCREF( _python_par_scopes );
    }
    else if ( _python_par_scopes == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_scopes = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
            Py_INCREF( _python_par_scopes );
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
    if (unlikely( _python_par_scopes == NULL ))
    {
        PyObject *values[] = { _python_par_scopes };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
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



    return impl_function_2_scopes_to_string_of_oauth2client$util( self, _python_par_scopes );

error_exit:;

    Py_XDECREF( _python_par_scopes );

    return NULL;
}

static PyObject *dparse_function_2_scopes_to_string_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_scopes_to_string_of_oauth2client$util( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_scopes_to_string_of_oauth2client$util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_string_to_scopes_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject *_python_par_scopes )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_scopes = _python_par_scopes;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_40adc5567220a05250cb6ecc009a519b, module_oauth2client$util );
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
    tmp_cond_value_1 = par_scopes;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = PyList_New( 0 );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_scopes;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 32223 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 30569 ], 25, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_string_types );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_2 = par_scopes;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 32223 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_split );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_space;
    frame_function->f_lineno = 184;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = par_scopes;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 32223 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_2:;

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
            if ( par_scopes != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scopes,
                    par_scopes
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
    NUITKA_CANNOT_GET_HERE( function_3_string_to_scopes_of_oauth2client$util );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_scopes );
    par_scopes = NULL;

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

    Py_XDECREF( par_scopes );
    par_scopes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_string_to_scopes_of_oauth2client$util );
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
static PyObject *fparse_function_3_string_to_scopes_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_scopes = NULL;
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
                PyErr_Format( PyExc_TypeError, "string_to_scopes() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_scopes == key )
            {
                assert( _python_par_scopes == NULL );
                _python_par_scopes = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_scopes, key ) == 1 )
            {
                assert( _python_par_scopes == NULL );
                _python_par_scopes = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "string_to_scopes() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_scopes != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_scopes = args[ 0 ];
        Py_INCREF( _python_par_scopes );
    }
    else if ( _python_par_scopes == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_scopes = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
            Py_INCREF( _python_par_scopes );
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
    if (unlikely( _python_par_scopes == NULL ))
    {
        PyObject *values[] = { _python_par_scopes };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
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



    return impl_function_3_string_to_scopes_of_oauth2client$util( self, _python_par_scopes );

error_exit:;

    Py_XDECREF( _python_par_scopes );

    return NULL;
}

static PyObject *dparse_function_3_string_to_scopes_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_string_to_scopes_of_oauth2client$util( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_string_to_scopes_of_oauth2client$util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_dict_to_tuple_key_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject *_python_par_dictionary )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dictionary = _python_par_dictionary;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_arg_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_abbd1d583aa7dfd0c35cfe8135168838, module_oauth2client$util );
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
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_sorted );
    assert( tmp_called_name_1 != NULL );
    tmp_source_name_1 = par_dictionary;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_items );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 201;
    tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 201;
    tmp_tuple_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_tuple_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_return_value = PySequence_Tuple( tmp_tuple_arg_1 );
    Py_DECREF( tmp_tuple_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
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
            if ( par_dictionary != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dictionary,
                    par_dictionary
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
    NUITKA_CANNOT_GET_HERE( function_4_dict_to_tuple_key_of_oauth2client$util );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_dictionary );
    par_dictionary = NULL;

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

    Py_XDECREF( par_dictionary );
    par_dictionary = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_dict_to_tuple_key_of_oauth2client$util );
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
static PyObject *fparse_function_4_dict_to_tuple_key_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_dictionary = NULL;
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
                PyErr_Format( PyExc_TypeError, "dict_to_tuple_key() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_dictionary == key )
            {
                assert( _python_par_dictionary == NULL );
                _python_par_dictionary = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dictionary, key ) == 1 )
            {
                assert( _python_par_dictionary == NULL );
                _python_par_dictionary = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "dict_to_tuple_key() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_dictionary != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_dictionary = args[ 0 ];
        Py_INCREF( _python_par_dictionary );
    }
    else if ( _python_par_dictionary == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_dictionary = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
            Py_INCREF( _python_par_dictionary );
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
    if (unlikely( _python_par_dictionary == NULL ))
    {
        PyObject *values[] = { _python_par_dictionary };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
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



    return impl_function_4_dict_to_tuple_key_of_oauth2client$util( self, _python_par_dictionary );

error_exit:;

    Py_XDECREF( _python_par_dictionary );

    return NULL;
}

static PyObject *dparse_function_4_dict_to_tuple_key_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_4_dict_to_tuple_key_of_oauth2client$util( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_dict_to_tuple_key_of_oauth2client$util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5__add_query_parameter_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject *_python_par_url, PyObject *_python_par_name, PyObject *_python_par_value )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = _python_par_url;
    PyObject *par_name = _python_par_name;
    PyObject *par_value = _python_par_value;
    PyObject *var_parsed = NULL;
    PyObject *var_q = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    int tmp_ass_subscript_res_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_seq_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_list_arg_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ce07d34cb2c9169f980fb5af0984af25, module_oauth2client$util );
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
    tmp_compare_left_1 = par_value;

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
    tmp_return_value = par_url;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_urllib );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urllib );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27677 ], 28, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_parse );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_urlparse );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_url;

    frame_function->f_lineno = 220;
    tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    assert( var_parsed == NULL );
    var_parsed = tmp_assign_source_1;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_urllib );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urllib );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27677 ], 28, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_parse );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_parse_qsl );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_1 = var_parsed;

    if ( tmp_subscribed_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42589 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_pos_4;
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 221;
    tmp_dict_seq_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_dict_seq_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = TO_DICT( tmp_dict_seq_1, NULL );
    Py_DECREF( tmp_dict_seq_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    assert( var_q == NULL );
    var_q = tmp_assign_source_2;

    tmp_ass_subvalue_1 = par_value;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9904 ], 51, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = var_q;

    tmp_ass_subscript_1 = par_name;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_urllib );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urllib );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27677 ], 28, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_parse );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_urlencode );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_q;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42641 ], 47, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 223;
    tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_2 = var_parsed;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42589 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_int_pos_4;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 4, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_urllib );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urllib );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27677 ], 28, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_parse );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_urlunparse );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_parsed;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42589 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 224;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, tmp_args_element_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
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
            if ( var_parsed != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parsed,
                    var_parsed
                );
                assert( tmp_res != -1 );

            }
            if ( var_q != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_q,
                    var_q
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
            if ( par_name != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    par_name
                );
                assert( tmp_res != -1 );

            }
            if ( par_value != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_value,
                    par_value
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
    NUITKA_CANNOT_GET_HERE( function_5__add_query_parameter_of_oauth2client$util );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5__add_query_parameter_of_oauth2client$util );
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
static PyObject *fparse_function_5__add_query_parameter_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_url = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_value = NULL;
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
                PyErr_Format( PyExc_TypeError, "_add_query_parameter() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_url == key )
            {
                assert( _python_par_url == NULL );
                _python_par_url = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_name == key )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_value == key )
            {
                assert( _python_par_value == NULL );
                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_url, key ) == 1 )
            {
                assert( _python_par_url == NULL );
                _python_par_url = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_name, key ) == 1 )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_value, key ) == 1 )
            {
                assert( _python_par_value == NULL );
                _python_par_value = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_add_query_parameter() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_url != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_url = args[ 0 ];
        Py_INCREF( _python_par_url );
    }
    else if ( _python_par_url == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_url = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_name = args[ 1 ];
        Py_INCREF( _python_par_name );
    }
    else if ( _python_par_name == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_name = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 );
            Py_INCREF( _python_par_name );
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
         if (unlikely( _python_par_value != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_value = args[ 2 ];
        Py_INCREF( _python_par_value );
    }
    else if ( _python_par_value == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_value = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 );
            Py_INCREF( _python_par_value );
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
    if (unlikely( _python_par_url == NULL || _python_par_name == NULL || _python_par_value == NULL ))
    {
        PyObject *values[] = { _python_par_url, _python_par_name, _python_par_value };
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



    return impl_function_5__add_query_parameter_of_oauth2client$util( self, _python_par_url, _python_par_name, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_url );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_5__add_query_parameter_of_oauth2client$util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_5__add_query_parameter_of_oauth2client$util( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5__add_query_parameter_of_oauth2client$util( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( PyCellObject *closure_max_positional_args )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc( 1 * sizeof(PyCellObject *) );
    closure[0] = closure_max_positional_args;
    Py_INCREF( closure[0] );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util,
        dparse_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util,
        const_str_plain_positional_decorator,
#if PYTHON_VERSION >= 330
        const_str_digest_8734e486d4b3079ce5824d88af25fe91,
#endif
        codeobj_6c434a1a9e0a7cdcecff40165c51252b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauth2client$util,
        Py_None,
        closure,
        1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_positional_of_oauth2client$util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_positional_of_oauth2client$util,
        dparse_function_1_positional_of_oauth2client$util,
        const_str_plain_positional,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9792aae6e536e95e56944fdf0bd51853,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauth2client$util,
        const_str_digest_69ad0ae6a7c8f40cd84524b2b000dd16
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_positional_wrapper_of_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util( PyCellObject *closure_max_positional_args, PyCellObject *closure_wrapped )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc( 2 * sizeof(PyCellObject *) );
    closure[0] = closure_max_positional_args;
    Py_INCREF( closure[0] );
    closure[1] = closure_wrapped;
    Py_INCREF( closure[1] );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1_positional_wrapper_of_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util,
        dparse_function_1_positional_wrapper_of_function_1_positional_decorator_of_function_1_positional_of_oauth2client$util,
        const_str_plain_positional_wrapper,
#if PYTHON_VERSION >= 330
        const_str_digest_200d53085feb6ce58a701bff41cdc863,
#endif
        codeobj_0b0643469ccbe7047c4a54dd250a198e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauth2client$util,
        Py_None,
        closure,
        2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_scopes_to_string_of_oauth2client$util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_scopes_to_string_of_oauth2client$util,
        dparse_function_2_scopes_to_string_of_oauth2client$util,
        const_str_plain_scopes_to_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fa5b669c214a85ef193442e1bca9a49e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauth2client$util,
        const_str_digest_e7b9b38041276e926d7f3f2062d76453
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_string_to_scopes_of_oauth2client$util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_string_to_scopes_of_oauth2client$util,
        dparse_function_3_string_to_scopes_of_oauth2client$util,
        const_str_plain_string_to_scopes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_40adc5567220a05250cb6ecc009a519b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauth2client$util,
        const_str_digest_8077f2916c5ecf21f0be28ba34ffe729
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_dict_to_tuple_key_of_oauth2client$util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_dict_to_tuple_key_of_oauth2client$util,
        dparse_function_4_dict_to_tuple_key_of_oauth2client$util,
        const_str_plain_dict_to_tuple_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_abbd1d583aa7dfd0c35cfe8135168838,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauth2client$util,
        const_str_digest_7f030a36ac9e881b57eeb8704fa6542b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5__add_query_parameter_of_oauth2client$util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5__add_query_parameter_of_oauth2client$util,
        dparse_function_5__add_query_parameter_of_oauth2client$util,
        const_str_plain__add_query_parameter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ce07d34cb2c9169f980fb5af0984af25,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauth2client$util,
        const_str_digest_dcd8f3be3e2c36c922bfcb72841451e5
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_oauth2client$util =
{
    PyModuleDef_HEAD_INIT,
    "oauth2client.util",   /* m_name */
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

MOD_INIT_DECL( oauth2client$util )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_oauth2client$util );
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

    // puts( "in initoauth2client$util" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_oauth2client$util = Py_InitModule4(
        "oauth2client.util",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_oauth2client$util = PyModule_Create( &mdef_oauth2client$util );
#endif

    moduledict_oauth2client$util = (PyDictObject *)((PyModuleObject *)module_oauth2client$util)->md_dict;

    CHECK_OBJECT( module_oauth2client$util );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c03f45080713182f324f03f61a6e1572, module_oauth2client$util );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_oauth2client$util );

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
    PyObject *tmp_args_element_name_1;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_source_name_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_3318d108482c02fb8192158151c16211;
    UPDATE_STRING_DICT0( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_a5e674a603cf8cda7dd20d99c2564726;
    UPDATE_STRING_DICT0( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_oauth2client;
    UPDATE_STRING_DICT0( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_FRAME( codeobj_252a61091aaee8c6a8954a6f386aa2ad, module_oauth2client$util );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_oauth2client$util)->md_dict;
    frame_module->f_lineno = 20;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_functools, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_5 );
    tmp_import_globals_2 = ((PyModuleObject *)module_oauth2client$util)->md_dict;
    frame_module->f_lineno = 21;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_inspect, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_6 );
    tmp_import_globals_3 = ((PyModuleObject *)module_oauth2client$util)->md_dict;
    frame_module->f_lineno = 22;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_logging, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_7 );
    tmp_import_globals_4 = ((PyModuleObject *)module_oauth2client$util)->md_dict;
    frame_module->f_lineno = 24;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_six, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_8 );
    tmp_import_globals_5 = ((PyModuleObject *)module_oauth2client$util)->md_dict;
    frame_module->f_lineno = 25;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_d8d4f5e440c7f01129293c18f6555af5, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_urllib_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_urllib );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_urllib, tmp_assign_source_9 );
    tmp_assign_source_10 = LIST_COPY( const_list_0501d91301210cb4dd2b5f8ae3228074_list );
    UPDATE_STRING_DICT1( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_10 );
    tmp_assign_source_11 = LIST_COPY( const_list_ba646aee9b3c4b830f0e13783daead36_list );
    UPDATE_STRING_DICT1( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 31550 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getLogger );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_c03f45080713182f324f03f61a6e1572;
    frame_module->f_lineno = 40;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_logger, tmp_assign_source_12 );
    tmp_assign_source_13 = const_str_plain_WARNING;
    UPDATE_STRING_DICT0( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_POSITIONAL_WARNING, tmp_assign_source_13 );
    tmp_assign_source_14 = const_str_plain_EXCEPTION;
    UPDATE_STRING_DICT0( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_POSITIONAL_EXCEPTION, tmp_assign_source_14 );
    tmp_assign_source_15 = const_str_plain_IGNORE;
    UPDATE_STRING_DICT0( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_POSITIONAL_IGNORE, tmp_assign_source_15 );
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_frozenset );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_1 = PyList_New( 3 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_POSITIONAL_WARNING );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POSITIONAL_WARNING );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41825 ], 40, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_POSITIONAL_EXCEPTION );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POSITIONAL_EXCEPTION );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41865 ], 42, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_POSITIONAL_IGNORE );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POSITIONAL_IGNORE );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41907 ], 39, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 2, tmp_list_element_1 );
    frame_module->f_lineno = 46;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_POSITIONAL_SET, tmp_assign_source_16 );
    tmp_assign_source_17 = GET_STRING_DICT_VALUE( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_POSITIONAL_WARNING );

    if (unlikely( tmp_assign_source_17 == NULL ))
    {
        tmp_assign_source_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POSITIONAL_WARNING );
    }

    if ( tmp_assign_source_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41825 ], 40, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_positional_parameters_enforcement, tmp_assign_source_17 );

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
    tmp_assign_source_18 = MAKE_FUNCTION_function_1_positional_of_oauth2client$util(  );
    UPDATE_STRING_DICT1( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_positional, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_function_2_scopes_to_string_of_oauth2client$util(  );
    UPDATE_STRING_DICT1( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_scopes_to_string, tmp_assign_source_19 );
    tmp_assign_source_20 = MAKE_FUNCTION_function_3_string_to_scopes_of_oauth2client$util(  );
    UPDATE_STRING_DICT1( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_string_to_scopes, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_function_4_dict_to_tuple_key_of_oauth2client$util(  );
    UPDATE_STRING_DICT1( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain_dict_to_tuple_key, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_function_5__add_query_parameter_of_oauth2client$util(  );
    UPDATE_STRING_DICT1( moduledict_oauth2client$util, (Nuitka_StringObject *)const_str_plain__add_query_parameter, tmp_assign_source_22 );

    return MOD_RETURN_VALUE( module_oauth2client$util );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
