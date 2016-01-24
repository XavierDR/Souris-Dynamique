// Generated code for Python source for module 'simplejson'
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

// The _module_simplejson is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_simplejson;
PyDictObject *moduledict_simplejson;

// The module constants used
static PyObject *const_list_f84a2984e85a27a6b972ac8cc2d191e4_list;
extern PyObject *const_str_plain_py_make_scanner;
extern PyObject *const_str_plain_for_json;
extern PyObject *const_str_plain_JSONEncoder;
extern PyObject *const_str_plain_dict;
static PyObject *const_tuple_938c1efa47b6068f905608d95c9d1d47_tuple;
extern PyObject *const_str_plain_parse_constant;
static PyObject *const_str_digest_71e4ff40e78d3a16dcd2a8e652afa553;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_iterable;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_plain__toggle_speedups;
extern PyObject *const_str_plain_default;
static PyObject *const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple;
static PyObject *const_str_plain_dec;
extern PyObject *const_str_plain_separators;
extern PyObject *const_str_plain_enc;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_decimal;
extern PyObject *const_str_plain_read;
extern PyObject *const_tuple_str_plain_decoder_tuple;
extern PyObject *const_str_plain_c_encode_basestring_ascii;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_fp;
extern PyObject *const_str_plain_py_scanstring;
extern PyObject *const_str_plain_JSONEncoderForHTML;
static PyObject *const_tuple_806361c2c2eaa7b89848956d396216bb_tuple;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_item_sort_key;
extern PyObject *const_str_plain_JSONDecodeError;
static PyObject *const_str_plain__default_encoder;
extern PyObject *const_str_plain_object_pairs_hook;
static PyObject *const_tuple_str_plain_ordered_dict_tuple;
extern PyObject *const_str_plain_check_circular;
static PyObject *const_list_str_digest_71e4ff40e78d3a16dcd2a8e652afa553_list;
static PyObject *const_dict_37e83e69aa1ba56e46454396202513d2;
static PyObject *const_str_digest_29128799e6868180fe0bd02edfedaa2d;
extern PyObject *const_str_plain_encode_basestring_ascii;
static PyObject *const_str_plain__import_c_make_encoder;
extern PyObject *const_str_plain_collections;
static PyObject *const_tuple_str_plain_kv_tuple;
extern PyObject *const_str_plain_Decimal;
static PyObject *const_str_plain_kv;
extern PyObject *const_str_plain_load;
extern PyObject *const_str_plain_make_encoder;
extern PyObject *const_str_plain_ensure_ascii;
extern PyObject *const_str_plain_allow_nan;
extern PyObject *const_str_plain_object_hook;
extern PyObject *const_str_plain_indent;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_dump;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_c_make_encoder;
extern PyObject *const_str_plain_py_encode_basestring_ascii;
static PyObject *const_str_plain_simple_first;
static PyObject *const_str_digest_dcaae56451b88f3504852aecc725b543;
static PyObject *const_tuple_str_plain_make_encoder_tuple;
static PyObject *const_dict_959a39584b85e1964750ccd746043bed;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_encoding;
static PyObject *const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple;
extern PyObject *const_str_plain_parse_float;
extern PyObject *const_str_plain___version__;
static PyObject *const_tuple_str_plain_scanner_tuple;
static PyObject *const_tuple_str_plain_Decimal_tuple;
extern PyObject *const_int_0;
static PyObject *const_tuple_569a3f1c6de90af94d33b2686aaf078c_tuple;
static PyObject *const_tuple_str_plain_JSONDecoder_tuple;
static PyObject *const_tuple_none_none_none_none_none_none_none_false_tuple;
static PyObject *const_dict_1dbee11ab85c09603c4a3e72ea590cea;
extern PyObject *const_str_plain_dumps;
static PyObject *const_str_digest_056dff25d5325386a052ec3e062023a0;
extern PyObject *const_str_plain_scanner;
extern PyObject *const_str_plain___author__;
static PyObject *const_tuple_str_plain_JSONEncoder_str_plain_JSONEncoderForHTML_tuple;
static PyObject *const_str_digest_6fd554b5d4a4ecd210f80190483f7b16;
extern PyObject *const_str_plain_OrderedDict;
static PyObject *const_str_plain__import_OrderedDict;
extern PyObject *const_str_plain_tuple_as_array;
extern PyObject *const_tuple_str_plain_encoder_tuple;
static PyObject *const_str_plain__default_decoder;
static PyObject *const_str_digest_021b885e98285b326436109d09a4f0c5;
extern PyObject *const_str_plain_scanstring;
static PyObject *const_tuple_str_plain_collections_str_plain_ordered_dict_tuple;
static PyObject *const_str_digest_b9349770d86089b862f8cef6382c2931;
extern PyObject *const_str_plain_make_scanner;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_iterable_as_array;
static PyObject *const_tuple_none_none_none_none_none_none_none_false_true_true_tuple;
extern PyObject *const_str_plain_simplejson;
static PyObject *const_str_digest_42256fcacc1ac14f73f19092740ce8f7;
extern PyObject *const_str_plain_bigint_as_string;
extern PyObject *const_str_plain_iterencode;
extern PyObject *const_str_plain_sort_keys;
static PyObject *const_tuple_d6b80cb1ff69748caff298d967e01196_tuple;
extern PyObject *const_str_plain_chunk;
extern PyObject *const_str_plain_kw;
extern PyObject *const_str_plain_parse_int;
static PyObject *const_str_digest_64ae83aa2c61090f8868e56791bda80c;
static PyObject *const_tuple_str_plain_JSONDecodeError_tuple;
extern PyObject *const_str_plain_ordered_dict;
extern PyObject *const_str_plain_int_as_string_bitcount;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_5f19295486f8c25cc6fdf18d2edc0f0a;
extern PyObject *const_str_plain_decoder;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_namedtuple_as_object;
extern PyObject *const_str_plain_c_scanstring;
extern PyObject *const_str_plain__speedups;
extern PyObject *const_str_plain_enabled;
extern PyObject *const_str_plain_skipkeys;
extern PyObject *const_str_plain_ignore_nan;
extern PyObject *const_str_plain_encoder;
extern PyObject *const_str_plain_use_decimal;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_loads;
static PyObject *const_str_digest_48c897e0fc561f1b02560db1fa883cf7;
static PyObject *const_str_plain_scan;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_c_make_scanner;
extern PyObject *const_str_plain_JSONDecoder;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_f84a2984e85a27a6b972ac8cc2d191e4_list = PyList_New( 9 );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 0, const_str_plain_dump ); Py_INCREF( const_str_plain_dump );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 1, const_str_plain_dumps ); Py_INCREF( const_str_plain_dumps );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 2, const_str_plain_load ); Py_INCREF( const_str_plain_load );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 3, const_str_plain_loads ); Py_INCREF( const_str_plain_loads );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 4, const_str_plain_JSONDecoder ); Py_INCREF( const_str_plain_JSONDecoder );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 5, const_str_plain_JSONDecodeError ); Py_INCREF( const_str_plain_JSONDecodeError );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 6, const_str_plain_JSONEncoder ); Py_INCREF( const_str_plain_JSONEncoder );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 7, const_str_plain_OrderedDict ); Py_INCREF( const_str_plain_OrderedDict );
    const_str_plain_simple_first = UNSTREAM_STRING( &constant_bin[ 883941 ], 12, 1 );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 8, const_str_plain_simple_first ); Py_INCREF( const_str_plain_simple_first );
    const_tuple_938c1efa47b6068f905608d95c9d1d47_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 883953 ], 266 );
    const_str_digest_71e4ff40e78d3a16dcd2a8e652afa553 = UNSTREAM_STRING( &constant_bin[ 884219 ], 40, 0 );
    const_str_plain__toggle_speedups = UNSTREAM_STRING( &constant_bin[ 884259 ], 16, 1 );
    const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 1, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 2, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 3, const_str_plain_object_hook ); Py_INCREF( const_str_plain_object_hook );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 4, const_str_plain_parse_float ); Py_INCREF( const_str_plain_parse_float );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 5, const_str_plain_parse_int ); Py_INCREF( const_str_plain_parse_int );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 6, const_str_plain_parse_constant ); Py_INCREF( const_str_plain_parse_constant );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 7, const_str_plain_object_pairs_hook ); Py_INCREF( const_str_plain_object_pairs_hook );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 8, const_str_plain_use_decimal ); Py_INCREF( const_str_plain_use_decimal );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 9, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_str_plain_dec = UNSTREAM_STRING( &constant_bin[ 28874 ], 3, 1 );
    const_tuple_806361c2c2eaa7b89848956d396216bb_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_806361c2c2eaa7b89848956d396216bb_tuple, 0, const_str_plain_enabled ); Py_INCREF( const_str_plain_enabled );
    PyTuple_SET_ITEM( const_tuple_806361c2c2eaa7b89848956d396216bb_tuple, 1, const_str_plain_dec ); Py_INCREF( const_str_plain_dec );
    PyTuple_SET_ITEM( const_tuple_806361c2c2eaa7b89848956d396216bb_tuple, 2, const_str_plain_enc ); Py_INCREF( const_str_plain_enc );
    const_str_plain_scan = UNSTREAM_STRING( &constant_bin[ 100081 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_806361c2c2eaa7b89848956d396216bb_tuple, 3, const_str_plain_scan ); Py_INCREF( const_str_plain_scan );
    PyTuple_SET_ITEM( const_tuple_806361c2c2eaa7b89848956d396216bb_tuple, 4, const_str_plain_c_make_encoder ); Py_INCREF( const_str_plain_c_make_encoder );
    const_str_plain__default_encoder = UNSTREAM_STRING( &constant_bin[ 98565 ], 16, 1 );
    const_tuple_str_plain_ordered_dict_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ordered_dict_tuple, 0, const_str_plain_ordered_dict ); Py_INCREF( const_str_plain_ordered_dict );
    const_list_str_digest_71e4ff40e78d3a16dcd2a8e652afa553_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_71e4ff40e78d3a16dcd2a8e652afa553_list, 0, const_str_digest_71e4ff40e78d3a16dcd2a8e652afa553 ); Py_INCREF( const_str_digest_71e4ff40e78d3a16dcd2a8e652afa553 );
    const_dict_37e83e69aa1ba56e46454396202513d2 = _PyDict_NewPresized( 8 );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_encoding, const_str_digest_c075052d723d6707083e869a0e3659bb );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_default, Py_None );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_indent, Py_None );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_allow_nan, Py_True );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_skipkeys, Py_False );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_separators, Py_None );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_ensure_ascii, Py_True );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_check_circular, Py_True );
    assert( PyDict_Size( const_dict_37e83e69aa1ba56e46454396202513d2 ) == 8 );
    const_str_digest_29128799e6868180fe0bd02edfedaa2d = UNSTREAM_STRING( &constant_bin[ 884275 ], 29, 0 );
    const_str_plain__import_c_make_encoder = UNSTREAM_STRING( &constant_bin[ 99869 ], 22, 1 );
    const_tuple_str_plain_kv_tuple = PyTuple_New( 1 );
    const_str_plain_kv = UNSTREAM_STRING( &constant_bin[ 100131 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_kv_tuple, 0, const_str_plain_kv ); Py_INCREF( const_str_plain_kv );
    const_str_digest_dcaae56451b88f3504852aecc725b543 = UNSTREAM_STRING( &constant_bin[ 884304 ], 5, 0 );
    const_tuple_str_plain_make_encoder_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_make_encoder_tuple, 0, const_str_plain_make_encoder ); Py_INCREF( const_str_plain_make_encoder );
    const_dict_959a39584b85e1964750ccd746043bed = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_959a39584b85e1964750ccd746043bed, const_str_plain_encoding, Py_None );
    PyDict_SetItem( const_dict_959a39584b85e1964750ccd746043bed, const_str_plain_object_hook, Py_None );
    PyDict_SetItem( const_dict_959a39584b85e1964750ccd746043bed, const_str_plain_object_pairs_hook, Py_None );
    assert( PyDict_Size( const_dict_959a39584b85e1964750ccd746043bed ) == 3 );
    const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple = PyTuple_New( 19 );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 2, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 3, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 7, const_str_digest_c075052d723d6707083e869a0e3659bb ); Py_INCREF( const_str_digest_c075052d723d6707083e869a0e3659bb );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 8, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 9, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 10, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 11, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 12, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 13, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 14, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 15, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 16, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 17, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 18, Py_False ); Py_INCREF( Py_False );
    const_tuple_str_plain_scanner_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_scanner_tuple, 0, const_str_plain_scanner ); Py_INCREF( const_str_plain_scanner );
    const_tuple_str_plain_Decimal_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Decimal_tuple, 0, const_str_plain_Decimal ); Py_INCREF( const_str_plain_Decimal );
    const_tuple_569a3f1c6de90af94d33b2686aaf078c_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 884309 ], 287 );
    const_tuple_str_plain_JSONDecoder_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_JSONDecoder_tuple, 0, const_str_plain_JSONDecoder ); Py_INCREF( const_str_plain_JSONDecoder );
    const_tuple_none_none_none_none_none_none_none_false_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 7, Py_False ); Py_INCREF( Py_False );
    const_dict_1dbee11ab85c09603c4a3e72ea590cea = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 884596 ], 264 );
    const_str_digest_056dff25d5325386a052ec3e062023a0 = UNSTREAM_STRING( &constant_bin[ 884860 ], 3859, 0 );
    const_tuple_str_plain_JSONEncoder_str_plain_JSONEncoderForHTML_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_JSONEncoder_str_plain_JSONEncoderForHTML_tuple, 0, const_str_plain_JSONEncoder ); Py_INCREF( const_str_plain_JSONEncoder );
    PyTuple_SET_ITEM( const_tuple_str_plain_JSONEncoder_str_plain_JSONEncoderForHTML_tuple, 1, const_str_plain_JSONEncoderForHTML ); Py_INCREF( const_str_plain_JSONEncoderForHTML );
    const_str_digest_6fd554b5d4a4ecd210f80190483f7b16 = UNSTREAM_STRING( &constant_bin[ 888719 ], 110, 0 );
    const_str_plain__import_OrderedDict = UNSTREAM_STRING( &constant_bin[ 98458 ], 19, 1 );
    const_str_plain__default_decoder = UNSTREAM_STRING( &constant_bin[ 99510 ], 16, 1 );
    const_str_digest_021b885e98285b326436109d09a4f0c5 = UNSTREAM_STRING( &constant_bin[ 888829 ], 44, 0 );
    const_tuple_str_plain_collections_str_plain_ordered_dict_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_collections_str_plain_ordered_dict_tuple, 0, const_str_plain_collections ); Py_INCREF( const_str_plain_collections );
    PyTuple_SET_ITEM( const_tuple_str_plain_collections_str_plain_ordered_dict_tuple, 1, const_str_plain_ordered_dict ); Py_INCREF( const_str_plain_ordered_dict );
    const_str_digest_b9349770d86089b862f8cef6382c2931 = UNSTREAM_STRING( &constant_bin[ 888873 ], 2332, 0 );
    const_tuple_none_none_none_none_none_none_none_false_true_true_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 7, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 8, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 9, Py_True ); Py_INCREF( Py_True );
    const_str_digest_42256fcacc1ac14f73f19092740ce8f7 = UNSTREAM_STRING( &constant_bin[ 891205 ], 4203, 0 );
    const_tuple_d6b80cb1ff69748caff298d967e01196_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 1, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 2, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 3, const_str_plain_object_hook ); Py_INCREF( const_str_plain_object_hook );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 4, const_str_plain_parse_float ); Py_INCREF( const_str_plain_parse_float );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 5, const_str_plain_parse_int ); Py_INCREF( const_str_plain_parse_int );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 6, const_str_plain_parse_constant ); Py_INCREF( const_str_plain_parse_constant );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 7, const_str_plain_object_pairs_hook ); Py_INCREF( const_str_plain_object_pairs_hook );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 8, const_str_plain_use_decimal ); Py_INCREF( const_str_plain_use_decimal );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 9, const_str_plain_namedtuple_as_object ); Py_INCREF( const_str_plain_namedtuple_as_object );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 10, const_str_plain_tuple_as_array ); Py_INCREF( const_str_plain_tuple_as_array );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 11, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_str_digest_64ae83aa2c61090f8868e56791bda80c = UNSTREAM_STRING( &constant_bin[ 895408 ], 52, 0 );
    const_tuple_str_plain_JSONDecodeError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_JSONDecodeError_tuple, 0, const_str_plain_JSONDecodeError ); Py_INCREF( const_str_plain_JSONDecodeError );
    const_str_digest_5f19295486f8c25cc6fdf18d2edc0f0a = UNSTREAM_STRING( &constant_bin[ 895460 ], 3083, 0 );
    const_str_digest_48c897e0fc561f1b02560db1fa883cf7 = UNSTREAM_STRING( &constant_bin[ 898543 ], 2323, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_simplejson( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_59f28652bea2d689831575396d51928e;
static PyCodeObject *codeobj_b9246be7efc09830d20a79c394be8012;
static PyCodeObject *codeobj_6d8658c0fdf91e14f8571f5521286a09;
static PyCodeObject *codeobj_f987bd6047a6e31b57b43b5e361c2edc;
static PyCodeObject *codeobj_674db118aa077bbc19498b772500867a;
static PyCodeObject *codeobj_605fc94488d21b126f532a84e66448ae;
static PyCodeObject *codeobj_dc728993c0b736f45ca684cbf765df9f;
static PyCodeObject *codeobj_13ae066ce4bbc61c4ae101853c1ffe1c;
static PyCodeObject *codeobj_ad5c33b52d126f6ff2a8e787d0fc613f;
static PyCodeObject *codeobj_63129f1502f03f562ea600c3ec20d023;
static PyCodeObject *codeobj_328c8e0e67972e8fb63cf28387c0ce32;
static PyCodeObject *codeobj_26c7c16f56f521005b74c04b69fa25d7;
static PyCodeObject *codeobj_c49362d7f8cb813228a12fe761007056;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_64ae83aa2c61090f8868e56791bda80c );
    codeobj_59f28652bea2d689831575396d51928e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__import_OrderedDict, 114, const_tuple_str_plain_collections_str_plain_ordered_dict_tuple, 0, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_b9246be7efc09830d20a79c394be8012 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__import_c_make_encoder, 123, const_tuple_str_plain_make_encoder_tuple, 0, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_6d8658c0fdf91e14f8571f5521286a09 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__toggle_speedups, 536, const_tuple_806361c2c2eaa7b89848956d396216bb_tuple, 1, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_f987bd6047a6e31b57b43b5e361c2edc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dump, 150, const_tuple_569a3f1c6de90af94d33b2686aaf078c_tuple, 21, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_674db118aa077bbc19498b772500867a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dump, 150, const_tuple_569a3f1c6de90af94d33b2686aaf078c_tuple, 22, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_605fc94488d21b126f532a84e66448ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dumps, 280, const_tuple_938c1efa47b6068f905608d95c9d1d47_tuple, 20, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_dc728993c0b736f45ca684cbf765df9f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dumps, 280, const_tuple_938c1efa47b6068f905608d95c9d1d47_tuple, 21, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_13ae066ce4bbc61c4ae101853c1ffe1c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load, 404, const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 11, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_ad5c33b52d126f6ff2a8e787d0fc613f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load, 404, const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 12, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_63129f1502f03f562ea600c3ec20d023 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loads, 462, const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 9, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_328c8e0e67972e8fb63cf28387c0ce32 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loads, 462, const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 10, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_26c7c16f56f521005b74c04b69fa25d7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_simple_first, 571, const_tuple_str_plain_kv_tuple, 1, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_c49362d7f8cb813228a12fe761007056 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_simplejson, 0, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl_function_9_complex_call_helper_keywords_star_dict_of___internal__( PyObject *_python_par_called, PyObject *_python_par_kw, PyObject *_python_par_star_arg_dict );


NUITKA_CROSS_MODULE PyObject *impl_function_4_complex_call_helper_pos_keywords_star_dict_of___internal__( PyObject *_python_par_called, PyObject *_python_par_args, PyObject *_python_par_kw, PyObject *_python_par_star_arg_dict );


static PyObject *MAKE_FUNCTION_function_1__import_OrderedDict_of_simplejson(  );


static PyObject *MAKE_FUNCTION_function_2__import_c_make_encoder_of_simplejson(  );


static PyObject *MAKE_FUNCTION_function_3_dump_of_simplejson( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_dumps_of_simplejson( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_5_load_of_simplejson( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_6_loads_of_simplejson( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_7__toggle_speedups_of_simplejson(  );


static PyObject *MAKE_FUNCTION_function_8_simple_first_of_simplejson(  );


// The module function definitions.
static PyObject *impl_function_1__import_OrderedDict_of_simplejson( Nuitka_FunctionObject *self )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_collections = NULL;
    PyObject *var_ordered_dict = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_59f28652bea2d689831575396d51928e, module_simplejson );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_simplejson)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( var_collections != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_collections,
            var_collections
        );
        assert( tmp_res != -1 );

    }
    if ( var_ordered_dict != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ordered_dict,
            var_ordered_dict
        );
        assert( tmp_res != -1 );

    }
    frame_function->f_lineno = 115;
    tmp_assign_source_1 = IMPORT_MODULE( const_str_plain_collections, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    assert( var_collections == NULL );
    var_collections = tmp_assign_source_1;

    // Tried code:
    tmp_source_name_1 = var_collections;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_OrderedDict );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1__import_OrderedDict_of_simplejson );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto try_except_handler_3;
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
    tmp_import_globals_2 = ((PyModuleObject *)module_simplejson)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ( var_collections != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_collections,
            var_collections
        );
        assert( tmp_res != -1 );

    }
    if ( var_ordered_dict != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ordered_dict,
            var_ordered_dict
        );
        assert( tmp_res != -1 );

    }
    frame_function->f_lineno = 119;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_empty, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_ordered_dict_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto try_except_handler_3;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ordered_dict );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto try_except_handler_3;
    }
    assert( var_ordered_dict == NULL );
    var_ordered_dict = tmp_assign_source_2;

    tmp_source_name_2 = var_ordered_dict;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_OrderedDict );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto try_except_handler_3;
    }
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_3;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1__import_OrderedDict_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 1
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
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;
    frame_exception_exit_1:;
#if 1
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
            if ( var_collections != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_collections,
                    var_collections
                );
                assert( tmp_res != -1 );

            }
            if ( var_ordered_dict != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ordered_dict,
                    var_ordered_dict
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
    NUITKA_CANNOT_GET_HERE( function_1__import_OrderedDict_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_collections );
    var_collections = NULL;

    Py_XDECREF( var_ordered_dict );
    var_ordered_dict = NULL;

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

    Py_XDECREF( var_collections );
    var_collections = NULL;

    Py_XDECREF( var_ordered_dict );
    var_ordered_dict = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1__import_OrderedDict_of_simplejson );
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
static PyObject *fparse_function_1__import_OrderedDict_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           args_given + kw_size
        );
#else
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           kw_size > 0 ? kw : NULL,
           args_given
        );
#endif

        goto error_exit;
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 0 ))
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



    return impl_function_1__import_OrderedDict_of_simplejson( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_1__import_OrderedDict_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_1__import_OrderedDict_of_simplejson( self );
    }
    else
    {
        PyObject *result = fparse_function_1__import_OrderedDict_of_simplejson( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__import_c_make_encoder_of_simplejson( Nuitka_FunctionObject *self )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_make_encoder = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b9246be7efc09830d20a79c394be8012, module_simplejson );
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
    // Tried code:
    tmp_import_globals_1 = ((PyModuleObject *)module_simplejson)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( var_make_encoder != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_make_encoder,
            var_make_encoder
        );
        assert( tmp_res != -1 );

    }
    frame_function->f_lineno = 125;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain__speedups, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_make_encoder_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_make_encoder );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto try_except_handler_2;
    }
    assert( var_make_encoder == NULL );
    var_make_encoder = tmp_assign_source_1;

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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
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


        exception_lineno = 127;
        goto try_except_handler_3;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_3;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2__import_c_make_encoder_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;

#if 1
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
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;
    frame_exception_exit_1:;
#if 1
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
            if ( var_make_encoder != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_make_encoder,
                    var_make_encoder
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

    tmp_return_value = var_make_encoder;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2__import_c_make_encoder_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_make_encoder );
    var_make_encoder = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2__import_c_make_encoder_of_simplejson );
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
static PyObject *fparse_function_2__import_c_make_encoder_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           args_given + kw_size
        );
#else
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           kw_size > 0 ? kw : NULL,
           args_given
        );
#endif

        goto error_exit;
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 0 ))
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



    return impl_function_2__import_c_make_encoder_of_simplejson( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_2__import_c_make_encoder_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_2__import_c_make_encoder_of_simplejson( self );
    }
    else
    {
        PyObject *result = fparse_function_2__import_c_make_encoder_of_simplejson( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_dump_of_simplejson( Nuitka_FunctionObject *self, PyObject *_python_par_obj, PyObject *_python_par_fp, PyObject *_python_par_skipkeys, PyObject *_python_par_ensure_ascii, PyObject *_python_par_check_circular, PyObject *_python_par_allow_nan, PyObject *_python_par_cls, PyObject *_python_par_indent, PyObject *_python_par_separators, PyObject *_python_par_encoding, PyObject *_python_par_default, PyObject *_python_par_use_decimal, PyObject *_python_par_namedtuple_as_object, PyObject *_python_par_tuple_as_array, PyObject *_python_par_bigint_as_string, PyObject *_python_par_sort_keys, PyObject *_python_par_item_sort_key, PyObject *_python_par_for_json, PyObject *_python_par_ignore_nan, PyObject *_python_par_int_as_string_bitcount, PyObject *_python_par_iterable_as_array, PyObject *_python_par_kw )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = _python_par_obj;
    PyObject *par_fp = _python_par_fp;
    PyObject *par_skipkeys = _python_par_skipkeys;
    PyObject *par_ensure_ascii = _python_par_ensure_ascii;
    PyObject *par_check_circular = _python_par_check_circular;
    PyObject *par_allow_nan = _python_par_allow_nan;
    PyObject *par_cls = _python_par_cls;
    PyObject *par_indent = _python_par_indent;
    PyObject *par_separators = _python_par_separators;
    PyObject *par_encoding = _python_par_encoding;
    PyObject *par_default = _python_par_default;
    PyObject *par_use_decimal = _python_par_use_decimal;
    PyObject *par_namedtuple_as_object = _python_par_namedtuple_as_object;
    PyObject *par_tuple_as_array = _python_par_tuple_as_array;
    PyObject *par_bigint_as_string = _python_par_bigint_as_string;
    PyObject *par_sort_keys = _python_par_sort_keys;
    PyObject *par_item_sort_key = _python_par_item_sort_key;
    PyObject *par_for_json = _python_par_for_json;
    PyObject *par_ignore_nan = _python_par_ignore_nan;
    PyObject *par_int_as_string_bitcount = _python_par_int_as_string_bitcount;
    PyObject *par_iterable_as_array = _python_par_iterable_as_array;
    PyObject *par_kw = _python_par_kw;
    PyObject *var_iterable = NULL;
    PyObject *var_chunk = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    int tmp_and_left_truth_5;
    int tmp_and_left_truth_6;
    int tmp_and_left_truth_7;
    int tmp_and_left_truth_8;
    int tmp_and_left_truth_9;
    int tmp_and_left_truth_10;
    int tmp_and_left_truth_11;
    int tmp_and_left_truth_12;
    int tmp_and_left_truth_13;
    int tmp_and_left_truth_14;
    int tmp_and_left_truth_15;
    int tmp_and_left_truth_16;
    int tmp_and_left_truth_17;
    int tmp_and_left_truth_18;
    int tmp_and_left_truth_19;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_left_value_5;
    PyObject *tmp_and_left_value_6;
    PyObject *tmp_and_left_value_7;
    PyObject *tmp_and_left_value_8;
    PyObject *tmp_and_left_value_9;
    PyObject *tmp_and_left_value_10;
    PyObject *tmp_and_left_value_11;
    PyObject *tmp_and_left_value_12;
    PyObject *tmp_and_left_value_13;
    PyObject *tmp_and_left_value_14;
    PyObject *tmp_and_left_value_15;
    PyObject *tmp_and_left_value_16;
    PyObject *tmp_and_left_value_17;
    PyObject *tmp_and_left_value_18;
    PyObject *tmp_and_left_value_19;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_and_right_value_5;
    PyObject *tmp_and_right_value_6;
    PyObject *tmp_and_right_value_7;
    PyObject *tmp_and_right_value_8;
    PyObject *tmp_and_right_value_9;
    PyObject *tmp_and_right_value_10;
    PyObject *tmp_and_right_value_11;
    PyObject *tmp_and_right_value_12;
    PyObject *tmp_and_right_value_13;
    PyObject *tmp_and_right_value_14;
    PyObject *tmp_and_right_value_15;
    PyObject *tmp_and_right_value_16;
    PyObject *tmp_and_right_value_17;
    PyObject *tmp_and_right_value_18;
    PyObject *tmp_and_right_value_19;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_operand_name_4;
    PyObject *tmp_operand_name_5;
    PyObject *tmp_operand_name_6;
    PyObject *tmp_operand_name_7;
    PyObject *tmp_operand_name_8;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_674db118aa077bbc19498b772500867a, module_simplejson );
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
    tmp_operand_name_1 = par_skipkeys;

    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_and_left_value_2 = par_ensure_ascii;

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
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
    tmp_and_left_value_3 = par_check_circular;

    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    tmp_and_left_value_4 = par_allow_nan;

    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    tmp_compexpr_left_1 = par_cls;

    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_5 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    assert( !(tmp_and_left_truth_5 == -1) );
    if ( tmp_and_left_truth_5 == 1 )
    {
        goto and_right_5;
    }
    else
    {
        goto and_left_5;
    }
    and_right_5:;
    tmp_compexpr_left_2 = par_indent;

    tmp_compexpr_right_2 = Py_None;
    tmp_and_left_value_6 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_and_left_truth_6 = CHECK_IF_TRUE( tmp_and_left_value_6 );
    assert( !(tmp_and_left_truth_6 == -1) );
    if ( tmp_and_left_truth_6 == 1 )
    {
        goto and_right_6;
    }
    else
    {
        goto and_left_6;
    }
    and_right_6:;
    tmp_compexpr_left_3 = par_separators;

    tmp_compexpr_right_3 = Py_None;
    tmp_and_left_value_7 = BOOL_FROM( tmp_compexpr_left_3 == tmp_compexpr_right_3 );
    tmp_and_left_truth_7 = CHECK_IF_TRUE( tmp_and_left_value_7 );
    assert( !(tmp_and_left_truth_7 == -1) );
    if ( tmp_and_left_truth_7 == 1 )
    {
        goto and_right_7;
    }
    else
    {
        goto and_left_7;
    }
    and_right_7:;
    tmp_compexpr_left_4 = par_encoding;

    tmp_compexpr_right_4 = const_str_digest_c075052d723d6707083e869a0e3659bb;
    tmp_and_left_value_8 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_and_left_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_8 = CHECK_IF_TRUE( tmp_and_left_value_8 );
    if ( tmp_and_left_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_8 );

        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_8 == 1 )
    {
        goto and_right_8;
    }
    else
    {
        goto and_left_8;
    }
    and_right_8:;
    Py_DECREF( tmp_and_left_value_8 );
    tmp_compexpr_left_5 = par_default;

    tmp_compexpr_right_5 = Py_None;
    tmp_and_left_value_9 = BOOL_FROM( tmp_compexpr_left_5 == tmp_compexpr_right_5 );
    tmp_and_left_truth_9 = CHECK_IF_TRUE( tmp_and_left_value_9 );
    assert( !(tmp_and_left_truth_9 == -1) );
    if ( tmp_and_left_truth_9 == 1 )
    {
        goto and_right_9;
    }
    else
    {
        goto and_left_9;
    }
    and_right_9:;
    tmp_and_left_value_10 = par_use_decimal;

    tmp_and_left_truth_10 = CHECK_IF_TRUE( tmp_and_left_value_10 );
    if ( tmp_and_left_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_10 == 1 )
    {
        goto and_right_10;
    }
    else
    {
        goto and_left_10;
    }
    and_right_10:;
    tmp_and_left_value_11 = par_namedtuple_as_object;

    tmp_and_left_truth_11 = CHECK_IF_TRUE( tmp_and_left_value_11 );
    if ( tmp_and_left_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_11 == 1 )
    {
        goto and_right_11;
    }
    else
    {
        goto and_left_11;
    }
    and_right_11:;
    tmp_and_left_value_12 = par_tuple_as_array;

    tmp_and_left_truth_12 = CHECK_IF_TRUE( tmp_and_left_value_12 );
    if ( tmp_and_left_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_12 == 1 )
    {
        goto and_right_12;
    }
    else
    {
        goto and_left_12;
    }
    and_right_12:;
    tmp_operand_name_2 = par_iterable_as_array;

    tmp_and_left_value_13 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_and_left_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_13 = CHECK_IF_TRUE( tmp_and_left_value_13 );
    if ( tmp_and_left_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_13 == 1 )
    {
        goto and_right_13;
    }
    else
    {
        goto and_left_13;
    }
    and_right_13:;
    tmp_operand_name_3 = par_bigint_as_string;

    tmp_and_left_value_14 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_3 );
    if ( tmp_and_left_value_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_14 = CHECK_IF_TRUE( tmp_and_left_value_14 );
    if ( tmp_and_left_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_14 == 1 )
    {
        goto and_right_14;
    }
    else
    {
        goto and_left_14;
    }
    and_right_14:;
    tmp_operand_name_4 = par_sort_keys;

    tmp_and_left_value_15 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_4 );
    if ( tmp_and_left_value_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_15 = CHECK_IF_TRUE( tmp_and_left_value_15 );
    if ( tmp_and_left_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_15 == 1 )
    {
        goto and_right_15;
    }
    else
    {
        goto and_left_15;
    }
    and_right_15:;
    tmp_operand_name_5 = par_item_sort_key;

    tmp_and_left_value_16 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_5 );
    if ( tmp_and_left_value_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_16 = CHECK_IF_TRUE( tmp_and_left_value_16 );
    if ( tmp_and_left_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_16 == 1 )
    {
        goto and_right_16;
    }
    else
    {
        goto and_left_16;
    }
    and_right_16:;
    tmp_operand_name_6 = par_for_json;

    tmp_and_left_value_17 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_6 );
    if ( tmp_and_left_value_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_17 = CHECK_IF_TRUE( tmp_and_left_value_17 );
    if ( tmp_and_left_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_17 == 1 )
    {
        goto and_right_17;
    }
    else
    {
        goto and_left_17;
    }
    and_right_17:;
    tmp_operand_name_7 = par_ignore_nan;

    tmp_and_left_value_18 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_7 );
    if ( tmp_and_left_value_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_18 = CHECK_IF_TRUE( tmp_and_left_value_18 );
    if ( tmp_and_left_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_18 == 1 )
    {
        goto and_right_18;
    }
    else
    {
        goto and_left_18;
    }
    and_right_18:;
    tmp_compexpr_left_6 = par_int_as_string_bitcount;

    tmp_compexpr_right_6 = Py_None;
    tmp_and_left_value_19 = BOOL_FROM( tmp_compexpr_left_6 == tmp_compexpr_right_6 );
    tmp_and_left_truth_19 = CHECK_IF_TRUE( tmp_and_left_value_19 );
    assert( !(tmp_and_left_truth_19 == -1) );
    if ( tmp_and_left_truth_19 == 1 )
    {
        goto and_right_19;
    }
    else
    {
        goto and_left_19;
    }
    and_right_19:;
    tmp_operand_name_8 = par_kw;

    tmp_and_right_value_19 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_8 );
    if ( tmp_and_right_value_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_18 = tmp_and_right_value_19;
    goto and_end_19;
    and_left_19:;
    tmp_and_right_value_18 = tmp_and_left_value_19;
    and_end_19:;
    tmp_and_right_value_17 = tmp_and_right_value_18;
    goto and_end_18;
    and_left_18:;
    tmp_and_right_value_17 = tmp_and_left_value_18;
    and_end_18:;
    tmp_and_right_value_16 = tmp_and_right_value_17;
    goto and_end_17;
    and_left_17:;
    tmp_and_right_value_16 = tmp_and_left_value_17;
    and_end_17:;
    tmp_and_right_value_15 = tmp_and_right_value_16;
    goto and_end_16;
    and_left_16:;
    tmp_and_right_value_15 = tmp_and_left_value_16;
    and_end_16:;
    tmp_and_right_value_14 = tmp_and_right_value_15;
    goto and_end_15;
    and_left_15:;
    tmp_and_right_value_14 = tmp_and_left_value_15;
    and_end_15:;
    tmp_and_right_value_13 = tmp_and_right_value_14;
    goto and_end_14;
    and_left_14:;
    tmp_and_right_value_13 = tmp_and_left_value_14;
    and_end_14:;
    tmp_and_right_value_12 = tmp_and_right_value_13;
    goto and_end_13;
    and_left_13:;
    tmp_and_right_value_12 = tmp_and_left_value_13;
    and_end_13:;
    tmp_and_right_value_11 = tmp_and_right_value_12;
    goto and_end_12;
    and_left_12:;
    tmp_and_right_value_11 = tmp_and_left_value_12;
    and_end_12:;
    tmp_and_right_value_10 = tmp_and_right_value_11;
    goto and_end_11;
    and_left_11:;
    tmp_and_right_value_10 = tmp_and_left_value_11;
    and_end_11:;
    tmp_and_right_value_9 = tmp_and_right_value_10;
    goto and_end_10;
    and_left_10:;
    tmp_and_right_value_9 = tmp_and_left_value_10;
    and_end_10:;
    tmp_and_right_value_8 = tmp_and_right_value_9;
    goto and_end_9;
    and_left_9:;
    tmp_and_right_value_8 = tmp_and_left_value_9;
    and_end_9:;
    Py_INCREF( tmp_and_right_value_8 );
    tmp_and_right_value_7 = tmp_and_right_value_8;
    goto and_end_8;
    and_left_8:;
    tmp_and_right_value_7 = tmp_and_left_value_8;
    and_end_8:;
    tmp_and_right_value_6 = tmp_and_right_value_7;
    goto and_end_7;
    and_left_7:;
    Py_INCREF( tmp_and_left_value_7 );
    tmp_and_right_value_6 = tmp_and_left_value_7;
    and_end_7:;
    tmp_and_right_value_5 = tmp_and_right_value_6;
    goto and_end_6;
    and_left_6:;
    Py_INCREF( tmp_and_left_value_6 );
    tmp_and_right_value_5 = tmp_and_left_value_6;
    and_end_6:;
    tmp_and_right_value_4 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    Py_INCREF( tmp_and_left_value_5 );
    tmp_and_right_value_4 = tmp_and_left_value_5;
    and_end_5:;
    tmp_and_right_value_3 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    Py_INCREF( tmp_and_left_value_4 );
    tmp_and_right_value_3 = tmp_and_left_value_4;
    and_end_4:;
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    Py_INCREF( tmp_and_left_value_3 );
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__default_encoder );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__default_encoder );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98559 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_iterencode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_obj;

    frame_function->f_lineno = 256;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    assert( var_iterable == NULL );
    var_iterable = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_1 = par_cls;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9311 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 258;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONEncoder );

    if (unlikely( tmp_assign_source_2 == NULL ))
    {
        tmp_assign_source_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONEncoder );
    }

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98493 ], 33, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = par_cls;
        par_cls = tmp_assign_source_2;
        Py_INCREF( par_cls );
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_dircall_arg1_1 = par_cls;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9311 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 18 );
    tmp_dict_value_1 = par_skipkeys;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98597 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_skipkeys;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_ensure_ascii;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98651 ], 58, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_ensure_ascii;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_check_circular;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98709 ], 60, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_check_circular;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_allow_nan;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98769 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_allow_nan;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = par_indent;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98824 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_indent;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = par_separators;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98876 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_separators;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = par_encoding;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25058 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = const_str_plain_encoding;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_value_8 = par_default;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75024 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = const_str_plain_default;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_value_9 = par_use_decimal;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98932 ], 57, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_9 = const_str_plain_use_decimal;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_dict_value_10 = par_namedtuple_as_object;

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98989 ], 66, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_10 = const_str_plain_namedtuple_as_object;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_10, tmp_dict_value_10 );
    tmp_dict_value_11 = par_tuple_as_array;

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99055 ], 60, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_11 = const_str_plain_tuple_as_array;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_11, tmp_dict_value_11 );
    tmp_dict_value_12 = par_iterable_as_array;

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99115 ], 63, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 266;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_12 = const_str_plain_iterable_as_array;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_12, tmp_dict_value_12 );
    tmp_dict_value_13 = par_bigint_as_string;

    if ( tmp_dict_value_13 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99178 ], 62, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 267;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_13 = const_str_plain_bigint_as_string;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_13, tmp_dict_value_13 );
    tmp_dict_value_14 = par_sort_keys;

    if ( tmp_dict_value_14 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79845 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_14 = const_str_plain_sort_keys;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_14, tmp_dict_value_14 );
    tmp_dict_value_15 = par_item_sort_key;

    if ( tmp_dict_value_15 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99240 ], 59, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_15 = const_str_plain_item_sort_key;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_15, tmp_dict_value_15 );
    tmp_dict_value_16 = par_for_json;

    if ( tmp_dict_value_16 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99299 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_16 = const_str_plain_for_json;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_16, tmp_dict_value_16 );
    tmp_dict_value_17 = par_ignore_nan;

    if ( tmp_dict_value_17 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99353 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_17 = const_str_plain_ignore_nan;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_17, tmp_dict_value_17 );
    tmp_dict_value_18 = par_int_as_string_bitcount;

    if ( tmp_dict_value_18 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99409 ], 68, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 272;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_18 = const_str_plain_int_as_string_bitcount;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_18, tmp_dict_value_18 );
    tmp_dircall_arg3_1 = par_kw;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15606 ], 48, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );
    tmp_source_name_2 = impl_function_9_complex_call_helper_keywords_star_dict_of___internal__( tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_iterencode );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_obj;

    frame_function->f_lineno = 273;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        goto frame_exception_exit_1;
    }
    assert( var_iterable == NULL );
    var_iterable = tmp_assign_source_3;

    branch_end_1:;
    tmp_iter_arg_1 = var_iterable;

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 276;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_chunk;
        var_chunk = tmp_assign_source_6;
        Py_INCREF( var_chunk );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = par_fp;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_write );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_chunk;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65727 ], 51, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 277;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            if ( var_iterable != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_iterable,
                    var_iterable
                );
                assert( tmp_res != -1 );

            }
            if ( var_chunk != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_chunk,
                    var_chunk
                );
                assert( tmp_res != -1 );

            }
            if ( par_obj != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_obj,
                    par_obj
                );
                assert( tmp_res != -1 );

            }
            if ( par_fp != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fp,
                    par_fp
                );
                assert( tmp_res != -1 );

            }
            if ( par_skipkeys != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_skipkeys,
                    par_skipkeys
                );
                assert( tmp_res != -1 );

            }
            if ( par_ensure_ascii != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ensure_ascii,
                    par_ensure_ascii
                );
                assert( tmp_res != -1 );

            }
            if ( par_check_circular != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_check_circular,
                    par_check_circular
                );
                assert( tmp_res != -1 );

            }
            if ( par_allow_nan != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_allow_nan,
                    par_allow_nan
                );
                assert( tmp_res != -1 );

            }
            if ( par_cls != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
                );
                assert( tmp_res != -1 );

            }
            if ( par_indent != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_indent,
                    par_indent
                );
                assert( tmp_res != -1 );

            }
            if ( par_separators != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_separators,
                    par_separators
                );
                assert( tmp_res != -1 );

            }
            if ( par_encoding != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encoding,
                    par_encoding
                );
                assert( tmp_res != -1 );

            }
            if ( par_default != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_default,
                    par_default
                );
                assert( tmp_res != -1 );

            }
            if ( par_use_decimal != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_use_decimal,
                    par_use_decimal
                );
                assert( tmp_res != -1 );

            }
            if ( par_namedtuple_as_object != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_namedtuple_as_object,
                    par_namedtuple_as_object
                );
                assert( tmp_res != -1 );

            }
            if ( par_tuple_as_array != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tuple_as_array,
                    par_tuple_as_array
                );
                assert( tmp_res != -1 );

            }
            if ( par_bigint_as_string != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_bigint_as_string,
                    par_bigint_as_string
                );
                assert( tmp_res != -1 );

            }
            if ( par_sort_keys != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sort_keys,
                    par_sort_keys
                );
                assert( tmp_res != -1 );

            }
            if ( par_item_sort_key != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_item_sort_key,
                    par_item_sort_key
                );
                assert( tmp_res != -1 );

            }
            if ( par_for_json != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_for_json,
                    par_for_json
                );
                assert( tmp_res != -1 );

            }
            if ( par_ignore_nan != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ignore_nan,
                    par_ignore_nan
                );
                assert( tmp_res != -1 );

            }
            if ( par_int_as_string_bitcount != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_int_as_string_bitcount,
                    par_int_as_string_bitcount
                );
                assert( tmp_res != -1 );

            }
            if ( par_iterable_as_array != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_iterable_as_array,
                    par_iterable_as_array
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3_dump_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    Py_XDECREF( par_skipkeys );
    par_skipkeys = NULL;

    Py_XDECREF( par_ensure_ascii );
    par_ensure_ascii = NULL;

    Py_XDECREF( par_check_circular );
    par_check_circular = NULL;

    Py_XDECREF( par_allow_nan );
    par_allow_nan = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

    Py_XDECREF( par_separators );
    par_separators = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    Py_XDECREF( par_namedtuple_as_object );
    par_namedtuple_as_object = NULL;

    Py_XDECREF( par_tuple_as_array );
    par_tuple_as_array = NULL;

    Py_XDECREF( par_bigint_as_string );
    par_bigint_as_string = NULL;

    Py_XDECREF( par_sort_keys );
    par_sort_keys = NULL;

    Py_XDECREF( par_item_sort_key );
    par_item_sort_key = NULL;

    Py_XDECREF( par_for_json );
    par_for_json = NULL;

    Py_XDECREF( par_ignore_nan );
    par_ignore_nan = NULL;

    Py_XDECREF( par_int_as_string_bitcount );
    par_int_as_string_bitcount = NULL;

    Py_XDECREF( par_iterable_as_array );
    par_iterable_as_array = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_iterable );
    var_iterable = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

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

    Py_XDECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( par_fp );
    par_fp = NULL;

    Py_XDECREF( par_skipkeys );
    par_skipkeys = NULL;

    Py_XDECREF( par_ensure_ascii );
    par_ensure_ascii = NULL;

    Py_XDECREF( par_check_circular );
    par_check_circular = NULL;

    Py_XDECREF( par_allow_nan );
    par_allow_nan = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

    Py_XDECREF( par_separators );
    par_separators = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    Py_XDECREF( par_namedtuple_as_object );
    par_namedtuple_as_object = NULL;

    Py_XDECREF( par_tuple_as_array );
    par_tuple_as_array = NULL;

    Py_XDECREF( par_bigint_as_string );
    par_bigint_as_string = NULL;

    Py_XDECREF( par_sort_keys );
    par_sort_keys = NULL;

    Py_XDECREF( par_item_sort_key );
    par_item_sort_key = NULL;

    Py_XDECREF( par_for_json );
    par_for_json = NULL;

    Py_XDECREF( par_ignore_nan );
    par_ignore_nan = NULL;

    Py_XDECREF( par_int_as_string_bitcount );
    par_int_as_string_bitcount = NULL;

    Py_XDECREF( par_iterable_as_array );
    par_iterable_as_array = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_iterable );
    var_iterable = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_dump_of_simplejson );
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
static PyObject *fparse_function_3_dump_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_obj = NULL;
    PyObject *_python_par_fp = NULL;
    PyObject *_python_par_skipkeys = NULL;
    PyObject *_python_par_ensure_ascii = NULL;
    PyObject *_python_par_check_circular = NULL;
    PyObject *_python_par_allow_nan = NULL;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_indent = NULL;
    PyObject *_python_par_separators = NULL;
    PyObject *_python_par_encoding = NULL;
    PyObject *_python_par_default = NULL;
    PyObject *_python_par_use_decimal = NULL;
    PyObject *_python_par_namedtuple_as_object = NULL;
    PyObject *_python_par_tuple_as_array = NULL;
    PyObject *_python_par_bigint_as_string = NULL;
    PyObject *_python_par_sort_keys = NULL;
    PyObject *_python_par_item_sort_key = NULL;
    PyObject *_python_par_for_json = NULL;
    PyObject *_python_par_ignore_nan = NULL;
    PyObject *_python_par_int_as_string_bitcount = NULL;
    PyObject *_python_par_iterable_as_array = NULL;
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
                        PyErr_Format( PyExc_TypeError, "dump() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "dump() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "dump() keywords must be strings" );
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

    // Check if argument obj was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_obj );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_obj == NULL );

            _python_par_obj = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_obj );

            kw_found += 1;
        }
    }

    // Check if argument fp was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_fp );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_fp == NULL );

            _python_par_fp = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_fp );

            kw_found += 1;
        }
    }

    // Check if argument skipkeys was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_skipkeys );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_skipkeys == NULL );

            _python_par_skipkeys = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_skipkeys );

            kw_found += 1;
        }
    }

    // Check if argument ensure_ascii was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_ensure_ascii );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_ensure_ascii == NULL );

            _python_par_ensure_ascii = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_ensure_ascii );

            kw_found += 1;
        }
    }

    // Check if argument check_circular was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_check_circular );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_check_circular == NULL );

            _python_par_check_circular = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_check_circular );

            kw_found += 1;
        }
    }

    // Check if argument allow_nan was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_allow_nan );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_allow_nan == NULL );

            _python_par_allow_nan = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_allow_nan );

            kw_found += 1;
        }
    }

    // Check if argument cls was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_cls );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_cls == NULL );

            _python_par_cls = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_cls );

            kw_found += 1;
        }
    }

    // Check if argument indent was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_indent );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_indent == NULL );

            _python_par_indent = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_indent );

            kw_found += 1;
        }
    }

    // Check if argument separators was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_separators );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_separators == NULL );

            _python_par_separators = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_separators );

            kw_found += 1;
        }
    }

    // Check if argument encoding was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_encoding );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_encoding == NULL );

            _python_par_encoding = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_encoding );

            kw_found += 1;
        }
    }

    // Check if argument default was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_default );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_default == NULL );

            _python_par_default = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_default );

            kw_found += 1;
        }
    }

    // Check if argument use_decimal was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_use_decimal );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_use_decimal == NULL );

            _python_par_use_decimal = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_use_decimal );

            kw_found += 1;
        }
    }

    // Check if argument namedtuple_as_object was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_namedtuple_as_object );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_namedtuple_as_object == NULL );

            _python_par_namedtuple_as_object = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_namedtuple_as_object );

            kw_found += 1;
        }
    }

    // Check if argument tuple_as_array was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_tuple_as_array );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_tuple_as_array == NULL );

            _python_par_tuple_as_array = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_tuple_as_array );

            kw_found += 1;
        }
    }

    // Check if argument bigint_as_string was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_bigint_as_string );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_bigint_as_string == NULL );

            _python_par_bigint_as_string = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_bigint_as_string );

            kw_found += 1;
        }
    }

    // Check if argument sort_keys was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_sort_keys );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_sort_keys == NULL );

            _python_par_sort_keys = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_sort_keys );

            kw_found += 1;
        }
    }

    // Check if argument item_sort_key was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_item_sort_key );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_item_sort_key == NULL );

            _python_par_item_sort_key = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_item_sort_key );

            kw_found += 1;
        }
    }

    // Check if argument for_json was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_for_json );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_for_json == NULL );

            _python_par_for_json = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_for_json );

            kw_found += 1;
        }
    }

    // Check if argument ignore_nan was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_ignore_nan );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_ignore_nan == NULL );

            _python_par_ignore_nan = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_ignore_nan );

            kw_found += 1;
        }
    }

    // Check if argument int_as_string_bitcount was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_int_as_string_bitcount );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_int_as_string_bitcount == NULL );

            _python_par_int_as_string_bitcount = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_int_as_string_bitcount );

            kw_found += 1;
        }
    }

    // Check if argument iterable_as_array was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_iterable_as_array );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_iterable_as_array == NULL );

            _python_par_iterable_as_array = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_iterable_as_array );

            kw_found += 1;
        }
    }

    // Copy normal parameter values given as part of the argument list to the
    // respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_obj != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_obj = args[ 0 ];
        Py_INCREF( _python_par_obj );
    }
    else if ( _python_par_obj == NULL )
    {
        if ( 0 + self->m_defaults_given >= 21  )
        {
            _python_par_obj = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 21 );
            Py_INCREF( _python_par_obj );
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
         if (unlikely( _python_par_fp != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_fp = args[ 1 ];
        Py_INCREF( _python_par_fp );
    }
    else if ( _python_par_fp == NULL )
    {
        if ( 1 + self->m_defaults_given >= 21  )
        {
            _python_par_fp = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 21 );
            Py_INCREF( _python_par_fp );
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
         if (unlikely( _python_par_skipkeys != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_skipkeys = args[ 2 ];
        Py_INCREF( _python_par_skipkeys );
    }
    else if ( _python_par_skipkeys == NULL )
    {
        if ( 2 + self->m_defaults_given >= 21  )
        {
            _python_par_skipkeys = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 21 );
            Py_INCREF( _python_par_skipkeys );
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
         if (unlikely( _python_par_ensure_ascii != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_ensure_ascii = args[ 3 ];
        Py_INCREF( _python_par_ensure_ascii );
    }
    else if ( _python_par_ensure_ascii == NULL )
    {
        if ( 3 + self->m_defaults_given >= 21  )
        {
            _python_par_ensure_ascii = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 21 );
            Py_INCREF( _python_par_ensure_ascii );
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
         if (unlikely( _python_par_check_circular != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_check_circular = args[ 4 ];
        Py_INCREF( _python_par_check_circular );
    }
    else if ( _python_par_check_circular == NULL )
    {
        if ( 4 + self->m_defaults_given >= 21  )
        {
            _python_par_check_circular = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 21 );
            Py_INCREF( _python_par_check_circular );
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
         if (unlikely( _python_par_allow_nan != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_allow_nan = args[ 5 ];
        Py_INCREF( _python_par_allow_nan );
    }
    else if ( _python_par_allow_nan == NULL )
    {
        if ( 5 + self->m_defaults_given >= 21  )
        {
            _python_par_allow_nan = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 21 );
            Py_INCREF( _python_par_allow_nan );
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
         if (unlikely( _python_par_cls != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_cls = args[ 6 ];
        Py_INCREF( _python_par_cls );
    }
    else if ( _python_par_cls == NULL )
    {
        if ( 6 + self->m_defaults_given >= 21  )
        {
            _python_par_cls = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 21 );
            Py_INCREF( _python_par_cls );
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
    if (likely( 7 < args_given ))
    {
         if (unlikely( _python_par_indent != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_indent = args[ 7 ];
        Py_INCREF( _python_par_indent );
    }
    else if ( _python_par_indent == NULL )
    {
        if ( 7 + self->m_defaults_given >= 21  )
        {
            _python_par_indent = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 21 );
            Py_INCREF( _python_par_indent );
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
    if (likely( 8 < args_given ))
    {
         if (unlikely( _python_par_separators != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_separators = args[ 8 ];
        Py_INCREF( _python_par_separators );
    }
    else if ( _python_par_separators == NULL )
    {
        if ( 8 + self->m_defaults_given >= 21  )
        {
            _python_par_separators = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 21 );
            Py_INCREF( _python_par_separators );
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
    if (likely( 9 < args_given ))
    {
         if (unlikely( _python_par_encoding != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 9 );
             goto error_exit;
         }

        _python_par_encoding = args[ 9 ];
        Py_INCREF( _python_par_encoding );
    }
    else if ( _python_par_encoding == NULL )
    {
        if ( 9 + self->m_defaults_given >= 21  )
        {
            _python_par_encoding = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 9 - 21 );
            Py_INCREF( _python_par_encoding );
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
    if (likely( 10 < args_given ))
    {
         if (unlikely( _python_par_default != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 10 );
             goto error_exit;
         }

        _python_par_default = args[ 10 ];
        Py_INCREF( _python_par_default );
    }
    else if ( _python_par_default == NULL )
    {
        if ( 10 + self->m_defaults_given >= 21  )
        {
            _python_par_default = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 10 - 21 );
            Py_INCREF( _python_par_default );
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
    if (likely( 11 < args_given ))
    {
         if (unlikely( _python_par_use_decimal != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 11 );
             goto error_exit;
         }

        _python_par_use_decimal = args[ 11 ];
        Py_INCREF( _python_par_use_decimal );
    }
    else if ( _python_par_use_decimal == NULL )
    {
        if ( 11 + self->m_defaults_given >= 21  )
        {
            _python_par_use_decimal = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 11 - 21 );
            Py_INCREF( _python_par_use_decimal );
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
    if (likely( 12 < args_given ))
    {
         if (unlikely( _python_par_namedtuple_as_object != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 12 );
             goto error_exit;
         }

        _python_par_namedtuple_as_object = args[ 12 ];
        Py_INCREF( _python_par_namedtuple_as_object );
    }
    else if ( _python_par_namedtuple_as_object == NULL )
    {
        if ( 12 + self->m_defaults_given >= 21  )
        {
            _python_par_namedtuple_as_object = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 12 - 21 );
            Py_INCREF( _python_par_namedtuple_as_object );
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
    if (likely( 13 < args_given ))
    {
         if (unlikely( _python_par_tuple_as_array != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 13 );
             goto error_exit;
         }

        _python_par_tuple_as_array = args[ 13 ];
        Py_INCREF( _python_par_tuple_as_array );
    }
    else if ( _python_par_tuple_as_array == NULL )
    {
        if ( 13 + self->m_defaults_given >= 21  )
        {
            _python_par_tuple_as_array = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 13 - 21 );
            Py_INCREF( _python_par_tuple_as_array );
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
    if (likely( 14 < args_given ))
    {
         if (unlikely( _python_par_bigint_as_string != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 14 );
             goto error_exit;
         }

        _python_par_bigint_as_string = args[ 14 ];
        Py_INCREF( _python_par_bigint_as_string );
    }
    else if ( _python_par_bigint_as_string == NULL )
    {
        if ( 14 + self->m_defaults_given >= 21  )
        {
            _python_par_bigint_as_string = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 14 - 21 );
            Py_INCREF( _python_par_bigint_as_string );
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
    if (likely( 15 < args_given ))
    {
         if (unlikely( _python_par_sort_keys != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 15 );
             goto error_exit;
         }

        _python_par_sort_keys = args[ 15 ];
        Py_INCREF( _python_par_sort_keys );
    }
    else if ( _python_par_sort_keys == NULL )
    {
        if ( 15 + self->m_defaults_given >= 21  )
        {
            _python_par_sort_keys = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 15 - 21 );
            Py_INCREF( _python_par_sort_keys );
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
    if (likely( 16 < args_given ))
    {
         if (unlikely( _python_par_item_sort_key != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 16 );
             goto error_exit;
         }

        _python_par_item_sort_key = args[ 16 ];
        Py_INCREF( _python_par_item_sort_key );
    }
    else if ( _python_par_item_sort_key == NULL )
    {
        if ( 16 + self->m_defaults_given >= 21  )
        {
            _python_par_item_sort_key = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 16 - 21 );
            Py_INCREF( _python_par_item_sort_key );
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
    if (likely( 17 < args_given ))
    {
         if (unlikely( _python_par_for_json != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 17 );
             goto error_exit;
         }

        _python_par_for_json = args[ 17 ];
        Py_INCREF( _python_par_for_json );
    }
    else if ( _python_par_for_json == NULL )
    {
        if ( 17 + self->m_defaults_given >= 21  )
        {
            _python_par_for_json = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 17 - 21 );
            Py_INCREF( _python_par_for_json );
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
    if (likely( 18 < args_given ))
    {
         if (unlikely( _python_par_ignore_nan != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 18 );
             goto error_exit;
         }

        _python_par_ignore_nan = args[ 18 ];
        Py_INCREF( _python_par_ignore_nan );
    }
    else if ( _python_par_ignore_nan == NULL )
    {
        if ( 18 + self->m_defaults_given >= 21  )
        {
            _python_par_ignore_nan = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 18 - 21 );
            Py_INCREF( _python_par_ignore_nan );
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
    if (likely( 19 < args_given ))
    {
         if (unlikely( _python_par_int_as_string_bitcount != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 19 );
             goto error_exit;
         }

        _python_par_int_as_string_bitcount = args[ 19 ];
        Py_INCREF( _python_par_int_as_string_bitcount );
    }
    else if ( _python_par_int_as_string_bitcount == NULL )
    {
        if ( 19 + self->m_defaults_given >= 21  )
        {
            _python_par_int_as_string_bitcount = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 19 - 21 );
            Py_INCREF( _python_par_int_as_string_bitcount );
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
    if (likely( 20 < args_given ))
    {
         if (unlikely( _python_par_iterable_as_array != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 20 );
             goto error_exit;
         }

        _python_par_iterable_as_array = args[ 20 ];
        Py_INCREF( _python_par_iterable_as_array );
    }
    else if ( _python_par_iterable_as_array == NULL )
    {
        if ( 20 + self->m_defaults_given >= 21  )
        {
            _python_par_iterable_as_array = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 20 - 21 );
            Py_INCREF( _python_par_iterable_as_array );
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
    if (unlikely( _python_par_obj == NULL || _python_par_fp == NULL || _python_par_skipkeys == NULL || _python_par_ensure_ascii == NULL || _python_par_check_circular == NULL || _python_par_allow_nan == NULL || _python_par_cls == NULL || _python_par_indent == NULL || _python_par_separators == NULL || _python_par_encoding == NULL || _python_par_default == NULL || _python_par_use_decimal == NULL || _python_par_namedtuple_as_object == NULL || _python_par_tuple_as_array == NULL || _python_par_bigint_as_string == NULL || _python_par_sort_keys == NULL || _python_par_item_sort_key == NULL || _python_par_for_json == NULL || _python_par_ignore_nan == NULL || _python_par_int_as_string_bitcount == NULL || _python_par_iterable_as_array == NULL ))
    {
        PyObject *values[] = { _python_par_obj, _python_par_fp, _python_par_skipkeys, _python_par_ensure_ascii, _python_par_check_circular, _python_par_allow_nan, _python_par_cls, _python_par_indent, _python_par_separators, _python_par_encoding, _python_par_default, _python_par_use_decimal, _python_par_namedtuple_as_object, _python_par_tuple_as_array, _python_par_bigint_as_string, _python_par_sort_keys, _python_par_item_sort_key, _python_par_for_json, _python_par_ignore_nan, _python_par_int_as_string_bitcount, _python_par_iterable_as_array };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 21 ))
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



    return impl_function_3_dump_of_simplejson( self, _python_par_obj, _python_par_fp, _python_par_skipkeys, _python_par_ensure_ascii, _python_par_check_circular, _python_par_allow_nan, _python_par_cls, _python_par_indent, _python_par_separators, _python_par_encoding, _python_par_default, _python_par_use_decimal, _python_par_namedtuple_as_object, _python_par_tuple_as_array, _python_par_bigint_as_string, _python_par_sort_keys, _python_par_item_sort_key, _python_par_for_json, _python_par_ignore_nan, _python_par_int_as_string_bitcount, _python_par_iterable_as_array, _python_par_kw );

error_exit:;

    Py_XDECREF( _python_par_obj );
    Py_XDECREF( _python_par_fp );
    Py_XDECREF( _python_par_skipkeys );
    Py_XDECREF( _python_par_ensure_ascii );
    Py_XDECREF( _python_par_check_circular );
    Py_XDECREF( _python_par_allow_nan );
    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_indent );
    Py_XDECREF( _python_par_separators );
    Py_XDECREF( _python_par_encoding );
    Py_XDECREF( _python_par_default );
    Py_XDECREF( _python_par_use_decimal );
    Py_XDECREF( _python_par_namedtuple_as_object );
    Py_XDECREF( _python_par_tuple_as_array );
    Py_XDECREF( _python_par_bigint_as_string );
    Py_XDECREF( _python_par_sort_keys );
    Py_XDECREF( _python_par_item_sort_key );
    Py_XDECREF( _python_par_for_json );
    Py_XDECREF( _python_par_ignore_nan );
    Py_XDECREF( _python_par_int_as_string_bitcount );
    Py_XDECREF( _python_par_iterable_as_array );
    Py_XDECREF( _python_par_kw );

    return NULL;
}

static PyObject *dparse_function_3_dump_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 22 )
    {
        return impl_function_3_dump_of_simplejson( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), INCREASE_REFCOUNT( args[ 9 ] ), INCREASE_REFCOUNT( args[ 10 ] ), INCREASE_REFCOUNT( args[ 11 ] ), INCREASE_REFCOUNT( args[ 12 ] ), INCREASE_REFCOUNT( args[ 13 ] ), INCREASE_REFCOUNT( args[ 14 ] ), INCREASE_REFCOUNT( args[ 15 ] ), INCREASE_REFCOUNT( args[ 16 ] ), INCREASE_REFCOUNT( args[ 17 ] ), INCREASE_REFCOUNT( args[ 18 ] ), INCREASE_REFCOUNT( args[ 19 ] ), INCREASE_REFCOUNT( args[ 20 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_3_dump_of_simplejson( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_dumps_of_simplejson( Nuitka_FunctionObject *self, PyObject *_python_par_obj, PyObject *_python_par_skipkeys, PyObject *_python_par_ensure_ascii, PyObject *_python_par_check_circular, PyObject *_python_par_allow_nan, PyObject *_python_par_cls, PyObject *_python_par_indent, PyObject *_python_par_separators, PyObject *_python_par_encoding, PyObject *_python_par_default, PyObject *_python_par_use_decimal, PyObject *_python_par_namedtuple_as_object, PyObject *_python_par_tuple_as_array, PyObject *_python_par_bigint_as_string, PyObject *_python_par_sort_keys, PyObject *_python_par_item_sort_key, PyObject *_python_par_for_json, PyObject *_python_par_ignore_nan, PyObject *_python_par_int_as_string_bitcount, PyObject *_python_par_iterable_as_array, PyObject *_python_par_kw )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = _python_par_obj;
    PyObject *par_skipkeys = _python_par_skipkeys;
    PyObject *par_ensure_ascii = _python_par_ensure_ascii;
    PyObject *par_check_circular = _python_par_check_circular;
    PyObject *par_allow_nan = _python_par_allow_nan;
    PyObject *par_cls = _python_par_cls;
    PyObject *par_indent = _python_par_indent;
    PyObject *par_separators = _python_par_separators;
    PyObject *par_encoding = _python_par_encoding;
    PyObject *par_default = _python_par_default;
    PyObject *par_use_decimal = _python_par_use_decimal;
    PyObject *par_namedtuple_as_object = _python_par_namedtuple_as_object;
    PyObject *par_tuple_as_array = _python_par_tuple_as_array;
    PyObject *par_bigint_as_string = _python_par_bigint_as_string;
    PyObject *par_sort_keys = _python_par_sort_keys;
    PyObject *par_item_sort_key = _python_par_item_sort_key;
    PyObject *par_for_json = _python_par_for_json;
    PyObject *par_ignore_nan = _python_par_ignore_nan;
    PyObject *par_int_as_string_bitcount = _python_par_int_as_string_bitcount;
    PyObject *par_iterable_as_array = _python_par_iterable_as_array;
    PyObject *par_kw = _python_par_kw;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    int tmp_and_left_truth_5;
    int tmp_and_left_truth_6;
    int tmp_and_left_truth_7;
    int tmp_and_left_truth_8;
    int tmp_and_left_truth_9;
    int tmp_and_left_truth_10;
    int tmp_and_left_truth_11;
    int tmp_and_left_truth_12;
    int tmp_and_left_truth_13;
    int tmp_and_left_truth_14;
    int tmp_and_left_truth_15;
    int tmp_and_left_truth_16;
    int tmp_and_left_truth_17;
    int tmp_and_left_truth_18;
    int tmp_and_left_truth_19;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_left_value_5;
    PyObject *tmp_and_left_value_6;
    PyObject *tmp_and_left_value_7;
    PyObject *tmp_and_left_value_8;
    PyObject *tmp_and_left_value_9;
    PyObject *tmp_and_left_value_10;
    PyObject *tmp_and_left_value_11;
    PyObject *tmp_and_left_value_12;
    PyObject *tmp_and_left_value_13;
    PyObject *tmp_and_left_value_14;
    PyObject *tmp_and_left_value_15;
    PyObject *tmp_and_left_value_16;
    PyObject *tmp_and_left_value_17;
    PyObject *tmp_and_left_value_18;
    PyObject *tmp_and_left_value_19;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_and_right_value_5;
    PyObject *tmp_and_right_value_6;
    PyObject *tmp_and_right_value_7;
    PyObject *tmp_and_right_value_8;
    PyObject *tmp_and_right_value_9;
    PyObject *tmp_and_right_value_10;
    PyObject *tmp_and_right_value_11;
    PyObject *tmp_and_right_value_12;
    PyObject *tmp_and_right_value_13;
    PyObject *tmp_and_right_value_14;
    PyObject *tmp_and_right_value_15;
    PyObject *tmp_and_right_value_16;
    PyObject *tmp_and_right_value_17;
    PyObject *tmp_and_right_value_18;
    PyObject *tmp_and_right_value_19;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_operand_name_4;
    PyObject *tmp_operand_name_5;
    PyObject *tmp_operand_name_6;
    PyObject *tmp_operand_name_7;
    PyObject *tmp_operand_name_8;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_dc728993c0b736f45ca684cbf765df9f, module_simplejson );
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
    tmp_operand_name_1 = par_skipkeys;

    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_and_left_value_2 = par_ensure_ascii;

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
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
    tmp_and_left_value_3 = par_check_circular;

    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    tmp_and_left_value_4 = par_allow_nan;

    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    tmp_compexpr_left_1 = par_cls;

    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_5 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    assert( !(tmp_and_left_truth_5 == -1) );
    if ( tmp_and_left_truth_5 == 1 )
    {
        goto and_right_5;
    }
    else
    {
        goto and_left_5;
    }
    and_right_5:;
    tmp_compexpr_left_2 = par_indent;

    tmp_compexpr_right_2 = Py_None;
    tmp_and_left_value_6 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_and_left_truth_6 = CHECK_IF_TRUE( tmp_and_left_value_6 );
    assert( !(tmp_and_left_truth_6 == -1) );
    if ( tmp_and_left_truth_6 == 1 )
    {
        goto and_right_6;
    }
    else
    {
        goto and_left_6;
    }
    and_right_6:;
    tmp_compexpr_left_3 = par_separators;

    tmp_compexpr_right_3 = Py_None;
    tmp_and_left_value_7 = BOOL_FROM( tmp_compexpr_left_3 == tmp_compexpr_right_3 );
    tmp_and_left_truth_7 = CHECK_IF_TRUE( tmp_and_left_value_7 );
    assert( !(tmp_and_left_truth_7 == -1) );
    if ( tmp_and_left_truth_7 == 1 )
    {
        goto and_right_7;
    }
    else
    {
        goto and_left_7;
    }
    and_right_7:;
    tmp_compexpr_left_4 = par_encoding;

    tmp_compexpr_right_4 = const_str_digest_c075052d723d6707083e869a0e3659bb;
    tmp_and_left_value_8 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_and_left_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_8 = CHECK_IF_TRUE( tmp_and_left_value_8 );
    if ( tmp_and_left_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_8 );

        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_8 == 1 )
    {
        goto and_right_8;
    }
    else
    {
        goto and_left_8;
    }
    and_right_8:;
    Py_DECREF( tmp_and_left_value_8 );
    tmp_compexpr_left_5 = par_default;

    tmp_compexpr_right_5 = Py_None;
    tmp_and_left_value_9 = BOOL_FROM( tmp_compexpr_left_5 == tmp_compexpr_right_5 );
    tmp_and_left_truth_9 = CHECK_IF_TRUE( tmp_and_left_value_9 );
    assert( !(tmp_and_left_truth_9 == -1) );
    if ( tmp_and_left_truth_9 == 1 )
    {
        goto and_right_9;
    }
    else
    {
        goto and_left_9;
    }
    and_right_9:;
    tmp_and_left_value_10 = par_use_decimal;

    tmp_and_left_truth_10 = CHECK_IF_TRUE( tmp_and_left_value_10 );
    if ( tmp_and_left_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_10 == 1 )
    {
        goto and_right_10;
    }
    else
    {
        goto and_left_10;
    }
    and_right_10:;
    tmp_and_left_value_11 = par_namedtuple_as_object;

    tmp_and_left_truth_11 = CHECK_IF_TRUE( tmp_and_left_value_11 );
    if ( tmp_and_left_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_11 == 1 )
    {
        goto and_right_11;
    }
    else
    {
        goto and_left_11;
    }
    and_right_11:;
    tmp_and_left_value_12 = par_tuple_as_array;

    tmp_and_left_truth_12 = CHECK_IF_TRUE( tmp_and_left_value_12 );
    if ( tmp_and_left_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_12 == 1 )
    {
        goto and_right_12;
    }
    else
    {
        goto and_left_12;
    }
    and_right_12:;
    tmp_operand_name_2 = par_iterable_as_array;

    tmp_and_left_value_13 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_and_left_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_13 = CHECK_IF_TRUE( tmp_and_left_value_13 );
    if ( tmp_and_left_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_13 == 1 )
    {
        goto and_right_13;
    }
    else
    {
        goto and_left_13;
    }
    and_right_13:;
    tmp_operand_name_3 = par_bigint_as_string;

    tmp_and_left_value_14 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_3 );
    if ( tmp_and_left_value_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_14 = CHECK_IF_TRUE( tmp_and_left_value_14 );
    if ( tmp_and_left_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_14 == 1 )
    {
        goto and_right_14;
    }
    else
    {
        goto and_left_14;
    }
    and_right_14:;
    tmp_operand_name_4 = par_sort_keys;

    tmp_and_left_value_15 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_4 );
    if ( tmp_and_left_value_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_15 = CHECK_IF_TRUE( tmp_and_left_value_15 );
    if ( tmp_and_left_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_15 == 1 )
    {
        goto and_right_15;
    }
    else
    {
        goto and_left_15;
    }
    and_right_15:;
    tmp_operand_name_5 = par_item_sort_key;

    tmp_and_left_value_16 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_5 );
    if ( tmp_and_left_value_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_16 = CHECK_IF_TRUE( tmp_and_left_value_16 );
    if ( tmp_and_left_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_16 == 1 )
    {
        goto and_right_16;
    }
    else
    {
        goto and_left_16;
    }
    and_right_16:;
    tmp_operand_name_6 = par_for_json;

    tmp_and_left_value_17 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_6 );
    if ( tmp_and_left_value_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_17 = CHECK_IF_TRUE( tmp_and_left_value_17 );
    if ( tmp_and_left_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_17 == 1 )
    {
        goto and_right_17;
    }
    else
    {
        goto and_left_17;
    }
    and_right_17:;
    tmp_operand_name_7 = par_ignore_nan;

    tmp_and_left_value_18 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_7 );
    if ( tmp_and_left_value_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_18 = CHECK_IF_TRUE( tmp_and_left_value_18 );
    if ( tmp_and_left_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_18 == 1 )
    {
        goto and_right_18;
    }
    else
    {
        goto and_left_18;
    }
    and_right_18:;
    tmp_compexpr_left_6 = par_int_as_string_bitcount;

    tmp_compexpr_right_6 = Py_None;
    tmp_and_left_value_19 = BOOL_FROM( tmp_compexpr_left_6 == tmp_compexpr_right_6 );
    tmp_and_left_truth_19 = CHECK_IF_TRUE( tmp_and_left_value_19 );
    assert( !(tmp_and_left_truth_19 == -1) );
    if ( tmp_and_left_truth_19 == 1 )
    {
        goto and_right_19;
    }
    else
    {
        goto and_left_19;
    }
    and_right_19:;
    tmp_operand_name_8 = par_kw;

    tmp_and_right_value_19 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_8 );
    if ( tmp_and_right_value_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_18 = tmp_and_right_value_19;
    goto and_end_19;
    and_left_19:;
    tmp_and_right_value_18 = tmp_and_left_value_19;
    and_end_19:;
    tmp_and_right_value_17 = tmp_and_right_value_18;
    goto and_end_18;
    and_left_18:;
    tmp_and_right_value_17 = tmp_and_left_value_18;
    and_end_18:;
    tmp_and_right_value_16 = tmp_and_right_value_17;
    goto and_end_17;
    and_left_17:;
    tmp_and_right_value_16 = tmp_and_left_value_17;
    and_end_17:;
    tmp_and_right_value_15 = tmp_and_right_value_16;
    goto and_end_16;
    and_left_16:;
    tmp_and_right_value_15 = tmp_and_left_value_16;
    and_end_16:;
    tmp_and_right_value_14 = tmp_and_right_value_15;
    goto and_end_15;
    and_left_15:;
    tmp_and_right_value_14 = tmp_and_left_value_15;
    and_end_15:;
    tmp_and_right_value_13 = tmp_and_right_value_14;
    goto and_end_14;
    and_left_14:;
    tmp_and_right_value_13 = tmp_and_left_value_14;
    and_end_14:;
    tmp_and_right_value_12 = tmp_and_right_value_13;
    goto and_end_13;
    and_left_13:;
    tmp_and_right_value_12 = tmp_and_left_value_13;
    and_end_13:;
    tmp_and_right_value_11 = tmp_and_right_value_12;
    goto and_end_12;
    and_left_12:;
    tmp_and_right_value_11 = tmp_and_left_value_12;
    and_end_12:;
    tmp_and_right_value_10 = tmp_and_right_value_11;
    goto and_end_11;
    and_left_11:;
    tmp_and_right_value_10 = tmp_and_left_value_11;
    and_end_11:;
    tmp_and_right_value_9 = tmp_and_right_value_10;
    goto and_end_10;
    and_left_10:;
    tmp_and_right_value_9 = tmp_and_left_value_10;
    and_end_10:;
    tmp_and_right_value_8 = tmp_and_right_value_9;
    goto and_end_9;
    and_left_9:;
    tmp_and_right_value_8 = tmp_and_left_value_9;
    and_end_9:;
    Py_INCREF( tmp_and_right_value_8 );
    tmp_and_right_value_7 = tmp_and_right_value_8;
    goto and_end_8;
    and_left_8:;
    tmp_and_right_value_7 = tmp_and_left_value_8;
    and_end_8:;
    tmp_and_right_value_6 = tmp_and_right_value_7;
    goto and_end_7;
    and_left_7:;
    Py_INCREF( tmp_and_left_value_7 );
    tmp_and_right_value_6 = tmp_and_left_value_7;
    and_end_7:;
    tmp_and_right_value_5 = tmp_and_right_value_6;
    goto and_end_6;
    and_left_6:;
    Py_INCREF( tmp_and_left_value_6 );
    tmp_and_right_value_5 = tmp_and_left_value_6;
    and_end_6:;
    tmp_and_right_value_4 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    Py_INCREF( tmp_and_left_value_5 );
    tmp_and_right_value_4 = tmp_and_left_value_5;
    and_end_5:;
    tmp_and_right_value_3 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    Py_INCREF( tmp_and_left_value_4 );
    tmp_and_right_value_3 = tmp_and_left_value_4;
    and_end_4:;
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    Py_INCREF( tmp_and_left_value_3 );
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__default_encoder );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__default_encoder );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98559 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_encode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_obj;

    frame_function->f_lineno = 380;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_1 = par_cls;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9311 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 381;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONEncoder );

    if (unlikely( tmp_assign_source_1 == NULL ))
    {
        tmp_assign_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONEncoder );
    }

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98493 ], 33, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 382;
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = par_cls;
        par_cls = tmp_assign_source_1;
        Py_INCREF( par_cls );
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_dircall_arg1_1 = par_cls;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9311 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 383;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 18 );
    tmp_dict_value_1 = par_skipkeys;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98597 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 384;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_skipkeys;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_ensure_ascii;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98651 ], 58, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 384;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_ensure_ascii;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_check_circular;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98709 ], 60, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_check_circular;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_allow_nan;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98769 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_allow_nan;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = par_indent;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98824 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_indent;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = par_separators;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98876 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 386;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_separators;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = par_encoding;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25058 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 386;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = const_str_plain_encoding;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_value_8 = par_default;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75024 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 386;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = const_str_plain_default;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_value_9 = par_use_decimal;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98932 ], 57, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 387;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_9 = const_str_plain_use_decimal;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_dict_value_10 = par_namedtuple_as_object;

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98989 ], 66, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_10 = const_str_plain_namedtuple_as_object;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_10, tmp_dict_value_10 );
    tmp_dict_value_11 = par_tuple_as_array;

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99055 ], 60, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 389;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_11 = const_str_plain_tuple_as_array;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_11, tmp_dict_value_11 );
    tmp_dict_value_12 = par_iterable_as_array;

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99115 ], 63, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 390;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_12 = const_str_plain_iterable_as_array;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_12, tmp_dict_value_12 );
    tmp_dict_value_13 = par_bigint_as_string;

    if ( tmp_dict_value_13 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99178 ], 62, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_13 = const_str_plain_bigint_as_string;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_13, tmp_dict_value_13 );
    tmp_dict_value_14 = par_sort_keys;

    if ( tmp_dict_value_14 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79845 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 392;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_14 = const_str_plain_sort_keys;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_14, tmp_dict_value_14 );
    tmp_dict_value_15 = par_item_sort_key;

    if ( tmp_dict_value_15 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99240 ], 59, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 393;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_15 = const_str_plain_item_sort_key;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_15, tmp_dict_value_15 );
    tmp_dict_value_16 = par_for_json;

    if ( tmp_dict_value_16 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99299 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 394;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_16 = const_str_plain_for_json;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_16, tmp_dict_value_16 );
    tmp_dict_value_17 = par_ignore_nan;

    if ( tmp_dict_value_17 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99353 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 395;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_17 = const_str_plain_ignore_nan;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_17, tmp_dict_value_17 );
    tmp_dict_value_18 = par_int_as_string_bitcount;

    if ( tmp_dict_value_18 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99409 ], 68, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 396;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_18 = const_str_plain_int_as_string_bitcount;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_18, tmp_dict_value_18 );
    tmp_dircall_arg3_1 = par_kw;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15606 ], 48, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 397;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );
    tmp_source_name_2 = impl_function_9_complex_call_helper_keywords_star_dict_of___internal__( tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_encode );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_obj;

    frame_function->f_lineno = 397;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
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
            if ( par_obj != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_obj,
                    par_obj
                );
                assert( tmp_res != -1 );

            }
            if ( par_skipkeys != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_skipkeys,
                    par_skipkeys
                );
                assert( tmp_res != -1 );

            }
            if ( par_ensure_ascii != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ensure_ascii,
                    par_ensure_ascii
                );
                assert( tmp_res != -1 );

            }
            if ( par_check_circular != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_check_circular,
                    par_check_circular
                );
                assert( tmp_res != -1 );

            }
            if ( par_allow_nan != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_allow_nan,
                    par_allow_nan
                );
                assert( tmp_res != -1 );

            }
            if ( par_cls != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
                );
                assert( tmp_res != -1 );

            }
            if ( par_indent != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_indent,
                    par_indent
                );
                assert( tmp_res != -1 );

            }
            if ( par_separators != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_separators,
                    par_separators
                );
                assert( tmp_res != -1 );

            }
            if ( par_encoding != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encoding,
                    par_encoding
                );
                assert( tmp_res != -1 );

            }
            if ( par_default != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_default,
                    par_default
                );
                assert( tmp_res != -1 );

            }
            if ( par_use_decimal != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_use_decimal,
                    par_use_decimal
                );
                assert( tmp_res != -1 );

            }
            if ( par_namedtuple_as_object != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_namedtuple_as_object,
                    par_namedtuple_as_object
                );
                assert( tmp_res != -1 );

            }
            if ( par_tuple_as_array != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tuple_as_array,
                    par_tuple_as_array
                );
                assert( tmp_res != -1 );

            }
            if ( par_bigint_as_string != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_bigint_as_string,
                    par_bigint_as_string
                );
                assert( tmp_res != -1 );

            }
            if ( par_sort_keys != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sort_keys,
                    par_sort_keys
                );
                assert( tmp_res != -1 );

            }
            if ( par_item_sort_key != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_item_sort_key,
                    par_item_sort_key
                );
                assert( tmp_res != -1 );

            }
            if ( par_for_json != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_for_json,
                    par_for_json
                );
                assert( tmp_res != -1 );

            }
            if ( par_ignore_nan != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ignore_nan,
                    par_ignore_nan
                );
                assert( tmp_res != -1 );

            }
            if ( par_int_as_string_bitcount != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_int_as_string_bitcount,
                    par_int_as_string_bitcount
                );
                assert( tmp_res != -1 );

            }
            if ( par_iterable_as_array != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_iterable_as_array,
                    par_iterable_as_array
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
    NUITKA_CANNOT_GET_HERE( function_4_dumps_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( par_skipkeys );
    par_skipkeys = NULL;

    Py_XDECREF( par_ensure_ascii );
    par_ensure_ascii = NULL;

    Py_XDECREF( par_check_circular );
    par_check_circular = NULL;

    Py_XDECREF( par_allow_nan );
    par_allow_nan = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

    Py_XDECREF( par_separators );
    par_separators = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    Py_XDECREF( par_namedtuple_as_object );
    par_namedtuple_as_object = NULL;

    Py_XDECREF( par_tuple_as_array );
    par_tuple_as_array = NULL;

    Py_XDECREF( par_bigint_as_string );
    par_bigint_as_string = NULL;

    Py_XDECREF( par_sort_keys );
    par_sort_keys = NULL;

    Py_XDECREF( par_item_sort_key );
    par_item_sort_key = NULL;

    Py_XDECREF( par_for_json );
    par_for_json = NULL;

    Py_XDECREF( par_ignore_nan );
    par_ignore_nan = NULL;

    Py_XDECREF( par_int_as_string_bitcount );
    par_int_as_string_bitcount = NULL;

    Py_XDECREF( par_iterable_as_array );
    par_iterable_as_array = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

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

    Py_XDECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( par_skipkeys );
    par_skipkeys = NULL;

    Py_XDECREF( par_ensure_ascii );
    par_ensure_ascii = NULL;

    Py_XDECREF( par_check_circular );
    par_check_circular = NULL;

    Py_XDECREF( par_allow_nan );
    par_allow_nan = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

    Py_XDECREF( par_separators );
    par_separators = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    Py_XDECREF( par_namedtuple_as_object );
    par_namedtuple_as_object = NULL;

    Py_XDECREF( par_tuple_as_array );
    par_tuple_as_array = NULL;

    Py_XDECREF( par_bigint_as_string );
    par_bigint_as_string = NULL;

    Py_XDECREF( par_sort_keys );
    par_sort_keys = NULL;

    Py_XDECREF( par_item_sort_key );
    par_item_sort_key = NULL;

    Py_XDECREF( par_for_json );
    par_for_json = NULL;

    Py_XDECREF( par_ignore_nan );
    par_ignore_nan = NULL;

    Py_XDECREF( par_int_as_string_bitcount );
    par_int_as_string_bitcount = NULL;

    Py_XDECREF( par_iterable_as_array );
    par_iterable_as_array = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_dumps_of_simplejson );
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
static PyObject *fparse_function_4_dumps_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_obj = NULL;
    PyObject *_python_par_skipkeys = NULL;
    PyObject *_python_par_ensure_ascii = NULL;
    PyObject *_python_par_check_circular = NULL;
    PyObject *_python_par_allow_nan = NULL;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_indent = NULL;
    PyObject *_python_par_separators = NULL;
    PyObject *_python_par_encoding = NULL;
    PyObject *_python_par_default = NULL;
    PyObject *_python_par_use_decimal = NULL;
    PyObject *_python_par_namedtuple_as_object = NULL;
    PyObject *_python_par_tuple_as_array = NULL;
    PyObject *_python_par_bigint_as_string = NULL;
    PyObject *_python_par_sort_keys = NULL;
    PyObject *_python_par_item_sort_key = NULL;
    PyObject *_python_par_for_json = NULL;
    PyObject *_python_par_ignore_nan = NULL;
    PyObject *_python_par_int_as_string_bitcount = NULL;
    PyObject *_python_par_iterable_as_array = NULL;
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
                        PyErr_Format( PyExc_TypeError, "dumps() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "dumps() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "dumps() keywords must be strings" );
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

    // Check if argument obj was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_obj );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_obj == NULL );

            _python_par_obj = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_obj );

            kw_found += 1;
        }
    }

    // Check if argument skipkeys was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_skipkeys );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_skipkeys == NULL );

            _python_par_skipkeys = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_skipkeys );

            kw_found += 1;
        }
    }

    // Check if argument ensure_ascii was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_ensure_ascii );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_ensure_ascii == NULL );

            _python_par_ensure_ascii = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_ensure_ascii );

            kw_found += 1;
        }
    }

    // Check if argument check_circular was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_check_circular );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_check_circular == NULL );

            _python_par_check_circular = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_check_circular );

            kw_found += 1;
        }
    }

    // Check if argument allow_nan was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_allow_nan );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_allow_nan == NULL );

            _python_par_allow_nan = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_allow_nan );

            kw_found += 1;
        }
    }

    // Check if argument cls was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_cls );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_cls == NULL );

            _python_par_cls = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_cls );

            kw_found += 1;
        }
    }

    // Check if argument indent was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_indent );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_indent == NULL );

            _python_par_indent = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_indent );

            kw_found += 1;
        }
    }

    // Check if argument separators was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_separators );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_separators == NULL );

            _python_par_separators = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_separators );

            kw_found += 1;
        }
    }

    // Check if argument encoding was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_encoding );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_encoding == NULL );

            _python_par_encoding = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_encoding );

            kw_found += 1;
        }
    }

    // Check if argument default was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_default );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_default == NULL );

            _python_par_default = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_default );

            kw_found += 1;
        }
    }

    // Check if argument use_decimal was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_use_decimal );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_use_decimal == NULL );

            _python_par_use_decimal = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_use_decimal );

            kw_found += 1;
        }
    }

    // Check if argument namedtuple_as_object was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_namedtuple_as_object );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_namedtuple_as_object == NULL );

            _python_par_namedtuple_as_object = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_namedtuple_as_object );

            kw_found += 1;
        }
    }

    // Check if argument tuple_as_array was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_tuple_as_array );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_tuple_as_array == NULL );

            _python_par_tuple_as_array = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_tuple_as_array );

            kw_found += 1;
        }
    }

    // Check if argument bigint_as_string was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_bigint_as_string );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_bigint_as_string == NULL );

            _python_par_bigint_as_string = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_bigint_as_string );

            kw_found += 1;
        }
    }

    // Check if argument sort_keys was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_sort_keys );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_sort_keys == NULL );

            _python_par_sort_keys = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_sort_keys );

            kw_found += 1;
        }
    }

    // Check if argument item_sort_key was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_item_sort_key );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_item_sort_key == NULL );

            _python_par_item_sort_key = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_item_sort_key );

            kw_found += 1;
        }
    }

    // Check if argument for_json was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_for_json );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_for_json == NULL );

            _python_par_for_json = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_for_json );

            kw_found += 1;
        }
    }

    // Check if argument ignore_nan was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_ignore_nan );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_ignore_nan == NULL );

            _python_par_ignore_nan = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_ignore_nan );

            kw_found += 1;
        }
    }

    // Check if argument int_as_string_bitcount was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_int_as_string_bitcount );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_int_as_string_bitcount == NULL );

            _python_par_int_as_string_bitcount = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_int_as_string_bitcount );

            kw_found += 1;
        }
    }

    // Check if argument iterable_as_array was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_iterable_as_array );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_iterable_as_array == NULL );

            _python_par_iterable_as_array = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_iterable_as_array );

            kw_found += 1;
        }
    }

    // Copy normal parameter values given as part of the argument list to the
    // respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_obj != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_obj = args[ 0 ];
        Py_INCREF( _python_par_obj );
    }
    else if ( _python_par_obj == NULL )
    {
        if ( 0 + self->m_defaults_given >= 20  )
        {
            _python_par_obj = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 20 );
            Py_INCREF( _python_par_obj );
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
         if (unlikely( _python_par_skipkeys != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_skipkeys = args[ 1 ];
        Py_INCREF( _python_par_skipkeys );
    }
    else if ( _python_par_skipkeys == NULL )
    {
        if ( 1 + self->m_defaults_given >= 20  )
        {
            _python_par_skipkeys = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 20 );
            Py_INCREF( _python_par_skipkeys );
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
         if (unlikely( _python_par_ensure_ascii != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_ensure_ascii = args[ 2 ];
        Py_INCREF( _python_par_ensure_ascii );
    }
    else if ( _python_par_ensure_ascii == NULL )
    {
        if ( 2 + self->m_defaults_given >= 20  )
        {
            _python_par_ensure_ascii = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 20 );
            Py_INCREF( _python_par_ensure_ascii );
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
         if (unlikely( _python_par_check_circular != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_check_circular = args[ 3 ];
        Py_INCREF( _python_par_check_circular );
    }
    else if ( _python_par_check_circular == NULL )
    {
        if ( 3 + self->m_defaults_given >= 20  )
        {
            _python_par_check_circular = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 20 );
            Py_INCREF( _python_par_check_circular );
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
         if (unlikely( _python_par_allow_nan != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_allow_nan = args[ 4 ];
        Py_INCREF( _python_par_allow_nan );
    }
    else if ( _python_par_allow_nan == NULL )
    {
        if ( 4 + self->m_defaults_given >= 20  )
        {
            _python_par_allow_nan = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 20 );
            Py_INCREF( _python_par_allow_nan );
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
         if (unlikely( _python_par_cls != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_cls = args[ 5 ];
        Py_INCREF( _python_par_cls );
    }
    else if ( _python_par_cls == NULL )
    {
        if ( 5 + self->m_defaults_given >= 20  )
        {
            _python_par_cls = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 20 );
            Py_INCREF( _python_par_cls );
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
         if (unlikely( _python_par_indent != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_indent = args[ 6 ];
        Py_INCREF( _python_par_indent );
    }
    else if ( _python_par_indent == NULL )
    {
        if ( 6 + self->m_defaults_given >= 20  )
        {
            _python_par_indent = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 20 );
            Py_INCREF( _python_par_indent );
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
    if (likely( 7 < args_given ))
    {
         if (unlikely( _python_par_separators != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_separators = args[ 7 ];
        Py_INCREF( _python_par_separators );
    }
    else if ( _python_par_separators == NULL )
    {
        if ( 7 + self->m_defaults_given >= 20  )
        {
            _python_par_separators = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 20 );
            Py_INCREF( _python_par_separators );
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
    if (likely( 8 < args_given ))
    {
         if (unlikely( _python_par_encoding != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_encoding = args[ 8 ];
        Py_INCREF( _python_par_encoding );
    }
    else if ( _python_par_encoding == NULL )
    {
        if ( 8 + self->m_defaults_given >= 20  )
        {
            _python_par_encoding = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 20 );
            Py_INCREF( _python_par_encoding );
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
    if (likely( 9 < args_given ))
    {
         if (unlikely( _python_par_default != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 9 );
             goto error_exit;
         }

        _python_par_default = args[ 9 ];
        Py_INCREF( _python_par_default );
    }
    else if ( _python_par_default == NULL )
    {
        if ( 9 + self->m_defaults_given >= 20  )
        {
            _python_par_default = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 9 - 20 );
            Py_INCREF( _python_par_default );
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
    if (likely( 10 < args_given ))
    {
         if (unlikely( _python_par_use_decimal != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 10 );
             goto error_exit;
         }

        _python_par_use_decimal = args[ 10 ];
        Py_INCREF( _python_par_use_decimal );
    }
    else if ( _python_par_use_decimal == NULL )
    {
        if ( 10 + self->m_defaults_given >= 20  )
        {
            _python_par_use_decimal = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 10 - 20 );
            Py_INCREF( _python_par_use_decimal );
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
    if (likely( 11 < args_given ))
    {
         if (unlikely( _python_par_namedtuple_as_object != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 11 );
             goto error_exit;
         }

        _python_par_namedtuple_as_object = args[ 11 ];
        Py_INCREF( _python_par_namedtuple_as_object );
    }
    else if ( _python_par_namedtuple_as_object == NULL )
    {
        if ( 11 + self->m_defaults_given >= 20  )
        {
            _python_par_namedtuple_as_object = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 11 - 20 );
            Py_INCREF( _python_par_namedtuple_as_object );
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
    if (likely( 12 < args_given ))
    {
         if (unlikely( _python_par_tuple_as_array != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 12 );
             goto error_exit;
         }

        _python_par_tuple_as_array = args[ 12 ];
        Py_INCREF( _python_par_tuple_as_array );
    }
    else if ( _python_par_tuple_as_array == NULL )
    {
        if ( 12 + self->m_defaults_given >= 20  )
        {
            _python_par_tuple_as_array = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 12 - 20 );
            Py_INCREF( _python_par_tuple_as_array );
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
    if (likely( 13 < args_given ))
    {
         if (unlikely( _python_par_bigint_as_string != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 13 );
             goto error_exit;
         }

        _python_par_bigint_as_string = args[ 13 ];
        Py_INCREF( _python_par_bigint_as_string );
    }
    else if ( _python_par_bigint_as_string == NULL )
    {
        if ( 13 + self->m_defaults_given >= 20  )
        {
            _python_par_bigint_as_string = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 13 - 20 );
            Py_INCREF( _python_par_bigint_as_string );
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
    if (likely( 14 < args_given ))
    {
         if (unlikely( _python_par_sort_keys != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 14 );
             goto error_exit;
         }

        _python_par_sort_keys = args[ 14 ];
        Py_INCREF( _python_par_sort_keys );
    }
    else if ( _python_par_sort_keys == NULL )
    {
        if ( 14 + self->m_defaults_given >= 20  )
        {
            _python_par_sort_keys = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 14 - 20 );
            Py_INCREF( _python_par_sort_keys );
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
    if (likely( 15 < args_given ))
    {
         if (unlikely( _python_par_item_sort_key != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 15 );
             goto error_exit;
         }

        _python_par_item_sort_key = args[ 15 ];
        Py_INCREF( _python_par_item_sort_key );
    }
    else if ( _python_par_item_sort_key == NULL )
    {
        if ( 15 + self->m_defaults_given >= 20  )
        {
            _python_par_item_sort_key = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 15 - 20 );
            Py_INCREF( _python_par_item_sort_key );
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
    if (likely( 16 < args_given ))
    {
         if (unlikely( _python_par_for_json != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 16 );
             goto error_exit;
         }

        _python_par_for_json = args[ 16 ];
        Py_INCREF( _python_par_for_json );
    }
    else if ( _python_par_for_json == NULL )
    {
        if ( 16 + self->m_defaults_given >= 20  )
        {
            _python_par_for_json = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 16 - 20 );
            Py_INCREF( _python_par_for_json );
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
    if (likely( 17 < args_given ))
    {
         if (unlikely( _python_par_ignore_nan != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 17 );
             goto error_exit;
         }

        _python_par_ignore_nan = args[ 17 ];
        Py_INCREF( _python_par_ignore_nan );
    }
    else if ( _python_par_ignore_nan == NULL )
    {
        if ( 17 + self->m_defaults_given >= 20  )
        {
            _python_par_ignore_nan = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 17 - 20 );
            Py_INCREF( _python_par_ignore_nan );
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
    if (likely( 18 < args_given ))
    {
         if (unlikely( _python_par_int_as_string_bitcount != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 18 );
             goto error_exit;
         }

        _python_par_int_as_string_bitcount = args[ 18 ];
        Py_INCREF( _python_par_int_as_string_bitcount );
    }
    else if ( _python_par_int_as_string_bitcount == NULL )
    {
        if ( 18 + self->m_defaults_given >= 20  )
        {
            _python_par_int_as_string_bitcount = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 18 - 20 );
            Py_INCREF( _python_par_int_as_string_bitcount );
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
    if (likely( 19 < args_given ))
    {
         if (unlikely( _python_par_iterable_as_array != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 19 );
             goto error_exit;
         }

        _python_par_iterable_as_array = args[ 19 ];
        Py_INCREF( _python_par_iterable_as_array );
    }
    else if ( _python_par_iterable_as_array == NULL )
    {
        if ( 19 + self->m_defaults_given >= 20  )
        {
            _python_par_iterable_as_array = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 19 - 20 );
            Py_INCREF( _python_par_iterable_as_array );
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
    if (unlikely( _python_par_obj == NULL || _python_par_skipkeys == NULL || _python_par_ensure_ascii == NULL || _python_par_check_circular == NULL || _python_par_allow_nan == NULL || _python_par_cls == NULL || _python_par_indent == NULL || _python_par_separators == NULL || _python_par_encoding == NULL || _python_par_default == NULL || _python_par_use_decimal == NULL || _python_par_namedtuple_as_object == NULL || _python_par_tuple_as_array == NULL || _python_par_bigint_as_string == NULL || _python_par_sort_keys == NULL || _python_par_item_sort_key == NULL || _python_par_for_json == NULL || _python_par_ignore_nan == NULL || _python_par_int_as_string_bitcount == NULL || _python_par_iterable_as_array == NULL ))
    {
        PyObject *values[] = { _python_par_obj, _python_par_skipkeys, _python_par_ensure_ascii, _python_par_check_circular, _python_par_allow_nan, _python_par_cls, _python_par_indent, _python_par_separators, _python_par_encoding, _python_par_default, _python_par_use_decimal, _python_par_namedtuple_as_object, _python_par_tuple_as_array, _python_par_bigint_as_string, _python_par_sort_keys, _python_par_item_sort_key, _python_par_for_json, _python_par_ignore_nan, _python_par_int_as_string_bitcount, _python_par_iterable_as_array };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 20 ))
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



    return impl_function_4_dumps_of_simplejson( self, _python_par_obj, _python_par_skipkeys, _python_par_ensure_ascii, _python_par_check_circular, _python_par_allow_nan, _python_par_cls, _python_par_indent, _python_par_separators, _python_par_encoding, _python_par_default, _python_par_use_decimal, _python_par_namedtuple_as_object, _python_par_tuple_as_array, _python_par_bigint_as_string, _python_par_sort_keys, _python_par_item_sort_key, _python_par_for_json, _python_par_ignore_nan, _python_par_int_as_string_bitcount, _python_par_iterable_as_array, _python_par_kw );

error_exit:;

    Py_XDECREF( _python_par_obj );
    Py_XDECREF( _python_par_skipkeys );
    Py_XDECREF( _python_par_ensure_ascii );
    Py_XDECREF( _python_par_check_circular );
    Py_XDECREF( _python_par_allow_nan );
    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_indent );
    Py_XDECREF( _python_par_separators );
    Py_XDECREF( _python_par_encoding );
    Py_XDECREF( _python_par_default );
    Py_XDECREF( _python_par_use_decimal );
    Py_XDECREF( _python_par_namedtuple_as_object );
    Py_XDECREF( _python_par_tuple_as_array );
    Py_XDECREF( _python_par_bigint_as_string );
    Py_XDECREF( _python_par_sort_keys );
    Py_XDECREF( _python_par_item_sort_key );
    Py_XDECREF( _python_par_for_json );
    Py_XDECREF( _python_par_ignore_nan );
    Py_XDECREF( _python_par_int_as_string_bitcount );
    Py_XDECREF( _python_par_iterable_as_array );
    Py_XDECREF( _python_par_kw );

    return NULL;
}

static PyObject *dparse_function_4_dumps_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 21 )
    {
        return impl_function_4_dumps_of_simplejson( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), INCREASE_REFCOUNT( args[ 9 ] ), INCREASE_REFCOUNT( args[ 10 ] ), INCREASE_REFCOUNT( args[ 11 ] ), INCREASE_REFCOUNT( args[ 12 ] ), INCREASE_REFCOUNT( args[ 13 ] ), INCREASE_REFCOUNT( args[ 14 ] ), INCREASE_REFCOUNT( args[ 15 ] ), INCREASE_REFCOUNT( args[ 16 ] ), INCREASE_REFCOUNT( args[ 17 ] ), INCREASE_REFCOUNT( args[ 18 ] ), INCREASE_REFCOUNT( args[ 19 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_4_dumps_of_simplejson( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_load_of_simplejson( Nuitka_FunctionObject *self, PyObject *_python_par_fp, PyObject *_python_par_encoding, PyObject *_python_par_cls, PyObject *_python_par_object_hook, PyObject *_python_par_parse_float, PyObject *_python_par_parse_int, PyObject *_python_par_parse_constant, PyObject *_python_par_object_pairs_hook, PyObject *_python_par_use_decimal, PyObject *_python_par_namedtuple_as_object, PyObject *_python_par_tuple_as_array, PyObject *_python_par_kw )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = _python_par_fp;
    PyObject *par_encoding = _python_par_encoding;
    PyObject *par_cls = _python_par_cls;
    PyObject *par_object_hook = _python_par_object_hook;
    PyObject *par_parse_float = _python_par_parse_float;
    PyObject *par_parse_int = _python_par_parse_int;
    PyObject *par_parse_constant = _python_par_parse_constant;
    PyObject *par_object_pairs_hook = _python_par_object_pairs_hook;
    PyObject *par_use_decimal = _python_par_use_decimal;
    PyObject *par_namedtuple_as_object = _python_par_namedtuple_as_object;
    PyObject *par_tuple_as_array = _python_par_tuple_as_array;
    PyObject *par_kw = _python_par_kw;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_frame_locals;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ad5c33b52d126f6ff2a8e787d0fc613f, module_simplejson );
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
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_loads );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_loads );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99477 ], 27, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 455;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_source_name_1 = par_fp;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_read );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 455;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 455;
    tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 455;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 8 );
    tmp_dict_value_1 = par_encoding;

    tmp_dict_key_1 = const_str_plain_encoding;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_cls;

    tmp_dict_key_2 = const_str_plain_cls;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_object_hook;

    tmp_dict_key_3 = const_str_plain_object_hook;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_parse_float;

    tmp_dict_key_4 = const_str_plain_parse_float;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = par_parse_int;

    tmp_dict_key_5 = const_str_plain_parse_int;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = par_parse_constant;

    tmp_dict_key_6 = const_str_plain_parse_constant;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = par_object_pairs_hook;

    tmp_dict_key_7 = const_str_plain_object_pairs_hook;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_value_8 = par_use_decimal;

    tmp_dict_key_8 = const_str_plain_use_decimal;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dircall_arg4_1 = par_kw;

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg4_1 );
    tmp_return_value = impl_function_4_complex_call_helper_pos_keywords_star_dict_of___internal__( tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 459;
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
            if ( par_fp != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fp,
                    par_fp
                );
                assert( tmp_res != -1 );

            }
            if ( par_encoding != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encoding,
                    par_encoding
                );
                assert( tmp_res != -1 );

            }
            if ( par_cls != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
                );
                assert( tmp_res != -1 );

            }
            if ( par_object_hook != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_object_hook,
                    par_object_hook
                );
                assert( tmp_res != -1 );

            }
            if ( par_parse_float != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parse_float,
                    par_parse_float
                );
                assert( tmp_res != -1 );

            }
            if ( par_parse_int != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parse_int,
                    par_parse_int
                );
                assert( tmp_res != -1 );

            }
            if ( par_parse_constant != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parse_constant,
                    par_parse_constant
                );
                assert( tmp_res != -1 );

            }
            if ( par_object_pairs_hook != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_object_pairs_hook,
                    par_object_pairs_hook
                );
                assert( tmp_res != -1 );

            }
            if ( par_use_decimal != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_use_decimal,
                    par_use_decimal
                );
                assert( tmp_res != -1 );

            }
            if ( par_namedtuple_as_object != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_namedtuple_as_object,
                    par_namedtuple_as_object
                );
                assert( tmp_res != -1 );

            }
            if ( par_tuple_as_array != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tuple_as_array,
                    par_tuple_as_array
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
    NUITKA_CANNOT_GET_HERE( function_5_load_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_fp );
    par_fp = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_object_hook );
    par_object_hook = NULL;

    Py_XDECREF( par_parse_float );
    par_parse_float = NULL;

    Py_XDECREF( par_parse_int );
    par_parse_int = NULL;

    Py_XDECREF( par_parse_constant );
    par_parse_constant = NULL;

    Py_XDECREF( par_object_pairs_hook );
    par_object_pairs_hook = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    Py_XDECREF( par_namedtuple_as_object );
    par_namedtuple_as_object = NULL;

    Py_XDECREF( par_tuple_as_array );
    par_tuple_as_array = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

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

    Py_XDECREF( par_fp );
    par_fp = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_object_hook );
    par_object_hook = NULL;

    Py_XDECREF( par_parse_float );
    par_parse_float = NULL;

    Py_XDECREF( par_parse_int );
    par_parse_int = NULL;

    Py_XDECREF( par_parse_constant );
    par_parse_constant = NULL;

    Py_XDECREF( par_object_pairs_hook );
    par_object_pairs_hook = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    CHECK_OBJECT( (PyObject *)par_namedtuple_as_object );
    Py_DECREF( par_namedtuple_as_object );
    par_namedtuple_as_object = NULL;

    CHECK_OBJECT( (PyObject *)par_tuple_as_array );
    Py_DECREF( par_tuple_as_array );
    par_tuple_as_array = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5_load_of_simplejson );
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
static PyObject *fparse_function_5_load_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_fp = NULL;
    PyObject *_python_par_encoding = NULL;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_object_hook = NULL;
    PyObject *_python_par_parse_float = NULL;
    PyObject *_python_par_parse_int = NULL;
    PyObject *_python_par_parse_constant = NULL;
    PyObject *_python_par_object_pairs_hook = NULL;
    PyObject *_python_par_use_decimal = NULL;
    PyObject *_python_par_namedtuple_as_object = NULL;
    PyObject *_python_par_tuple_as_array = NULL;
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
                        PyErr_Format( PyExc_TypeError, "load() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "load() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "load() keywords must be strings" );
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

    // Check if argument fp was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_fp );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_fp == NULL );

            _python_par_fp = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_fp );

            kw_found += 1;
        }
    }

    // Check if argument encoding was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_encoding );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_encoding == NULL );

            _python_par_encoding = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_encoding );

            kw_found += 1;
        }
    }

    // Check if argument cls was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_cls );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_cls == NULL );

            _python_par_cls = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_cls );

            kw_found += 1;
        }
    }

    // Check if argument object_hook was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_object_hook );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_object_hook == NULL );

            _python_par_object_hook = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_object_hook );

            kw_found += 1;
        }
    }

    // Check if argument parse_float was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_parse_float );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_parse_float == NULL );

            _python_par_parse_float = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_parse_float );

            kw_found += 1;
        }
    }

    // Check if argument parse_int was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_parse_int );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_parse_int == NULL );

            _python_par_parse_int = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_parse_int );

            kw_found += 1;
        }
    }

    // Check if argument parse_constant was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_parse_constant );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_parse_constant == NULL );

            _python_par_parse_constant = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_parse_constant );

            kw_found += 1;
        }
    }

    // Check if argument object_pairs_hook was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_object_pairs_hook );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_object_pairs_hook == NULL );

            _python_par_object_pairs_hook = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_object_pairs_hook );

            kw_found += 1;
        }
    }

    // Check if argument use_decimal was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_use_decimal );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_use_decimal == NULL );

            _python_par_use_decimal = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_use_decimal );

            kw_found += 1;
        }
    }

    // Check if argument namedtuple_as_object was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_namedtuple_as_object );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_namedtuple_as_object == NULL );

            _python_par_namedtuple_as_object = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_namedtuple_as_object );

            kw_found += 1;
        }
    }

    // Check if argument tuple_as_array was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_tuple_as_array );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_tuple_as_array == NULL );

            _python_par_tuple_as_array = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_tuple_as_array );

            kw_found += 1;
        }
    }

    // Copy normal parameter values given as part of the argument list to the
    // respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_fp != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_fp = args[ 0 ];
        Py_INCREF( _python_par_fp );
    }
    else if ( _python_par_fp == NULL )
    {
        if ( 0 + self->m_defaults_given >= 11  )
        {
            _python_par_fp = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 11 );
            Py_INCREF( _python_par_fp );
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
         if (unlikely( _python_par_encoding != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_encoding = args[ 1 ];
        Py_INCREF( _python_par_encoding );
    }
    else if ( _python_par_encoding == NULL )
    {
        if ( 1 + self->m_defaults_given >= 11  )
        {
            _python_par_encoding = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 11 );
            Py_INCREF( _python_par_encoding );
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
         if (unlikely( _python_par_cls != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_cls = args[ 2 ];
        Py_INCREF( _python_par_cls );
    }
    else if ( _python_par_cls == NULL )
    {
        if ( 2 + self->m_defaults_given >= 11  )
        {
            _python_par_cls = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 11 );
            Py_INCREF( _python_par_cls );
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
         if (unlikely( _python_par_object_hook != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_object_hook = args[ 3 ];
        Py_INCREF( _python_par_object_hook );
    }
    else if ( _python_par_object_hook == NULL )
    {
        if ( 3 + self->m_defaults_given >= 11  )
        {
            _python_par_object_hook = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 11 );
            Py_INCREF( _python_par_object_hook );
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
         if (unlikely( _python_par_parse_float != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_parse_float = args[ 4 ];
        Py_INCREF( _python_par_parse_float );
    }
    else if ( _python_par_parse_float == NULL )
    {
        if ( 4 + self->m_defaults_given >= 11  )
        {
            _python_par_parse_float = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 11 );
            Py_INCREF( _python_par_parse_float );
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
         if (unlikely( _python_par_parse_int != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_parse_int = args[ 5 ];
        Py_INCREF( _python_par_parse_int );
    }
    else if ( _python_par_parse_int == NULL )
    {
        if ( 5 + self->m_defaults_given >= 11  )
        {
            _python_par_parse_int = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 11 );
            Py_INCREF( _python_par_parse_int );
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
         if (unlikely( _python_par_parse_constant != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_parse_constant = args[ 6 ];
        Py_INCREF( _python_par_parse_constant );
    }
    else if ( _python_par_parse_constant == NULL )
    {
        if ( 6 + self->m_defaults_given >= 11  )
        {
            _python_par_parse_constant = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 11 );
            Py_INCREF( _python_par_parse_constant );
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
    if (likely( 7 < args_given ))
    {
         if (unlikely( _python_par_object_pairs_hook != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_object_pairs_hook = args[ 7 ];
        Py_INCREF( _python_par_object_pairs_hook );
    }
    else if ( _python_par_object_pairs_hook == NULL )
    {
        if ( 7 + self->m_defaults_given >= 11  )
        {
            _python_par_object_pairs_hook = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 11 );
            Py_INCREF( _python_par_object_pairs_hook );
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
    if (likely( 8 < args_given ))
    {
         if (unlikely( _python_par_use_decimal != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_use_decimal = args[ 8 ];
        Py_INCREF( _python_par_use_decimal );
    }
    else if ( _python_par_use_decimal == NULL )
    {
        if ( 8 + self->m_defaults_given >= 11  )
        {
            _python_par_use_decimal = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 11 );
            Py_INCREF( _python_par_use_decimal );
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
    if (likely( 9 < args_given ))
    {
         if (unlikely( _python_par_namedtuple_as_object != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 9 );
             goto error_exit;
         }

        _python_par_namedtuple_as_object = args[ 9 ];
        Py_INCREF( _python_par_namedtuple_as_object );
    }
    else if ( _python_par_namedtuple_as_object == NULL )
    {
        if ( 9 + self->m_defaults_given >= 11  )
        {
            _python_par_namedtuple_as_object = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 9 - 11 );
            Py_INCREF( _python_par_namedtuple_as_object );
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
    if (likely( 10 < args_given ))
    {
         if (unlikely( _python_par_tuple_as_array != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 10 );
             goto error_exit;
         }

        _python_par_tuple_as_array = args[ 10 ];
        Py_INCREF( _python_par_tuple_as_array );
    }
    else if ( _python_par_tuple_as_array == NULL )
    {
        if ( 10 + self->m_defaults_given >= 11  )
        {
            _python_par_tuple_as_array = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 10 - 11 );
            Py_INCREF( _python_par_tuple_as_array );
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
    if (unlikely( _python_par_fp == NULL || _python_par_encoding == NULL || _python_par_cls == NULL || _python_par_object_hook == NULL || _python_par_parse_float == NULL || _python_par_parse_int == NULL || _python_par_parse_constant == NULL || _python_par_object_pairs_hook == NULL || _python_par_use_decimal == NULL || _python_par_namedtuple_as_object == NULL || _python_par_tuple_as_array == NULL ))
    {
        PyObject *values[] = { _python_par_fp, _python_par_encoding, _python_par_cls, _python_par_object_hook, _python_par_parse_float, _python_par_parse_int, _python_par_parse_constant, _python_par_object_pairs_hook, _python_par_use_decimal, _python_par_namedtuple_as_object, _python_par_tuple_as_array };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 11 ))
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



    return impl_function_5_load_of_simplejson( self, _python_par_fp, _python_par_encoding, _python_par_cls, _python_par_object_hook, _python_par_parse_float, _python_par_parse_int, _python_par_parse_constant, _python_par_object_pairs_hook, _python_par_use_decimal, _python_par_namedtuple_as_object, _python_par_tuple_as_array, _python_par_kw );

error_exit:;

    Py_XDECREF( _python_par_fp );
    Py_XDECREF( _python_par_encoding );
    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_object_hook );
    Py_XDECREF( _python_par_parse_float );
    Py_XDECREF( _python_par_parse_int );
    Py_XDECREF( _python_par_parse_constant );
    Py_XDECREF( _python_par_object_pairs_hook );
    Py_XDECREF( _python_par_use_decimal );
    Py_XDECREF( _python_par_namedtuple_as_object );
    Py_XDECREF( _python_par_tuple_as_array );
    Py_XDECREF( _python_par_kw );

    return NULL;
}

static PyObject *dparse_function_5_load_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 12 )
    {
        return impl_function_5_load_of_simplejson( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), INCREASE_REFCOUNT( args[ 9 ] ), INCREASE_REFCOUNT( args[ 10 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_5_load_of_simplejson( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_loads_of_simplejson( Nuitka_FunctionObject *self, PyObject *_python_par_s, PyObject *_python_par_encoding, PyObject *_python_par_cls, PyObject *_python_par_object_hook, PyObject *_python_par_parse_float, PyObject *_python_par_parse_int, PyObject *_python_par_parse_constant, PyObject *_python_par_object_pairs_hook, PyObject *_python_par_use_decimal, PyObject *_python_par_kw )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = _python_par_s;
    PyObject *par_encoding = _python_par_encoding;
    PyObject *par_cls = _python_par_cls;
    PyObject *par_object_hook = _python_par_object_hook;
    PyObject *par_parse_float = _python_par_parse_float;
    PyObject *par_parse_int = _python_par_parse_int;
    PyObject *par_parse_constant = _python_par_parse_constant;
    PyObject *par_object_pairs_hook = _python_par_object_pairs_hook;
    PyObject *par_use_decimal = _python_par_use_decimal;
    PyObject *par_kw = _python_par_kw;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    int tmp_and_left_truth_5;
    int tmp_and_left_truth_6;
    int tmp_and_left_truth_7;
    int tmp_and_left_truth_8;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_left_value_5;
    PyObject *tmp_and_left_value_6;
    PyObject *tmp_and_left_value_7;
    PyObject *tmp_and_left_value_8;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_and_right_value_5;
    PyObject *tmp_and_right_value_6;
    PyObject *tmp_and_right_value_7;
    PyObject *tmp_and_right_value_8;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
    bool tmp_isnot_6;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_328c8e0e67972e8fb63cf28387c0ce32, module_simplejson );
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
    tmp_compexpr_left_1 = par_cls;

    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
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
    tmp_compexpr_left_2 = par_encoding;

    tmp_compexpr_right_2 = Py_None;
    tmp_and_left_value_2 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    assert( !(tmp_and_left_truth_2 == -1) );
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_compexpr_left_3 = par_object_hook;

    tmp_compexpr_right_3 = Py_None;
    tmp_and_left_value_3 = BOOL_FROM( tmp_compexpr_left_3 == tmp_compexpr_right_3 );
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    assert( !(tmp_and_left_truth_3 == -1) );
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    tmp_compexpr_left_4 = par_parse_int;

    tmp_compexpr_right_4 = Py_None;
    tmp_and_left_value_4 = BOOL_FROM( tmp_compexpr_left_4 == tmp_compexpr_right_4 );
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    assert( !(tmp_and_left_truth_4 == -1) );
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    tmp_compexpr_left_5 = par_parse_float;

    tmp_compexpr_right_5 = Py_None;
    tmp_and_left_value_5 = BOOL_FROM( tmp_compexpr_left_5 == tmp_compexpr_right_5 );
    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    assert( !(tmp_and_left_truth_5 == -1) );
    if ( tmp_and_left_truth_5 == 1 )
    {
        goto and_right_5;
    }
    else
    {
        goto and_left_5;
    }
    and_right_5:;
    tmp_compexpr_left_6 = par_parse_constant;

    tmp_compexpr_right_6 = Py_None;
    tmp_and_left_value_6 = BOOL_FROM( tmp_compexpr_left_6 == tmp_compexpr_right_6 );
    tmp_and_left_truth_6 = CHECK_IF_TRUE( tmp_and_left_value_6 );
    assert( !(tmp_and_left_truth_6 == -1) );
    if ( tmp_and_left_truth_6 == 1 )
    {
        goto and_right_6;
    }
    else
    {
        goto and_left_6;
    }
    and_right_6:;
    tmp_compexpr_left_7 = par_object_pairs_hook;

    tmp_compexpr_right_7 = Py_None;
    tmp_and_left_value_7 = BOOL_FROM( tmp_compexpr_left_7 == tmp_compexpr_right_7 );
    tmp_and_left_truth_7 = CHECK_IF_TRUE( tmp_and_left_value_7 );
    assert( !(tmp_and_left_truth_7 == -1) );
    if ( tmp_and_left_truth_7 == 1 )
    {
        goto and_right_7;
    }
    else
    {
        goto and_left_7;
    }
    and_right_7:;
    tmp_operand_name_1 = par_use_decimal;

    tmp_and_left_value_8 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_8 = CHECK_IF_TRUE( tmp_and_left_value_8 );
    if ( tmp_and_left_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_8 == 1 )
    {
        goto and_right_8;
    }
    else
    {
        goto and_left_8;
    }
    and_right_8:;
    tmp_operand_name_2 = par_kw;

    tmp_and_right_value_8 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_and_right_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_7 = tmp_and_right_value_8;
    goto and_end_8;
    and_left_8:;
    tmp_and_right_value_7 = tmp_and_left_value_8;
    and_end_8:;
    tmp_and_right_value_6 = tmp_and_right_value_7;
    goto and_end_7;
    and_left_7:;
    tmp_and_right_value_6 = tmp_and_left_value_7;
    and_end_7:;
    tmp_and_right_value_5 = tmp_and_right_value_6;
    goto and_end_6;
    and_left_6:;
    tmp_and_right_value_5 = tmp_and_left_value_6;
    and_end_6:;
    tmp_and_right_value_4 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    tmp_and_right_value_4 = tmp_and_left_value_5;
    and_end_5:;
    tmp_and_right_value_3 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_and_right_value_3 = tmp_and_left_value_4;
    and_end_4:;
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
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


        exception_lineno = 515;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__default_decoder );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__default_decoder );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99504 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 516;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_decode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 516;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_s;

    frame_function->f_lineno = 516;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 516;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_1 = par_cls;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9311 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 517;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONDecoder );

    if (unlikely( tmp_assign_source_1 == NULL ))
    {
        tmp_assign_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecoder );
    }

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98526 ], 33, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 518;
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = par_cls;
        par_cls = tmp_assign_source_1;
        Py_INCREF( par_cls );
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_compare_left_2 = par_object_hook;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99542 ], 57, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 519;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_ass_subvalue_1 = par_object_hook;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99542 ], 57, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 520;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = par_kw;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15606 ], 48, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 520;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_object_hook;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 520;
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_compare_left_3 = par_object_pairs_hook;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99599 ], 63, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_ass_subvalue_2 = par_object_pairs_hook;

    if ( tmp_ass_subvalue_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99599 ], 63, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 522;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_2 = par_kw;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15606 ], 48, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 522;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain_object_pairs_hook;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 522;
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_compare_left_4 = par_parse_float;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99662 ], 57, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 523;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_ass_subvalue_3 = par_parse_float;

    if ( tmp_ass_subvalue_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99662 ], 57, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 524;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_3 = par_kw;

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15606 ], 48, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 524;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_3 = const_str_plain_parse_float;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 524;
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    tmp_compare_left_5 = par_parse_int;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99719 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 525;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = Py_None;
    tmp_isnot_4 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if ( tmp_isnot_4 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_ass_subvalue_4 = par_parse_int;

    if ( tmp_ass_subvalue_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99719 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 526;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_4 = par_kw;

    if ( tmp_ass_subscribed_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15606 ], 48, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 526;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_4 = const_str_plain_parse_int;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 526;
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    tmp_compare_left_6 = par_parse_constant;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99774 ], 60, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 527;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = Py_None;
    tmp_isnot_5 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if ( tmp_isnot_5 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_ass_subvalue_5 = par_parse_constant;

    if ( tmp_ass_subvalue_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99774 ], 60, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 528;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_5 = par_kw;

    if ( tmp_ass_subscribed_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15606 ], 48, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 528;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_5 = const_str_plain_parse_constant;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 528;
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    tmp_cond_value_2 = par_use_decimal;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98932 ], 57, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 529;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 529;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_compare_left_7 = par_parse_float;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99662 ], 57, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 530;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = Py_None;
    tmp_isnot_6 = ( tmp_compare_left_7 != tmp_compare_right_7 );
    if ( tmp_isnot_6 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_make_exception_arg_1 = const_str_digest_021b885e98285b326436109d09a4f0c5;
    frame_function->f_lineno = 531;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 531;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_9:;
    tmp_ass_subvalue_6 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_Decimal );

    if (unlikely( tmp_ass_subvalue_6 == NULL ))
    {
        tmp_ass_subvalue_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Decimal );
    }

    if ( tmp_ass_subvalue_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99834 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 532;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_6 = par_kw;

    if ( tmp_ass_subscribed_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15606 ], 48, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 532;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_6 = const_str_plain_parse_float;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 532;
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    tmp_dircall_arg1_1 = par_cls;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9311 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 533;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_encoding;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25058 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 533;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_encoding;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dircall_arg3_1 = par_kw;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15606 ], 48, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 533;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );
    tmp_source_name_2 = impl_function_9_complex_call_helper_keywords_star_dict_of___internal__( tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 533;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_decode );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 533;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_s;

    frame_function->f_lineno = 533;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 533;
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
            if ( par_s != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_s,
                    par_s
                );
                assert( tmp_res != -1 );

            }
            if ( par_encoding != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encoding,
                    par_encoding
                );
                assert( tmp_res != -1 );

            }
            if ( par_cls != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
                );
                assert( tmp_res != -1 );

            }
            if ( par_object_hook != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_object_hook,
                    par_object_hook
                );
                assert( tmp_res != -1 );

            }
            if ( par_parse_float != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parse_float,
                    par_parse_float
                );
                assert( tmp_res != -1 );

            }
            if ( par_parse_int != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parse_int,
                    par_parse_int
                );
                assert( tmp_res != -1 );

            }
            if ( par_parse_constant != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parse_constant,
                    par_parse_constant
                );
                assert( tmp_res != -1 );

            }
            if ( par_object_pairs_hook != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_object_pairs_hook,
                    par_object_pairs_hook
                );
                assert( tmp_res != -1 );

            }
            if ( par_use_decimal != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_use_decimal,
                    par_use_decimal
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
    NUITKA_CANNOT_GET_HERE( function_6_loads_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_object_hook );
    par_object_hook = NULL;

    Py_XDECREF( par_parse_float );
    par_parse_float = NULL;

    Py_XDECREF( par_parse_int );
    par_parse_int = NULL;

    Py_XDECREF( par_parse_constant );
    par_parse_constant = NULL;

    Py_XDECREF( par_object_pairs_hook );
    par_object_pairs_hook = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

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

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_object_hook );
    par_object_hook = NULL;

    Py_XDECREF( par_parse_float );
    par_parse_float = NULL;

    Py_XDECREF( par_parse_int );
    par_parse_int = NULL;

    Py_XDECREF( par_parse_constant );
    par_parse_constant = NULL;

    Py_XDECREF( par_object_pairs_hook );
    par_object_pairs_hook = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_6_loads_of_simplejson );
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
static PyObject *fparse_function_6_loads_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_s = NULL;
    PyObject *_python_par_encoding = NULL;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_object_hook = NULL;
    PyObject *_python_par_parse_float = NULL;
    PyObject *_python_par_parse_int = NULL;
    PyObject *_python_par_parse_constant = NULL;
    PyObject *_python_par_object_pairs_hook = NULL;
    PyObject *_python_par_use_decimal = NULL;
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
                        PyErr_Format( PyExc_TypeError, "loads() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "loads() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "loads() keywords must be strings" );
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

    // Check if argument s was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_s );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_s == NULL );

            _python_par_s = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_s );

            kw_found += 1;
        }
    }

    // Check if argument encoding was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_encoding );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_encoding == NULL );

            _python_par_encoding = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_encoding );

            kw_found += 1;
        }
    }

    // Check if argument cls was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_cls );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_cls == NULL );

            _python_par_cls = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_cls );

            kw_found += 1;
        }
    }

    // Check if argument object_hook was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_object_hook );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_object_hook == NULL );

            _python_par_object_hook = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_object_hook );

            kw_found += 1;
        }
    }

    // Check if argument parse_float was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_parse_float );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_parse_float == NULL );

            _python_par_parse_float = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_parse_float );

            kw_found += 1;
        }
    }

    // Check if argument parse_int was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_parse_int );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_parse_int == NULL );

            _python_par_parse_int = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_parse_int );

            kw_found += 1;
        }
    }

    // Check if argument parse_constant was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_parse_constant );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_parse_constant == NULL );

            _python_par_parse_constant = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_parse_constant );

            kw_found += 1;
        }
    }

    // Check if argument object_pairs_hook was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_object_pairs_hook );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_object_pairs_hook == NULL );

            _python_par_object_pairs_hook = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_object_pairs_hook );

            kw_found += 1;
        }
    }

    // Check if argument use_decimal was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_use_decimal );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_use_decimal == NULL );

            _python_par_use_decimal = kw_arg_value;
            Py_INCREF( kw_arg_value );

            PyDict_DelItem( _python_par_kw, const_str_plain_use_decimal );

            kw_found += 1;
        }
    }

    // Copy normal parameter values given as part of the argument list to the
    // respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_s != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_s = args[ 0 ];
        Py_INCREF( _python_par_s );
    }
    else if ( _python_par_s == NULL )
    {
        if ( 0 + self->m_defaults_given >= 9  )
        {
            _python_par_s = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 9 );
            Py_INCREF( _python_par_s );
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
         if (unlikely( _python_par_encoding != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_encoding = args[ 1 ];
        Py_INCREF( _python_par_encoding );
    }
    else if ( _python_par_encoding == NULL )
    {
        if ( 1 + self->m_defaults_given >= 9  )
        {
            _python_par_encoding = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 9 );
            Py_INCREF( _python_par_encoding );
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
         if (unlikely( _python_par_cls != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_cls = args[ 2 ];
        Py_INCREF( _python_par_cls );
    }
    else if ( _python_par_cls == NULL )
    {
        if ( 2 + self->m_defaults_given >= 9  )
        {
            _python_par_cls = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 9 );
            Py_INCREF( _python_par_cls );
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
         if (unlikely( _python_par_object_hook != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_object_hook = args[ 3 ];
        Py_INCREF( _python_par_object_hook );
    }
    else if ( _python_par_object_hook == NULL )
    {
        if ( 3 + self->m_defaults_given >= 9  )
        {
            _python_par_object_hook = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 9 );
            Py_INCREF( _python_par_object_hook );
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
         if (unlikely( _python_par_parse_float != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_parse_float = args[ 4 ];
        Py_INCREF( _python_par_parse_float );
    }
    else if ( _python_par_parse_float == NULL )
    {
        if ( 4 + self->m_defaults_given >= 9  )
        {
            _python_par_parse_float = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 9 );
            Py_INCREF( _python_par_parse_float );
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
         if (unlikely( _python_par_parse_int != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_parse_int = args[ 5 ];
        Py_INCREF( _python_par_parse_int );
    }
    else if ( _python_par_parse_int == NULL )
    {
        if ( 5 + self->m_defaults_given >= 9  )
        {
            _python_par_parse_int = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 9 );
            Py_INCREF( _python_par_parse_int );
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
         if (unlikely( _python_par_parse_constant != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_parse_constant = args[ 6 ];
        Py_INCREF( _python_par_parse_constant );
    }
    else if ( _python_par_parse_constant == NULL )
    {
        if ( 6 + self->m_defaults_given >= 9  )
        {
            _python_par_parse_constant = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 9 );
            Py_INCREF( _python_par_parse_constant );
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
    if (likely( 7 < args_given ))
    {
         if (unlikely( _python_par_object_pairs_hook != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_object_pairs_hook = args[ 7 ];
        Py_INCREF( _python_par_object_pairs_hook );
    }
    else if ( _python_par_object_pairs_hook == NULL )
    {
        if ( 7 + self->m_defaults_given >= 9  )
        {
            _python_par_object_pairs_hook = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 9 );
            Py_INCREF( _python_par_object_pairs_hook );
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
    if (likely( 8 < args_given ))
    {
         if (unlikely( _python_par_use_decimal != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_use_decimal = args[ 8 ];
        Py_INCREF( _python_par_use_decimal );
    }
    else if ( _python_par_use_decimal == NULL )
    {
        if ( 8 + self->m_defaults_given >= 9  )
        {
            _python_par_use_decimal = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 9 );
            Py_INCREF( _python_par_use_decimal );
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
    if (unlikely( _python_par_s == NULL || _python_par_encoding == NULL || _python_par_cls == NULL || _python_par_object_hook == NULL || _python_par_parse_float == NULL || _python_par_parse_int == NULL || _python_par_parse_constant == NULL || _python_par_object_pairs_hook == NULL || _python_par_use_decimal == NULL ))
    {
        PyObject *values[] = { _python_par_s, _python_par_encoding, _python_par_cls, _python_par_object_hook, _python_par_parse_float, _python_par_parse_int, _python_par_parse_constant, _python_par_object_pairs_hook, _python_par_use_decimal };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 9 ))
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



    return impl_function_6_loads_of_simplejson( self, _python_par_s, _python_par_encoding, _python_par_cls, _python_par_object_hook, _python_par_parse_float, _python_par_parse_int, _python_par_parse_constant, _python_par_object_pairs_hook, _python_par_use_decimal, _python_par_kw );

error_exit:;

    Py_XDECREF( _python_par_s );
    Py_XDECREF( _python_par_encoding );
    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_object_hook );
    Py_XDECREF( _python_par_parse_float );
    Py_XDECREF( _python_par_parse_int );
    Py_XDECREF( _python_par_parse_constant );
    Py_XDECREF( _python_par_object_pairs_hook );
    Py_XDECREF( _python_par_use_decimal );
    Py_XDECREF( _python_par_kw );

    return NULL;
}

static PyObject *dparse_function_6_loads_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 10 )
    {
        return impl_function_6_loads_of_simplejson( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_6_loads_of_simplejson( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7__toggle_speedups_of_simplejson( Nuitka_FunctionObject *self, PyObject *_python_par_enabled )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_enabled = _python_par_enabled;
    PyObject *var_dec = NULL;
    PyObject *var_enc = NULL;
    PyObject *var_scan = NULL;
    PyObject *var_c_make_encoder = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_locals_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6d8658c0fdf91e14f8571f5521286a09, module_simplejson );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_simplejson)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( var_dec != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_dec,
            var_dec
        );
        assert( tmp_res != -1 );

    }
    if ( var_enc != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_enc,
            var_enc
        );
        assert( tmp_res != -1 );

    }
    if ( var_scan != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_scan,
            var_scan
        );
        assert( tmp_res != -1 );

    }
    if ( var_c_make_encoder != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_c_make_encoder,
            var_c_make_encoder
        );
        assert( tmp_res != -1 );

    }
    if ( par_enabled != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_enabled,
            par_enabled
        );
        assert( tmp_res != -1 );

    }
    frame_function->f_lineno = 537;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_empty, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_decoder_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 537;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_decoder );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 537;
        goto frame_exception_exit_1;
    }
    assert( var_dec == NULL );
    var_dec = tmp_assign_source_1;

    tmp_import_globals_2 = ((PyModuleObject *)module_simplejson)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ( var_dec != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_dec,
            var_dec
        );
        assert( tmp_res != -1 );

    }
    if ( var_enc != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_enc,
            var_enc
        );
        assert( tmp_res != -1 );

    }
    if ( var_scan != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_scan,
            var_scan
        );
        assert( tmp_res != -1 );

    }
    if ( var_c_make_encoder != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_c_make_encoder,
            var_c_make_encoder
        );
        assert( tmp_res != -1 );

    }
    if ( par_enabled != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_enabled,
            par_enabled
        );
        assert( tmp_res != -1 );

    }
    frame_function->f_lineno = 538;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_empty, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_encoder_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_encoder );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        goto frame_exception_exit_1;
    }
    assert( var_enc == NULL );
    var_enc = tmp_assign_source_2;

    tmp_import_globals_3 = ((PyModuleObject *)module_simplejson)->md_dict;
    tmp_import_locals_3 = PyDict_New();
    if ( var_dec != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_dec,
            var_dec
        );
        assert( tmp_res != -1 );

    }
    if ( var_enc != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_enc,
            var_enc
        );
        assert( tmp_res != -1 );

    }
    if ( var_scan != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_scan,
            var_scan
        );
        assert( tmp_res != -1 );

    }
    if ( var_c_make_encoder != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_c_make_encoder,
            var_c_make_encoder
        );
        assert( tmp_res != -1 );

    }
    if ( par_enabled != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_enabled,
            par_enabled
        );
        assert( tmp_res != -1 );

    }
    frame_function->f_lineno = 539;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_empty, tmp_import_globals_3, tmp_import_locals_3, const_tuple_str_plain_scanner_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_3 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 539;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_scanner );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 539;
        goto frame_exception_exit_1;
    }
    assert( var_scan == NULL );
    var_scan = tmp_assign_source_3;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__import_c_make_encoder );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__import_c_make_encoder );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99863 ], 44, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 540;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 540;
    tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 540;
        goto frame_exception_exit_1;
    }
    assert( var_c_make_encoder == NULL );
    var_c_make_encoder = tmp_assign_source_4;

    tmp_cond_value_1 = par_enabled;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 541;
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
    tmp_source_name_1 = var_dec;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99907 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 542;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_c_scanstring );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 542;
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_source_name_2 = var_dec;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99907 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 542;
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_py_scanstring );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assattr_name_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_assattr_target_1 = var_dec;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99907 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 542;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_scanstring, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 542;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assattr_name_2 = var_c_make_encoder;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99956 ], 60, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 543;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = var_enc;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100016 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 543;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_c_make_encoder, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 543;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = var_enc;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100016 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 544;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_c_encode_basestring_ascii );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 544;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 545;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    Py_DECREF( tmp_or_left_value_2 );
    tmp_source_name_4 = var_enc;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100016 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 545;
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_py_encode_basestring_ascii );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_assattr_name_3 = tmp_or_left_value_2;
    or_end_2:;
    tmp_assattr_target_3 = var_enc;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100016 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 544;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_encode_basestring_ascii, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 545;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_source_name_5 = var_scan;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100065 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 546;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_c_make_scanner );
    if ( tmp_or_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 546;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_3 );

        exception_lineno = 546;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_3 == 1 )
    {
        goto or_left_3;
    }
    else
    {
        goto or_right_3;
    }
    or_right_3:;
    Py_DECREF( tmp_or_left_value_3 );
    tmp_source_name_6 = var_scan;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100065 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 546;
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_py_make_scanner );
    if ( tmp_or_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 546;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_assattr_name_4 = tmp_or_left_value_3;
    or_end_3:;
    tmp_assattr_target_4 = var_scan;

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100065 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 546;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_make_scanner, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 546;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_7 = var_dec;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99907 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 548;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_py_scanstring );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 548;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = var_dec;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99907 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 548;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_scanstring, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 548;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_assattr_name_6 = Py_None;
    tmp_assattr_target_6 = var_enc;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100016 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 549;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_c_make_encoder, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 549;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = var_enc;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100016 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 550;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_py_encode_basestring_ascii );
    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 550;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_7 = var_enc;

    if ( tmp_assattr_target_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100016 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 550;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_encode_basestring_ascii, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 550;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_7 );
    tmp_source_name_9 = var_scan;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100065 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 551;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_py_make_scanner );
    if ( tmp_assattr_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 551;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_8 = var_scan;

    if ( tmp_assattr_target_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100065 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 551;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_make_scanner, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_8 );

        exception_lineno = 551;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_8 );
    branch_end_1:;
    tmp_source_name_10 = var_scan;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100065 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 552;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_make_scanner );
    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 552;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_9 = var_dec;

    if ( tmp_assattr_target_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99907 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 552;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_make_scanner, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_9 );

        exception_lineno = 552;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_9 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONDecoder );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecoder );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98526 ], 33, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 554;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = PyDict_Copy( const_dict_959a39584b85e1964750ccd746043bed );
    frame_function->f_lineno = 557;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 557;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__default_decoder, tmp_assign_source_5 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONEncoder );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONEncoder );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98493 ], 33, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 560;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = PyDict_Copy( const_dict_37e83e69aa1ba56e46454396202513d2 );
    frame_function->f_lineno = 568;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 568;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__default_encoder, tmp_assign_source_6 );

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
            if ( var_dec != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dec,
                    var_dec
                );
                assert( tmp_res != -1 );

            }
            if ( var_enc != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_enc,
                    var_enc
                );
                assert( tmp_res != -1 );

            }
            if ( var_scan != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scan,
                    var_scan
                );
                assert( tmp_res != -1 );

            }
            if ( var_c_make_encoder != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c_make_encoder,
                    var_c_make_encoder
                );
                assert( tmp_res != -1 );

            }
            if ( par_enabled != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_enabled,
                    par_enabled
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
    NUITKA_CANNOT_GET_HERE( function_7__toggle_speedups_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_enabled );
    par_enabled = NULL;

    Py_XDECREF( var_dec );
    var_dec = NULL;

    Py_XDECREF( var_enc );
    var_enc = NULL;

    Py_XDECREF( var_scan );
    var_scan = NULL;

    Py_XDECREF( var_c_make_encoder );
    var_c_make_encoder = NULL;

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

    Py_XDECREF( par_enabled );
    par_enabled = NULL;

    Py_XDECREF( var_dec );
    var_dec = NULL;

    Py_XDECREF( var_enc );
    var_enc = NULL;

    Py_XDECREF( var_scan );
    var_scan = NULL;

    Py_XDECREF( var_c_make_encoder );
    var_c_make_encoder = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_7__toggle_speedups_of_simplejson );
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
static PyObject *fparse_function_7__toggle_speedups_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_enabled = NULL;
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
                PyErr_Format( PyExc_TypeError, "_toggle_speedups() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_enabled == key )
            {
                assert( _python_par_enabled == NULL );
                _python_par_enabled = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_enabled, key ) == 1 )
            {
                assert( _python_par_enabled == NULL );
                _python_par_enabled = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_toggle_speedups() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_enabled != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_enabled = args[ 0 ];
        Py_INCREF( _python_par_enabled );
    }
    else if ( _python_par_enabled == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_enabled = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
            Py_INCREF( _python_par_enabled );
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
    if (unlikely( _python_par_enabled == NULL ))
    {
        PyObject *values[] = { _python_par_enabled };
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



    return impl_function_7__toggle_speedups_of_simplejson( self, _python_par_enabled );

error_exit:;

    Py_XDECREF( _python_par_enabled );

    return NULL;
}

static PyObject *dparse_function_7__toggle_speedups_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_7__toggle_speedups_of_simplejson( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7__toggle_speedups_of_simplejson( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_simple_first_of_simplejson( Nuitka_FunctionObject *self, PyObject *_python_par_kv )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_kv = _python_par_kv;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_26c7c16f56f521005b74c04b69fa25d7, module_simplejson );
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
    tmp_return_value = PyTuple_New( 2 );
    tmp_subscribed_name_1 = par_kv;

    tmp_subscript_name_1 = const_int_pos_1;
    tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 575;
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_1 = PyTuple_New( 3 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_list );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_dict );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_tuple );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 2, tmp_tuple_element_2 );
    tmp_tuple_element_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 575;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_subscribed_name_2 = par_kv;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100115 ], 48, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 575;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_int_0;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 575;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
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
            if ( par_kv != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kv,
                    par_kv
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
    NUITKA_CANNOT_GET_HERE( function_8_simple_first_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_kv );
    par_kv = NULL;

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

    Py_XDECREF( par_kv );
    par_kv = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_8_simple_first_of_simplejson );
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
static PyObject *fparse_function_8_simple_first_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_kv = NULL;
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
                PyErr_Format( PyExc_TypeError, "simple_first() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_kv == key )
            {
                assert( _python_par_kv == NULL );
                _python_par_kv = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_kv, key ) == 1 )
            {
                assert( _python_par_kv == NULL );
                _python_par_kv = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "simple_first() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_kv != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_kv = args[ 0 ];
        Py_INCREF( _python_par_kv );
    }
    else if ( _python_par_kv == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_kv = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
            Py_INCREF( _python_par_kv );
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
    if (unlikely( _python_par_kv == NULL ))
    {
        PyObject *values[] = { _python_par_kv };
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



    return impl_function_8_simple_first_of_simplejson( self, _python_par_kv );

error_exit:;

    Py_XDECREF( _python_par_kv );

    return NULL;
}

static PyObject *dparse_function_8_simple_first_of_simplejson( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_8_simple_first_of_simplejson( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_simple_first_of_simplejson( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1__import_OrderedDict_of_simplejson(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__import_OrderedDict_of_simplejson,
        dparse_function_1__import_OrderedDict_of_simplejson,
        const_str_plain__import_OrderedDict,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_59f28652bea2d689831575396d51928e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__import_c_make_encoder_of_simplejson(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__import_c_make_encoder_of_simplejson,
        dparse_function_2__import_c_make_encoder_of_simplejson,
        const_str_plain__import_c_make_encoder,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b9246be7efc09830d20a79c394be8012,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_dump_of_simplejson( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_dump_of_simplejson,
        dparse_function_3_dump_of_simplejson,
        const_str_plain_dump,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f987bd6047a6e31b57b43b5e361c2edc,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        const_str_digest_42256fcacc1ac14f73f19092740ce8f7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_dumps_of_simplejson( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_dumps_of_simplejson,
        dparse_function_4_dumps_of_simplejson,
        const_str_plain_dumps,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_605fc94488d21b126f532a84e66448ae,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        const_str_digest_056dff25d5325386a052ec3e062023a0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_load_of_simplejson( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_load_of_simplejson,
        dparse_function_5_load_of_simplejson,
        const_str_plain_load,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_13ae066ce4bbc61c4ae101853c1ffe1c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        const_str_digest_b9349770d86089b862f8cef6382c2931
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_loads_of_simplejson( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_loads_of_simplejson,
        dparse_function_6_loads_of_simplejson,
        const_str_plain_loads,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_63129f1502f03f562ea600c3ec20d023,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        const_str_digest_48c897e0fc561f1b02560db1fa883cf7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__toggle_speedups_of_simplejson(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7__toggle_speedups_of_simplejson,
        dparse_function_7__toggle_speedups_of_simplejson,
        const_str_plain__toggle_speedups,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6d8658c0fdf91e14f8571f5521286a09,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_simple_first_of_simplejson(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_simple_first_of_simplejson,
        dparse_function_8_simple_first_of_simplejson,
        const_str_plain_simple_first,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_26c7c16f56f521005b74c04b69fa25d7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        const_str_digest_6fd554b5d4a4ecd210f80190483f7b16
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_simplejson =
{
    PyModuleDef_HEAD_INIT,
    "simplejson",   /* m_name */
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

MOD_INIT_DECL( simplejson )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_simplejson );
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

    // puts( "in initsimplejson" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_simplejson = Py_InitModule4(
        "simplejson",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_simplejson = PyModule_Create( &mdef_simplejson );
#endif

    moduledict_simplejson = (PyDictObject *)((PyModuleObject *)module_simplejson)->md_dict;

    CHECK_OBJECT( module_simplejson );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_simplejson, module_simplejson );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_simplejson );

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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_5f19295486f8c25cc6fdf18d2edc0f0a;
    UPDATE_STRING_DICT0( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_64ae83aa2c61090f8868e56791bda80c;
    UPDATE_STRING_DICT0( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_71e4ff40e78d3a16dcd2a8e652afa553_list );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_simplejson;
    UPDATE_STRING_DICT0( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_dcaae56451b88f3504852aecc725b543;
    UPDATE_STRING_DICT0( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_7 );
    tmp_assign_source_8 = LIST_COPY( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_29128799e6868180fe0bd02edfedaa2d;
    UPDATE_STRING_DICT0( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_9 );
    // Frame without reuse.
    frame_module = MAKE_FRAME( codeobj_c49362d7f8cb813228a12fe761007056, module_simplejson );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_simplejson)->md_dict;
    frame_module->f_lineno = 109;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_decimal, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_Decimal_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Decimal );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_Decimal, tmp_assign_source_10 );
    tmp_import_globals_2 = ((PyModuleObject *)module_simplejson)->md_dict;
    frame_module->f_lineno = 111;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_scanner, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_JSONDecodeError_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_JSONDecodeError );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONDecodeError, tmp_assign_source_11 );
    tmp_import_globals_3 = ((PyModuleObject *)module_simplejson)->md_dict;
    frame_module->f_lineno = 112;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_decoder, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_JSONDecoder_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_JSONDecoder );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONDecoder, tmp_assign_source_12 );
    tmp_import_globals_4 = ((PyModuleObject *)module_simplejson)->md_dict;
    frame_module->f_lineno = 113;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_encoder, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_JSONEncoder_str_plain_JSONEncoderForHTML_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_JSONEncoder );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONEncoder, tmp_assign_source_13 );
    tmp_import_globals_5 = ((PyModuleObject *)module_simplejson)->md_dict;
    frame_module->f_lineno = 113;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_encoder, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_JSONEncoder_str_plain_JSONEncoderForHTML_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_JSONEncoderForHTML );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONEncoderForHTML, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_function_1__import_OrderedDict_of_simplejson(  );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__import_OrderedDict, tmp_assign_source_15 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__import_OrderedDict );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__import_OrderedDict );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98452 ], 41, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 121;
    tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_OrderedDict, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_function_2__import_c_make_encoder_of_simplejson(  );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__import_c_make_encoder, tmp_assign_source_17 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONEncoder );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONEncoder );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98493 ], 33, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = PyDict_Copy( const_dict_1dbee11ab85c09603c4a3e72ea590cea );
    frame_module->f_lineno = 147;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__default_encoder, tmp_assign_source_18 );
    tmp_defaults_1 = const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple;
    tmp_assign_source_19 = MAKE_FUNCTION_function_3_dump_of_simplejson( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_dump, tmp_assign_source_19 );
    tmp_defaults_2 = const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple;
    tmp_assign_source_20 = MAKE_FUNCTION_function_4_dumps_of_simplejson( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_dumps, tmp_assign_source_20 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONDecoder );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecoder );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98526 ], 33, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = PyDict_Copy( const_dict_959a39584b85e1964750ccd746043bed );
    frame_module->f_lineno = 401;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__default_decoder, tmp_assign_source_21 );

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
    tmp_defaults_3 = const_tuple_none_none_none_none_none_none_none_false_true_true_tuple;
    tmp_assign_source_22 = MAKE_FUNCTION_function_5_load_of_simplejson( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_load, tmp_assign_source_22 );
    tmp_defaults_4 = const_tuple_none_none_none_none_none_none_none_false_tuple;
    tmp_assign_source_23 = MAKE_FUNCTION_function_6_loads_of_simplejson( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_loads, tmp_assign_source_23 );
    tmp_assign_source_24 = MAKE_FUNCTION_function_7__toggle_speedups_of_simplejson(  );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__toggle_speedups, tmp_assign_source_24 );
    tmp_assign_source_25 = MAKE_FUNCTION_function_8_simple_first_of_simplejson(  );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_simple_first, tmp_assign_source_25 );

    return MOD_RETURN_VALUE( module_simplejson );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
