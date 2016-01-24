// Generated code for Python source for module 'pyasn1.codec.cer.encoder'
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

// The _module_pyasn1$codec$cer$encoder is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pyasn1$codec$cer$encoder;
PyDictObject *moduledict_pyasn1$codec$cer$encoder;

// The module constants used
extern PyObject *const_str_plain_UTCTime;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_plain_comps;
extern PyObject *const_str_plain_Set;
extern PyObject *const_str_chr_43;
extern PyObject *const_str_digest_7c8c58049edd248f8b1cb370445e702c;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_tagSet;
extern PyObject *const_str_plain_univ;
extern PyObject *const_str_plain_0;
extern PyObject *const_str_plain_Encoder;
extern PyObject *const_str_digest_a40d973ff88a213bee0c6fc98dc34631;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_asOctets;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_Real;
extern PyObject *const_str_plain_m;
static PyObject *const_str_digest_699096d92f2c93b19962f1572d2df3cf;
static PyObject *const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
extern PyObject *const_str_plain_getMinTagSet;
static PyObject *const_tuple_str_plain_useful_tuple;
extern PyObject *const_str_plain_encodeFun;
extern PyObject *const_str_plain_maxChunkSize;
static PyObject *const_tuple_a6aaf0a7836d7360abeffcd9350aa791_tuple;
extern PyObject *const_str_digest_e78bd2aeb7c7d6af72ae0205fec3ca32;
static PyObject *const_str_plain_pluschar;
static PyObject *const_tuple_false_int_0_tuple;
static PyObject *const_tuple_e2db33fa33e8baeb76c9b11231c34160_tuple;
extern PyObject *const_str_plain_setDefaultComponents;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_49b417ec992595661013bc81443b18b6_tuple;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain__dropFloatingPoint;
static PyObject *const_tuple_77321ea9d050f6a714a3a96f079cbacc_tuple;
static PyObject *const_str_plain_GeneralizedTimeEncoder;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_null;
extern PyObject *const_str_plain_clone;
static PyObject *const_str_plain_Z;
extern PyObject *const_str_plain_pyasn1;
static PyObject *const_str_plain_compSubs;
extern PyObject *const_str_plain_SequenceAndSetBase;
extern PyObject *const_str_plain__chooseEncBase;
extern PyObject *const_str_chr_45;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_Choice;
static PyObject *const_tuple_ac8d5ac370fe2c7c640d3544cc3f7929_tuple;
static PyObject *const_str_digest_d7634e552d516b8de4e6126d0edbe41f;
static PyObject *const_tuple_str_plain_int2oct_str_plain_str2octs_str_plain_null_tuple;
extern PyObject *const_str_plain_e;
extern PyObject *const_tuple_8ae6521d1343ae5907d025678e1f6614_tuple;
static PyObject *const_str_plain_UTCTimeEncoder;
extern PyObject *const_str_plain_defMode;
extern PyObject *const_str_plain_str2octs;
extern PyObject *const_str_plain_BitString;
extern PyObject *const_str_digest_6ff446d34f96d6bd2f808ecd648ba969;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_GeneralizedTime;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_getDefaultComponentByPosition;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_octets;
extern PyObject *const_str_plain_b;
static PyObject *const_str_digest_c9a86e7f4753ccb3d59647ad77d90f71;
extern PyObject *const_str_plain_SetOf;
static PyObject *const_str_digest_95eadf56d94bcbdc45c1009a05bbe44b;
static PyObject *const_str_digest_b9f6ceb86b95ed11a40d14865b0e5071;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_1503b6119cd6ba88e7612e541d27eba3;
extern PyObject *const_int_pos_15;
extern PyObject *const_str_plain_IntegerEncoder;
extern PyObject *const_int_pos_1000;
extern PyObject *const_str_plain_RealEncoder;
extern PyObject *const_str_plain_useful;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_Boolean;
extern PyObject *const_str_plain_c;
extern PyObject *const_tuple_str_plain_encoder_tuple;
static PyObject *const_str_digest_19fe853cab7f39edb3062603d9ffa90d;
static PyObject *const_tuple_f4ed9135c8f91672197c39c7805b3118_tuple;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_str_plain_type;
extern PyObject *const_int_pos_13;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_zero;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_digest_33015ca16befafae86144df68ab2d465;
extern PyObject *const_str_plain_PyAsn1Error;
extern PyObject *const_str_plain_SetOfEncoder;
static PyObject *const_str_plain_zchar;
extern PyObject *const_str_plain_idx;
extern PyObject *const_str_plain_int2oct;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_minuschar;
extern PyObject *const_str_digest_de24a2f065421d7909e7b6b981f81fd2;
static PyObject *const_str_digest_9c9edc91eb8228d413f4ca3becb35432;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_b0d4cc3f8f2ad68afddf2a64959c8627_tuple;
extern PyObject *const_tuple_str_plain_univ_tuple;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_BooleanEncoder;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_getTagSet;
extern PyObject *const_str_digest_60685fcea8bf95c3a304455958b7e27d;
static PyObject *const_str_digest_86229657ebeffe0ecf9ec4c0cfdaffa8;
static PyObject *const_str_plain_compSub;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_client;
extern PyObject *const_str_plain_substrate;
extern PyObject *const_str_plain_encoder;
extern PyObject *const_str_digest_47e96fbdb7ce29f2a13ccac6b9601e71;
extern PyObject *const_str_plain_verifySizeSpec;
extern PyObject *const_int_pos_255;
extern PyObject *const_str_plain_typeId;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_SequenceOfEncoder;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_plain_tagMap;
extern PyObject *const_str_plain_typeMap;
extern PyObject *const_str_plain_OctetString;
extern PyObject *const_str_plain_sort;
extern PyObject *const_tuple_str_plain_error_tuple;
extern PyObject *const_str_plain_OctetStringEncoder;
extern PyObject *const_str_plain_BitStringEncoder;
extern PyObject *const_str_plain_encodeValue;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_comps = UNSTREAM_STRING( &constant_bin[ 49024 ], 5, 1 );
    const_str_digest_699096d92f2c93b19962f1572d2df3cf = UNSTREAM_STRING( &constant_bin[ 299330 ], 23, 0 );
    const_str_digest_b6b8af7167af33ad6201188dc064ba6b = UNSTREAM_STRING( &constant_bin[ 299353 ], 24, 0 );
    const_tuple_str_plain_useful_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_useful_tuple, 0, const_str_plain_useful ); Py_INCREF( const_str_plain_useful );
    const_tuple_a6aaf0a7836d7360abeffcd9350aa791_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_a6aaf0a7836d7360abeffcd9350aa791_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a6aaf0a7836d7360abeffcd9350aa791_tuple, 1, const_str_plain_encodeFun ); Py_INCREF( const_str_plain_encodeFun );
    PyTuple_SET_ITEM( const_tuple_a6aaf0a7836d7360abeffcd9350aa791_tuple, 2, const_str_plain_client ); Py_INCREF( const_str_plain_client );
    PyTuple_SET_ITEM( const_tuple_a6aaf0a7836d7360abeffcd9350aa791_tuple, 3, const_str_plain_defMode ); Py_INCREF( const_str_plain_defMode );
    PyTuple_SET_ITEM( const_tuple_a6aaf0a7836d7360abeffcd9350aa791_tuple, 4, const_str_plain_maxChunkSize ); Py_INCREF( const_str_plain_maxChunkSize );
    const_str_plain_pluschar = UNSTREAM_STRING( &constant_bin[ 299377 ], 8, 1 );
    const_tuple_false_int_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_false_int_0_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_e2db33fa33e8baeb76c9b11231c34160_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_e2db33fa33e8baeb76c9b11231c34160_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_e2db33fa33e8baeb76c9b11231c34160_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_e2db33fa33e8baeb76c9b11231c34160_tuple, 2, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_plain_zchar = UNSTREAM_STRING( &constant_bin[ 299385 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_e2db33fa33e8baeb76c9b11231c34160_tuple, 3, const_str_plain_zchar ); Py_INCREF( const_str_plain_zchar );
    PyTuple_SET_ITEM( const_tuple_e2db33fa33e8baeb76c9b11231c34160_tuple, 4, const_str_plain_pluschar ); Py_INCREF( const_str_plain_pluschar );
    const_str_plain_minuschar = UNSTREAM_STRING( &constant_bin[ 299390 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_e2db33fa33e8baeb76c9b11231c34160_tuple, 5, const_str_plain_minuschar ); Py_INCREF( const_str_plain_minuschar );
    const_str_plain_zero = UNSTREAM_STRING( &constant_bin[ 97898 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_e2db33fa33e8baeb76c9b11231c34160_tuple, 6, const_str_plain_zero ); Py_INCREF( const_str_plain_zero );
    PyTuple_SET_ITEM( const_tuple_e2db33fa33e8baeb76c9b11231c34160_tuple, 7, const_str_plain_encodeValue ); Py_INCREF( const_str_plain_encodeValue );
    const_tuple_49b417ec992595661013bc81443b18b6_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_49b417ec992595661013bc81443b18b6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_49b417ec992595661013bc81443b18b6_tuple, 1, const_str_plain_encodeFun ); Py_INCREF( const_str_plain_encodeFun );
    PyTuple_SET_ITEM( const_tuple_49b417ec992595661013bc81443b18b6_tuple, 2, const_str_plain_client ); Py_INCREF( const_str_plain_client );
    PyTuple_SET_ITEM( const_tuple_49b417ec992595661013bc81443b18b6_tuple, 3, const_str_plain_defMode ); Py_INCREF( const_str_plain_defMode );
    PyTuple_SET_ITEM( const_tuple_49b417ec992595661013bc81443b18b6_tuple, 4, const_str_plain_maxChunkSize ); Py_INCREF( const_str_plain_maxChunkSize );
    PyTuple_SET_ITEM( const_tuple_49b417ec992595661013bc81443b18b6_tuple, 5, const_str_plain_substrate ); Py_INCREF( const_str_plain_substrate );
    PyTuple_SET_ITEM( const_tuple_49b417ec992595661013bc81443b18b6_tuple, 6, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    PyTuple_SET_ITEM( const_tuple_49b417ec992595661013bc81443b18b6_tuple, 7, const_str_plain_comps ); Py_INCREF( const_str_plain_comps );
    PyTuple_SET_ITEM( const_tuple_49b417ec992595661013bc81443b18b6_tuple, 8, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    const_str_plain_compSubs = UNSTREAM_STRING( &constant_bin[ 49075 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_49b417ec992595661013bc81443b18b6_tuple, 9, const_str_plain_compSubs ); Py_INCREF( const_str_plain_compSubs );
    const_str_plain_compSub = UNSTREAM_STRING( &constant_bin[ 49075 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_49b417ec992595661013bc81443b18b6_tuple, 10, const_str_plain_compSub ); Py_INCREF( const_str_plain_compSub );
    const_tuple_77321ea9d050f6a714a3a96f079cbacc_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_77321ea9d050f6a714a3a96f079cbacc_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_77321ea9d050f6a714a3a96f079cbacc_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_77321ea9d050f6a714a3a96f079cbacc_tuple, 2, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    PyTuple_SET_ITEM( const_tuple_77321ea9d050f6a714a3a96f079cbacc_tuple, 3, const_str_plain_zchar ); Py_INCREF( const_str_plain_zchar );
    PyTuple_SET_ITEM( const_tuple_77321ea9d050f6a714a3a96f079cbacc_tuple, 4, const_str_plain_pluschar ); Py_INCREF( const_str_plain_pluschar );
    PyTuple_SET_ITEM( const_tuple_77321ea9d050f6a714a3a96f079cbacc_tuple, 5, const_str_plain_minuschar ); Py_INCREF( const_str_plain_minuschar );
    PyTuple_SET_ITEM( const_tuple_77321ea9d050f6a714a3a96f079cbacc_tuple, 6, const_str_plain_encodeValue ); Py_INCREF( const_str_plain_encodeValue );
    const_str_plain_GeneralizedTimeEncoder = UNSTREAM_STRING( &constant_bin[ 48900 ], 22, 1 );
    const_str_plain_Z = UNSTREAM_STRING( &constant_bin[ 5499 ], 1, 1 );
    const_tuple_ac8d5ac370fe2c7c640d3544cc3f7929_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_ac8d5ac370fe2c7c640d3544cc3f7929_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ac8d5ac370fe2c7c640d3544cc3f7929_tuple, 1, const_str_plain_encodeFun ); Py_INCREF( const_str_plain_encodeFun );
    PyTuple_SET_ITEM( const_tuple_ac8d5ac370fe2c7c640d3544cc3f7929_tuple, 2, const_str_plain_client ); Py_INCREF( const_str_plain_client );
    PyTuple_SET_ITEM( const_tuple_ac8d5ac370fe2c7c640d3544cc3f7929_tuple, 3, const_str_plain_defMode ); Py_INCREF( const_str_plain_defMode );
    PyTuple_SET_ITEM( const_tuple_ac8d5ac370fe2c7c640d3544cc3f7929_tuple, 4, const_str_plain_maxChunkSize ); Py_INCREF( const_str_plain_maxChunkSize );
    PyTuple_SET_ITEM( const_tuple_ac8d5ac370fe2c7c640d3544cc3f7929_tuple, 5, const_str_plain_substrate ); Py_INCREF( const_str_plain_substrate );
    const_str_digest_d7634e552d516b8de4e6126d0edbe41f = UNSTREAM_STRING( &constant_bin[ 299399 ], 24, 0 );
    const_tuple_str_plain_int2oct_str_plain_str2octs_str_plain_null_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_int2oct_str_plain_str2octs_str_plain_null_tuple, 0, const_str_plain_int2oct ); Py_INCREF( const_str_plain_int2oct );
    PyTuple_SET_ITEM( const_tuple_str_plain_int2oct_str_plain_str2octs_str_plain_null_tuple, 1, const_str_plain_str2octs ); Py_INCREF( const_str_plain_str2octs );
    PyTuple_SET_ITEM( const_tuple_str_plain_int2oct_str_plain_str2octs_str_plain_null_tuple, 2, const_str_plain_null ); Py_INCREF( const_str_plain_null );
    const_str_plain_UTCTimeEncoder = UNSTREAM_STRING( &constant_bin[ 48944 ], 14, 1 );
    const_str_digest_c9a86e7f4753ccb3d59647ad77d90f71 = UNSTREAM_STRING( &constant_bin[ 299423 ], 30, 0 );
    const_str_digest_95eadf56d94bcbdc45c1009a05bbe44b = UNSTREAM_STRING( &constant_bin[ 299453 ], 57, 0 );
    const_str_digest_b9f6ceb86b95ed11a40d14865b0e5071 = UNSTREAM_STRING( &constant_bin[ 299510 ], 26, 0 );
    const_str_digest_19fe853cab7f39edb3062603d9ffa90d = UNSTREAM_STRING( &constant_bin[ 299536 ], 20, 0 );
    const_tuple_f4ed9135c8f91672197c39c7805b3118_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f4ed9135c8f91672197c39c7805b3118_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f4ed9135c8f91672197c39c7805b3118_tuple, 1, const_str_plain_encodeFun ); Py_INCREF( const_str_plain_encodeFun );
    PyTuple_SET_ITEM( const_tuple_f4ed9135c8f91672197c39c7805b3118_tuple, 2, const_str_plain_client ); Py_INCREF( const_str_plain_client );
    PyTuple_SET_ITEM( const_tuple_f4ed9135c8f91672197c39c7805b3118_tuple, 3, const_str_plain_defMode ); Py_INCREF( const_str_plain_defMode );
    PyTuple_SET_ITEM( const_tuple_f4ed9135c8f91672197c39c7805b3118_tuple, 4, const_str_plain_maxChunkSize ); Py_INCREF( const_str_plain_maxChunkSize );
    PyTuple_SET_ITEM( const_tuple_f4ed9135c8f91672197c39c7805b3118_tuple, 5, const_str_plain_octets ); Py_INCREF( const_str_plain_octets );
    const_str_digest_9c9edc91eb8228d413f4ca3becb35432 = UNSTREAM_STRING( &constant_bin[ 299556 ], 34, 0 );
    const_str_digest_86229657ebeffe0ecf9ec4c0cfdaffa8 = UNSTREAM_STRING( &constant_bin[ 299590 ], 42, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyasn1$codec$cer$encoder( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f482d9fb9aa78916e7f1c7d3912270ff;
static PyCodeObject *codeobj_ec47451658a4e3cc50cfcaa9c839d650;
static PyCodeObject *codeobj_a38959ab3a6743700dc373a58fa19942;
static PyCodeObject *codeobj_a32fa546ccdb9197bec6a46fde889cf9;
static PyCodeObject *codeobj_46856cc11668d5935bf72f253a0b4123;
static PyCodeObject *codeobj_8e2959d6e569ce624348d6c15b429e76;
static PyCodeObject *codeobj_fdaa2732926af3f40072c4decf8cd1dd;
static PyCodeObject *codeobj_a60dc8d36ee49d842897459457ca5bd2;
static PyCodeObject *codeobj_7518f5f03c4d8fce2d6299342ca7d561;
static PyCodeObject *codeobj_804f9c62fdea02c340dd628ac9cae34c;
static PyCodeObject *codeobj_380d9df0a6e329f913f64d21122618a6;
static PyCodeObject *codeobj_d5749bab6ffe9483c70a0910e2e8411d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_95eadf56d94bcbdc45c1009a05bbe44b );
    codeobj_f482d9fb9aa78916e7f1c7d3912270ff = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 89, const_tuple_str_plain_x_tuple, 1, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_ec47451658a4e3cc50cfcaa9c839d650 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GeneralizedTimeEncoder, 35, const_tuple_e2db33fa33e8baeb76c9b11231c34160_tuple, 0, 0, CO_NOFREE );
    codeobj_a38959ab3a6743700dc373a58fa19942 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_UTCTimeEncoder, 55, const_tuple_77321ea9d050f6a714a3a96f079cbacc_tuple, 0, 0, CO_NOFREE );
    codeobj_a32fa546ccdb9197bec6a46fde889cf9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 125, const_tuple_8ae6521d1343ae5907d025678e1f6614_tuple, 4, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_46856cc11668d5935bf72f253a0b4123 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__chooseEncBase, 29, const_tuple_b0d4cc3f8f2ad68afddf2a64959c8627_tuple, 2, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_8e2959d6e569ce624348d6c15b429e76 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encodeValue, 9, const_tuple_ac8d5ac370fe2c7c640d3544cc3f7929_tuple, 5, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_fdaa2732926af3f40072c4decf8cd1dd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encodeValue, 17, const_tuple_a6aaf0a7836d7360abeffcd9350aa791_tuple, 5, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_a60dc8d36ee49d842897459457ca5bd2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encodeValue, 23, const_tuple_a6aaf0a7836d7360abeffcd9350aa791_tuple, 5, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_7518f5f03c4d8fce2d6299342ca7d561 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encodeValue, 40, const_tuple_f4ed9135c8f91672197c39c7805b3118_tuple, 5, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_804f9c62fdea02c340dd628ac9cae34c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encodeValue, 59, const_tuple_f4ed9135c8f91672197c39c7805b3118_tuple, 5, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_380d9df0a6e329f913f64d21122618a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encodeValue, 72, const_tuple_49b417ec992595661013bc81443b18b6_tuple, 5, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_d5749bab6ffe9483c70a0910e2e8411d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encoder, 0, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_1__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_1__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_1__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_2__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_2__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_2__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_3__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_3__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_3__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_RealEncoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_4__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_4__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_4__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_5__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_5__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_5__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_6__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_6__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_6__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_7__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_7__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_7__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_Encoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_8__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_8__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_8__prepared );


static PyObject *MAKE_FUNCTION_function_1___call___of_class_8_Encoder_of_pyasn1$codec$cer$encoder( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1__chooseEncBase_of_class_4_RealEncoder_of_pyasn1$codec$cer$encoder(  );


static PyObject *MAKE_FUNCTION_function_1_encodeValue_of_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder(  );


static PyObject *MAKE_FUNCTION_function_1_encodeValue_of_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder(  );


static PyObject *MAKE_FUNCTION_function_1_encodeValue_of_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder(  );


static PyObject *MAKE_FUNCTION_function_1_encodeValue_of_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder(  );


static PyObject *MAKE_FUNCTION_function_1_encodeValue_of_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder(  );


static PyObject *MAKE_FUNCTION_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_1__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_1__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_1__prepared )
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
    PyObject *var_encodeValue = NULL;
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
    tmp_set_locals = closure_pyasn1$codec$cer$encoder_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_BooleanEncoder;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1_encodeValue_of_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder(  );
    assert( var_encodeValue == NULL );
    var_encodeValue = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_pyasn1$codec$cer$encoder_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_BooleanEncoder;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$codec$cer$encoder_class_creation_1__bases;

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
    if ( var_encodeValue != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_encodeValue,
            var_encodeValue
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
    tmp_kw_name_1 = closure_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var_encodeValue );
    var_encodeValue = NULL;

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

    Py_XDECREF( var_encodeValue );
    var_encodeValue = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder );
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


static PyObject *impl_function_1_encodeValue_of_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_encodeFun, PyObject *_python_par_client, PyObject *_python_par_defMode, PyObject *_python_par_maxChunkSize )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_encodeFun = _python_par_encodeFun;
    PyObject *par_client = _python_par_client;
    PyObject *par_defMode = _python_par_defMode;
    PyObject *par_maxChunkSize = _python_par_maxChunkSize;
    PyObject *var_substrate = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8e2959d6e569ce624348d6c15b429e76, module_pyasn1$codec$cer$encoder );
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
    tmp_compare_left_1 = par_client;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_int2oct );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int2oct );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47647 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 11;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = const_int_0;
    frame_function->f_lineno = 11;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    assert( var_substrate == NULL );
    var_substrate = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_int2oct );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int2oct );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47647 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 13;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = const_int_pos_255;
    frame_function->f_lineno = 13;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    assert( var_substrate == NULL );
    var_substrate = tmp_assign_source_2;

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
            if ( var_substrate != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_substrate,
                    var_substrate
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
            if ( par_encodeFun != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encodeFun,
                    par_encodeFun
                );
                assert( tmp_res != -1 );

            }
            if ( par_client != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_client,
                    par_client
                );
                assert( tmp_res != -1 );

            }
            if ( par_defMode != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defMode,
                    par_defMode
                );
                assert( tmp_res != -1 );

            }
            if ( par_maxChunkSize != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_maxChunkSize,
                    par_maxChunkSize
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

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_substrate;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_encodeValue_of_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_encodeFun );
    par_encodeFun = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_defMode );
    par_defMode = NULL;

    Py_XDECREF( par_maxChunkSize );
    par_maxChunkSize = NULL;

    Py_XDECREF( var_substrate );
    var_substrate = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_encodeFun );
    Py_DECREF( par_encodeFun );
    par_encodeFun = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    CHECK_OBJECT( (PyObject *)par_defMode );
    Py_DECREF( par_defMode );
    par_defMode = NULL;

    CHECK_OBJECT( (PyObject *)par_maxChunkSize );
    Py_DECREF( par_maxChunkSize );
    par_maxChunkSize = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_encodeValue_of_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder );
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
static PyObject *fparse_function_1_encodeValue_of_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_encodeFun = NULL;
    PyObject *_python_par_client = NULL;
    PyObject *_python_par_defMode = NULL;
    PyObject *_python_par_maxChunkSize = NULL;
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
                PyErr_Format( PyExc_TypeError, "encodeValue() keywords must be strings" );
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
            if ( found == false && const_str_plain_encodeFun == key )
            {
                assert( _python_par_encodeFun == NULL );
                _python_par_encodeFun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_client == key )
            {
                assert( _python_par_client == NULL );
                _python_par_client = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_defMode == key )
            {
                assert( _python_par_defMode == NULL );
                _python_par_defMode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_maxChunkSize == key )
            {
                assert( _python_par_maxChunkSize == NULL );
                _python_par_maxChunkSize = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_encodeFun, key ) == 1 )
            {
                assert( _python_par_encodeFun == NULL );
                _python_par_encodeFun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_client, key ) == 1 )
            {
                assert( _python_par_client == NULL );
                _python_par_client = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_defMode, key ) == 1 )
            {
                assert( _python_par_defMode == NULL );
                _python_par_defMode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_maxChunkSize, key ) == 1 )
            {
                assert( _python_par_maxChunkSize == NULL );
                _python_par_maxChunkSize = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "encodeValue() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_encodeFun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_encodeFun = args[ 1 ];
        Py_INCREF( _python_par_encodeFun );
    }
    else if ( _python_par_encodeFun == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_encodeFun = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 );
            Py_INCREF( _python_par_encodeFun );
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
         if (unlikely( _python_par_client != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_client = args[ 2 ];
        Py_INCREF( _python_par_client );
    }
    else if ( _python_par_client == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_client = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 );
            Py_INCREF( _python_par_client );
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
         if (unlikely( _python_par_defMode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_defMode = args[ 3 ];
        Py_INCREF( _python_par_defMode );
    }
    else if ( _python_par_defMode == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_defMode = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 );
            Py_INCREF( _python_par_defMode );
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
         if (unlikely( _python_par_maxChunkSize != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_maxChunkSize = args[ 4 ];
        Py_INCREF( _python_par_maxChunkSize );
    }
    else if ( _python_par_maxChunkSize == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_maxChunkSize = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 );
            Py_INCREF( _python_par_maxChunkSize );
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
    if (unlikely( _python_par_self == NULL || _python_par_encodeFun == NULL || _python_par_client == NULL || _python_par_defMode == NULL || _python_par_maxChunkSize == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_encodeFun, _python_par_client, _python_par_defMode, _python_par_maxChunkSize };
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



    return impl_function_1_encodeValue_of_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder( self, _python_par_self, _python_par_encodeFun, _python_par_client, _python_par_defMode, _python_par_maxChunkSize );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_encodeFun );
    Py_XDECREF( _python_par_client );
    Py_XDECREF( _python_par_defMode );
    Py_XDECREF( _python_par_maxChunkSize );

    return NULL;
}

static PyObject *dparse_function_1_encodeValue_of_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_1_encodeValue_of_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_encodeValue_of_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_2__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_2__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_2__prepared )
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
    PyObject *var_encodeValue = NULL;
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
    tmp_set_locals = closure_pyasn1$codec$cer$encoder_class_creation_2__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_BitStringEncoder;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1_encodeValue_of_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder(  );
    assert( var_encodeValue == NULL );
    var_encodeValue = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_pyasn1$codec$cer$encoder_class_creation_2__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_BitStringEncoder;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$codec$cer$encoder_class_creation_2__bases;

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
    if ( var_encodeValue != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_encodeValue,
            var_encodeValue
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
    tmp_kw_name_1 = closure_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var_encodeValue );
    var_encodeValue = NULL;

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

    Py_XDECREF( var_encodeValue );
    var_encodeValue = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder );
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


static PyObject *impl_function_1_encodeValue_of_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_encodeFun, PyObject *_python_par_client, PyObject *_python_par_defMode, PyObject *_python_par_maxChunkSize )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_encodeFun = _python_par_encodeFun;
    PyObject *par_client = _python_par_client;
    PyObject *par_defMode = _python_par_defMode;
    PyObject *par_maxChunkSize = _python_par_maxChunkSize;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fdaa2732926af3f40072c4decf8cd1dd, module_pyasn1$codec$cer$encoder );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48865 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_BitStringEncoder );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_encodeValue );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    tmp_args_element_name_2 = par_encodeFun;

    tmp_args_element_name_3 = par_client;

    tmp_args_element_name_4 = par_defMode;

    tmp_args_element_name_5 = const_int_pos_1000;
    frame_function->f_lineno = 19;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
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
            if ( par_self != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );
                assert( tmp_res != -1 );

            }
            if ( par_encodeFun != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encodeFun,
                    par_encodeFun
                );
                assert( tmp_res != -1 );

            }
            if ( par_client != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_client,
                    par_client
                );
                assert( tmp_res != -1 );

            }
            if ( par_defMode != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defMode,
                    par_defMode
                );
                assert( tmp_res != -1 );

            }
            if ( par_maxChunkSize != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_maxChunkSize,
                    par_maxChunkSize
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
    NUITKA_CANNOT_GET_HERE( function_1_encodeValue_of_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_encodeFun );
    par_encodeFun = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_defMode );
    par_defMode = NULL;

    Py_XDECREF( par_maxChunkSize );
    par_maxChunkSize = NULL;

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

    Py_XDECREF( par_encodeFun );
    par_encodeFun = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_defMode );
    par_defMode = NULL;

    CHECK_OBJECT( (PyObject *)par_maxChunkSize );
    Py_DECREF( par_maxChunkSize );
    par_maxChunkSize = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_encodeValue_of_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder );
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
static PyObject *fparse_function_1_encodeValue_of_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_encodeFun = NULL;
    PyObject *_python_par_client = NULL;
    PyObject *_python_par_defMode = NULL;
    PyObject *_python_par_maxChunkSize = NULL;
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
                PyErr_Format( PyExc_TypeError, "encodeValue() keywords must be strings" );
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
            if ( found == false && const_str_plain_encodeFun == key )
            {
                assert( _python_par_encodeFun == NULL );
                _python_par_encodeFun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_client == key )
            {
                assert( _python_par_client == NULL );
                _python_par_client = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_defMode == key )
            {
                assert( _python_par_defMode == NULL );
                _python_par_defMode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_maxChunkSize == key )
            {
                assert( _python_par_maxChunkSize == NULL );
                _python_par_maxChunkSize = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_encodeFun, key ) == 1 )
            {
                assert( _python_par_encodeFun == NULL );
                _python_par_encodeFun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_client, key ) == 1 )
            {
                assert( _python_par_client == NULL );
                _python_par_client = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_defMode, key ) == 1 )
            {
                assert( _python_par_defMode == NULL );
                _python_par_defMode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_maxChunkSize, key ) == 1 )
            {
                assert( _python_par_maxChunkSize == NULL );
                _python_par_maxChunkSize = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "encodeValue() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_encodeFun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_encodeFun = args[ 1 ];
        Py_INCREF( _python_par_encodeFun );
    }
    else if ( _python_par_encodeFun == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_encodeFun = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 );
            Py_INCREF( _python_par_encodeFun );
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
         if (unlikely( _python_par_client != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_client = args[ 2 ];
        Py_INCREF( _python_par_client );
    }
    else if ( _python_par_client == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_client = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 );
            Py_INCREF( _python_par_client );
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
         if (unlikely( _python_par_defMode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_defMode = args[ 3 ];
        Py_INCREF( _python_par_defMode );
    }
    else if ( _python_par_defMode == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_defMode = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 );
            Py_INCREF( _python_par_defMode );
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
         if (unlikely( _python_par_maxChunkSize != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_maxChunkSize = args[ 4 ];
        Py_INCREF( _python_par_maxChunkSize );
    }
    else if ( _python_par_maxChunkSize == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_maxChunkSize = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 );
            Py_INCREF( _python_par_maxChunkSize );
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
    if (unlikely( _python_par_self == NULL || _python_par_encodeFun == NULL || _python_par_client == NULL || _python_par_defMode == NULL || _python_par_maxChunkSize == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_encodeFun, _python_par_client, _python_par_defMode, _python_par_maxChunkSize };
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



    return impl_function_1_encodeValue_of_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder( self, _python_par_self, _python_par_encodeFun, _python_par_client, _python_par_defMode, _python_par_maxChunkSize );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_encodeFun );
    Py_XDECREF( _python_par_client );
    Py_XDECREF( _python_par_defMode );
    Py_XDECREF( _python_par_maxChunkSize );

    return NULL;
}

static PyObject *dparse_function_1_encodeValue_of_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_1_encodeValue_of_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_encodeValue_of_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_3__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_3__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_3__prepared )
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
    PyObject *var_encodeValue = NULL;
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
    tmp_set_locals = closure_pyasn1$codec$cer$encoder_class_creation_3__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_OctetStringEncoder;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1_encodeValue_of_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder(  );
    assert( var_encodeValue == NULL );
    var_encodeValue = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_pyasn1$codec$cer$encoder_class_creation_3__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_OctetStringEncoder;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$codec$cer$encoder_class_creation_3__bases;

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
    if ( var_encodeValue != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_encodeValue,
            var_encodeValue
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
    tmp_kw_name_1 = closure_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var_encodeValue );
    var_encodeValue = NULL;

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

    Py_XDECREF( var_encodeValue );
    var_encodeValue = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder );
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


static PyObject *impl_function_1_encodeValue_of_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_encodeFun, PyObject *_python_par_client, PyObject *_python_par_defMode, PyObject *_python_par_maxChunkSize )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_encodeFun = _python_par_encodeFun;
    PyObject *par_client = _python_par_client;
    PyObject *par_defMode = _python_par_defMode;
    PyObject *par_maxChunkSize = _python_par_maxChunkSize;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a60dc8d36ee49d842897459457ca5bd2, module_pyasn1$codec$cer$encoder );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48865 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_OctetStringEncoder );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_encodeValue );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    tmp_args_element_name_2 = par_encodeFun;

    tmp_args_element_name_3 = par_client;

    tmp_args_element_name_4 = par_defMode;

    tmp_args_element_name_5 = const_int_pos_1000;
    frame_function->f_lineno = 25;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
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
            if ( par_self != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );
                assert( tmp_res != -1 );

            }
            if ( par_encodeFun != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encodeFun,
                    par_encodeFun
                );
                assert( tmp_res != -1 );

            }
            if ( par_client != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_client,
                    par_client
                );
                assert( tmp_res != -1 );

            }
            if ( par_defMode != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defMode,
                    par_defMode
                );
                assert( tmp_res != -1 );

            }
            if ( par_maxChunkSize != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_maxChunkSize,
                    par_maxChunkSize
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
    NUITKA_CANNOT_GET_HERE( function_1_encodeValue_of_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_encodeFun );
    par_encodeFun = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_defMode );
    par_defMode = NULL;

    Py_XDECREF( par_maxChunkSize );
    par_maxChunkSize = NULL;

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

    Py_XDECREF( par_encodeFun );
    par_encodeFun = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_defMode );
    par_defMode = NULL;

    CHECK_OBJECT( (PyObject *)par_maxChunkSize );
    Py_DECREF( par_maxChunkSize );
    par_maxChunkSize = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_encodeValue_of_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder );
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
static PyObject *fparse_function_1_encodeValue_of_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_encodeFun = NULL;
    PyObject *_python_par_client = NULL;
    PyObject *_python_par_defMode = NULL;
    PyObject *_python_par_maxChunkSize = NULL;
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
                PyErr_Format( PyExc_TypeError, "encodeValue() keywords must be strings" );
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
            if ( found == false && const_str_plain_encodeFun == key )
            {
                assert( _python_par_encodeFun == NULL );
                _python_par_encodeFun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_client == key )
            {
                assert( _python_par_client == NULL );
                _python_par_client = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_defMode == key )
            {
                assert( _python_par_defMode == NULL );
                _python_par_defMode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_maxChunkSize == key )
            {
                assert( _python_par_maxChunkSize == NULL );
                _python_par_maxChunkSize = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_encodeFun, key ) == 1 )
            {
                assert( _python_par_encodeFun == NULL );
                _python_par_encodeFun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_client, key ) == 1 )
            {
                assert( _python_par_client == NULL );
                _python_par_client = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_defMode, key ) == 1 )
            {
                assert( _python_par_defMode == NULL );
                _python_par_defMode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_maxChunkSize, key ) == 1 )
            {
                assert( _python_par_maxChunkSize == NULL );
                _python_par_maxChunkSize = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "encodeValue() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_encodeFun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_encodeFun = args[ 1 ];
        Py_INCREF( _python_par_encodeFun );
    }
    else if ( _python_par_encodeFun == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_encodeFun = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 );
            Py_INCREF( _python_par_encodeFun );
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
         if (unlikely( _python_par_client != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_client = args[ 2 ];
        Py_INCREF( _python_par_client );
    }
    else if ( _python_par_client == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_client = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 );
            Py_INCREF( _python_par_client );
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
         if (unlikely( _python_par_defMode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_defMode = args[ 3 ];
        Py_INCREF( _python_par_defMode );
    }
    else if ( _python_par_defMode == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_defMode = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 );
            Py_INCREF( _python_par_defMode );
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
         if (unlikely( _python_par_maxChunkSize != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_maxChunkSize = args[ 4 ];
        Py_INCREF( _python_par_maxChunkSize );
    }
    else if ( _python_par_maxChunkSize == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_maxChunkSize = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 );
            Py_INCREF( _python_par_maxChunkSize );
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
    if (unlikely( _python_par_self == NULL || _python_par_encodeFun == NULL || _python_par_client == NULL || _python_par_defMode == NULL || _python_par_maxChunkSize == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_encodeFun, _python_par_client, _python_par_defMode, _python_par_maxChunkSize };
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



    return impl_function_1_encodeValue_of_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder( self, _python_par_self, _python_par_encodeFun, _python_par_client, _python_par_defMode, _python_par_maxChunkSize );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_encodeFun );
    Py_XDECREF( _python_par_client );
    Py_XDECREF( _python_par_defMode );
    Py_XDECREF( _python_par_maxChunkSize );

    return NULL;
}

static PyObject *dparse_function_1_encodeValue_of_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_1_encodeValue_of_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_encodeValue_of_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_RealEncoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_4__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_4__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_4__prepared )
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
    PyObject *var__chooseEncBase = NULL;
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
    tmp_set_locals = closure_pyasn1$codec$cer$encoder_class_creation_4__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_RealEncoder;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1__chooseEncBase_of_class_4_RealEncoder_of_pyasn1$codec$cer$encoder(  );
    assert( var__chooseEncBase == NULL );
    var__chooseEncBase = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_pyasn1$codec$cer$encoder_class_creation_4__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_RealEncoder;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$codec$cer$encoder_class_creation_4__bases;

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
    if ( var__chooseEncBase != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain__chooseEncBase,
            var__chooseEncBase
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
    tmp_kw_name_1 = closure_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_4_RealEncoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var__chooseEncBase );
    var__chooseEncBase = NULL;

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

    Py_XDECREF( var__chooseEncBase );
    var__chooseEncBase = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_4_RealEncoder_of_pyasn1$codec$cer$encoder );
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


static PyObject *impl_function_1__chooseEncBase_of_class_4_RealEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_value )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_value = _python_par_value;
    PyObject *var_m = NULL;
    PyObject *var_b = NULL;
    PyObject *var_e = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_46856cc11668d5935bf72f253a0b4123, module_pyasn1$codec$cer$encoder );
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
    tmp_iter_arg_1 = par_value;

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    assert( var_m == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_m = tmp_assign_source_5;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    assert( var_b == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_b = tmp_assign_source_6;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;

    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_e = tmp_assign_source_7;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_source_name_1 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__dropFloatingPoint );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_m;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 19755 ], 47, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_b;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45225 ], 47, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_e;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1961 ], 47, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 31;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
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
            if ( var_m != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_m,
                    var_m
                );
                assert( tmp_res != -1 );

            }
            if ( var_b != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_b,
                    var_b
                );
                assert( tmp_res != -1 );

            }
            if ( var_e != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_e,
                    var_e
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
    NUITKA_CANNOT_GET_HERE( function_1__chooseEncBase_of_class_4_RealEncoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1__chooseEncBase_of_class_4_RealEncoder_of_pyasn1$codec$cer$encoder );
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
static PyObject *fparse_function_1__chooseEncBase_of_class_4_RealEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "_chooseEncBase() keywords must be strings" );
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
            if ( found == false && const_str_plain_value == key )
            {
                assert( _python_par_value == NULL );
                _python_par_value = value;

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
                   "_chooseEncBase() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_value != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_value = args[ 1 ];
        Py_INCREF( _python_par_value );
    }
    else if ( _python_par_value == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_value = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 );
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
    if (unlikely( _python_par_self == NULL || _python_par_value == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_value };
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



    return impl_function_1__chooseEncBase_of_class_4_RealEncoder_of_pyasn1$codec$cer$encoder( self, _python_par_self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_1__chooseEncBase_of_class_4_RealEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1__chooseEncBase_of_class_4_RealEncoder_of_pyasn1$codec$cer$encoder( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__chooseEncBase_of_class_4_RealEncoder_of_pyasn1$codec$cer$encoder( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_5__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_5__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_5__prepared )
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
    PyObject *var_zchar = NULL;
    PyObject *var_pluschar = NULL;
    PyObject *var_minuschar = NULL;
    PyObject *var_zero = NULL;
    PyObject *var_encodeValue = NULL;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pyasn1$codec$cer$encoder_class_creation_5__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_GeneralizedTimeEncoder;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ec47451658a4e3cc50cfcaa9c839d650, module_pyasn1$codec$cer$encoder );
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
    tmp_called_name_1 = PyDict_GetItem( locals_dict, const_str_plain_str2octs );

    if ( tmp_called_name_1 == NULL )
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_str2octs );

        if (unlikely( tmp_called_name_1 == NULL ))
        {
            tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str2octs );
        }

        if ( tmp_called_name_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = UNSTREAM_STRING( &constant_bin[ 48546 ], 30, 0 );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;
            goto frame_exception_exit_1;
        }

    }

    tmp_call_arg_element_1 = const_str_plain_Z;
    frame_function->f_lineno = 36;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    assert( var_zchar == NULL );
    var_zchar = tmp_assign_source_3;

    tmp_called_name_2 = PyDict_GetItem( locals_dict, const_str_plain_str2octs );

    if ( tmp_called_name_2 == NULL )
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_str2octs );

        if (unlikely( tmp_called_name_2 == NULL ))
        {
            tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str2octs );
        }

        if ( tmp_called_name_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = UNSTREAM_STRING( &constant_bin[ 48546 ], 30, 0 );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 37;
            goto frame_exception_exit_1;
        }

    }

    tmp_call_arg_element_2 = const_str_chr_43;
    frame_function->f_lineno = 37;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    assert( var_pluschar == NULL );
    var_pluschar = tmp_assign_source_4;

    tmp_called_name_3 = PyDict_GetItem( locals_dict, const_str_plain_str2octs );

    if ( tmp_called_name_3 == NULL )
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_str2octs );

        if (unlikely( tmp_called_name_3 == NULL ))
        {
            tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str2octs );
        }

        if ( tmp_called_name_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = UNSTREAM_STRING( &constant_bin[ 48546 ], 30, 0 );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;
            goto frame_exception_exit_1;
        }

    }

    tmp_call_arg_element_3 = const_str_chr_45;
    frame_function->f_lineno = 38;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_call_arg_element_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    assert( var_minuschar == NULL );
    var_minuschar = tmp_assign_source_5;

    tmp_called_name_4 = PyDict_GetItem( locals_dict, const_str_plain_str2octs );

    if ( tmp_called_name_4 == NULL )
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_str2octs );

        if (unlikely( tmp_called_name_4 == NULL ))
        {
            tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str2octs );
        }

        if ( tmp_called_name_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = UNSTREAM_STRING( &constant_bin[ 48546 ], 30, 0 );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 39;
            goto frame_exception_exit_1;
        }

    }

    tmp_call_arg_element_4 = const_str_plain_0;
    frame_function->f_lineno = 39;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, tmp_call_arg_element_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    assert( var_zero == NULL );
    var_zero = tmp_assign_source_6;


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

            tmp_frame_locals = locals_dict;
            Py_INCREF( locals_dict );
            if ( var___module__ != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain___module__,
                    var___module__
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                goto frame_exception_exit_1;
            }
            }
            if ( var___qualname__ != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain___qualname__,
                    var___qualname__
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                goto frame_exception_exit_1;
            }
            }
            if ( var___class__ != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain___class__,
                    var___class__
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                goto frame_exception_exit_1;
            }
            }
            if ( var_zchar != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain_zchar,
                    var_zchar
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                goto frame_exception_exit_1;
            }
            }
            if ( var_pluschar != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pluschar,
                    var_pluschar
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                goto frame_exception_exit_1;
            }
            }
            if ( var_minuschar != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain_minuschar,
                    var_minuschar
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                goto frame_exception_exit_1;
            }
            }
            if ( var_zero != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain_zero,
                    var_zero
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                goto frame_exception_exit_1;
            }
            }
            if ( var_encodeValue != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encodeValue,
                    var_encodeValue
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                goto frame_exception_exit_1;
            }
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

    tmp_assign_source_7 = MAKE_FUNCTION_function_1_encodeValue_of_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder(  );
    assert( var_encodeValue == NULL );
    var_encodeValue = tmp_assign_source_7;

    tmp_called_name_5 = closure_pyasn1$codec$cer$encoder_class_creation_5__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_GeneralizedTimeEncoder;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$codec$cer$encoder_class_creation_5__bases;

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
    if ( var_zchar != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_zchar,
            var_zchar
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var_pluschar != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_pluschar,
            var_pluschar
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var_minuschar != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_minuschar,
            var_minuschar
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var_zero != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_zero,
            var_zero
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var_encodeValue != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_encodeValue,
            var_encodeValue
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
    tmp_kw_name_1 = closure_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict;

    tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_8;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var_zchar );
    var_zchar = NULL;

    Py_XDECREF( var_pluschar );
    var_pluschar = NULL;

    Py_XDECREF( var_minuschar );
    var_minuschar = NULL;

    Py_XDECREF( var_zero );
    var_zero = NULL;

    Py_XDECREF( var_encodeValue );
    var_encodeValue = NULL;

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

    Py_XDECREF( var_zchar );
    var_zchar = NULL;

    Py_XDECREF( var_pluschar );
    var_pluschar = NULL;

    Py_XDECREF( var_minuschar );
    var_minuschar = NULL;

    Py_XDECREF( var_zero );
    var_zero = NULL;

    Py_XDECREF( var_encodeValue );
    var_encodeValue = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder );
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


static PyObject *impl_function_1_encodeValue_of_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_encodeFun, PyObject *_python_par_client, PyObject *_python_par_defMode, PyObject *_python_par_maxChunkSize )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_encodeFun = _python_par_encodeFun;
    PyObject *par_client = _python_par_client;
    PyObject *par_defMode = _python_par_defMode;
    PyObject *par_maxChunkSize = _python_par_maxChunkSize;
    PyObject *var_octets = NULL;
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
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7518f5f03c4d8fce2d6299342ca7d561, module_pyasn1$codec$cer$encoder );
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
    tmp_source_name_1 = par_client;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asOctets );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 41;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    assert( var_octets == NULL );
    var_octets = tmp_assign_source_1;

    tmp_len_arg_1 = var_octets;

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_15;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_error );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44589 ], 27, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PyAsn1Error );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_699096d92f2c93b19962f1572d2df3cf;
    tmp_right_name_1 = var_octets;

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47926 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 46;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 46;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 46;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_3 = par_self;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pluschar );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = var_octets;

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47926 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
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
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_minuschar );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = var_octets;

    if ( tmp_compexpr_right_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47926 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
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
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_error );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44589 ], 27, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_PyAsn1Error );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = const_str_digest_19fe853cab7f39edb3062603d9ffa90d;
    tmp_right_name_2 = var_octets;

    if ( tmp_right_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47926 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 48;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 48;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_subscribed_name_1 = var_octets;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47926 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_neg_1;
    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_zchar );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_compare_right_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_error );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44589 ], 27, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_PyAsn1Error );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = const_str_digest_c9a86e7f4753ccb3d59647ad77d90f71;
    tmp_right_name_3 = var_octets;

    if ( tmp_right_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47926 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 50;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, tmp_args_element_name_3 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 50;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48865 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_OctetStringEncoder );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_encodeValue );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_self;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_encodeFun;

    tmp_args_element_name_6 = par_client;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6249 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_defMode;

    tmp_args_element_name_8 = const_int_pos_1000;
    frame_function->f_lineno = 52;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_5, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
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
            if ( var_octets != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_octets,
                    var_octets
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
            if ( par_encodeFun != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encodeFun,
                    par_encodeFun
                );
                assert( tmp_res != -1 );

            }
            if ( par_client != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_client,
                    par_client
                );
                assert( tmp_res != -1 );

            }
            if ( par_defMode != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defMode,
                    par_defMode
                );
                assert( tmp_res != -1 );

            }
            if ( par_maxChunkSize != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_maxChunkSize,
                    par_maxChunkSize
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
    NUITKA_CANNOT_GET_HERE( function_1_encodeValue_of_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_encodeFun );
    par_encodeFun = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_defMode );
    par_defMode = NULL;

    Py_XDECREF( par_maxChunkSize );
    par_maxChunkSize = NULL;

    Py_XDECREF( var_octets );
    var_octets = NULL;

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

    Py_XDECREF( par_encodeFun );
    par_encodeFun = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_defMode );
    par_defMode = NULL;

    CHECK_OBJECT( (PyObject *)par_maxChunkSize );
    Py_DECREF( par_maxChunkSize );
    par_maxChunkSize = NULL;

    Py_XDECREF( var_octets );
    var_octets = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_encodeValue_of_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder );
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
static PyObject *fparse_function_1_encodeValue_of_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_encodeFun = NULL;
    PyObject *_python_par_client = NULL;
    PyObject *_python_par_defMode = NULL;
    PyObject *_python_par_maxChunkSize = NULL;
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
                PyErr_Format( PyExc_TypeError, "encodeValue() keywords must be strings" );
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
            if ( found == false && const_str_plain_encodeFun == key )
            {
                assert( _python_par_encodeFun == NULL );
                _python_par_encodeFun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_client == key )
            {
                assert( _python_par_client == NULL );
                _python_par_client = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_defMode == key )
            {
                assert( _python_par_defMode == NULL );
                _python_par_defMode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_maxChunkSize == key )
            {
                assert( _python_par_maxChunkSize == NULL );
                _python_par_maxChunkSize = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_encodeFun, key ) == 1 )
            {
                assert( _python_par_encodeFun == NULL );
                _python_par_encodeFun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_client, key ) == 1 )
            {
                assert( _python_par_client == NULL );
                _python_par_client = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_defMode, key ) == 1 )
            {
                assert( _python_par_defMode == NULL );
                _python_par_defMode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_maxChunkSize, key ) == 1 )
            {
                assert( _python_par_maxChunkSize == NULL );
                _python_par_maxChunkSize = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "encodeValue() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_encodeFun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_encodeFun = args[ 1 ];
        Py_INCREF( _python_par_encodeFun );
    }
    else if ( _python_par_encodeFun == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_encodeFun = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 );
            Py_INCREF( _python_par_encodeFun );
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
         if (unlikely( _python_par_client != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_client = args[ 2 ];
        Py_INCREF( _python_par_client );
    }
    else if ( _python_par_client == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_client = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 );
            Py_INCREF( _python_par_client );
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
         if (unlikely( _python_par_defMode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_defMode = args[ 3 ];
        Py_INCREF( _python_par_defMode );
    }
    else if ( _python_par_defMode == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_defMode = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 );
            Py_INCREF( _python_par_defMode );
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
         if (unlikely( _python_par_maxChunkSize != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_maxChunkSize = args[ 4 ];
        Py_INCREF( _python_par_maxChunkSize );
    }
    else if ( _python_par_maxChunkSize == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_maxChunkSize = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 );
            Py_INCREF( _python_par_maxChunkSize );
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
    if (unlikely( _python_par_self == NULL || _python_par_encodeFun == NULL || _python_par_client == NULL || _python_par_defMode == NULL || _python_par_maxChunkSize == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_encodeFun, _python_par_client, _python_par_defMode, _python_par_maxChunkSize };
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



    return impl_function_1_encodeValue_of_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder( self, _python_par_self, _python_par_encodeFun, _python_par_client, _python_par_defMode, _python_par_maxChunkSize );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_encodeFun );
    Py_XDECREF( _python_par_client );
    Py_XDECREF( _python_par_defMode );
    Py_XDECREF( _python_par_maxChunkSize );

    return NULL;
}

static PyObject *dparse_function_1_encodeValue_of_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_1_encodeValue_of_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_encodeValue_of_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_6__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_6__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_6__prepared )
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
    PyObject *var_zchar = NULL;
    PyObject *var_pluschar = NULL;
    PyObject *var_minuschar = NULL;
    PyObject *var_encodeValue = NULL;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pyasn1$codec$cer$encoder_class_creation_6__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_UTCTimeEncoder;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a38959ab3a6743700dc373a58fa19942, module_pyasn1$codec$cer$encoder );
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
    tmp_called_name_1 = PyDict_GetItem( locals_dict, const_str_plain_str2octs );

    if ( tmp_called_name_1 == NULL )
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_str2octs );

        if (unlikely( tmp_called_name_1 == NULL ))
        {
            tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str2octs );
        }

        if ( tmp_called_name_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = UNSTREAM_STRING( &constant_bin[ 48546 ], 30, 0 );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 56;
            goto frame_exception_exit_1;
        }

    }

    tmp_call_arg_element_1 = const_str_plain_Z;
    frame_function->f_lineno = 56;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    assert( var_zchar == NULL );
    var_zchar = tmp_assign_source_3;

    tmp_called_name_2 = PyDict_GetItem( locals_dict, const_str_plain_str2octs );

    if ( tmp_called_name_2 == NULL )
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_str2octs );

        if (unlikely( tmp_called_name_2 == NULL ))
        {
            tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str2octs );
        }

        if ( tmp_called_name_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = UNSTREAM_STRING( &constant_bin[ 48546 ], 30, 0 );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 57;
            goto frame_exception_exit_1;
        }

    }

    tmp_call_arg_element_2 = const_str_chr_43;
    frame_function->f_lineno = 57;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    assert( var_pluschar == NULL );
    var_pluschar = tmp_assign_source_4;

    tmp_called_name_3 = PyDict_GetItem( locals_dict, const_str_plain_str2octs );

    if ( tmp_called_name_3 == NULL )
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_str2octs );

        if (unlikely( tmp_called_name_3 == NULL ))
        {
            tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str2octs );
        }

        if ( tmp_called_name_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = UNSTREAM_STRING( &constant_bin[ 48546 ], 30, 0 );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 58;
            goto frame_exception_exit_1;
        }

    }

    tmp_call_arg_element_3 = const_str_chr_45;
    frame_function->f_lineno = 58;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_call_arg_element_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    assert( var_minuschar == NULL );
    var_minuschar = tmp_assign_source_5;


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

            tmp_frame_locals = locals_dict;
            Py_INCREF( locals_dict );
            if ( var___module__ != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain___module__,
                    var___module__
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                goto frame_exception_exit_1;
            }
            }
            if ( var___qualname__ != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain___qualname__,
                    var___qualname__
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                goto frame_exception_exit_1;
            }
            }
            if ( var___class__ != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain___class__,
                    var___class__
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                goto frame_exception_exit_1;
            }
            }
            if ( var_zchar != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain_zchar,
                    var_zchar
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                goto frame_exception_exit_1;
            }
            }
            if ( var_pluschar != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pluschar,
                    var_pluschar
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                goto frame_exception_exit_1;
            }
            }
            if ( var_minuschar != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain_minuschar,
                    var_minuschar
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                goto frame_exception_exit_1;
            }
            }
            if ( var_encodeValue != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encodeValue,
                    var_encodeValue
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                goto frame_exception_exit_1;
            }
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

    tmp_assign_source_6 = MAKE_FUNCTION_function_1_encodeValue_of_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder(  );
    assert( var_encodeValue == NULL );
    var_encodeValue = tmp_assign_source_6;

    tmp_called_name_4 = closure_pyasn1$codec$cer$encoder_class_creation_6__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_UTCTimeEncoder;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$codec$cer$encoder_class_creation_6__bases;

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
    if ( var_zchar != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_zchar,
            var_zchar
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var_pluschar != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_pluschar,
            var_pluschar
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var_minuschar != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_minuschar,
            var_minuschar
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var_encodeValue != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_encodeValue,
            var_encodeValue
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
    tmp_kw_name_1 = closure_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict;

    tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_7;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var_zchar );
    var_zchar = NULL;

    Py_XDECREF( var_pluschar );
    var_pluschar = NULL;

    Py_XDECREF( var_minuschar );
    var_minuschar = NULL;

    Py_XDECREF( var_encodeValue );
    var_encodeValue = NULL;

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

    Py_XDECREF( var_zchar );
    var_zchar = NULL;

    Py_XDECREF( var_pluschar );
    var_pluschar = NULL;

    Py_XDECREF( var_minuschar );
    var_minuschar = NULL;

    Py_XDECREF( var_encodeValue );
    var_encodeValue = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder );
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


static PyObject *impl_function_1_encodeValue_of_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_encodeFun, PyObject *_python_par_client, PyObject *_python_par_defMode, PyObject *_python_par_maxChunkSize )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_encodeFun = _python_par_encodeFun;
    PyObject *par_client = _python_par_client;
    PyObject *par_defMode = _python_par_defMode;
    PyObject *par_maxChunkSize = _python_par_maxChunkSize;
    PyObject *var_octets = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_804f9c62fdea02c340dd628ac9cae34c, module_pyasn1$codec$cer$encoder );
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
    tmp_source_name_1 = par_client;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asOctets );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 60;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    assert( var_octets == NULL );
    var_octets = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pluschar );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = var_octets;

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47926 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
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
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_minuschar );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = var_octets;

    if ( tmp_compexpr_right_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47926 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
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
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_error );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44589 ], 27, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_PyAsn1Error );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_19fe853cab7f39edb3062603d9ffa90d;
    tmp_right_name_1 = var_octets;

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47926 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 62;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 62;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_and_left_value_1 = var_octets;

    if ( tmp_and_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47926 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
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
    tmp_subscribed_name_1 = var_octets;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47926 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_neg_1;
    tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_zchar );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_compexpr_right_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_6 = par_client;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6249 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_clone );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = var_octets;

    if ( tmp_left_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47926 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_zchar );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 64;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_client;
        par_client = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_len_arg_1 = par_client;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6249 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_13;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_error );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44589 ], 27, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_PyAsn1Error );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = const_str_digest_699096d92f2c93b19962f1572d2df3cf;
    tmp_right_name_3 = par_client;

    if ( tmp_right_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6249 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 66;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, tmp_args_element_name_3 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 66;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48865 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_OctetStringEncoder );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_encodeValue );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_self;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_encodeFun;

    tmp_args_element_name_6 = par_client;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6249 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_defMode;

    tmp_args_element_name_8 = const_int_pos_1000;
    frame_function->f_lineno = 68;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_5, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
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
            if ( var_octets != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_octets,
                    var_octets
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
            if ( par_encodeFun != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encodeFun,
                    par_encodeFun
                );
                assert( tmp_res != -1 );

            }
            if ( par_client != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_client,
                    par_client
                );
                assert( tmp_res != -1 );

            }
            if ( par_defMode != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defMode,
                    par_defMode
                );
                assert( tmp_res != -1 );

            }
            if ( par_maxChunkSize != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_maxChunkSize,
                    par_maxChunkSize
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
    NUITKA_CANNOT_GET_HERE( function_1_encodeValue_of_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_encodeFun );
    par_encodeFun = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_defMode );
    par_defMode = NULL;

    Py_XDECREF( par_maxChunkSize );
    par_maxChunkSize = NULL;

    Py_XDECREF( var_octets );
    var_octets = NULL;

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

    Py_XDECREF( par_encodeFun );
    par_encodeFun = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_defMode );
    par_defMode = NULL;

    CHECK_OBJECT( (PyObject *)par_maxChunkSize );
    Py_DECREF( par_maxChunkSize );
    par_maxChunkSize = NULL;

    Py_XDECREF( var_octets );
    var_octets = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_encodeValue_of_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder );
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
static PyObject *fparse_function_1_encodeValue_of_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_encodeFun = NULL;
    PyObject *_python_par_client = NULL;
    PyObject *_python_par_defMode = NULL;
    PyObject *_python_par_maxChunkSize = NULL;
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
                PyErr_Format( PyExc_TypeError, "encodeValue() keywords must be strings" );
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
            if ( found == false && const_str_plain_encodeFun == key )
            {
                assert( _python_par_encodeFun == NULL );
                _python_par_encodeFun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_client == key )
            {
                assert( _python_par_client == NULL );
                _python_par_client = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_defMode == key )
            {
                assert( _python_par_defMode == NULL );
                _python_par_defMode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_maxChunkSize == key )
            {
                assert( _python_par_maxChunkSize == NULL );
                _python_par_maxChunkSize = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_encodeFun, key ) == 1 )
            {
                assert( _python_par_encodeFun == NULL );
                _python_par_encodeFun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_client, key ) == 1 )
            {
                assert( _python_par_client == NULL );
                _python_par_client = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_defMode, key ) == 1 )
            {
                assert( _python_par_defMode == NULL );
                _python_par_defMode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_maxChunkSize, key ) == 1 )
            {
                assert( _python_par_maxChunkSize == NULL );
                _python_par_maxChunkSize = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "encodeValue() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_encodeFun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_encodeFun = args[ 1 ];
        Py_INCREF( _python_par_encodeFun );
    }
    else if ( _python_par_encodeFun == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_encodeFun = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 );
            Py_INCREF( _python_par_encodeFun );
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
         if (unlikely( _python_par_client != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_client = args[ 2 ];
        Py_INCREF( _python_par_client );
    }
    else if ( _python_par_client == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_client = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 );
            Py_INCREF( _python_par_client );
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
         if (unlikely( _python_par_defMode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_defMode = args[ 3 ];
        Py_INCREF( _python_par_defMode );
    }
    else if ( _python_par_defMode == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_defMode = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 );
            Py_INCREF( _python_par_defMode );
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
         if (unlikely( _python_par_maxChunkSize != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_maxChunkSize = args[ 4 ];
        Py_INCREF( _python_par_maxChunkSize );
    }
    else if ( _python_par_maxChunkSize == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_maxChunkSize = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 );
            Py_INCREF( _python_par_maxChunkSize );
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
    if (unlikely( _python_par_self == NULL || _python_par_encodeFun == NULL || _python_par_client == NULL || _python_par_defMode == NULL || _python_par_maxChunkSize == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_encodeFun, _python_par_client, _python_par_defMode, _python_par_maxChunkSize };
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



    return impl_function_1_encodeValue_of_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder( self, _python_par_self, _python_par_encodeFun, _python_par_client, _python_par_defMode, _python_par_maxChunkSize );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_encodeFun );
    Py_XDECREF( _python_par_client );
    Py_XDECREF( _python_par_defMode );
    Py_XDECREF( _python_par_maxChunkSize );

    return NULL;
}

static PyObject *dparse_function_1_encodeValue_of_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_1_encodeValue_of_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_encodeValue_of_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_7__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_7__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_7__prepared )
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
    PyObject *var_encodeValue = NULL;
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
    tmp_set_locals = closure_pyasn1$codec$cer$encoder_class_creation_7__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_SetOfEncoder;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder(  );
    assert( var_encodeValue == NULL );
    var_encodeValue = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_pyasn1$codec$cer$encoder_class_creation_7__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_SetOfEncoder;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$codec$cer$encoder_class_creation_7__bases;

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
    if ( var_encodeValue != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_encodeValue,
            var_encodeValue
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
    tmp_kw_name_1 = closure_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var_encodeValue );
    var_encodeValue = NULL;

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

    Py_XDECREF( var_encodeValue );
    var_encodeValue = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder );
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


static PyObject *impl_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_encodeFun, PyObject *_python_par_client, PyObject *_python_par_defMode, PyObject *_python_par_maxChunkSize )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_encodeFun = _python_par_encodeFun;
    PyObject *par_client = _python_par_client;
    PyObject *par_defMode = _python_par_defMode;
    PyObject *par_maxChunkSize = _python_par_maxChunkSize;
    PyObject *var_substrate = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_comps = NULL;
    PyObject *var_c = NULL;
    PyObject *var_compSubs = NULL;
    PyObject *var_compSub = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_380d9df0a6e329f913f64d21122618a6, module_pyasn1$codec$cer$encoder );
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
    tmp_isinstance_inst_1 = par_client;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43524 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SequenceAndSetBase );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
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
    tmp_source_name_2 = par_client;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6249 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_setDefaultComponents );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 74;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_3 = par_client;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6249 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_verifySizeSpec );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 75;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_null );

    if (unlikely( tmp_assign_source_1 == NULL ))
    {
        tmp_assign_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_null );
    }

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47676 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        goto frame_exception_exit_1;
    }

    assert( var_substrate == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_substrate = tmp_assign_source_1;

    tmp_len_arg_1 = par_client;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6249 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    assert( var_idx == NULL );
    var_idx = tmp_assign_source_2;

    tmp_isinstance_inst_2 = par_client;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6249 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43524 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SequenceAndSetBase );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
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
    tmp_assign_source_3 = PyList_New( 0 );
    assert( var_comps == NULL );
    var_comps = tmp_assign_source_3;

    loop_start_1:;
    tmp_compare_left_1 = var_idx;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20533 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    tmp_left_name_1 = var_idx;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20533 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_idx;
        var_idx = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_1 = par_client;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6249 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = var_idx;

    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    goto loop_start_1;
    branch_no_4:;
    tmp_source_name_5 = par_client;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6249 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_getDefaultComponentByPosition );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_idx;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20533 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 86;
    tmp_compare_left_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_client;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6249 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = var_idx;

    if ( tmp_subscript_name_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20533 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    goto loop_start_1;
    branch_no_5:;
    tmp_source_name_6 = var_comps;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49008 ], 51, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_3 = par_client;

    if ( tmp_subscribed_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6249 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_3 = var_idx;

    if ( tmp_subscript_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20533 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 88;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_source_name_7 = var_comps;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49008 ], 51, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_sort );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = MAKE_FUNCTION_lambda_1_lambda_of_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder(  );
    tmp_dict_key_1 = const_str_plain_key;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 89;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_1 = var_comps;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49008 ], 51, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_5;

    // Tried code:
    loop_start_2:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 91;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_c;
        var_c = tmp_assign_source_7;
        Py_INCREF( var_c );
        Py_XDECREF( old );
    }

    tmp_left_name_2 = var_substrate;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44747 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        goto try_except_handler_2;
    }

    tmp_called_name_6 = par_encodeFun;

    tmp_args_element_name_3 = var_c;

    tmp_args_element_name_4 = par_defMode;

    tmp_args_element_name_5 = par_maxChunkSize;

    frame_function->f_lineno = 92;
    tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_8 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto try_except_handler_2;
    }
    var_substrate = tmp_assign_source_8;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_9 = PyList_New( 0 );
    assert( var_compSubs == NULL );
    var_compSubs = tmp_assign_source_9;

    loop_start_3:;
    tmp_compare_left_4 = var_idx;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20533 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_2 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    goto loop_end_3;
    branch_no_6:;
    tmp_left_name_3 = var_idx;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20533 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_1;
    tmp_assign_source_10 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_idx;
        var_idx = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_source_name_8 = var_compSubs;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49059 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_append );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = par_encodeFun;

    tmp_subscribed_name_4 = par_client;

    if ( tmp_subscribed_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6249 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_4 = var_idx;

    if ( tmp_subscript_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20533 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = par_defMode;

    tmp_args_element_name_9 = par_maxChunkSize;

    frame_function->f_lineno = 99;
    tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 99;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, tmp_args_element_name_6 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto frame_exception_exit_1;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_source_name_9 = var_compSubs;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49059 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_sort );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 101;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
    Py_DECREF( tmp_called_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_11 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_null );

    if (unlikely( tmp_assign_source_11 == NULL ))
    {
        tmp_assign_source_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_null );
    }

    if ( tmp_assign_source_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47676 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = var_substrate;
        var_substrate = tmp_assign_source_11;
        Py_INCREF( var_substrate );
        Py_XDECREF( old );
    }

    tmp_iter_arg_2 = var_compSubs;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49059 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_12;

    // Tried code:
    loop_start_4:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 103;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_compSub;
        var_compSub = tmp_assign_source_14;
        Py_INCREF( var_compSub );
        Py_XDECREF( old );
    }

    tmp_left_name_4 = var_substrate;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44747 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        goto try_except_handler_3;
    }

    tmp_right_name_4 = var_compSub;

    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
    tmp_assign_source_15 = tmp_left_name_4;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto try_except_handler_3;
    }
    var_substrate = tmp_assign_source_15;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto try_except_handler_3;
    }
    goto loop_start_4;
    loop_end_4:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_end_2:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_substrate;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44747 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_1 );
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
            if ( var_substrate != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_substrate,
                    var_substrate
                );
                assert( tmp_res != -1 );

            }
            if ( var_idx != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_idx,
                    var_idx
                );
                assert( tmp_res != -1 );

            }
            if ( var_comps != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_comps,
                    var_comps
                );
                assert( tmp_res != -1 );

            }
            if ( var_c != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c,
                    var_c
                );
                assert( tmp_res != -1 );

            }
            if ( var_compSubs != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_compSubs,
                    var_compSubs
                );
                assert( tmp_res != -1 );

            }
            if ( var_compSub != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_compSub,
                    var_compSub
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
            if ( par_encodeFun != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encodeFun,
                    par_encodeFun
                );
                assert( tmp_res != -1 );

            }
            if ( par_client != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_client,
                    par_client
                );
                assert( tmp_res != -1 );

            }
            if ( par_defMode != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defMode,
                    par_defMode
                );
                assert( tmp_res != -1 );

            }
            if ( par_maxChunkSize != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_maxChunkSize,
                    par_maxChunkSize
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
    NUITKA_CANNOT_GET_HERE( function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_encodeFun );
    par_encodeFun = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_defMode );
    par_defMode = NULL;

    Py_XDECREF( par_maxChunkSize );
    par_maxChunkSize = NULL;

    Py_XDECREF( var_substrate );
    var_substrate = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    Py_XDECREF( var_comps );
    var_comps = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_compSubs );
    var_compSubs = NULL;

    Py_XDECREF( var_compSub );
    var_compSub = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_encodeFun );
    par_encodeFun = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_defMode );
    par_defMode = NULL;

    Py_XDECREF( par_maxChunkSize );
    par_maxChunkSize = NULL;

    Py_XDECREF( var_substrate );
    var_substrate = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    Py_XDECREF( var_comps );
    var_comps = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_compSubs );
    var_compSubs = NULL;

    Py_XDECREF( var_compSub );
    var_compSub = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder );
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
static PyObject *fparse_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_encodeFun = NULL;
    PyObject *_python_par_client = NULL;
    PyObject *_python_par_defMode = NULL;
    PyObject *_python_par_maxChunkSize = NULL;
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
                PyErr_Format( PyExc_TypeError, "encodeValue() keywords must be strings" );
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
            if ( found == false && const_str_plain_encodeFun == key )
            {
                assert( _python_par_encodeFun == NULL );
                _python_par_encodeFun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_client == key )
            {
                assert( _python_par_client == NULL );
                _python_par_client = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_defMode == key )
            {
                assert( _python_par_defMode == NULL );
                _python_par_defMode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_maxChunkSize == key )
            {
                assert( _python_par_maxChunkSize == NULL );
                _python_par_maxChunkSize = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_encodeFun, key ) == 1 )
            {
                assert( _python_par_encodeFun == NULL );
                _python_par_encodeFun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_client, key ) == 1 )
            {
                assert( _python_par_client == NULL );
                _python_par_client = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_defMode, key ) == 1 )
            {
                assert( _python_par_defMode == NULL );
                _python_par_defMode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_maxChunkSize, key ) == 1 )
            {
                assert( _python_par_maxChunkSize == NULL );
                _python_par_maxChunkSize = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "encodeValue() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_encodeFun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_encodeFun = args[ 1 ];
        Py_INCREF( _python_par_encodeFun );
    }
    else if ( _python_par_encodeFun == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_encodeFun = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 );
            Py_INCREF( _python_par_encodeFun );
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
         if (unlikely( _python_par_client != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_client = args[ 2 ];
        Py_INCREF( _python_par_client );
    }
    else if ( _python_par_client == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_client = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 );
            Py_INCREF( _python_par_client );
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
         if (unlikely( _python_par_defMode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_defMode = args[ 3 ];
        Py_INCREF( _python_par_defMode );
    }
    else if ( _python_par_defMode == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_defMode = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 );
            Py_INCREF( _python_par_defMode );
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
         if (unlikely( _python_par_maxChunkSize != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_maxChunkSize = args[ 4 ];
        Py_INCREF( _python_par_maxChunkSize );
    }
    else if ( _python_par_maxChunkSize == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_maxChunkSize = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 );
            Py_INCREF( _python_par_maxChunkSize );
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
    if (unlikely( _python_par_self == NULL || _python_par_encodeFun == NULL || _python_par_client == NULL || _python_par_defMode == NULL || _python_par_maxChunkSize == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_encodeFun, _python_par_client, _python_par_defMode, _python_par_maxChunkSize };
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



    return impl_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder( self, _python_par_self, _python_par_encodeFun, _python_par_client, _python_par_defMode, _python_par_maxChunkSize );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_encodeFun );
    Py_XDECREF( _python_par_client );
    Py_XDECREF( _python_par_defMode );
    Py_XDECREF( _python_par_maxChunkSize );

    return NULL;
}

static PyObject *dparse_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = _python_par_x;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f482d9fb9aa78916e7f1c7d3912270ff, module_pyasn1$codec$cer$encoder );
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
    tmp_isinstance_inst_1 = par_x;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43524 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Choice );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
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
    tmp_source_name_2 = par_x;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43110 ], 47, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_getMinTagSet );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 90;
    tmp_and_right_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_or_left_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 90;
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
    tmp_source_name_3 = par_x;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43110 ], 47, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_getTagSet );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 90;
    tmp_or_right_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_return_value = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_return_value = tmp_or_left_value_1;
    or_end_1:;
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
            if ( par_x != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_x,
                    par_x
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
    NUITKA_CANNOT_GET_HERE( lambda_1_lambda_of_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( lambda_1_lambda_of_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder );
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
static PyObject *fparse_lambda_1_lambda_of_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
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
                PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_x == key )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "<lambda>() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = args[ 0 ];
        Py_INCREF( _python_par_x );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_x = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
            Py_INCREF( _python_par_x );
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
    if (unlikely( _python_par_x == NULL ))
    {
        PyObject *values[] = { _python_par_x };
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



    return impl_lambda_1_lambda_of_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_lambda_1_lambda_of_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_8_Encoder_of_pyasn1$codec$cer$encoder( PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_8__bases, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_8__metaclass, PyObject *&closure_pyasn1$codec$cer$encoder_class_creation_8__prepared )
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
    PyObject *var___call__ = NULL;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pyasn1$codec$cer$encoder_class_creation_8__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_Encoder;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    tmp_defaults_1 = const_tuple_false_int_0_tuple;
    tmp_assign_source_3 = MAKE_FUNCTION_function_1___call___of_class_8_Encoder_of_pyasn1$codec$cer$encoder( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___call__ == NULL );
    var___call__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_pyasn1$codec$cer$encoder_class_creation_8__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_Encoder;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$codec$cer$encoder_class_creation_8__bases;

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
    if ( var___call__ != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain___call__,
            var___call__
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
    tmp_kw_name_1 = closure_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_8_Encoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___call__ );
    var___call__ = NULL;

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

    Py_XDECREF( var___call__ );
    var___call__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_8_Encoder_of_pyasn1$codec$cer$encoder );
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


static PyObject *impl_function_1___call___of_class_8_Encoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_client, PyObject *_python_par_defMode, PyObject *_python_par_maxChunkSize )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_client = _python_par_client;
    PyObject *par_defMode = _python_par_defMode;
    PyObject *par_maxChunkSize = _python_par_maxChunkSize;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a32fa546ccdb9197bec6a46fde889cf9, module_pyasn1$codec$cer$encoder );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48865 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Encoder );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___call__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    tmp_args_element_name_2 = par_client;

    tmp_args_element_name_3 = par_defMode;

    tmp_args_element_name_4 = par_maxChunkSize;

    frame_function->f_lineno = 126;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
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
            if ( par_self != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );
                assert( tmp_res != -1 );

            }
            if ( par_client != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_client,
                    par_client
                );
                assert( tmp_res != -1 );

            }
            if ( par_defMode != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defMode,
                    par_defMode
                );
                assert( tmp_res != -1 );

            }
            if ( par_maxChunkSize != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_maxChunkSize,
                    par_maxChunkSize
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
    NUITKA_CANNOT_GET_HERE( function_1___call___of_class_8_Encoder_of_pyasn1$codec$cer$encoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_defMode );
    par_defMode = NULL;

    Py_XDECREF( par_maxChunkSize );
    par_maxChunkSize = NULL;

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

    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_defMode );
    par_defMode = NULL;

    Py_XDECREF( par_maxChunkSize );
    par_maxChunkSize = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___call___of_class_8_Encoder_of_pyasn1$codec$cer$encoder );
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
static PyObject *fparse_function_1___call___of_class_8_Encoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_client = NULL;
    PyObject *_python_par_defMode = NULL;
    PyObject *_python_par_maxChunkSize = NULL;
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
                PyErr_Format( PyExc_TypeError, "__call__() keywords must be strings" );
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
            if ( found == false && const_str_plain_client == key )
            {
                assert( _python_par_client == NULL );
                _python_par_client = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_defMode == key )
            {
                assert( _python_par_defMode == NULL );
                _python_par_defMode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_maxChunkSize == key )
            {
                assert( _python_par_maxChunkSize == NULL );
                _python_par_maxChunkSize = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_client, key ) == 1 )
            {
                assert( _python_par_client == NULL );
                _python_par_client = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_defMode, key ) == 1 )
            {
                assert( _python_par_defMode == NULL );
                _python_par_defMode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_maxChunkSize, key ) == 1 )
            {
                assert( _python_par_maxChunkSize == NULL );
                _python_par_maxChunkSize = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__call__() got an unexpected keyword argument '%s'",
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
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_self = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 );
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
         if (unlikely( _python_par_client != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_client = args[ 1 ];
        Py_INCREF( _python_par_client );
    }
    else if ( _python_par_client == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_client = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 );
            Py_INCREF( _python_par_client );
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
         if (unlikely( _python_par_defMode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_defMode = args[ 2 ];
        Py_INCREF( _python_par_defMode );
    }
    else if ( _python_par_defMode == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_defMode = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 );
            Py_INCREF( _python_par_defMode );
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
         if (unlikely( _python_par_maxChunkSize != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_maxChunkSize = args[ 3 ];
        Py_INCREF( _python_par_maxChunkSize );
    }
    else if ( _python_par_maxChunkSize == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_maxChunkSize = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 );
            Py_INCREF( _python_par_maxChunkSize );
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
    if (unlikely( _python_par_self == NULL || _python_par_client == NULL || _python_par_defMode == NULL || _python_par_maxChunkSize == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_client, _python_par_defMode, _python_par_maxChunkSize };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 4 ))
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



    return impl_function_1___call___of_class_8_Encoder_of_pyasn1$codec$cer$encoder( self, _python_par_self, _python_par_client, _python_par_defMode, _python_par_maxChunkSize );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_client );
    Py_XDECREF( _python_par_defMode );
    Py_XDECREF( _python_par_maxChunkSize );

    return NULL;
}

static PyObject *dparse_function_1___call___of_class_8_Encoder_of_pyasn1$codec$cer$encoder( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_1___call___of_class_8_Encoder_of_pyasn1$codec$cer$encoder( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___call___of_class_8_Encoder_of_pyasn1$codec$cer$encoder( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___call___of_class_8_Encoder_of_pyasn1$codec$cer$encoder( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___call___of_class_8_Encoder_of_pyasn1$codec$cer$encoder,
        dparse_function_1___call___of_class_8_Encoder_of_pyasn1$codec$cer$encoder,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        const_str_digest_33015ca16befafae86144df68ab2d465,
#endif
        codeobj_a32fa546ccdb9197bec6a46fde889cf9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pyasn1$codec$cer$encoder,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__chooseEncBase_of_class_4_RealEncoder_of_pyasn1$codec$cer$encoder(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__chooseEncBase_of_class_4_RealEncoder_of_pyasn1$codec$cer$encoder,
        dparse_function_1__chooseEncBase_of_class_4_RealEncoder_of_pyasn1$codec$cer$encoder,
        const_str_plain__chooseEncBase,
#if PYTHON_VERSION >= 330
        const_str_digest_e78bd2aeb7c7d6af72ae0205fec3ca32,
#endif
        codeobj_46856cc11668d5935bf72f253a0b4123,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pyasn1$codec$cer$encoder,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_encodeValue_of_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_encodeValue_of_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder,
        dparse_function_1_encodeValue_of_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder,
        const_str_plain_encodeValue,
#if PYTHON_VERSION >= 330
        const_str_digest_47e96fbdb7ce29f2a13ccac6b9601e71,
#endif
        codeobj_8e2959d6e569ce624348d6c15b429e76,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pyasn1$codec$cer$encoder,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_encodeValue_of_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_encodeValue_of_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder,
        dparse_function_1_encodeValue_of_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder,
        const_str_plain_encodeValue,
#if PYTHON_VERSION >= 330
        const_str_digest_de24a2f065421d7909e7b6b981f81fd2,
#endif
        codeobj_fdaa2732926af3f40072c4decf8cd1dd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pyasn1$codec$cer$encoder,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_encodeValue_of_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_encodeValue_of_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder,
        dparse_function_1_encodeValue_of_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder,
        const_str_plain_encodeValue,
#if PYTHON_VERSION >= 330
        const_str_digest_6ff446d34f96d6bd2f808ecd648ba969,
#endif
        codeobj_a60dc8d36ee49d842897459457ca5bd2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pyasn1$codec$cer$encoder,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_encodeValue_of_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_encodeValue_of_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder,
        dparse_function_1_encodeValue_of_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder,
        const_str_plain_encodeValue,
#if PYTHON_VERSION >= 330
        const_str_digest_9c9edc91eb8228d413f4ca3becb35432,
#endif
        codeobj_7518f5f03c4d8fce2d6299342ca7d561,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pyasn1$codec$cer$encoder,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_encodeValue_of_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_encodeValue_of_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder,
        dparse_function_1_encodeValue_of_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder,
        const_str_plain_encodeValue,
#if PYTHON_VERSION >= 330
        const_str_digest_b9f6ceb86b95ed11a40d14865b0e5071,
#endif
        codeobj_804f9c62fdea02c340dd628ac9cae34c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pyasn1$codec$cer$encoder,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder,
        dparse_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder,
        const_str_plain_encodeValue,
#if PYTHON_VERSION >= 330
        const_str_digest_d7634e552d516b8de4e6126d0edbe41f,
#endif
        codeobj_380d9df0a6e329f913f64d21122618a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pyasn1$codec$cer$encoder,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder,
        dparse_lambda_1_lambda_of_function_1_encodeValue_of_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_86229657ebeffe0ecf9ec4c0cfdaffa8,
#endif
        codeobj_f482d9fb9aa78916e7f1c7d3912270ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pyasn1$codec$cer$encoder,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyasn1$codec$cer$encoder =
{
    PyModuleDef_HEAD_INIT,
    "pyasn1.codec.cer.encoder",   /* m_name */
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

MOD_INIT_DECL( pyasn1$codec$cer$encoder )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyasn1$codec$cer$encoder );
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

    // puts( "in initpyasn1$codec$cer$encoder" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyasn1$codec$cer$encoder = Py_InitModule4(
        "pyasn1.codec.cer.encoder",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pyasn1$codec$cer$encoder = PyModule_Create( &mdef_pyasn1$codec$cer$encoder );
#endif

    moduledict_pyasn1$codec$cer$encoder = (PyDictObject *)((PyModuleObject *)module_pyasn1$codec$cer$encoder)->md_dict;

    CHECK_OBJECT( module_pyasn1$codec$cer$encoder );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b6b8af7167af33ad6201188dc064ba6b, module_pyasn1$codec$cer$encoder );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pyasn1$codec$cer$encoder );

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
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_1__bases = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_1__metaclass = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_1__prepared = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_2__bases = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_2__metaclass = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_2__prepared = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_3__bases = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_3__metaclass = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_3__prepared = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_4__bases = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_4__metaclass = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_4__prepared = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_5__bases = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_5__metaclass = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_5__prepared = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_6__bases = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_6__metaclass = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_6__prepared = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_7__bases = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_7__metaclass = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_7__prepared = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_8__bases = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_8__metaclass = NULL;
    PyObject *tmp_pyasn1$codec$cer$encoder_class_creation_8__prepared = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
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
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_bases_2;
    PyObject *tmp_class_bases_3;
    PyObject *tmp_class_bases_4;
    PyObject *tmp_class_bases_5;
    PyObject *tmp_class_bases_6;
    PyObject *tmp_class_bases_7;
    PyObject *tmp_class_bases_8;
    PyObject *tmp_class_meta_1;
    PyObject *tmp_class_meta_2;
    PyObject *tmp_class_meta_3;
    PyObject *tmp_class_meta_4;
    PyObject *tmp_class_meta_5;
    PyObject *tmp_class_meta_6;
    PyObject *tmp_class_meta_7;
    PyObject *tmp_class_meta_8;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_dict_2;
    PyObject *tmp_dget_dict_3;
    PyObject *tmp_dget_dict_4;
    PyObject *tmp_dget_dict_5;
    PyObject *tmp_dget_dict_6;
    PyObject *tmp_dget_dict_7;
    PyObject *tmp_dget_dict_8;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_dget_key_2;
    PyObject *tmp_dget_key_3;
    PyObject *tmp_dget_key_4;
    PyObject *tmp_dget_key_5;
    PyObject *tmp_dget_key_6;
    PyObject *tmp_dget_key_7;
    PyObject *tmp_dget_key_8;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_attr_6;
    PyObject *tmp_hasattr_attr_7;
    PyObject *tmp_hasattr_attr_8;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_hasattr_source_6;
    PyObject *tmp_hasattr_source_7;
    PyObject *tmp_hasattr_source_8;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
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
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
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
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_type_arg_6;
    PyObject *tmp_type_arg_7;
    PyObject *tmp_type_arg_8;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_95eadf56d94bcbdc45c1009a05bbe44b;
    UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_a40d973ff88a213bee0c6fc98dc34631;
    UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_FRAME( codeobj_d5749bab6ffe9483c70a0910e2e8411d, module_pyasn1$codec$cer$encoder );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pyasn1$codec$cer$encoder)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_7c8c58049edd248f8b1cb370445e702c, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_univ_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_univ );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ, tmp_assign_source_5 );
    tmp_import_globals_2 = ((PyModuleObject *)module_pyasn1$codec$cer$encoder)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_7c8c58049edd248f8b1cb370445e702c, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_useful_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_useful );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_useful, tmp_assign_source_6 );
    tmp_import_globals_3 = ((PyModuleObject *)module_pyasn1$codec$cer$encoder)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_1503b6119cd6ba88e7612e541d27eba3, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_encoder_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_encoder );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder, tmp_assign_source_7 );
    tmp_import_globals_4 = ((PyModuleObject *)module_pyasn1$codec$cer$encoder)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_60685fcea8bf95c3a304455958b7e27d, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_int2oct_str_plain_str2octs_str_plain_null_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_int2oct );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_int2oct, tmp_assign_source_8 );
    tmp_import_globals_5 = ((PyModuleObject *)module_pyasn1$codec$cer$encoder)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_60685fcea8bf95c3a304455958b7e27d, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_int2oct_str_plain_str2octs_str_plain_null_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_str2octs );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_str2octs, tmp_assign_source_9 );
    tmp_import_globals_6 = ((PyModuleObject *)module_pyasn1$codec$cer$encoder)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_60685fcea8bf95c3a304455958b7e27d, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_int2oct_str_plain_str2octs_str_plain_null_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_null );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_null, tmp_assign_source_10 );
    tmp_import_globals_7 = ((PyModuleObject *)module_pyasn1$codec$cer$encoder)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_pyasn1, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_error_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_error );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_error, tmp_assign_source_11 );
    // Tried code:
    tmp_assign_source_12 = PyTuple_New( 1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48865 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 8;
        goto try_except_handler_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_IntegerEncoder );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_12 );

        exception_lineno = 8;
        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_1 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_1__bases == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_1__bases = tmp_assign_source_12;

    tmp_assign_source_13 = PyDict_New();
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict = tmp_assign_source_13;

    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
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
    tmp_dget_dict_1 = tmp_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict;

    tmp_dget_key_1 = const_str_plain_metaclass;
    tmp_class_meta_1 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_class_meta_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_pyasn1$codec$cer$encoder_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
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
    tmp_subscribed_name_1 = tmp_pyasn1$codec$cer$encoder_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto try_except_handler_1;
    }
    tmp_class_meta_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_class_meta_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_meta_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_1 != NULL );
    Py_INCREF( tmp_class_meta_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_class_bases_1 = tmp_pyasn1$codec$cer$encoder_class_creation_1__bases;

    tmp_assign_source_14 = SELECT_METACLASS( tmp_class_meta_1, tmp_class_bases_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_1 );

        exception_lineno = 8;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_class_meta_1 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_1__metaclass == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_1__metaclass = tmp_assign_source_14;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
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
    tmp_remove_dict = tmp_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_pyasn1$codec$cer$encoder_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
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
    tmp_source_name_2 = tmp_pyasn1$codec$cer$encoder_class_creation_1__metaclass;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_BooleanEncoder;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_pyasn1$codec$cer$encoder_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 8;
    tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_15 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_1__prepared == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_1__prepared = tmp_assign_source_15;

    tmp_assign_source_16 = impl_class_1_BooleanEncoder_of_pyasn1$codec$cer$encoder( tmp_pyasn1$codec$cer$encoder_class_creation_1__bases, tmp_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict, tmp_pyasn1$codec$cer$encoder_class_creation_1__metaclass, tmp_pyasn1$codec$cer$encoder_class_creation_1__prepared );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_BooleanEncoder, tmp_assign_source_16 );
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

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_1__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_1__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_1__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_1__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_1__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_1__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_1__prepared = NULL;

    // Tried code:
    tmp_assign_source_17 = PyTuple_New( 1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48865 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 16;
        goto try_except_handler_2;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_BitStringEncoder );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_17 );

        exception_lineno = 16;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_assign_source_17, 0, tmp_tuple_element_3 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_2__bases == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_2__bases = tmp_assign_source_17;

    tmp_assign_source_18 = PyDict_New();
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict = tmp_assign_source_18;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
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
    tmp_dget_dict_2 = tmp_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict;

    tmp_dget_key_2 = const_str_plain_metaclass;
    tmp_class_meta_2 = DICT_GET_ITEM( tmp_dget_dict_2, tmp_dget_key_2 );
    if ( tmp_class_meta_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto try_except_handler_2;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_2 = tmp_pyasn1$codec$cer$encoder_class_creation_2__bases;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
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
    tmp_subscribed_name_2 = tmp_pyasn1$codec$cer$encoder_class_creation_2__bases;

    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto try_except_handler_2;
    }
    tmp_class_meta_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_class_meta_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto try_except_handler_2;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_class_meta_2 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_2 != NULL );
    Py_INCREF( tmp_class_meta_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_class_bases_2 = tmp_pyasn1$codec$cer$encoder_class_creation_2__bases;

    tmp_assign_source_19 = SELECT_METACLASS( tmp_class_meta_2, tmp_class_bases_2 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_2 );

        exception_lineno = 16;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_class_meta_2 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_2__metaclass == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_2__metaclass = tmp_assign_source_19;

    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict;

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
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
    tmp_remove_dict = tmp_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto try_except_handler_2;
    }
    branch_no_2:;
    tmp_hasattr_source_2 = tmp_pyasn1$codec$cer$encoder_class_creation_2__metaclass;

    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
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
    tmp_source_name_4 = tmp_pyasn1$codec$cer$encoder_class_creation_2__metaclass;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto try_except_handler_2;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_BitStringEncoder;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_pyasn1$codec$cer$encoder_class_creation_2__bases;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_kw_name_2 = tmp_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict;

    frame_module->f_lineno = 16;
    tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto try_except_handler_2;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_20 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_2__prepared == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_2__prepared = tmp_assign_source_20;

    tmp_assign_source_21 = impl_class_2_BitStringEncoder_of_pyasn1$codec$cer$encoder( tmp_pyasn1$codec$cer$encoder_class_creation_2__bases, tmp_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict, tmp_pyasn1$codec$cer$encoder_class_creation_2__metaclass, tmp_pyasn1$codec$cer$encoder_class_creation_2__prepared );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_BitStringEncoder, tmp_assign_source_21 );
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

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_2__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_2__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_2__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_2__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_2__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_2__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_2__prepared = NULL;

    // Tried code:
    tmp_assign_source_22 = PyTuple_New( 1 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48865 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        goto try_except_handler_3;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_OctetStringEncoder );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_22 );

        exception_lineno = 22;
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_assign_source_22, 0, tmp_tuple_element_5 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_3__bases == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_3__bases = tmp_assign_source_22;

    tmp_assign_source_23 = PyDict_New();
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict = tmp_assign_source_23;

    tmp_compare_left_5 = const_str_plain_metaclass;
    tmp_compare_right_5 = tmp_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict;

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    if ( tmp_cmp_In_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
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
    tmp_dget_dict_3 = tmp_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict;

    tmp_dget_key_3 = const_str_plain_metaclass;
    tmp_class_meta_3 = DICT_GET_ITEM( tmp_dget_dict_3, tmp_dget_key_3 );
    if ( tmp_class_meta_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto try_except_handler_3;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_cond_value_3 = tmp_pyasn1$codec$cer$encoder_class_creation_3__bases;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
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
    tmp_subscribed_name_3 = tmp_pyasn1$codec$cer$encoder_class_creation_3__bases;

    tmp_subscript_name_3 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto try_except_handler_3;
    }
    tmp_class_meta_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_class_meta_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto try_except_handler_3;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_class_meta_3 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_3 != NULL );
    Py_INCREF( tmp_class_meta_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_class_bases_3 = tmp_pyasn1$codec$cer$encoder_class_creation_3__bases;

    tmp_assign_source_24 = SELECT_METACLASS( tmp_class_meta_3, tmp_class_bases_3 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_3 );

        exception_lineno = 22;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_class_meta_3 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_3__metaclass == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_3__metaclass = tmp_assign_source_24;

    tmp_compare_left_6 = const_str_plain_metaclass;
    tmp_compare_right_6 = tmp_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict;

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    if ( tmp_cmp_In_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
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
    tmp_remove_dict = tmp_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto try_except_handler_3;
    }
    branch_no_3:;
    tmp_hasattr_source_3 = tmp_pyasn1$codec$cer$encoder_class_creation_3__metaclass;

    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
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
    tmp_source_name_6 = tmp_pyasn1$codec$cer$encoder_class_creation_3__metaclass;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto try_except_handler_3;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_6 = const_str_plain_OctetStringEncoder;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_pyasn1$codec$cer$encoder_class_creation_3__bases;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
    tmp_kw_name_3 = tmp_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict;

    frame_module->f_lineno = 22;
    tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto try_except_handler_3;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_25 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_3__prepared == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_3__prepared = tmp_assign_source_25;

    tmp_assign_source_26 = impl_class_3_OctetStringEncoder_of_pyasn1$codec$cer$encoder( tmp_pyasn1$codec$cer$encoder_class_creation_3__bases, tmp_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict, tmp_pyasn1$codec$cer$encoder_class_creation_3__metaclass, tmp_pyasn1$codec$cer$encoder_class_creation_3__prepared );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_OctetStringEncoder, tmp_assign_source_26 );
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

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_3__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_3__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_3__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_3__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_3__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_3__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_3__prepared = NULL;

    // Tried code:
    tmp_assign_source_27 = PyTuple_New( 1 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48865 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        goto try_except_handler_4;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_RealEncoder );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_27 );

        exception_lineno = 28;
        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_assign_source_27, 0, tmp_tuple_element_7 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_4__bases == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_4__bases = tmp_assign_source_27;

    tmp_assign_source_28 = PyDict_New();
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict = tmp_assign_source_28;

    tmp_compare_left_7 = const_str_plain_metaclass;
    tmp_compare_right_7 = tmp_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict;

    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    if ( tmp_cmp_In_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
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
    tmp_dget_dict_4 = tmp_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict;

    tmp_dget_key_4 = const_str_plain_metaclass;
    tmp_class_meta_4 = DICT_GET_ITEM( tmp_dget_dict_4, tmp_dget_key_4 );
    if ( tmp_class_meta_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto try_except_handler_4;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_cond_value_4 = tmp_pyasn1$codec$cer$encoder_class_creation_4__bases;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
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
    tmp_subscribed_name_4 = tmp_pyasn1$codec$cer$encoder_class_creation_4__bases;

    tmp_subscript_name_4 = const_int_0;
    tmp_type_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_type_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto try_except_handler_4;
    }
    tmp_class_meta_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_class_meta_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto try_except_handler_4;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_class_meta_4 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_4 != NULL );
    Py_INCREF( tmp_class_meta_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_class_bases_4 = tmp_pyasn1$codec$cer$encoder_class_creation_4__bases;

    tmp_assign_source_29 = SELECT_METACLASS( tmp_class_meta_4, tmp_class_bases_4 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_4 );

        exception_lineno = 28;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_class_meta_4 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_4__metaclass == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_4__metaclass = tmp_assign_source_29;

    tmp_compare_left_8 = const_str_plain_metaclass;
    tmp_compare_right_8 = tmp_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict;

    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    if ( tmp_cmp_In_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
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
    tmp_remove_dict = tmp_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto try_except_handler_4;
    }
    branch_no_4:;
    tmp_hasattr_source_4 = tmp_pyasn1$codec$cer$encoder_class_creation_4__metaclass;

    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
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
    tmp_source_name_8 = tmp_pyasn1$codec$cer$encoder_class_creation_4__metaclass;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto try_except_handler_4;
    }
    tmp_args_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_8 = const_str_plain_RealEncoder;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_pyasn1$codec$cer$encoder_class_creation_4__bases;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
    tmp_kw_name_4 = tmp_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict;

    frame_module->f_lineno = 28;
    tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto try_except_handler_4;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_30 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_4__prepared == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_4__prepared = tmp_assign_source_30;

    tmp_assign_source_31 = impl_class_4_RealEncoder_of_pyasn1$codec$cer$encoder( tmp_pyasn1$codec$cer$encoder_class_creation_4__bases, tmp_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict, tmp_pyasn1$codec$cer$encoder_class_creation_4__metaclass, tmp_pyasn1$codec$cer$encoder_class_creation_4__prepared );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_RealEncoder, tmp_assign_source_31 );
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

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_4__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_4__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_4__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_4__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_4__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_4__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_4__prepared = NULL;

    // Tried code:
    tmp_assign_source_32 = PyTuple_New( 1 );
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_OctetStringEncoder );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OctetStringEncoder );
    }

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47174 ], 40, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_32, 0, tmp_tuple_element_9 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_5__bases == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_5__bases = tmp_assign_source_32;

    tmp_assign_source_33 = PyDict_New();
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict = tmp_assign_source_33;

    tmp_compare_left_9 = const_str_plain_metaclass;
    tmp_compare_right_9 = tmp_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict;

    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    if ( tmp_cmp_In_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
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
    tmp_dget_dict_5 = tmp_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict;

    tmp_dget_key_5 = const_str_plain_metaclass;
    tmp_class_meta_5 = DICT_GET_ITEM( tmp_dget_dict_5, tmp_dget_key_5 );
    if ( tmp_class_meta_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_5;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_cond_value_5 = tmp_pyasn1$codec$cer$encoder_class_creation_5__bases;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
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
    tmp_subscribed_name_5 = tmp_pyasn1$codec$cer$encoder_class_creation_5__bases;

    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_5;
    }
    tmp_class_meta_5 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_class_meta_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_5;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_class_meta_5 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_5 != NULL );
    Py_INCREF( tmp_class_meta_5 );
    condexpr_end_14:;
    condexpr_end_13:;
    tmp_class_bases_5 = tmp_pyasn1$codec$cer$encoder_class_creation_5__bases;

    tmp_assign_source_34 = SELECT_METACLASS( tmp_class_meta_5, tmp_class_bases_5 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_5 );

        exception_lineno = 35;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_class_meta_5 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_5__metaclass == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_5__metaclass = tmp_assign_source_34;

    tmp_compare_left_10 = const_str_plain_metaclass;
    tmp_compare_right_10 = tmp_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict;

    tmp_cmp_In_10 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    if ( tmp_cmp_In_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
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
    tmp_remove_dict = tmp_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_5;
    }
    branch_no_5:;
    tmp_hasattr_source_5 = tmp_pyasn1$codec$cer$encoder_class_creation_5__metaclass;

    tmp_hasattr_attr_5 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_5, tmp_hasattr_attr_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
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
    tmp_source_name_9 = tmp_pyasn1$codec$cer$encoder_class_creation_5__metaclass;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_5;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_10 = const_str_plain_GeneralizedTimeEncoder;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_pyasn1$codec$cer$encoder_class_creation_5__bases;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_10 );
    tmp_kw_name_5 = tmp_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict;

    frame_module->f_lineno = 35;
    tmp_assign_source_35 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_5;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_35 = PyDict_New();
    condexpr_end_15:;
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_5__prepared == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_5__prepared = tmp_assign_source_35;

    tmp_assign_source_36 = impl_class_5_GeneralizedTimeEncoder_of_pyasn1$codec$cer$encoder( tmp_pyasn1$codec$cer$encoder_class_creation_5__bases, tmp_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict, tmp_pyasn1$codec$cer$encoder_class_creation_5__metaclass, tmp_pyasn1$codec$cer$encoder_class_creation_5__prepared );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_GeneralizedTimeEncoder, tmp_assign_source_36 );
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

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_5__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_5__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_5__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_5__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_5__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_5__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_5__prepared = NULL;

    // Tried code:
    tmp_assign_source_37 = PyTuple_New( 1 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_37 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48865 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        goto try_except_handler_6;
    }

    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_OctetStringEncoder );
    if ( tmp_tuple_element_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_37 );

        exception_lineno = 55;
        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_11 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_6__bases == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_6__bases = tmp_assign_source_37;

    tmp_assign_source_38 = PyDict_New();
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict = tmp_assign_source_38;

    tmp_compare_left_11 = const_str_plain_metaclass;
    tmp_compare_right_11 = tmp_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict;

    tmp_cmp_In_11 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    if ( tmp_cmp_In_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
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
    tmp_dget_dict_6 = tmp_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict;

    tmp_dget_key_6 = const_str_plain_metaclass;
    tmp_class_meta_6 = DICT_GET_ITEM( tmp_dget_dict_6, tmp_dget_key_6 );
    if ( tmp_class_meta_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_6;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_cond_value_6 = tmp_pyasn1$codec$cer$encoder_class_creation_6__bases;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
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
    tmp_subscribed_name_6 = tmp_pyasn1$codec$cer$encoder_class_creation_6__bases;

    tmp_subscript_name_6 = const_int_0;
    tmp_type_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_type_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_6;
    }
    tmp_class_meta_6 = BUILTIN_TYPE1( tmp_type_arg_6 );
    Py_DECREF( tmp_type_arg_6 );
    if ( tmp_class_meta_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_6;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_class_meta_6 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_6 != NULL );
    Py_INCREF( tmp_class_meta_6 );
    condexpr_end_17:;
    condexpr_end_16:;
    tmp_class_bases_6 = tmp_pyasn1$codec$cer$encoder_class_creation_6__bases;

    tmp_assign_source_39 = SELECT_METACLASS( tmp_class_meta_6, tmp_class_bases_6 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_6 );

        exception_lineno = 55;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_class_meta_6 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_6__metaclass == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_6__metaclass = tmp_assign_source_39;

    tmp_compare_left_12 = const_str_plain_metaclass;
    tmp_compare_right_12 = tmp_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict;

    tmp_cmp_In_12 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    if ( tmp_cmp_In_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
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
    tmp_remove_dict = tmp_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_6;
    }
    branch_no_6:;
    tmp_hasattr_source_6 = tmp_pyasn1$codec$cer$encoder_class_creation_6__metaclass;

    tmp_hasattr_attr_6 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_6, tmp_hasattr_attr_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
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
    tmp_source_name_11 = tmp_pyasn1$codec$cer$encoder_class_creation_6__metaclass;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___prepare__ );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_6;
    }
    tmp_args_name_6 = PyTuple_New( 2 );
    tmp_tuple_element_12 = const_str_plain_UTCTimeEncoder;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = tmp_pyasn1$codec$cer$encoder_class_creation_6__bases;

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_12 );
    tmp_kw_name_6 = tmp_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict;

    frame_module->f_lineno = 55;
    tmp_assign_source_40 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_6;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_40 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_6__prepared == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_6__prepared = tmp_assign_source_40;

    tmp_assign_source_41 = impl_class_6_UTCTimeEncoder_of_pyasn1$codec$cer$encoder( tmp_pyasn1$codec$cer$encoder_class_creation_6__bases, tmp_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict, tmp_pyasn1$codec$cer$encoder_class_creation_6__metaclass, tmp_pyasn1$codec$cer$encoder_class_creation_6__prepared );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_UTCTimeEncoder, tmp_assign_source_41 );
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

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_6__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_6__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_6__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_6__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_6__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_6__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_6__prepared = NULL;

    // Tried code:
    tmp_assign_source_42 = PyTuple_New( 1 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_42 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48865 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        goto try_except_handler_7;
    }

    tmp_tuple_element_13 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_SequenceOfEncoder );
    if ( tmp_tuple_element_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_42 );

        exception_lineno = 71;
        goto try_except_handler_7;
    }
    PyTuple_SET_ITEM( tmp_assign_source_42, 0, tmp_tuple_element_13 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_7__bases == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_7__bases = tmp_assign_source_42;

    tmp_assign_source_43 = PyDict_New();
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict = tmp_assign_source_43;

    tmp_compare_left_13 = const_str_plain_metaclass;
    tmp_compare_right_13 = tmp_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict;

    tmp_cmp_In_13 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    if ( tmp_cmp_In_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
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
    tmp_dget_dict_7 = tmp_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict;

    tmp_dget_key_7 = const_str_plain_metaclass;
    tmp_class_meta_7 = DICT_GET_ITEM( tmp_dget_dict_7, tmp_dget_key_7 );
    if ( tmp_class_meta_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_7;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_cond_value_7 = tmp_pyasn1$codec$cer$encoder_class_creation_7__bases;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
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
    tmp_subscribed_name_7 = tmp_pyasn1$codec$cer$encoder_class_creation_7__bases;

    tmp_subscript_name_7 = const_int_0;
    tmp_type_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_type_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_7;
    }
    tmp_class_meta_7 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_class_meta_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_7;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_class_meta_7 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_7 != NULL );
    Py_INCREF( tmp_class_meta_7 );
    condexpr_end_20:;
    condexpr_end_19:;
    tmp_class_bases_7 = tmp_pyasn1$codec$cer$encoder_class_creation_7__bases;

    tmp_assign_source_44 = SELECT_METACLASS( tmp_class_meta_7, tmp_class_bases_7 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_7 );

        exception_lineno = 71;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_class_meta_7 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_7__metaclass == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_7__metaclass = tmp_assign_source_44;

    tmp_compare_left_14 = const_str_plain_metaclass;
    tmp_compare_right_14 = tmp_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict;

    tmp_cmp_In_14 = PySequence_Contains( tmp_compare_right_14, tmp_compare_left_14 );
    if ( tmp_cmp_In_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
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
    tmp_remove_dict = tmp_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_7;
    }
    branch_no_7:;
    tmp_hasattr_source_7 = tmp_pyasn1$codec$cer$encoder_class_creation_7__metaclass;

    tmp_hasattr_attr_7 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_7, tmp_hasattr_attr_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
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
    tmp_source_name_13 = tmp_pyasn1$codec$cer$encoder_class_creation_7__metaclass;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_7;
    }
    tmp_args_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_14 = const_str_plain_SetOfEncoder;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = tmp_pyasn1$codec$cer$encoder_class_creation_7__bases;

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_14 );
    tmp_kw_name_7 = tmp_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict;

    frame_module->f_lineno = 71;
    tmp_assign_source_45 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_7;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_assign_source_45 = PyDict_New();
    condexpr_end_21:;
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_7__prepared == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_7__prepared = tmp_assign_source_45;

    tmp_assign_source_46 = impl_class_7_SetOfEncoder_of_pyasn1$codec$cer$encoder( tmp_pyasn1$codec$cer$encoder_class_creation_7__bases, tmp_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict, tmp_pyasn1$codec$cer$encoder_class_creation_7__metaclass, tmp_pyasn1$codec$cer$encoder_class_creation_7__prepared );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_SetOfEncoder, tmp_assign_source_46 );
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

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_7__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_7__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_7__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_7__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_7__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_7__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_7__prepared = NULL;

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48865 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_tagMap );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_copy );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 107;
    tmp_assign_source_47 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_tagMap, tmp_assign_source_47 );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_tagMap );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tagMap );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44532 ], 28, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_update );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = _PyDict_NewPresized( 7 );
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_BooleanEncoder );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BooleanEncoder );
    }

    if ( tmp_called_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47254 ], 36, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 109;
    tmp_dict_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_10 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43524 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_Boolean );
    if ( tmp_source_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_1 );

        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_17 );
    if ( tmp_dict_key_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_1 );

        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_args_element_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_1 );
        Py_DECREF( tmp_dict_key_1 );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_1 );
    Py_DECREF( tmp_dict_key_1 );
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_BitStringEncoder );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BitStringEncoder );
    }

    if ( tmp_called_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47326 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 110;
    tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_11 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43524 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_source_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_BitString );
    if ( tmp_source_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_2 );

        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_19 );
    if ( tmp_dict_key_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_2 );

        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_args_element_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_2 );
        Py_DECREF( tmp_dict_key_2 );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_2 );
    Py_DECREF( tmp_dict_key_2 );
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_OctetStringEncoder );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OctetStringEncoder );
    }

    if ( tmp_called_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47174 ], 40, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 111;
    tmp_dict_value_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_12 );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43524 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_source_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_OctetString );
    if ( tmp_source_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_3 );

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_21 );
    if ( tmp_dict_key_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_3 );

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_args_element_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_3 );
        Py_DECREF( tmp_dict_key_3 );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_3 );
    Py_DECREF( tmp_dict_key_3 );
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_RealEncoder );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RealEncoder );
    }

    if ( tmp_called_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47442 ], 33, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 112;
    tmp_dict_value_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_13 );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43524 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_source_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_Real );
    if ( tmp_source_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_4 );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_23 );
    if ( tmp_dict_key_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_4 );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_args_element_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_4 );
        Py_DECREF( tmp_dict_key_4 );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_4 );
    Py_DECREF( tmp_dict_key_4 );
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_GeneralizedTimeEncoder );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GeneralizedTimeEncoder );
    }

    if ( tmp_called_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48894 ], 44, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 113;
    tmp_dict_value_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_14 );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_useful );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_useful );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44329 ], 28, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_source_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_GeneralizedTime );
    if ( tmp_source_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_5 );

        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_25 );
    if ( tmp_dict_key_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_5 );

        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_args_element_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_5 );
        Py_DECREF( tmp_dict_key_5 );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_5 );
    Py_DECREF( tmp_dict_key_5 );
    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_UTCTimeEncoder );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UTCTimeEncoder );
    }

    if ( tmp_called_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48938 ], 36, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 114;
    tmp_dict_value_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_15 );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_useful );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_useful );
    }

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44329 ], 28, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        goto frame_exception_exit_1;
    }

    tmp_source_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_UTCTime );
    if ( tmp_source_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_6 );

        exception_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_6 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_27 );
    if ( tmp_dict_key_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_6 );

        exception_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_args_element_name_1, tmp_dict_key_6, tmp_dict_value_6 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_6 );
        Py_DECREF( tmp_dict_key_6 );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_6 );
    Py_DECREF( tmp_dict_key_6 );
    tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_SetOfEncoder );

    if (unlikely( tmp_called_name_16 == NULL ))
    {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetOfEncoder );
    }

    if ( tmp_called_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48974 ], 34, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 115;
    tmp_dict_value_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_16 );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43524 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_SetOf );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_7 );

        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 115;
    tmp_source_name_29 = CALL_FUNCTION_NO_ARGS( tmp_called_name_17 );
    Py_DECREF( tmp_called_name_17 );
    if ( tmp_source_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_7 );

        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_29 );
    if ( tmp_dict_key_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_7 );

        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_args_element_name_1, tmp_dict_key_7, tmp_dict_value_7 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_dict_value_7 );
        Py_DECREF( tmp_dict_key_7 );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_7 );
    Py_DECREF( tmp_dict_key_7 );
    frame_module->f_lineno = 115;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
    }

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48865 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_typeMap );
    if ( tmp_source_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_copy );
    Py_DECREF( tmp_source_name_31 );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 118;
    tmp_assign_source_48 = CALL_FUNCTION_NO_ARGS( tmp_called_name_18 );
    Py_DECREF( tmp_called_name_18 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_typeMap, tmp_assign_source_48 );
    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_typeMap );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeMap );
    }

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44560 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_update );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = _PyDict_NewPresized( 2 );
    tmp_called_name_20 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_SetOfEncoder );

    if (unlikely( tmp_called_name_20 == NULL ))
    {
        tmp_called_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetOfEncoder );
    }

    if ( tmp_called_name_20 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48974 ], 34, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 120;
    tmp_dict_value_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_20 );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_35 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_dict_value_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43524 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_source_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_Set );
    if ( tmp_source_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_dict_value_8 );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_8 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_typeId );
    Py_DECREF( tmp_source_name_34 );
    if ( tmp_dict_key_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_dict_value_8 );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_args_element_name_2, tmp_dict_key_8, tmp_dict_value_8 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_dict_value_8 );
        Py_DECREF( tmp_dict_key_8 );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_8 );
    Py_DECREF( tmp_dict_key_8 );
    tmp_called_name_21 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_SetOfEncoder );

    if (unlikely( tmp_called_name_21 == NULL ))
    {
        tmp_called_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetOfEncoder );
    }

    if ( tmp_called_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48974 ], 34, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 121;
    tmp_dict_value_9 = CALL_FUNCTION_NO_ARGS( tmp_called_name_21 );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_37 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_dict_value_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43524 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_source_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_SetOf );
    if ( tmp_source_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_dict_value_9 );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_9 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_typeId );
    Py_DECREF( tmp_source_name_36 );
    if ( tmp_dict_key_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_dict_value_9 );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_args_element_name_2, tmp_dict_key_9, tmp_dict_value_9 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_dict_value_9 );
        Py_DECREF( tmp_dict_key_9 );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_9 );
    Py_DECREF( tmp_dict_key_9 );
    frame_module->f_lineno = 121;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_assign_source_49 = PyTuple_New( 1 );
    tmp_source_name_38 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

    if (unlikely( tmp_source_name_38 == NULL ))
    {
        tmp_source_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
    }

    if ( tmp_source_name_38 == NULL )
    {
        Py_DECREF( tmp_assign_source_49 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48865 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        goto try_except_handler_8;
    }

    tmp_tuple_element_15 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_Encoder );
    if ( tmp_tuple_element_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_49 );

        exception_lineno = 124;
        goto try_except_handler_8;
    }
    PyTuple_SET_ITEM( tmp_assign_source_49, 0, tmp_tuple_element_15 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_8__bases == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_8__bases = tmp_assign_source_49;

    tmp_assign_source_50 = PyDict_New();
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict = tmp_assign_source_50;

    tmp_compare_left_15 = const_str_plain_metaclass;
    tmp_compare_right_15 = tmp_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict;

    tmp_cmp_In_15 = PySequence_Contains( tmp_compare_right_15, tmp_compare_left_15 );
    if ( tmp_cmp_In_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
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
    tmp_dget_dict_8 = tmp_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict;

    tmp_dget_key_8 = const_str_plain_metaclass;
    tmp_class_meta_8 = DICT_GET_ITEM( tmp_dget_dict_8, tmp_dget_key_8 );
    if ( tmp_class_meta_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto try_except_handler_8;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_cond_value_8 = tmp_pyasn1$codec$cer$encoder_class_creation_8__bases;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
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
    tmp_subscribed_name_8 = tmp_pyasn1$codec$cer$encoder_class_creation_8__bases;

    tmp_subscript_name_8 = const_int_0;
    tmp_type_arg_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_type_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto try_except_handler_8;
    }
    tmp_class_meta_8 = BUILTIN_TYPE1( tmp_type_arg_8 );
    Py_DECREF( tmp_type_arg_8 );
    if ( tmp_class_meta_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto try_except_handler_8;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_class_meta_8 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_8 != NULL );
    Py_INCREF( tmp_class_meta_8 );
    condexpr_end_23:;
    condexpr_end_22:;
    tmp_class_bases_8 = tmp_pyasn1$codec$cer$encoder_class_creation_8__bases;

    tmp_assign_source_51 = SELECT_METACLASS( tmp_class_meta_8, tmp_class_bases_8 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_8 );

        exception_lineno = 124;
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_class_meta_8 );
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_8__metaclass == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_8__metaclass = tmp_assign_source_51;

    tmp_compare_left_16 = const_str_plain_metaclass;
    tmp_compare_right_16 = tmp_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict;

    tmp_cmp_In_16 = PySequence_Contains( tmp_compare_right_16, tmp_compare_left_16 );
    if ( tmp_cmp_In_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
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
    tmp_remove_dict = tmp_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto try_except_handler_8;
    }
    branch_no_8:;
    tmp_hasattr_source_8 = tmp_pyasn1$codec$cer$encoder_class_creation_8__metaclass;

    tmp_hasattr_attr_8 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_8, tmp_hasattr_attr_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
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
    tmp_source_name_39 = tmp_pyasn1$codec$cer$encoder_class_creation_8__metaclass;

    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain___prepare__ );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto try_except_handler_8;
    }
    tmp_args_name_8 = PyTuple_New( 2 );
    tmp_tuple_element_16 = const_str_plain_Encoder;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = tmp_pyasn1$codec$cer$encoder_class_creation_8__bases;

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_16 );
    tmp_kw_name_8 = tmp_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict;

    frame_module->f_lineno = 124;
    tmp_assign_source_52 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_called_name_22 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto try_except_handler_8;
    }
    goto condexpr_end_24;
    condexpr_false_24:;
    tmp_assign_source_52 = PyDict_New();
    condexpr_end_24:;
    assert( tmp_pyasn1$codec$cer$encoder_class_creation_8__prepared == NULL );
    tmp_pyasn1$codec$cer$encoder_class_creation_8__prepared = tmp_assign_source_52;

    tmp_assign_source_53 = impl_class_8_Encoder_of_pyasn1$codec$cer$encoder( tmp_pyasn1$codec$cer$encoder_class_creation_8__bases, tmp_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict, tmp_pyasn1$codec$cer$encoder_class_creation_8__metaclass, tmp_pyasn1$codec$cer$encoder_class_creation_8__prepared );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_Encoder, tmp_assign_source_53 );
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

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_8__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_8__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_8__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_8__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_8__bases );
    tmp_pyasn1$codec$cer$encoder_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict );
    tmp_pyasn1$codec$cer$encoder_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_8__metaclass );
    tmp_pyasn1$codec$cer$encoder_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$codec$cer$encoder_class_creation_8__prepared );
    tmp_pyasn1$codec$cer$encoder_class_creation_8__prepared = NULL;

    tmp_called_name_23 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_Encoder );

    if (unlikely( tmp_called_name_23 == NULL ))
    {
        tmp_called_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Encoder );
    }

    if ( tmp_called_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47618 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_tagMap );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tagMap );
    }

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44532 ], 28, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_typeMap );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeMap );
    }

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44560 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 128;
    tmp_assign_source_54 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_23, tmp_args_element_name_3, tmp_args_element_name_4 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encode, tmp_assign_source_54 );

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

    return MOD_RETURN_VALUE( module_pyasn1$codec$cer$encoder );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
