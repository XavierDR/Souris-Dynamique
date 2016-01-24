// Generated code for Python source for module 'requests.packages.urllib3.util.ssl_'
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

// The _module_requests$packages$urllib3$util$ssl_ is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_requests$packages$urllib3$util$ssl_;
PyDictObject *moduledict_requests$packages$urllib3$util$ssl_;

// The module constants used
extern PyObject *const_tuple_int_pos_3_int_pos_2_tuple;
static PyObject *const_str_digest_7c46323d1955d9b4a74a964a21041d91;
extern PyObject *const_str_plain_warn;
static PyObject *const_tuple_str_plain_HAS_SNI_tuple;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_load_cert_chain;
static PyObject *const_str_plain_create_default_context;
static PyObject *const_str_plain_unhexlify;
static PyObject *const_tuple_str_plain_self_str_plain_cipher_suite_tuple;
static PyObject *const_str_plain_hashfunc;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_OP_NO_SSLv2;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_hmac;
static PyObject *const_str_digest_90dcfb0c5b2e395585c44f2c6f8db8bf;
static PyObject *const_str_digest_f2ba34680fb338cc7c2e32fdb7c1301a;
extern PyObject *const_str_plain_HAS_SNI;
extern PyObject *const_str_plain_encode;
static PyObject *const_tuple_str_plain_self_str_plain_protocol_version_tuple;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_digest_4fc29877723e0f5f2c0ba56dea944579;
extern PyObject *const_str_plain_resolve_cert_reqs;
static PyObject *const_str_plain_protocol;
static PyObject *const_str_plain_HASHFUNC_MAP;
static PyObject *const_str_digest_69e25692dfd1b01029aea21de378705a;
static PyObject *const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple;
extern PyObject *const_str_plain_hexlify;
static PyObject *const_str_digest_b9aa27e08efbddfbd5516474a24d9946;
extern PyObject *const_str_plain_ssl_;
static PyObject *const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple;
extern PyObject *const_str_plain_ciphers;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_int_pos_32;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_plain_candidate;
static PyObject *const_int_pos_16777216;
static PyObject *const_str_digest_c14374e01b66ea11dc386f22f452750b;
extern PyObject *const_str_plain_errno;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_CERT_REQUIRED;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_load_verify_locations;
extern PyObject *const_str_plain_ssl_version;
static PyObject *const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple;
static PyObject *const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_str;
extern PyObject *const_tuple_none_none_none_none_tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_hashlib;
extern PyObject *const_str_plain_SSLContext;
extern PyObject *const_str_plain_sock;
extern PyObject *const_str_plain_bytearray;
extern PyObject *const_str_plain_SNIMissingWarning;
static PyObject *const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple;
static PyObject *const_str_plain_create_urllib3_context;
extern PyObject *const_int_pos_131072;
static PyObject *const_str_plain_protocol_version;
extern PyObject *const_str_plain_e;
static PyObject *const_str_digest_1e4f35ebb0482ef8f0f24ba4e0927107;
extern PyObject *const_str_plain_context;
static PyObject *const_str_digest_0735a7cb67d0fec10de5e4a8b02501c8;
extern PyObject *const_str_plain_l;
static PyObject *const_str_plain_set_ciphers;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_assert_fingerprint;
static PyObject *const_str_plain_ssl_context;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_verify_mode;
static PyObject *const_str_digest_e7dc819c78ea2e0685e83afc15e2e26b;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_OP_NO_SSLv3;
static PyObject *const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple;
extern PyObject *const_str_plain_cert;
extern PyObject *const_str_plain_abs;
static PyObject *const_str_digest_6ffcf66c5c876dcb3dc480220c734062;
static PyObject *const_str_plain_cert_digest;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_str_plain_resolve_ssl_version;
static PyObject *const_str_digest_7e022d086a052671147967e3e56cd0cb;
extern PyObject *const_str_plain_ssl;
extern PyObject *const_str_plain_capath;
extern PyObject *const_int_0;
static PyObject *const_str_plain__const_compare_digest_backport;
static PyObject *const_tuple_int_pos_16777216_int_pos_33554432_tuple;
extern PyObject *const_str_plain_server_hostname;
static PyObject *const_tuple_a6023d2223969a512ec0003c0984198f_tuple;
static PyObject *const_str_digest_40d4c2a9acff45d215ea7c0bc7f6dfe1;
static PyObject *const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple;
extern PyObject *const_tuple_int_pos_2_int_pos_7_tuple;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain_DEFAULT_CIPHERS;
extern PyObject *const_str_plain_cert_reqs;
static PyObject *const_tuple_none_none_none_none_none_none_none_none_none_tuple;
extern PyObject *const_str_plain_ca_cert_dir;
static PyObject *const_str_digest_716aea1eaac37029978ba81ff09f5824;
static PyObject *const_str_plain_CERT_;
static PyObject *const_str_plain_supports_set_ciphers;
extern PyObject *const_int_pos_64;
static PyObject *const_str_digest_3f9c79ac9778c20d3cb015a396023b31;
static PyObject *const_int_pos_33554432;
static PyObject *const_str_digest_e3db3ee12166b00e30746ab96478c070;
static PyObject *const_str_digest_6c2591835ae2a3a9fec6e814315a45cd;
static PyObject *const_str_plain_digest_length;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_CERT_NONE;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_PROTOCOL_SSLv23;
static PyObject *const_str_plain_cipher_suite;
static PyObject *const_str_plain_fingerprint;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_f5ab9e44d9781bbce93000ad3a218dd6;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_digest_c6e5c4394838f24a74fcd724137f89e0;
extern PyObject *const_str_plain_binascii;
extern PyObject *const_str_plain_sha1;
extern PyObject *const_str_plain_wrap_socket;
extern PyObject *const_str_plain_cafile;
static PyObject *const_str_plain_ENOENT;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_ca_certs;
extern PyObject *const_str_plain_ssl_wrap_socket;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_digest;
static PyObject *const_str_plain_compare_digest;
static PyObject *const_str_plain_PROTOCOL_;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_pos_3;
static PyObject *const_str_plain_fingerprint_bytes;
static PyObject *const_tuple_str_plain_candidate_str_plain_res_tuple;
static PyObject *const_tuple_d789c4ab56634b41dee4edcac2ae240d_tuple;
extern PyObject *const_str_plain_OP_NO_COMPRESSION;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple;
static PyObject *const_str_plain__const_compare_digest;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_md5;
static PyObject *const_str_digest_935dace93363545d379a5e2ed3994f38;
extern PyObject *const_int_pos_40;
static PyObject *const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple;
extern PyObject *const_str_plain_keyfile;
extern PyObject *const_int_pos_7;
static PyObject *const_str_digest_a0adb01dd8d355d29039a847a354795c;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_get;
static PyObject *const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple;
extern PyObject *const_str_plain_sha256;
extern PyObject *const_str_plain_check_hostname;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_certfile;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_empty;
static PyObject *const_tuple_str_plain_SSLContext_tuple;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple;
extern PyObject *const_str_plain_InsecurePlatformWarning;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_7c46323d1955d9b4a74a964a21041d91 = UNSTREAM_STRING( &constant_bin[ 826702 ], 45, 0 );
    const_tuple_str_plain_HAS_SNI_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HAS_SNI_tuple, 0, const_str_plain_HAS_SNI ); Py_INCREF( const_str_plain_HAS_SNI );
    const_str_plain_create_default_context = UNSTREAM_STRING( &constant_bin[ 826747 ], 22, 1 );
    const_str_plain_unhexlify = UNSTREAM_STRING( &constant_bin[ 85485 ], 9, 1 );
    const_tuple_str_plain_self_str_plain_cipher_suite_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cipher_suite_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_cipher_suite = UNSTREAM_STRING( &constant_bin[ 826769 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cipher_suite_tuple, 1, const_str_plain_cipher_suite ); Py_INCREF( const_str_plain_cipher_suite );
    const_str_plain_hashfunc = UNSTREAM_STRING( &constant_bin[ 85526 ], 8, 1 );
    const_str_digest_90dcfb0c5b2e395585c44f2c6f8db8bf = UNSTREAM_STRING( &constant_bin[ 826781 ], 22, 0 );
    const_str_digest_f2ba34680fb338cc7c2e32fdb7c1301a = UNSTREAM_STRING( &constant_bin[ 826803 ], 32, 0 );
    const_tuple_str_plain_self_str_plain_protocol_version_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_protocol_version_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_protocol_version = UNSTREAM_STRING( &constant_bin[ 826835 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_protocol_version_tuple, 1, const_str_plain_protocol_version ); Py_INCREF( const_str_plain_protocol_version );
    const_str_plain_protocol = UNSTREAM_STRING( &constant_bin[ 115909 ], 8, 1 );
    const_str_plain_HASHFUNC_MAP = UNSTREAM_STRING( &constant_bin[ 85335 ], 12, 1 );
    const_str_digest_69e25692dfd1b01029aea21de378705a = UNSTREAM_STRING( &constant_bin[ 826851 ], 26, 0 );
    const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, 0, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    const_str_plain_fingerprint = UNSTREAM_STRING( &constant_bin[ 76167 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, 1, const_str_plain_fingerprint ); Py_INCREF( const_str_plain_fingerprint );
    const_str_plain_digest_length = UNSTREAM_STRING( &constant_bin[ 85379 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, 2, const_str_plain_digest_length ); Py_INCREF( const_str_plain_digest_length );
    PyTuple_SET_ITEM( const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, 3, const_str_plain_hashfunc ); Py_INCREF( const_str_plain_hashfunc );
    const_str_plain_fingerprint_bytes = UNSTREAM_STRING( &constant_bin[ 85623 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, 4, const_str_plain_fingerprint_bytes ); Py_INCREF( const_str_plain_fingerprint_bytes );
    const_str_plain_cert_digest = UNSTREAM_STRING( &constant_bin[ 85715 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, 5, const_str_plain_cert_digest ); Py_INCREF( const_str_plain_cert_digest );
    const_str_digest_b9aa27e08efbddfbd5516474a24d9946 = UNSTREAM_STRING( &constant_bin[ 826877 ], 326, 0 );
    const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple, 0, const_str_plain_wrap_socket ); Py_INCREF( const_str_plain_wrap_socket );
    PyTuple_SET_ITEM( const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple, 1, const_str_plain_CERT_NONE ); Py_INCREF( const_str_plain_CERT_NONE );
    PyTuple_SET_ITEM( const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple, 2, const_str_plain_PROTOCOL_SSLv23 ); Py_INCREF( const_str_plain_PROTOCOL_SSLv23 );
    const_str_plain_candidate = UNSTREAM_STRING( &constant_bin[ 85803 ], 9, 1 );
    const_int_pos_16777216 = PyLong_FromUnsignedLong( 16777216ul );
    const_str_digest_c14374e01b66ea11dc386f22f452750b = UNSTREAM_STRING( &constant_bin[ 827203 ], 68, 0 );
    const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, 0, const_str_plain_md5 ); Py_INCREF( const_str_plain_md5 );
    PyTuple_SET_ITEM( const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, 1, const_str_plain_sha1 ); Py_INCREF( const_str_plain_sha1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, 2, const_str_plain_sha256 ); Py_INCREF( const_str_plain_sha256 );
    const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 0, const_str_plain_ssl_version ); Py_INCREF( const_str_plain_ssl_version );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 1, const_str_plain_cert_reqs ); Py_INCREF( const_str_plain_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 2, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 3, const_str_plain_ciphers ); Py_INCREF( const_str_plain_ciphers );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 4, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 1, const_str_plain_certfile ); Py_INCREF( const_str_plain_certfile );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 2, const_str_plain_keyfile ); Py_INCREF( const_str_plain_keyfile );
    const_str_plain_create_urllib3_context = UNSTREAM_STRING( &constant_bin[ 86059 ], 22, 1 );
    const_str_digest_1e4f35ebb0482ef8f0f24ba4e0927107 = UNSTREAM_STRING( &constant_bin[ 827271 ], 22, 0 );
    const_str_digest_0735a7cb67d0fec10de5e4a8b02501c8 = UNSTREAM_STRING( &constant_bin[ 827293 ], 34, 0 );
    const_str_plain_set_ciphers = UNSTREAM_STRING( &constant_bin[ 827282 ], 11, 1 );
    const_str_plain_ssl_context = UNSTREAM_STRING( &constant_bin[ 827327 ], 11, 1 );
    const_str_digest_e7dc819c78ea2e0685e83afc15e2e26b = UNSTREAM_STRING( &constant_bin[ 827338 ], 54, 0 );
    const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple, 2, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple, 3, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    PyTuple_SET_ITEM( const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple, 4, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_str_digest_6ffcf66c5c876dcb3dc480220c734062 = UNSTREAM_STRING( &constant_bin[ 827392 ], 19, 0 );
    const_str_digest_7e022d086a052671147967e3e56cd0cb = UNSTREAM_STRING( &constant_bin[ 827411 ], 146, 0 );
    const_str_plain__const_compare_digest_backport = UNSTREAM_STRING( &constant_bin[ 85158 ], 30, 1 );
    const_tuple_int_pos_16777216_int_pos_33554432_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_16777216_int_pos_33554432_tuple, 0, const_int_pos_16777216 ); Py_INCREF( const_int_pos_16777216 );
    const_int_pos_33554432 = PyLong_FromUnsignedLong( 33554432ul );
    PyTuple_SET_ITEM( const_tuple_int_pos_16777216_int_pos_33554432_tuple, 1, const_int_pos_33554432 ); Py_INCREF( const_int_pos_33554432 );
    const_tuple_a6023d2223969a512ec0003c0984198f_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_a6023d2223969a512ec0003c0984198f_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_a6023d2223969a512ec0003c0984198f_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_a6023d2223969a512ec0003c0984198f_tuple, 2, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_plain_supports_set_ciphers = UNSTREAM_STRING( &constant_bin[ 827557 ], 20, 1 );
    PyTuple_SET_ITEM( const_tuple_a6023d2223969a512ec0003c0984198f_tuple, 3, const_str_plain_supports_set_ciphers ); Py_INCREF( const_str_plain_supports_set_ciphers );
    PyTuple_SET_ITEM( const_tuple_a6023d2223969a512ec0003c0984198f_tuple, 4, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    PyTuple_SET_ITEM( const_tuple_a6023d2223969a512ec0003c0984198f_tuple, 5, const_str_plain_load_cert_chain ); Py_INCREF( const_str_plain_load_cert_chain );
    PyTuple_SET_ITEM( const_tuple_a6023d2223969a512ec0003c0984198f_tuple, 6, const_str_plain_load_verify_locations ); Py_INCREF( const_str_plain_load_verify_locations );
    PyTuple_SET_ITEM( const_tuple_a6023d2223969a512ec0003c0984198f_tuple, 7, const_str_plain_set_ciphers ); Py_INCREF( const_str_plain_set_ciphers );
    PyTuple_SET_ITEM( const_tuple_a6023d2223969a512ec0003c0984198f_tuple, 8, const_str_plain_wrap_socket ); Py_INCREF( const_str_plain_wrap_socket );
    const_str_digest_40d4c2a9acff45d215ea7c0bc7f6dfe1 = UNSTREAM_STRING( &constant_bin[ 827577 ], 32, 0 );
    const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, 0, const_str_plain_SSLError ); Py_INCREF( const_str_plain_SSLError );
    PyTuple_SET_ITEM( const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, 1, const_str_plain_InsecurePlatformWarning ); Py_INCREF( const_str_plain_InsecurePlatformWarning );
    PyTuple_SET_ITEM( const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, 2, const_str_plain_SNIMissingWarning ); Py_INCREF( const_str_plain_SNIMissingWarning );
    const_tuple_none_none_none_none_none_none_none_none_none_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_none_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_none_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_none_tuple, 7, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_none_tuple, 8, Py_None ); Py_INCREF( Py_None );
    const_str_digest_716aea1eaac37029978ba81ff09f5824 = UNSTREAM_STRING( &constant_bin[ 827609 ], 154, 0 );
    const_str_plain_CERT_ = UNSTREAM_STRING( &constant_bin[ 85762 ], 5, 1 );
    const_str_digest_3f9c79ac9778c20d3cb015a396023b31 = UNSTREAM_STRING( &constant_bin[ 827763 ], 35, 0 );
    const_str_digest_e3db3ee12166b00e30746ab96478c070 = UNSTREAM_STRING( &constant_bin[ 827798 ], 486, 0 );
    const_str_digest_6c2591835ae2a3a9fec6e814315a45cd = UNSTREAM_STRING( &constant_bin[ 828284 ], 253, 0 );
    const_str_digest_f5ab9e44d9781bbce93000ad3a218dd6 = UNSTREAM_STRING( &constant_bin[ 828537 ], 167, 0 );
    const_str_digest_c6e5c4394838f24a74fcd724137f89e0 = UNSTREAM_STRING( &constant_bin[ 828704 ], 1259, 0 );
    const_str_plain_ENOENT = UNSTREAM_STRING( &constant_bin[ 829963 ], 6, 1 );
    const_str_plain_compare_digest = UNSTREAM_STRING( &constant_bin[ 85165 ], 14, 1 );
    const_str_plain_PROTOCOL_ = UNSTREAM_STRING( &constant_bin[ 85848 ], 9, 1 );
    const_tuple_str_plain_candidate_str_plain_res_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_candidate_str_plain_res_tuple, 0, const_str_plain_candidate ); Py_INCREF( const_str_plain_candidate );
    PyTuple_SET_ITEM( const_tuple_str_plain_candidate_str_plain_res_tuple, 1, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_tuple_d789c4ab56634b41dee4edcac2ae240d_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d789c4ab56634b41dee4edcac2ae240d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d789c4ab56634b41dee4edcac2ae240d_tuple, 1, const_str_plain_socket ); Py_INCREF( const_str_plain_socket );
    PyTuple_SET_ITEM( const_tuple_d789c4ab56634b41dee4edcac2ae240d_tuple, 2, const_str_plain_server_hostname ); Py_INCREF( const_str_plain_server_hostname );
    PyTuple_SET_ITEM( const_tuple_d789c4ab56634b41dee4edcac2ae240d_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple, 0, const_str_plain_hexlify ); Py_INCREF( const_str_plain_hexlify );
    PyTuple_SET_ITEM( const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple, 1, const_str_plain_unhexlify ); Py_INCREF( const_str_plain_unhexlify );
    const_str_plain__const_compare_digest = UNSTREAM_STRING( &constant_bin[ 85158 ], 21, 1 );
    const_str_digest_935dace93363545d379a5e2ed3994f38 = UNSTREAM_STRING( &constant_bin[ 829969 ], 225, 0 );
    const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, 0, const_str_plain_OP_NO_SSLv2 ); Py_INCREF( const_str_plain_OP_NO_SSLv2 );
    PyTuple_SET_ITEM( const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, 1, const_str_plain_OP_NO_SSLv3 ); Py_INCREF( const_str_plain_OP_NO_SSLv3 );
    PyTuple_SET_ITEM( const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, 2, const_str_plain_OP_NO_COMPRESSION ); Py_INCREF( const_str_plain_OP_NO_COMPRESSION );
    const_str_digest_a0adb01dd8d355d29039a847a354795c = UNSTREAM_STRING( &constant_bin[ 830194 ], 790, 0 );
    const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 1, const_str_plain_cafile ); Py_INCREF( const_str_plain_cafile );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 2, const_str_plain_capath ); Py_INCREF( const_str_plain_capath );
    const_tuple_str_plain_SSLContext_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SSLContext_tuple, 0, const_str_plain_SSLContext ); Py_INCREF( const_str_plain_SSLContext );
    const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 0, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 1, const_str_plain_keyfile ); Py_INCREF( const_str_plain_keyfile );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 2, const_str_plain_certfile ); Py_INCREF( const_str_plain_certfile );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 3, const_str_plain_cert_reqs ); Py_INCREF( const_str_plain_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 4, const_str_plain_ca_certs ); Py_INCREF( const_str_plain_ca_certs );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 5, const_str_plain_server_hostname ); Py_INCREF( const_str_plain_server_hostname );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 6, const_str_plain_ssl_version ); Py_INCREF( const_str_plain_ssl_version );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 7, const_str_plain_ciphers ); Py_INCREF( const_str_plain_ciphers );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 8, const_str_plain_ssl_context ); Py_INCREF( const_str_plain_ssl_context );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 9, const_str_plain_ca_cert_dir ); Py_INCREF( const_str_plain_ca_cert_dir );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 10, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 11, const_str_plain_e ); Py_INCREF( const_str_plain_e );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$packages$urllib3$util$ssl_( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9910dacadc7fc1b057c9ce93b6d2a128;
static PyCodeObject *codeobj_a95c55737ffb5986597ef7f80808dbba;
static PyCodeObject *codeobj_a7b4bbae0df2848cc82b544d5f646230;
static PyCodeObject *codeobj_63b6c9c54cc1af61aae351404d73e48b;
static PyCodeObject *codeobj_1c2a0b4093217a956fb695ad5b168047;
static PyCodeObject *codeobj_ba0af3bff032e197ae36efee3c005baa;
static PyCodeObject *codeobj_086be726ea28b2a0aad961a31a9317d9;
static PyCodeObject *codeobj_fab7f49ae750908b92d610077fa1e974;
static PyCodeObject *codeobj_fc53323594be7963f942c5cbd6754ea1;
static PyCodeObject *codeobj_2f3d7ba3bc1c2415664b2344e295d973;
static PyCodeObject *codeobj_b019dcf32a376f517a89f1d6d5739f12;
static PyCodeObject *codeobj_c1d0ef3ee097ad5792940e53ff712a2a;
static PyCodeObject *codeobj_b83b555d6a5b1489cb24c77610011f40;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_c14374e01b66ea11dc386f22f452750b );
    codeobj_9910dacadc7fc1b057c9ce93b6d2a128 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SSLContext, 79, const_tuple_a6023d2223969a512ec0003c0984198f_tuple, 0, 0, CO_NOFREE );
    codeobj_a95c55737ffb5986597ef7f80808dbba = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 83, const_tuple_str_plain_self_str_plain_protocol_version_tuple, 2, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_a7b4bbae0df2848cc82b544d5f646230 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__const_compare_digest_backport, 24, const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple, 2, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_63b6c9c54cc1af61aae351404d73e48b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_assert_fingerprint, 135, const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, 2, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_1c2a0b4093217a956fb695ad5b168047 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_urllib3_context, 201, const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 4, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_ba0af3bff032e197ae36efee3c005baa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_cert_chain, 94, const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 3, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_086be726ea28b2a0aad961a31a9317d9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_verify_locations, 98, const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 3, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_fab7f49ae750908b92d610077fa1e974 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_cert_reqs, 162, const_tuple_str_plain_candidate_str_plain_res_tuple, 1, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_fc53323594be7963f942c5cbd6754ea1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_ssl_version, 185, const_tuple_str_plain_candidate_str_plain_res_tuple, 1, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_2f3d7ba3bc1c2415664b2344e295d973 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_ciphers, 104, const_tuple_str_plain_self_str_plain_cipher_suite_tuple, 2, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_b019dcf32a376f517a89f1d6d5739f12 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ssl_, 0, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_c1d0ef3ee097ad5792940e53ff712a2a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ssl_wrap_socket, 264, const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 10, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_b83b555d6a5b1489cb24c77610011f40 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrap_socket, 113, const_tuple_d789c4ab56634b41dee4edcac2ae240d_tuple, 3, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( PyObject *&closure_requests$packages$urllib3$util$ssl__class_creation_1__bases, PyObject *&closure_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict, PyObject *&closure_requests$packages$urllib3$util$ssl__class_creation_1__metaclass, PyObject *&closure_requests$packages$urllib3$util$ssl__class_creation_1__prepared );


NUITKA_CROSS_MODULE PyObject *impl_function_4_complex_call_helper_pos_keywords_star_dict_of___internal__( PyObject *_python_par_called, PyObject *_python_par_args, PyObject *_python_par_kw, PyObject *_python_par_star_arg_dict );


NUITKA_CROSS_MODULE PyObject *impl_function_6_complex_call_helper_pos_star_dict_of___internal__( PyObject *_python_par_called, PyObject *_python_par_args, PyObject *_python_par_star_arg_dict );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_(  );


static PyObject *MAKE_FUNCTION_function_1__const_compare_digest_backport_of_requests$packages$urllib3$util$ssl_(  );


static PyObject *MAKE_FUNCTION_function_2_assert_fingerprint_of_requests$packages$urllib3$util$ssl_(  );


static PyObject *MAKE_FUNCTION_function_2_load_cert_chain_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_(  );


static PyObject *MAKE_FUNCTION_function_3_load_verify_locations_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_resolve_cert_reqs_of_requests$packages$urllib3$util$ssl_(  );


static PyObject *MAKE_FUNCTION_function_4_resolve_ssl_version_of_requests$packages$urllib3$util$ssl_(  );


static PyObject *MAKE_FUNCTION_function_4_set_ciphers_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_(  );


static PyObject *MAKE_FUNCTION_function_5_create_urllib3_context_of_requests$packages$urllib3$util$ssl_( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_5_wrap_socket_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1__const_compare_digest_backport_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_b )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = _python_par_a;
    PyObject *par_b = _python_par_b;
    PyObject *var_result = NULL;
    PyObject *var_l = NULL;
    PyObject *var_r = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_next_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a7b4bbae0df2848cc82b544d5f646230, module_requests$packages$urllib3$util$ssl_ );
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
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_1 != NULL );
    tmp_len_arg_1 = par_a;

    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_b;

    tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 31;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_1;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_zip );
    assert( tmp_called_name_2 != NULL );
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_bytearray );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_3 = par_a;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85204 ], 47, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 32;
    tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_bytearray );
    assert( tmp_called_name_4 != NULL );
    tmp_args_element_name_5 = par_b;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45225 ], 47, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 32;
    tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, tmp_args_element_name_5 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 32;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, tmp_args_element_name_2, tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 32;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        exception_lineno = 32;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 32;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

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
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_l;
        var_l = tmp_assign_source_7;
        Py_INCREF( var_l );
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_r;
        var_r = tmp_assign_source_8;
        Py_INCREF( var_r );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_left_name_2 = var_result;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2008 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        goto try_except_handler_2;
    }

    tmp_left_name_3 = var_l;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2509 ], 47, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        goto try_except_handler_2;
    }

    tmp_right_name_3 = var_r;

    if ( tmp_right_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 17709 ], 47, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        goto try_except_handler_2;
    }

    tmp_right_name_2 = BINARY_OPERATION( PyNumber_Xor, tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_9 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_2;
    }
    var_result = tmp_assign_source_9;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_compexpr_left_1 = var_result;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2008 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
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
            if ( var_result != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_result,
                    var_result
                );
                assert( tmp_res != -1 );

            }
            if ( var_l != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_l,
                    var_l
                );
                assert( tmp_res != -1 );

            }
            if ( var_r != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_r,
                    var_r
                );
                assert( tmp_res != -1 );

            }
            if ( par_a != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    par_a
                );
                assert( tmp_res != -1 );

            }
            if ( par_b != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_b,
                    par_b
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
    NUITKA_CANNOT_GET_HERE( function_1__const_compare_digest_backport_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1__const_compare_digest_backport_of_requests$packages$urllib3$util$ssl_ );
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
static PyObject *fparse_function_1__const_compare_digest_backport_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_b = NULL;
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
                PyErr_Format( PyExc_TypeError, "_const_compare_digest_backport() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_a == key )
            {
                assert( _python_par_a == NULL );
                _python_par_a = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_b == key )
            {
                assert( _python_par_b == NULL );
                _python_par_b = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_a, key ) == 1 )
            {
                assert( _python_par_a == NULL );
                _python_par_a = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_b, key ) == 1 )
            {
                assert( _python_par_b == NULL );
                _python_par_b = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_const_compare_digest_backport() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_a = args[ 0 ];
        Py_INCREF( _python_par_a );
    }
    else if ( _python_par_a == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_a = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 );
            Py_INCREF( _python_par_a );
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
         if (unlikely( _python_par_b != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_b = args[ 1 ];
        Py_INCREF( _python_par_b );
    }
    else if ( _python_par_b == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_b = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 );
            Py_INCREF( _python_par_b );
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
    if (unlikely( _python_par_a == NULL || _python_par_b == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_b };
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



    return impl_function_1__const_compare_digest_backport_of_requests$packages$urllib3$util$ssl_( self, _python_par_a, _python_par_b );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_b );

    return NULL;
}

static PyObject *dparse_function_1__const_compare_digest_backport_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1__const_compare_digest_backport_of_requests$packages$urllib3$util$ssl_( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__const_compare_digest_backport_of_requests$packages$urllib3$util$ssl_( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( PyObject *&closure_requests$packages$urllib3$util$ssl__class_creation_1__bases, PyObject *&closure_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict, PyObject *&closure_requests$packages$urllib3$util$ssl__class_creation_1__metaclass, PyObject *&closure_requests$packages$urllib3$util$ssl__class_creation_1__prepared )
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
    PyObject *var_supports_set_ciphers = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_load_cert_chain = NULL;
    PyObject *var_load_verify_locations = NULL;
    PyObject *var_set_ciphers = NULL;
    PyObject *var_wrap_socket = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    tmp_set_locals = closure_requests$packages$urllib3$util$ssl__class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_3f9c79ac9778c20d3cb015a396023b31;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_SSLContext;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9910dacadc7fc1b057c9ce93b6d2a128, module_requests$packages$urllib3$util$ssl_ );
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
    tmp_source_name_1 = PyDict_GetItem( locals_dict, const_str_plain_sys );

    if ( tmp_source_name_1 == NULL )
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_source_name_1 == NULL ))
        {
            tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_source_name_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = UNSTREAM_STRING( &constant_bin[ 7524 ], 25, 0 );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;
            goto try_except_handler_2;
        }

    }

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_2;
    }
    assert( tmp_comparison_chain_1__operand_2 == NULL );
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_4;

    tmp_compexpr_left_1 = const_tuple_int_pos_2_int_pos_7_tuple;
    tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;

    tmp_assign_source_5 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_2;
    }
    assert( tmp_comparison_chain_1__comparison_result == NULL );
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_5;

    tmp_cond_value_1 = tmp_comparison_chain_1__comparison_result;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_2;
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
    tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    branch_no_1:;
    tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;

    tmp_compexpr_right_2 = const_tuple_int_pos_3_tuple;
    tmp_outline_return_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_SSLContext_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    goto outline_result_1;
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

    Py_XDECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_SSLContext_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    outline_result_1:;
    tmp_or_left_value_1 = tmp_outline_return_value_1;
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 81;
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
    tmp_compexpr_left_3 = const_tuple_int_pos_3_int_pos_2_tuple;
    tmp_source_name_2 = PyDict_GetItem( locals_dict, const_str_plain_sys );

    if ( tmp_source_name_2 == NULL )
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_source_name_2 == NULL ))
        {
            tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_source_name_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = UNSTREAM_STRING( &constant_bin[ 7524 ], 25, 0 );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 81;
            goto frame_exception_exit_1;
        }

    }

    tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = RICH_COMPARE_LE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_3 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_supports_set_ciphers == NULL );
    var_supports_set_ciphers = tmp_assign_source_3;


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


                exception_lineno = 79;
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


                exception_lineno = 79;
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


                exception_lineno = 79;
                goto frame_exception_exit_1;
            }
            }
            if ( var_supports_set_ciphers != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain_supports_set_ciphers,
                    var_supports_set_ciphers
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                goto frame_exception_exit_1;
            }
            }
            if ( var___init__ != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain___init__,
                    var___init__
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                goto frame_exception_exit_1;
            }
            }
            if ( var_load_cert_chain != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain_load_cert_chain,
                    var_load_cert_chain
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                goto frame_exception_exit_1;
            }
            }
            if ( var_load_verify_locations != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain_load_verify_locations,
                    var_load_verify_locations
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                goto frame_exception_exit_1;
            }
            }
            if ( var_set_ciphers != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain_set_ciphers,
                    var_set_ciphers
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                goto frame_exception_exit_1;
            }
            }
            if ( var_wrap_socket != NULL )
            {
                tmp_res = PyObject_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wrap_socket,
                    var_wrap_socket
                );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
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

    tmp_assign_source_6 = MAKE_FUNCTION_function_1___init___of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_2_load_cert_chain_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_(  );
    assert( var_load_cert_chain == NULL );
    var_load_cert_chain = tmp_assign_source_7;

    tmp_defaults_1 = const_tuple_none_none_tuple;
    tmp_assign_source_8 = MAKE_FUNCTION_function_3_load_verify_locations_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var_load_verify_locations == NULL );
    var_load_verify_locations = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_function_4_set_ciphers_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_(  );
    assert( var_set_ciphers == NULL );
    var_set_ciphers = tmp_assign_source_9;

    tmp_defaults_2 = const_tuple_none_tuple;
    tmp_assign_source_10 = MAKE_FUNCTION_function_5_wrap_socket_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    assert( var_wrap_socket == NULL );
    var_wrap_socket = tmp_assign_source_10;

    tmp_called_name_1 = closure_requests$packages$urllib3$util$ssl__class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_SSLContext;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_requests$packages$urllib3$util$ssl__class_creation_1__bases;

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
    if ( var_supports_set_ciphers != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_supports_set_ciphers,
            var_supports_set_ciphers
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
    if ( var_load_cert_chain != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_load_cert_chain,
            var_load_cert_chain
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var_load_verify_locations != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_load_verify_locations,
            var_load_verify_locations
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var_set_ciphers != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_set_ciphers,
            var_set_ciphers
        );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    }
    if ( var_wrap_socket != NULL )
    {
        tmp_res = PyObject_SetItem(
            tmp_tuple_element_1,
            const_str_plain_wrap_socket,
            var_wrap_socket
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
    tmp_kw_name_1 = closure_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict;

    tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_11;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_SSLContext_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var_supports_set_ciphers );
    var_supports_set_ciphers = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_load_cert_chain );
    var_load_cert_chain = NULL;

    Py_XDECREF( var_load_verify_locations );
    var_load_verify_locations = NULL;

    Py_XDECREF( var_set_ciphers );
    var_set_ciphers = NULL;

    Py_XDECREF( var_wrap_socket );
    var_wrap_socket = NULL;

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

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var_supports_set_ciphers );
    var_supports_set_ciphers = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_load_cert_chain );
    var_load_cert_chain = NULL;

    Py_XDECREF( var_load_verify_locations );
    var_load_verify_locations = NULL;

    Py_XDECREF( var_set_ciphers );
    var_set_ciphers = NULL;

    Py_XDECREF( var_wrap_socket );
    var_wrap_socket = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_SSLContext_of_requests$packages$urllib3$util$ssl_ );
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


static PyObject *impl_function_1___init___of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_protocol_version )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_protocol_version = _python_par_protocol_version;
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
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_frame_locals;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a95c55737ffb5986597ef7f80808dbba, module_requests$packages$urllib3$util$ssl_ );
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
    tmp_assattr_name_1 = par_protocol_version;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_protocol, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_False;
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_check_hostname, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 22473 ], 25, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CERT_NONE );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
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

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_verify_mode, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_assattr_name_4 = Py_None;
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_ca_certs, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = const_int_0;
    tmp_assattr_target_5 = par_self;

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_options, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = Py_None;
    tmp_assattr_target_6 = par_self;

    if ( tmp_assattr_target_6 == NULL )
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

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_certfile, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = Py_None;
    tmp_assattr_target_7 = par_self;

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_keyfile, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = Py_None;
    tmp_assattr_target_8 = par_self;

    if ( tmp_assattr_target_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_ciphers, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
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
            if ( par_protocol_version != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_protocol_version,
                    par_protocol_version
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_protocol_version );
    par_protocol_version = NULL;

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

    Py_XDECREF( par_protocol_version );
    par_protocol_version = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_ );
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
static PyObject *fparse_function_1___init___of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_protocol_version = NULL;
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
            if ( found == false && const_str_plain_protocol_version == key )
            {
                assert( _python_par_protocol_version == NULL );
                _python_par_protocol_version = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_protocol_version, key ) == 1 )
            {
                assert( _python_par_protocol_version == NULL );
                _python_par_protocol_version = value;

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
         if (unlikely( _python_par_protocol_version != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_protocol_version = args[ 1 ];
        Py_INCREF( _python_par_protocol_version );
    }
    else if ( _python_par_protocol_version == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_protocol_version = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 );
            Py_INCREF( _python_par_protocol_version );
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
    if (unlikely( _python_par_self == NULL || _python_par_protocol_version == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_protocol_version };
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



    return impl_function_1___init___of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( self, _python_par_self, _python_par_protocol_version );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_protocol_version );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1___init___of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_load_cert_chain_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_certfile, PyObject *_python_par_keyfile )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_certfile = _python_par_certfile;
    PyObject *par_keyfile = _python_par_keyfile;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_frame_locals;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ba0af3bff032e197ae36efee3c005baa, module_requests$packages$urllib3$util$ssl_ );
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
    tmp_assattr_name_1 = par_certfile;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_certfile, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_keyfile;

    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_keyfile, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
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
            if ( par_certfile != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_certfile,
                    par_certfile
                );
                assert( tmp_res != -1 );

            }
            if ( par_keyfile != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keyfile,
                    par_keyfile
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
    NUITKA_CANNOT_GET_HERE( function_2_load_cert_chain_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_certfile );
    par_certfile = NULL;

    Py_XDECREF( par_keyfile );
    par_keyfile = NULL;

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

    Py_XDECREF( par_certfile );
    par_certfile = NULL;

    Py_XDECREF( par_keyfile );
    par_keyfile = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_load_cert_chain_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_ );
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
static PyObject *fparse_function_2_load_cert_chain_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_certfile = NULL;
    PyObject *_python_par_keyfile = NULL;
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
                PyErr_Format( PyExc_TypeError, "load_cert_chain() keywords must be strings" );
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
            if ( found == false && const_str_plain_certfile == key )
            {
                assert( _python_par_certfile == NULL );
                _python_par_certfile = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_keyfile == key )
            {
                assert( _python_par_keyfile == NULL );
                _python_par_keyfile = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_certfile, key ) == 1 )
            {
                assert( _python_par_certfile == NULL );
                _python_par_certfile = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_keyfile, key ) == 1 )
            {
                assert( _python_par_keyfile == NULL );
                _python_par_keyfile = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "load_cert_chain() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_certfile != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_certfile = args[ 1 ];
        Py_INCREF( _python_par_certfile );
    }
    else if ( _python_par_certfile == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_certfile = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 );
            Py_INCREF( _python_par_certfile );
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
         if (unlikely( _python_par_keyfile != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_keyfile = args[ 2 ];
        Py_INCREF( _python_par_keyfile );
    }
    else if ( _python_par_keyfile == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_keyfile = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 );
            Py_INCREF( _python_par_keyfile );
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
    if (unlikely( _python_par_self == NULL || _python_par_certfile == NULL || _python_par_keyfile == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_certfile, _python_par_keyfile };
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



    return impl_function_2_load_cert_chain_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( self, _python_par_self, _python_par_certfile, _python_par_keyfile );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_certfile );
    Py_XDECREF( _python_par_keyfile );

    return NULL;
}

static PyObject *dparse_function_2_load_cert_chain_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_2_load_cert_chain_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_load_cert_chain_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_load_verify_locations_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_cafile, PyObject *_python_par_capath )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_cafile = _python_par_cafile;
    PyObject *par_capath = _python_par_capath;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_086be726ea28b2a0aad961a31a9317d9, module_requests$packages$urllib3$util$ssl_ );
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
    tmp_assattr_name_1 = par_cafile;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ca_certs, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = par_capath;

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60489 ], 30, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = const_str_digest_7c46323d1955d9b4a74a964a21041d91;
    frame_function->f_lineno = 102;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_call_arg_element_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 102;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;

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
            if ( par_cafile != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cafile,
                    par_cafile
                );
                assert( tmp_res != -1 );

            }
            if ( par_capath != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_capath,
                    par_capath
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
    NUITKA_CANNOT_GET_HERE( function_3_load_verify_locations_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_cafile );
    par_cafile = NULL;

    Py_XDECREF( par_capath );
    par_capath = NULL;

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

    Py_XDECREF( par_cafile );
    par_cafile = NULL;

    Py_XDECREF( par_capath );
    par_capath = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_load_verify_locations_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_ );
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
static PyObject *fparse_function_3_load_verify_locations_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_cafile = NULL;
    PyObject *_python_par_capath = NULL;
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
                PyErr_Format( PyExc_TypeError, "load_verify_locations() keywords must be strings" );
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
            if ( found == false && const_str_plain_cafile == key )
            {
                assert( _python_par_cafile == NULL );
                _python_par_cafile = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_capath == key )
            {
                assert( _python_par_capath == NULL );
                _python_par_capath = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cafile, key ) == 1 )
            {
                assert( _python_par_cafile == NULL );
                _python_par_cafile = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_capath, key ) == 1 )
            {
                assert( _python_par_capath == NULL );
                _python_par_capath = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "load_verify_locations() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_cafile != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_cafile = args[ 1 ];
        Py_INCREF( _python_par_cafile );
    }
    else if ( _python_par_cafile == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_cafile = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 );
            Py_INCREF( _python_par_cafile );
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
         if (unlikely( _python_par_capath != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_capath = args[ 2 ];
        Py_INCREF( _python_par_capath );
    }
    else if ( _python_par_capath == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_capath = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 );
            Py_INCREF( _python_par_capath );
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
    if (unlikely( _python_par_self == NULL || _python_par_cafile == NULL || _python_par_capath == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_cafile, _python_par_capath };
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



    return impl_function_3_load_verify_locations_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( self, _python_par_self, _python_par_cafile, _python_par_capath );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_cafile );
    Py_XDECREF( _python_par_capath );

    return NULL;
}

static PyObject *dparse_function_3_load_verify_locations_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_3_load_verify_locations_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_load_verify_locations_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_set_ciphers_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_cipher_suite )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_cipher_suite = _python_par_cipher_suite;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2f3d7ba3bc1c2415664b2344e295d973, module_requests$packages$urllib3$util$ssl_ );
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
    tmp_source_name_1 = par_self;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_supports_set_ciphers );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_7e022d086a052671147967e3e56cd0cb;
    frame_function->f_lineno = 106;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 107;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assattr_name_1 = par_cipher_suite;

    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ciphers, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
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
            if ( par_cipher_suite != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cipher_suite,
                    par_cipher_suite
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
    NUITKA_CANNOT_GET_HERE( function_4_set_ciphers_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_cipher_suite );
    par_cipher_suite = NULL;

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

    Py_XDECREF( par_cipher_suite );
    par_cipher_suite = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_set_ciphers_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_ );
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
static PyObject *fparse_function_4_set_ciphers_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_cipher_suite = NULL;
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
                PyErr_Format( PyExc_TypeError, "set_ciphers() keywords must be strings" );
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
            if ( found == false && const_str_plain_cipher_suite == key )
            {
                assert( _python_par_cipher_suite == NULL );
                _python_par_cipher_suite = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cipher_suite, key ) == 1 )
            {
                assert( _python_par_cipher_suite == NULL );
                _python_par_cipher_suite = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "set_ciphers() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_cipher_suite != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_cipher_suite = args[ 1 ];
        Py_INCREF( _python_par_cipher_suite );
    }
    else if ( _python_par_cipher_suite == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_cipher_suite = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 );
            Py_INCREF( _python_par_cipher_suite );
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
    if (unlikely( _python_par_self == NULL || _python_par_cipher_suite == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_cipher_suite };
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



    return impl_function_4_set_ciphers_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( self, _python_par_self, _python_par_cipher_suite );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_cipher_suite );

    return NULL;
}

static PyObject *dparse_function_4_set_ciphers_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_4_set_ciphers_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_set_ciphers_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_wrap_socket_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_socket, PyObject *_python_par_server_hostname )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = _python_par_self;
    PyObject *par_socket = _python_par_socket;
    PyObject *par_server_hostname = _python_par_server_hostname;
    PyObject *var_kwargs = NULL;
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_frame_locals;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b83b555d6a5b1489cb24c77610011f40, module_requests$packages$urllib3$util$ssl_ );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15809 ], 30, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_6c2591835ae2a3a9fec6e814315a45cd;
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85251 ], 45, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 120;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, tmp_args_element_name_1, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = _PyDict_NewPresized( 5 );
    tmp_source_name_2 = par_self;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_keyfile );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_keyfile;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_certfile );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_certfile;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ca_certs );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_ca_certs;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_verify_mode );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_cert_reqs;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_protocol );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_plain_ssl_version;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( var_kwargs == NULL );
    var_kwargs = tmp_assign_source_1;

    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_supports_set_ciphers );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 129;
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
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_wrap_socket );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_socket );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85296 ], 33, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_socket;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ciphers );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 130;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_6 = const_str_plain_ciphers;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    tmp_dircall_arg4_1 = var_kwargs;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 32092 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg4_1 );
    tmp_return_value = impl_function_4_complex_call_helper_pos_keywords_star_dict_of___internal__( tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_wrap_socket );

    if (unlikely( tmp_dircall_arg1_2 == NULL ))
    {
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_socket );
    }

    if ( tmp_dircall_arg1_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85296 ], 33, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_socket;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
    tmp_dircall_arg3_2 = var_kwargs;

    if ( tmp_dircall_arg3_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 32092 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_2 );
    Py_INCREF( tmp_dircall_arg3_2 );
    tmp_return_value = impl_function_6_complex_call_helper_pos_star_dict_of___internal__( tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
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
            if ( var_kwargs != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kwargs,
                    var_kwargs
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
            if ( par_socket != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_socket,
                    par_socket
                );
                assert( tmp_res != -1 );

            }
            if ( par_server_hostname != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_server_hostname,
                    par_server_hostname
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
    NUITKA_CANNOT_GET_HERE( function_5_wrap_socket_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_socket );
    par_socket = NULL;

    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    Py_XDECREF( var_kwargs );
    var_kwargs = NULL;

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

    Py_XDECREF( par_socket );
    par_socket = NULL;

    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    Py_XDECREF( var_kwargs );
    var_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5_wrap_socket_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_ );
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
static PyObject *fparse_function_5_wrap_socket_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_socket = NULL;
    PyObject *_python_par_server_hostname = NULL;
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
                PyErr_Format( PyExc_TypeError, "wrap_socket() keywords must be strings" );
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
            if ( found == false && const_str_plain_socket == key )
            {
                assert( _python_par_socket == NULL );
                _python_par_socket = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_server_hostname == key )
            {
                assert( _python_par_server_hostname == NULL );
                _python_par_server_hostname = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_socket, key ) == 1 )
            {
                assert( _python_par_socket == NULL );
                _python_par_socket = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_server_hostname, key ) == 1 )
            {
                assert( _python_par_server_hostname == NULL );
                _python_par_server_hostname = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "wrap_socket() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_socket != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_socket = args[ 1 ];
        Py_INCREF( _python_par_socket );
    }
    else if ( _python_par_socket == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_socket = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 );
            Py_INCREF( _python_par_socket );
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
         if (unlikely( _python_par_server_hostname != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_server_hostname = args[ 2 ];
        Py_INCREF( _python_par_server_hostname );
    }
    else if ( _python_par_server_hostname == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_server_hostname = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 );
            Py_INCREF( _python_par_server_hostname );
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
    if (unlikely( _python_par_self == NULL || _python_par_socket == NULL || _python_par_server_hostname == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_socket, _python_par_server_hostname };
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



    return impl_function_5_wrap_socket_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( self, _python_par_self, _python_par_socket, _python_par_server_hostname );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_socket );
    Py_XDECREF( _python_par_server_hostname );

    return NULL;
}

static PyObject *dparse_function_5_wrap_socket_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_5_wrap_socket_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_wrap_socket_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_assert_fingerprint_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject *_python_par_cert, PyObject *_python_par_fingerprint )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cert = _python_par_cert;
    PyObject *par_fingerprint = _python_par_fingerprint;
    PyObject *var_digest_length = NULL;
    PyObject *var_hashfunc = NULL;
    PyObject *var_fingerprint_bytes = NULL;
    PyObject *var_cert_digest = NULL;
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
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_63b6c9c54cc1af61aae351404d73e48b, module_requests$packages$urllib3$util$ssl_ );
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
    tmp_source_name_2 = par_fingerprint;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_replace );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_chr_58;
    tmp_call_arg_element_2 = const_str_empty;
    frame_function->f_lineno = 145;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lower );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 145;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_fingerprint;
        par_fingerprint = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_len_arg_1 = par_fingerprint;

    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto frame_exception_exit_1;
    }
    assert( var_digest_length == NULL );
    var_digest_length = tmp_assign_source_2;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HASHFUNC_MAP );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HASHFUNC_MAP );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85329 ], 34, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_get );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_digest_length;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85363 ], 59, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 147;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    assert( var_hashfunc == NULL );
    var_hashfunc = tmp_assign_source_3;

    tmp_cond_value_1 = var_hashfunc;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
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
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60489 ], 30, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = const_str_digest_0735a7cb67d0fec10de5e4a8b02501c8;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_format );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_3 = par_fingerprint;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85422 ], 57, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 150;
    tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, tmp_args_element_name_3 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 150;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 150;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_unhexlify );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unhexlify );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85479 ], 31, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = par_fingerprint;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85422 ], 57, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_encode );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 153;
    tmp_args_element_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
    Py_DECREF( tmp_called_name_7 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 153;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    assert( var_fingerprint_bytes == NULL );
    var_fingerprint_bytes = tmp_assign_source_4;

    tmp_called_name_9 = var_hashfunc;

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85510 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_cert;

    frame_function->f_lineno = 155;
    tmp_source_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, tmp_args_element_name_5 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_digest );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 155;
    tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto frame_exception_exit_1;
    }
    assert( var_cert_digest == NULL );
    var_cert_digest = tmp_assign_source_5;

    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__const_compare_digest );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85564 ], 43, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = var_cert_digest;

    tmp_args_element_name_7 = var_fingerprint_bytes;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85607 ], 63, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 157;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, tmp_args_element_name_6, tmp_args_element_name_7 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 157;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60489 ], 30, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = const_str_digest_e7dc819c78ea2e0685e83afc15e2e26b;
    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_format );
    assert( tmp_called_name_12 != NULL );
    tmp_args_element_name_9 = par_fingerprint;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85422 ], 57, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hexlify );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hexlify );
    }

    if ( tmp_called_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85670 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_cert_digest;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85699 ], 57, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 159;
    tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, tmp_args_element_name_11 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 159;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 159;
    tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, tmp_args_element_name_9, tmp_args_element_name_10 );
    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 159;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, tmp_args_element_name_8 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 159;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;

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
            if ( var_digest_length != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_digest_length,
                    var_digest_length
                );
                assert( tmp_res != -1 );

            }
            if ( var_hashfunc != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_hashfunc,
                    var_hashfunc
                );
                assert( tmp_res != -1 );

            }
            if ( var_fingerprint_bytes != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fingerprint_bytes,
                    var_fingerprint_bytes
                );
                assert( tmp_res != -1 );

            }
            if ( var_cert_digest != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cert_digest,
                    var_cert_digest
                );
                assert( tmp_res != -1 );

            }
            if ( par_cert != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cert,
                    par_cert
                );
                assert( tmp_res != -1 );

            }
            if ( par_fingerprint != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fingerprint,
                    par_fingerprint
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
    NUITKA_CANNOT_GET_HERE( function_2_assert_fingerprint_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_fingerprint );
    par_fingerprint = NULL;

    Py_XDECREF( var_digest_length );
    var_digest_length = NULL;

    Py_XDECREF( var_hashfunc );
    var_hashfunc = NULL;

    Py_XDECREF( var_fingerprint_bytes );
    var_fingerprint_bytes = NULL;

    Py_XDECREF( var_cert_digest );
    var_cert_digest = NULL;

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

    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_fingerprint );
    par_fingerprint = NULL;

    Py_XDECREF( var_digest_length );
    var_digest_length = NULL;

    Py_XDECREF( var_hashfunc );
    var_hashfunc = NULL;

    Py_XDECREF( var_fingerprint_bytes );
    var_fingerprint_bytes = NULL;

    Py_XDECREF( var_cert_digest );
    var_cert_digest = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_assert_fingerprint_of_requests$packages$urllib3$util$ssl_ );
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
static PyObject *fparse_function_2_assert_fingerprint_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_cert = NULL;
    PyObject *_python_par_fingerprint = NULL;
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
                PyErr_Format( PyExc_TypeError, "assert_fingerprint() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_cert == key )
            {
                assert( _python_par_cert == NULL );
                _python_par_cert = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_fingerprint == key )
            {
                assert( _python_par_fingerprint == NULL );
                _python_par_fingerprint = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cert, key ) == 1 )
            {
                assert( _python_par_cert == NULL );
                _python_par_cert = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_fingerprint, key ) == 1 )
            {
                assert( _python_par_fingerprint == NULL );
                _python_par_fingerprint = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "assert_fingerprint() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_cert != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_cert = args[ 0 ];
        Py_INCREF( _python_par_cert );
    }
    else if ( _python_par_cert == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_cert = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 );
            Py_INCREF( _python_par_cert );
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
         if (unlikely( _python_par_fingerprint != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_fingerprint = args[ 1 ];
        Py_INCREF( _python_par_fingerprint );
    }
    else if ( _python_par_fingerprint == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_fingerprint = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 );
            Py_INCREF( _python_par_fingerprint );
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
    if (unlikely( _python_par_cert == NULL || _python_par_fingerprint == NULL ))
    {
        PyObject *values[] = { _python_par_cert, _python_par_fingerprint };
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



    return impl_function_2_assert_fingerprint_of_requests$packages$urllib3$util$ssl_( self, _python_par_cert, _python_par_fingerprint );

error_exit:;

    Py_XDECREF( _python_par_cert );
    Py_XDECREF( _python_par_fingerprint );

    return NULL;
}

static PyObject *dparse_function_2_assert_fingerprint_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2_assert_fingerprint_of_requests$packages$urllib3$util$ssl_( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_assert_fingerprint_of_requests$packages$urllib3$util$ssl_( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_resolve_cert_reqs_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject *_python_par_candidate )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_candidate = _python_par_candidate;
    PyObject *var_res = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fab7f49ae750908b92d610077fa1e974, module_requests$packages$urllib3$util$ssl_ );
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
    tmp_compare_left_1 = par_candidate;

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
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_CERT_NONE );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CERT_NONE );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85756 ], 31, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_candidate;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85787 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
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
    tmp_getattr_target_1 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_getattr_target_1 == NULL ))
    {
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 22473 ], 25, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = par_candidate;

    if ( tmp_getattr_attr_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85787 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }

    tmp_getattr_default_1 = Py_None;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_compare_left_2 = var_res;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_getattr_target_2 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_getattr_target_2 == NULL ))
    {
        tmp_getattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_getattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 22473 ], 25, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_plain_CERT_;
    tmp_right_name_1 = par_candidate;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85787 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_getattr_attr_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
    Py_DECREF( tmp_getattr_attr_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_res;
        var_res = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_res;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48139 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_return_value = par_candidate;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85787 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
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
            if ( var_res != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_res,
                    var_res
                );
                assert( tmp_res != -1 );

            }
            if ( par_candidate != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_candidate,
                    par_candidate
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
    NUITKA_CANNOT_GET_HERE( function_3_resolve_cert_reqs_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_candidate );
    par_candidate = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

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

    Py_XDECREF( par_candidate );
    par_candidate = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_resolve_cert_reqs_of_requests$packages$urllib3$util$ssl_ );
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
static PyObject *fparse_function_3_resolve_cert_reqs_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_candidate = NULL;
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
                PyErr_Format( PyExc_TypeError, "resolve_cert_reqs() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_candidate == key )
            {
                assert( _python_par_candidate == NULL );
                _python_par_candidate = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_candidate, key ) == 1 )
            {
                assert( _python_par_candidate == NULL );
                _python_par_candidate = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "resolve_cert_reqs() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_candidate != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_candidate = args[ 0 ];
        Py_INCREF( _python_par_candidate );
    }
    else if ( _python_par_candidate == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_candidate = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
            Py_INCREF( _python_par_candidate );
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
    if (unlikely( _python_par_candidate == NULL ))
    {
        PyObject *values[] = { _python_par_candidate };
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



    return impl_function_3_resolve_cert_reqs_of_requests$packages$urllib3$util$ssl_( self, _python_par_candidate );

error_exit:;

    Py_XDECREF( _python_par_candidate );

    return NULL;
}

static PyObject *dparse_function_3_resolve_cert_reqs_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_resolve_cert_reqs_of_requests$packages$urllib3$util$ssl_( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_resolve_cert_reqs_of_requests$packages$urllib3$util$ssl_( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_resolve_ssl_version_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject *_python_par_candidate )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_candidate = _python_par_candidate;
    PyObject *var_res = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fc53323594be7963f942c5cbd6754ea1, module_requests$packages$urllib3$util$ssl_ );
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
    tmp_compare_left_1 = par_candidate;

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
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_SSLv23 );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PROTOCOL_SSLv23 );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85842 ], 37, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_candidate;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85787 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
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
    tmp_getattr_target_1 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_getattr_target_1 == NULL ))
    {
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 22473 ], 25, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = par_candidate;

    if ( tmp_getattr_attr_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85787 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        goto frame_exception_exit_1;
    }

    tmp_getattr_default_1 = Py_None;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_compare_left_2 = var_res;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_getattr_target_2 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_getattr_target_2 == NULL ))
    {
        tmp_getattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_getattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 22473 ], 25, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_plain_PROTOCOL_;
    tmp_right_name_1 = par_candidate;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85787 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_getattr_attr_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
    Py_DECREF( tmp_getattr_attr_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_res;
        var_res = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_res;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48139 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_return_value = par_candidate;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85787 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 198;
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
            if ( var_res != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_res,
                    var_res
                );
                assert( tmp_res != -1 );

            }
            if ( par_candidate != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_candidate,
                    par_candidate
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
    NUITKA_CANNOT_GET_HERE( function_4_resolve_ssl_version_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_candidate );
    par_candidate = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

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

    Py_XDECREF( par_candidate );
    par_candidate = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_resolve_ssl_version_of_requests$packages$urllib3$util$ssl_ );
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
static PyObject *fparse_function_4_resolve_ssl_version_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_candidate = NULL;
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
                PyErr_Format( PyExc_TypeError, "resolve_ssl_version() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_candidate == key )
            {
                assert( _python_par_candidate == NULL );
                _python_par_candidate = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_candidate, key ) == 1 )
            {
                assert( _python_par_candidate == NULL );
                _python_par_candidate = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "resolve_ssl_version() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_candidate != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_candidate = args[ 0 ];
        Py_INCREF( _python_par_candidate );
    }
    else if ( _python_par_candidate == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_candidate = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
            Py_INCREF( _python_par_candidate );
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
    if (unlikely( _python_par_candidate == NULL ))
    {
        PyObject *values[] = { _python_par_candidate };
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



    return impl_function_4_resolve_ssl_version_of_requests$packages$urllib3$util$ssl_( self, _python_par_candidate );

error_exit:;

    Py_XDECREF( _python_par_candidate );

    return NULL;
}

static PyObject *dparse_function_4_resolve_ssl_version_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_4_resolve_ssl_version_of_requests$packages$urllib3$util$ssl_( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_resolve_ssl_version_of_requests$packages$urllib3$util$ssl_( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_create_urllib3_context_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject *_python_par_ssl_version, PyObject *_python_par_cert_reqs, PyObject *_python_par_options, PyObject *_python_par_ciphers )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ssl_version = _python_par_ssl_version;
    PyObject *par_cert_reqs = _python_par_cert_reqs;
    PyObject *par_options = _python_par_options;
    PyObject *par_ciphers = _python_par_ciphers;
    PyObject *var_context = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1c2a0b4093217a956fb695ad5b168047, module_requests$packages$urllib3$util$ssl_ );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLContext );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85879 ], 32, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = par_ssl_version;

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 22473 ], 25, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PROTOCOL_SSLv23 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_args_element_name_1 = tmp_or_left_value_1;
    or_end_1:;
    frame_function->f_lineno = 236;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        goto frame_exception_exit_1;
    }
    assert( var_context == NULL );
    var_context = tmp_assign_source_1;

    tmp_compare_left_1 = par_cert_reqs;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 22473 ], 25, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CERT_REQUIRED );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_2 = par_cert_reqs;

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75669 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_assign_source_2 );
    condexpr_end_1:;
    {
        PyObject *old = par_cert_reqs;
        par_cert_reqs = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = par_options;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    Py_XDECREF( par_options );
    par_options = NULL;

    tmp_left_name_1 = const_int_0;
    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2 );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2 );
    }

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85911 ], 33, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 244;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_options;
        par_options = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_left_name_2 = par_options;

    tmp_right_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3 );

    if (unlikely( tmp_right_name_2 == NULL ))
    {
        tmp_right_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3 );
    }

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85944 ], 33, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;
        goto frame_exception_exit_1;
    }

    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_4 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        goto frame_exception_exit_1;
    }
    par_options = tmp_assign_source_4;

    tmp_left_name_3 = par_options;

    tmp_right_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION );

    if (unlikely( tmp_right_name_3 == NULL ))
    {
        tmp_right_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION );
    }

    if ( tmp_right_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85977 ], 39, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        goto frame_exception_exit_1;
    }

    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_5 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto frame_exception_exit_1;
    }
    par_options = tmp_assign_source_5;

    branch_no_1:;
    tmp_source_name_3 = var_context;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3561 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_options );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_1__start == NULL );
    tmp_inplace_assign_attr_1__start = tmp_assign_source_6;

    // Tried code:
    tmp_left_name_4 = tmp_inplace_assign_attr_1__start;

    tmp_right_name_4 = par_options;

    if ( tmp_right_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4954 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 251;
        goto try_except_handler_2;
    }

    tmp_assign_source_7 = BINARY_OPERATION( PyNumber_InPlaceOr, tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto try_except_handler_2;
    }
    assert( tmp_inplace_assign_attr_1__end == NULL );
    tmp_inplace_assign_attr_1__end = tmp_assign_source_7;

    // Tried code:
    tmp_compare_left_3 = tmp_inplace_assign_attr_1__start;

    tmp_compare_right_3 = tmp_inplace_assign_attr_1__end;

    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;

    tmp_assattr_target_1 = var_context;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3561 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 251;
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_options, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto try_except_handler_3;
    }
    branch_no_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    Py_XDECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    tmp_getattr_target_1 = var_context;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3561 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain_supports_set_ciphers;
    tmp_getattr_default_1 = Py_True;
    tmp_cond_value_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 253;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_4 = var_context;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3561 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_set_ciphers );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_2 = par_ciphers;

    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 254;
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
    tmp_or_right_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_DEFAULT_CIPHERS );

    if (unlikely( tmp_or_right_value_2 == NULL ))
    {
        tmp_or_right_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_CIPHERS );
    }

    if ( tmp_or_right_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86016 ], 37, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_args_element_name_2 = tmp_or_left_value_2;
    or_end_2:;
    frame_function->f_lineno = 254;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_assattr_name_2 = par_cert_reqs;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75669 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = var_context;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3561 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_verify_mode, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_getattr_target_2 = var_context;

    if ( tmp_getattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3561 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_2 = const_str_plain_check_hostname;
    tmp_getattr_default_2 = Py_None;
    tmp_compare_left_4 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assattr_name_3 = Py_False;
    tmp_assattr_target_3 = var_context;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3561 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_check_hostname, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_return_value = var_context;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3561 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
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
            if ( var_context != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_context,
                    var_context
                );
                assert( tmp_res != -1 );

            }
            if ( par_ssl_version != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ssl_version,
                    par_ssl_version
                );
                assert( tmp_res != -1 );

            }
            if ( par_cert_reqs != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cert_reqs,
                    par_cert_reqs
                );
                assert( tmp_res != -1 );

            }
            if ( par_options != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_options,
                    par_options
                );
                assert( tmp_res != -1 );

            }
            if ( par_ciphers != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ciphers,
                    par_ciphers
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
    NUITKA_CANNOT_GET_HERE( function_5_create_urllib3_context_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_ssl_version );
    par_ssl_version = NULL;

    Py_XDECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    Py_XDECREF( par_ciphers );
    par_ciphers = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

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

    Py_XDECREF( par_ssl_version );
    par_ssl_version = NULL;

    Py_XDECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    Py_XDECREF( par_ciphers );
    par_ciphers = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5_create_urllib3_context_of_requests$packages$urllib3$util$ssl_ );
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
static PyObject *fparse_function_5_create_urllib3_context_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ssl_version = NULL;
    PyObject *_python_par_cert_reqs = NULL;
    PyObject *_python_par_options = NULL;
    PyObject *_python_par_ciphers = NULL;
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
                PyErr_Format( PyExc_TypeError, "create_urllib3_context() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_ssl_version == key )
            {
                assert( _python_par_ssl_version == NULL );
                _python_par_ssl_version = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_cert_reqs == key )
            {
                assert( _python_par_cert_reqs == NULL );
                _python_par_cert_reqs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_options == key )
            {
                assert( _python_par_options == NULL );
                _python_par_options = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ciphers == key )
            {
                assert( _python_par_ciphers == NULL );
                _python_par_ciphers = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ssl_version, key ) == 1 )
            {
                assert( _python_par_ssl_version == NULL );
                _python_par_ssl_version = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cert_reqs, key ) == 1 )
            {
                assert( _python_par_cert_reqs == NULL );
                _python_par_cert_reqs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_options, key ) == 1 )
            {
                assert( _python_par_options == NULL );
                _python_par_options = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ciphers, key ) == 1 )
            {
                assert( _python_par_ciphers == NULL );
                _python_par_ciphers = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "create_urllib3_context() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_ssl_version != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_ssl_version = args[ 0 ];
        Py_INCREF( _python_par_ssl_version );
    }
    else if ( _python_par_ssl_version == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_ssl_version = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 );
            Py_INCREF( _python_par_ssl_version );
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
         if (unlikely( _python_par_cert_reqs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_cert_reqs = args[ 1 ];
        Py_INCREF( _python_par_cert_reqs );
    }
    else if ( _python_par_cert_reqs == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_cert_reqs = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 );
            Py_INCREF( _python_par_cert_reqs );
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
         if (unlikely( _python_par_options != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_options = args[ 2 ];
        Py_INCREF( _python_par_options );
    }
    else if ( _python_par_options == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_options = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 );
            Py_INCREF( _python_par_options );
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
         if (unlikely( _python_par_ciphers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_ciphers = args[ 3 ];
        Py_INCREF( _python_par_ciphers );
    }
    else if ( _python_par_ciphers == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_ciphers = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 );
            Py_INCREF( _python_par_ciphers );
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
    if (unlikely( _python_par_ssl_version == NULL || _python_par_cert_reqs == NULL || _python_par_options == NULL || _python_par_ciphers == NULL ))
    {
        PyObject *values[] = { _python_par_ssl_version, _python_par_cert_reqs, _python_par_options, _python_par_ciphers };
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



    return impl_function_5_create_urllib3_context_of_requests$packages$urllib3$util$ssl_( self, _python_par_ssl_version, _python_par_cert_reqs, _python_par_options, _python_par_ciphers );

error_exit:;

    Py_XDECREF( _python_par_ssl_version );
    Py_XDECREF( _python_par_cert_reqs );
    Py_XDECREF( _python_par_options );
    Py_XDECREF( _python_par_ciphers );

    return NULL;
}

static PyObject *dparse_function_5_create_urllib3_context_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_5_create_urllib3_context_of_requests$packages$urllib3$util$ssl_( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_create_urllib3_context_of_requests$packages$urllib3$util$ssl_( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject *_python_par_sock, PyObject *_python_par_keyfile, PyObject *_python_par_certfile, PyObject *_python_par_cert_reqs, PyObject *_python_par_ca_certs, PyObject *_python_par_server_hostname, PyObject *_python_par_ssl_version, PyObject *_python_par_ciphers, PyObject *_python_par_ssl_context, PyObject *_python_par_ca_cert_dir )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = _python_par_sock;
    PyObject *par_keyfile = _python_par_keyfile;
    PyObject *par_certfile = _python_par_certfile;
    PyObject *par_cert_reqs = _python_par_cert_reqs;
    PyObject *par_ca_certs = _python_par_ca_certs;
    PyObject *par_server_hostname = _python_par_server_hostname;
    PyObject *par_ssl_version = _python_par_ssl_version;
    PyObject *par_ciphers = _python_par_ciphers;
    PyObject *par_ssl_context = _python_par_ssl_context;
    PyObject *par_ca_cert_dir = _python_par_ca_cert_dir;
    PyObject *var_context = NULL;
    PyObject *var_e = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = par_ssl_context;

    assert( var_context == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_context = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c1d0ef3ee097ad5792940e53ff712a2a, module_requests$packages$urllib3$util$ssl_ );
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
    tmp_compare_left_1 = var_context;

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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86053 ], 44, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_ssl_version;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_cert_reqs;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_ciphers;

    tmp_dict_key_1 = const_str_plain_ciphers;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 288;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_context;
        var_context = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_or_left_value_1 = par_ca_certs;

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
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
    tmp_or_right_value_1 = par_ca_cert_dir;

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


        exception_lineno = 290;
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
    // Tried code:
    tmp_source_name_1 = var_context;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3561 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 292;
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_load_verify_locations );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_ca_certs;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28026 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 292;
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = par_ca_cert_dir;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75724 ], 57, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 292;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 292;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, tmp_args_element_name_1, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
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
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_IOError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_3 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_e = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60489 ], 30, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        goto try_except_handler_4;
    }

    tmp_args_element_name_3 = var_e;

    frame_function->f_lineno = 294;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_3 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        goto try_except_handler_4;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 294;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_OSError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_4 = PyThreadState_GET()->exc_value;
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_4;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_source_name_2 = var_e;

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_errno );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        goto try_except_handler_5;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_errno );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28744 ], 27, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 298;
        goto try_except_handler_5;
    }

    tmp_compare_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ENOENT );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 298;
        goto try_except_handler_5;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 298;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60489 ], 30, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        goto try_except_handler_5;
    }

    tmp_args_element_name_4 = var_e;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1961 ], 47, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        goto try_except_handler_5;
    }

    frame_function->f_lineno = 299;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, tmp_args_element_name_4 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        goto try_except_handler_5;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 299;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_5;
    branch_no_5:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_3;
    branch_end_4:;
    branch_end_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    branch_no_2:;
    tmp_cond_value_2 = par_certfile;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_4 = var_context;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3561 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_load_cert_chain );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_certfile;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3791 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_keyfile;

    frame_function->f_lineno = 303;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, tmp_args_element_name_5, tmp_args_element_name_6 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_cond_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HAS_SNI );

    if (unlikely( tmp_cond_value_3 == NULL ))
    {
        tmp_cond_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HAS_SNI );
    }

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78306 ], 29, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 304;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_5 = var_context;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3561 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 305;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_wrap_socket );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_sock;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = par_server_hostname;

    tmp_dict_key_2 = const_str_plain_server_hostname;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 305;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_7:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15809 ], 30, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 307;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_warn );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = const_str_digest_b9aa27e08efbddfbd5516474a24d9946;
    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86097 ], 39, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 315;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, tmp_args_element_name_7, tmp_args_element_name_8 );
    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = var_context;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3561 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 317;
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_wrap_socket );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = par_sock;

    frame_function->f_lineno = 317;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, tmp_args_element_name_9 );
    Py_DECREF( tmp_called_name_8 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

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
            if ( var_context != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_context,
                    var_context
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
            if ( par_sock != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sock,
                    par_sock
                );
                assert( tmp_res != -1 );

            }
            if ( par_keyfile != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keyfile,
                    par_keyfile
                );
                assert( tmp_res != -1 );

            }
            if ( par_certfile != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_certfile,
                    par_certfile
                );
                assert( tmp_res != -1 );

            }
            if ( par_cert_reqs != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cert_reqs,
                    par_cert_reqs
                );
                assert( tmp_res != -1 );

            }
            if ( par_ca_certs != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ca_certs,
                    par_ca_certs
                );
                assert( tmp_res != -1 );

            }
            if ( par_server_hostname != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_server_hostname,
                    par_server_hostname
                );
                assert( tmp_res != -1 );

            }
            if ( par_ssl_version != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ssl_version,
                    par_ssl_version
                );
                assert( tmp_res != -1 );

            }
            if ( par_ciphers != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ciphers,
                    par_ciphers
                );
                assert( tmp_res != -1 );

            }
            if ( par_ssl_context != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ssl_context,
                    par_ssl_context
                );
                assert( tmp_res != -1 );

            }
            if ( par_ca_cert_dir != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ca_cert_dir,
                    par_ca_cert_dir
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
    NUITKA_CANNOT_GET_HERE( function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_sock );
    par_sock = NULL;

    Py_XDECREF( par_keyfile );
    par_keyfile = NULL;

    Py_XDECREF( par_certfile );
    par_certfile = NULL;

    Py_XDECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    Py_XDECREF( par_ca_certs );
    par_ca_certs = NULL;

    Py_XDECREF( par_server_hostname );
    par_server_hostname = NULL;

    Py_XDECREF( par_ssl_version );
    par_ssl_version = NULL;

    Py_XDECREF( par_ciphers );
    par_ciphers = NULL;

    Py_XDECREF( par_ssl_context );
    par_ssl_context = NULL;

    Py_XDECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_sock );
    par_sock = NULL;

    Py_XDECREF( par_keyfile );
    par_keyfile = NULL;

    Py_XDECREF( par_certfile );
    par_certfile = NULL;

    Py_XDECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    Py_XDECREF( par_ca_certs );
    par_ca_certs = NULL;

    Py_XDECREF( par_server_hostname );
    par_server_hostname = NULL;

    Py_XDECREF( par_ssl_version );
    par_ssl_version = NULL;

    Py_XDECREF( par_ciphers );
    par_ciphers = NULL;

    Py_XDECREF( par_ssl_context );
    par_ssl_context = NULL;

    Py_XDECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_ );
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
static PyObject *fparse_function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_sock = NULL;
    PyObject *_python_par_keyfile = NULL;
    PyObject *_python_par_certfile = NULL;
    PyObject *_python_par_cert_reqs = NULL;
    PyObject *_python_par_ca_certs = NULL;
    PyObject *_python_par_server_hostname = NULL;
    PyObject *_python_par_ssl_version = NULL;
    PyObject *_python_par_ciphers = NULL;
    PyObject *_python_par_ssl_context = NULL;
    PyObject *_python_par_ca_cert_dir = NULL;
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
                PyErr_Format( PyExc_TypeError, "ssl_wrap_socket() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_sock == key )
            {
                assert( _python_par_sock == NULL );
                _python_par_sock = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_keyfile == key )
            {
                assert( _python_par_keyfile == NULL );
                _python_par_keyfile = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_certfile == key )
            {
                assert( _python_par_certfile == NULL );
                _python_par_certfile = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_cert_reqs == key )
            {
                assert( _python_par_cert_reqs == NULL );
                _python_par_cert_reqs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ca_certs == key )
            {
                assert( _python_par_ca_certs == NULL );
                _python_par_ca_certs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_server_hostname == key )
            {
                assert( _python_par_server_hostname == NULL );
                _python_par_server_hostname = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ssl_version == key )
            {
                assert( _python_par_ssl_version == NULL );
                _python_par_ssl_version = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ciphers == key )
            {
                assert( _python_par_ciphers == NULL );
                _python_par_ciphers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ssl_context == key )
            {
                assert( _python_par_ssl_context == NULL );
                _python_par_ssl_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ca_cert_dir == key )
            {
                assert( _python_par_ca_cert_dir == NULL );
                _python_par_ca_cert_dir = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_sock, key ) == 1 )
            {
                assert( _python_par_sock == NULL );
                _python_par_sock = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_keyfile, key ) == 1 )
            {
                assert( _python_par_keyfile == NULL );
                _python_par_keyfile = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_certfile, key ) == 1 )
            {
                assert( _python_par_certfile == NULL );
                _python_par_certfile = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cert_reqs, key ) == 1 )
            {
                assert( _python_par_cert_reqs == NULL );
                _python_par_cert_reqs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ca_certs, key ) == 1 )
            {
                assert( _python_par_ca_certs == NULL );
                _python_par_ca_certs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_server_hostname, key ) == 1 )
            {
                assert( _python_par_server_hostname == NULL );
                _python_par_server_hostname = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ssl_version, key ) == 1 )
            {
                assert( _python_par_ssl_version == NULL );
                _python_par_ssl_version = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ciphers, key ) == 1 )
            {
                assert( _python_par_ciphers == NULL );
                _python_par_ciphers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ssl_context, key ) == 1 )
            {
                assert( _python_par_ssl_context == NULL );
                _python_par_ssl_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ca_cert_dir, key ) == 1 )
            {
                assert( _python_par_ca_cert_dir == NULL );
                _python_par_ca_cert_dir = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "ssl_wrap_socket() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_sock != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_sock = args[ 0 ];
        Py_INCREF( _python_par_sock );
    }
    else if ( _python_par_sock == NULL )
    {
        if ( 0 + self->m_defaults_given >= 10  )
        {
            _python_par_sock = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 10 );
            Py_INCREF( _python_par_sock );
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
         if (unlikely( _python_par_keyfile != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_keyfile = args[ 1 ];
        Py_INCREF( _python_par_keyfile );
    }
    else if ( _python_par_keyfile == NULL )
    {
        if ( 1 + self->m_defaults_given >= 10  )
        {
            _python_par_keyfile = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 10 );
            Py_INCREF( _python_par_keyfile );
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
         if (unlikely( _python_par_certfile != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_certfile = args[ 2 ];
        Py_INCREF( _python_par_certfile );
    }
    else if ( _python_par_certfile == NULL )
    {
        if ( 2 + self->m_defaults_given >= 10  )
        {
            _python_par_certfile = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 10 );
            Py_INCREF( _python_par_certfile );
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
         if (unlikely( _python_par_cert_reqs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_cert_reqs = args[ 3 ];
        Py_INCREF( _python_par_cert_reqs );
    }
    else if ( _python_par_cert_reqs == NULL )
    {
        if ( 3 + self->m_defaults_given >= 10  )
        {
            _python_par_cert_reqs = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 10 );
            Py_INCREF( _python_par_cert_reqs );
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
         if (unlikely( _python_par_ca_certs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_ca_certs = args[ 4 ];
        Py_INCREF( _python_par_ca_certs );
    }
    else if ( _python_par_ca_certs == NULL )
    {
        if ( 4 + self->m_defaults_given >= 10  )
        {
            _python_par_ca_certs = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 10 );
            Py_INCREF( _python_par_ca_certs );
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
         if (unlikely( _python_par_server_hostname != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_server_hostname = args[ 5 ];
        Py_INCREF( _python_par_server_hostname );
    }
    else if ( _python_par_server_hostname == NULL )
    {
        if ( 5 + self->m_defaults_given >= 10  )
        {
            _python_par_server_hostname = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 10 );
            Py_INCREF( _python_par_server_hostname );
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
         if (unlikely( _python_par_ssl_version != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_ssl_version = args[ 6 ];
        Py_INCREF( _python_par_ssl_version );
    }
    else if ( _python_par_ssl_version == NULL )
    {
        if ( 6 + self->m_defaults_given >= 10  )
        {
            _python_par_ssl_version = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 10 );
            Py_INCREF( _python_par_ssl_version );
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
         if (unlikely( _python_par_ciphers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_ciphers = args[ 7 ];
        Py_INCREF( _python_par_ciphers );
    }
    else if ( _python_par_ciphers == NULL )
    {
        if ( 7 + self->m_defaults_given >= 10  )
        {
            _python_par_ciphers = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 10 );
            Py_INCREF( _python_par_ciphers );
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
         if (unlikely( _python_par_ssl_context != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_ssl_context = args[ 8 ];
        Py_INCREF( _python_par_ssl_context );
    }
    else if ( _python_par_ssl_context == NULL )
    {
        if ( 8 + self->m_defaults_given >= 10  )
        {
            _python_par_ssl_context = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 10 );
            Py_INCREF( _python_par_ssl_context );
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
         if (unlikely( _python_par_ca_cert_dir != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 9 );
             goto error_exit;
         }

        _python_par_ca_cert_dir = args[ 9 ];
        Py_INCREF( _python_par_ca_cert_dir );
    }
    else if ( _python_par_ca_cert_dir == NULL )
    {
        if ( 9 + self->m_defaults_given >= 10  )
        {
            _python_par_ca_cert_dir = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 9 - 10 );
            Py_INCREF( _python_par_ca_cert_dir );
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
    if (unlikely( _python_par_sock == NULL || _python_par_keyfile == NULL || _python_par_certfile == NULL || _python_par_cert_reqs == NULL || _python_par_ca_certs == NULL || _python_par_server_hostname == NULL || _python_par_ssl_version == NULL || _python_par_ciphers == NULL || _python_par_ssl_context == NULL || _python_par_ca_cert_dir == NULL ))
    {
        PyObject *values[] = { _python_par_sock, _python_par_keyfile, _python_par_certfile, _python_par_cert_reqs, _python_par_ca_certs, _python_par_server_hostname, _python_par_ssl_version, _python_par_ciphers, _python_par_ssl_context, _python_par_ca_cert_dir };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 10 ))
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



    return impl_function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_( self, _python_par_sock, _python_par_keyfile, _python_par_certfile, _python_par_cert_reqs, _python_par_ca_certs, _python_par_server_hostname, _python_par_ssl_version, _python_par_ciphers, _python_par_ssl_context, _python_par_ca_cert_dir );

error_exit:;

    Py_XDECREF( _python_par_sock );
    Py_XDECREF( _python_par_keyfile );
    Py_XDECREF( _python_par_certfile );
    Py_XDECREF( _python_par_cert_reqs );
    Py_XDECREF( _python_par_ca_certs );
    Py_XDECREF( _python_par_server_hostname );
    Py_XDECREF( _python_par_ssl_version );
    Py_XDECREF( _python_par_ciphers );
    Py_XDECREF( _python_par_ssl_context );
    Py_XDECREF( _python_par_ca_cert_dir );

    return NULL;
}

static PyObject *dparse_function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 10 )
    {
        return impl_function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), INCREASE_REFCOUNT( args[ 9 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_,
        dparse_function_1___init___of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_6ffcf66c5c876dcb3dc480220c734062,
#endif
        codeobj_a95c55737ffb5986597ef7f80808dbba,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$util$ssl_,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__const_compare_digest_backport_of_requests$packages$urllib3$util$ssl_(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__const_compare_digest_backport_of_requests$packages$urllib3$util$ssl_,
        dparse_function_1__const_compare_digest_backport_of_requests$packages$urllib3$util$ssl_,
        const_str_plain__const_compare_digest_backport,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a7b4bbae0df2848cc82b544d5f646230,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$util$ssl_,
        const_str_digest_f5ab9e44d9781bbce93000ad3a218dd6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_assert_fingerprint_of_requests$packages$urllib3$util$ssl_(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_assert_fingerprint_of_requests$packages$urllib3$util$ssl_,
        dparse_function_2_assert_fingerprint_of_requests$packages$urllib3$util$ssl_,
        const_str_plain_assert_fingerprint,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_63b6c9c54cc1af61aae351404d73e48b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$util$ssl_,
        const_str_digest_935dace93363545d379a5e2ed3994f38
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_load_cert_chain_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_load_cert_chain_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_,
        dparse_function_2_load_cert_chain_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_,
        const_str_plain_load_cert_chain,
#if PYTHON_VERSION >= 330
        const_str_digest_69e25692dfd1b01029aea21de378705a,
#endif
        codeobj_ba0af3bff032e197ae36efee3c005baa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$util$ssl_,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_load_verify_locations_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_load_verify_locations_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_,
        dparse_function_3_load_verify_locations_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_,
        const_str_plain_load_verify_locations,
#if PYTHON_VERSION >= 330
        const_str_digest_f2ba34680fb338cc7c2e32fdb7c1301a,
#endif
        codeobj_086be726ea28b2a0aad961a31a9317d9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$util$ssl_,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_resolve_cert_reqs_of_requests$packages$urllib3$util$ssl_(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_resolve_cert_reqs_of_requests$packages$urllib3$util$ssl_,
        dparse_function_3_resolve_cert_reqs_of_requests$packages$urllib3$util$ssl_,
        const_str_plain_resolve_cert_reqs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fab7f49ae750908b92d610077fa1e974,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$util$ssl_,
        const_str_digest_e3db3ee12166b00e30746ab96478c070
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_resolve_ssl_version_of_requests$packages$urllib3$util$ssl_(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_resolve_ssl_version_of_requests$packages$urllib3$util$ssl_,
        dparse_function_4_resolve_ssl_version_of_requests$packages$urllib3$util$ssl_,
        const_str_plain_resolve_ssl_version,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fc53323594be7963f942c5cbd6754ea1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$util$ssl_,
        const_str_digest_40d4c2a9acff45d215ea7c0bc7f6dfe1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_set_ciphers_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_set_ciphers_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_,
        dparse_function_4_set_ciphers_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_,
        const_str_plain_set_ciphers,
#if PYTHON_VERSION >= 330
        const_str_digest_1e4f35ebb0482ef8f0f24ba4e0927107,
#endif
        codeobj_2f3d7ba3bc1c2415664b2344e295d973,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$util$ssl_,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_create_urllib3_context_of_requests$packages$urllib3$util$ssl_( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_create_urllib3_context_of_requests$packages$urllib3$util$ssl_,
        dparse_function_5_create_urllib3_context_of_requests$packages$urllib3$util$ssl_,
        const_str_plain_create_urllib3_context,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1c2a0b4093217a956fb695ad5b168047,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$util$ssl_,
        const_str_digest_c6e5c4394838f24a74fcd724137f89e0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_wrap_socket_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_wrap_socket_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_,
        dparse_function_5_wrap_socket_of_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_,
        const_str_plain_wrap_socket,
#if PYTHON_VERSION >= 330
        const_str_digest_90dcfb0c5b2e395585c44f2c6f8db8bf,
#endif
        codeobj_b83b555d6a5b1489cb24c77610011f40,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$util$ssl_,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_,
        dparse_function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_,
        const_str_plain_ssl_wrap_socket,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c1d0ef3ee097ad5792940e53ff712a2a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$packages$urllib3$util$ssl_,
        const_str_digest_a0adb01dd8d355d29039a847a354795c
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$packages$urllib3$util$ssl_ =
{
    PyModuleDef_HEAD_INIT,
    "requests.packages.urllib3.util.ssl_",   /* m_name */
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

MOD_INIT_DECL( requests$packages$urllib3$util$ssl_ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$packages$urllib3$util$ssl_ );
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

    // puts( "in initrequests$packages$urllib3$util$ssl_" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$packages$urllib3$util$ssl_ = Py_InitModule4(
        "requests.packages.urllib3.util.ssl_",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_requests$packages$urllib3$util$ssl_ = PyModule_Create( &mdef_requests$packages$urllib3$util$ssl_ );
#endif

    moduledict_requests$packages$urllib3$util$ssl_ = (PyDictObject *)((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;

    CHECK_OBJECT( module_requests$packages$urllib3$util$ssl_ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_3f9c79ac9778c20d3cb015a396023b31, module_requests$packages$urllib3$util$ssl_ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_requests$packages$urllib3$util$ssl_ );

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
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_requests$packages$urllib3$util$ssl__class_creation_1__bases = NULL;
    PyObject *tmp_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_requests$packages$urllib3$util$ssl__class_creation_1__metaclass = NULL;
    PyObject *tmp_requests$packages$urllib3$util$ssl__class_creation_1__prepared = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_meta_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_globals_9;
    PyObject *tmp_import_globals_10;
    PyObject *tmp_import_globals_11;
    PyObject *tmp_import_globals_12;
    PyObject *tmp_import_globals_13;
    PyObject *tmp_import_globals_14;
    PyObject *tmp_import_globals_15;
    PyObject *tmp_import_globals_16;
    PyObject *tmp_import_globals_17;
    PyObject *tmp_import_globals_18;
    PyObject *tmp_import_globals_19;
    PyObject *tmp_import_globals_20;
    PyObject *tmp_import_globals_21;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c14374e01b66ea11dc386f22f452750b;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_4fc29877723e0f5f2c0ba56dea944579;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_FRAME( codeobj_b019dcf32a376f517a89f1d6d5739f12, module_requests$packages$urllib3$util$ssl_ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 2;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_errno, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_errno, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 4;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_hmac, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hmac, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_binascii, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_hexlify );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hexlify, tmp_assign_source_9 );
    tmp_import_globals_5 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_binascii, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_unhexlify );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_unhexlify, tmp_assign_source_10 );
    tmp_import_globals_6 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_hashlib, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_md5 );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_md5, tmp_assign_source_11 );
    tmp_import_globals_7 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_hashlib, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_sha1 );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha1, tmp_assign_source_12 );
    tmp_import_globals_8 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_hashlib, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_sha256 );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha256, tmp_assign_source_13 );
    tmp_import_globals_9 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_9, tmp_import_globals_9, const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, const_int_pos_2 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_SSLError );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_14 );
    tmp_import_globals_10 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_10, tmp_import_globals_10, const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, const_int_pos_2 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_InsecurePlatformWarning );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning, tmp_assign_source_15 );
    tmp_import_globals_11 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_11, tmp_import_globals_11, const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, const_int_pos_2 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_SNIMissingWarning );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning, tmp_assign_source_16 );
    tmp_assign_source_17 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_17 );
    tmp_assign_source_18 = Py_False;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HAS_SNI, tmp_assign_source_18 );
    tmp_assign_source_19 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_create_default_context, tmp_assign_source_19 );
    tmp_assign_source_20 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_md5 );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_md5 );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85073 ], 25, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_int_pos_32;
    PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha1 );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sha1 );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85098 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_int_pos_40;
    PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha256 );

    if (unlikely( tmp_dict_value_3 == NULL ))
    {
        tmp_dict_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sha256 );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85124 ], 28, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_int_pos_64;
    PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_3, tmp_dict_value_3 );
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HASHFUNC_MAP, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_function_1__const_compare_digest_backport_of_requests$packages$urllib3$util$ssl_(  );
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest_backport, tmp_assign_source_21 );
    tmp_getattr_target_1 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hmac );

    if (unlikely( tmp_getattr_target_1 == NULL ))
    {
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hmac );
    }

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 26771 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain_compare_digest;
    tmp_getattr_default_1 = GET_STRING_DICT_VALUE( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest_backport );

    if (unlikely( tmp_getattr_default_1 == NULL ))
    {
        tmp_getattr_default_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__const_compare_digest_backport );
    }

    if ( tmp_getattr_default_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85152 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_22 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest, tmp_assign_source_22 );
    // Tried code:
    tmp_import_globals_12 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 42;
    tmp_assign_source_23 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_12, tmp_import_globals_12, Py_None, const_int_0 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_23 );
    tmp_import_globals_13 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 43;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_13, tmp_import_globals_13, const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_wrap_socket );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_wrap_socket, tmp_assign_source_24 );
    tmp_import_globals_14 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 43;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_14, tmp_import_globals_14, const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_CERT_NONE );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_CERT_NONE, tmp_assign_source_25 );
    tmp_import_globals_15 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 43;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_15, tmp_import_globals_15, const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_PROTOCOL_SSLv23 );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_SSLv23, tmp_assign_source_26 );
    tmp_import_globals_16 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 44;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_plain_HAS_SNI_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_HAS_SNI );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HAS_SNI, tmp_assign_source_27 );
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


        exception_lineno = 45;
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_no_1:;
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
    NUITKA_CANNOT_GET_HERE( requests$packages$urllib3$util$ssl_ );
    PyErr_SetObject( PyExc_RuntimeError, Py_None );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_import_globals_17 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 50;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_17, tmp_import_globals_17, const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto try_except_handler_3;
    }
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_OP_NO_SSLv2 );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2, tmp_assign_source_28 );
    tmp_import_globals_18 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 50;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_18, tmp_import_globals_18, const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto try_except_handler_3;
    }
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_OP_NO_SSLv3 );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3, tmp_assign_source_29 );
    tmp_import_globals_19 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 50;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_19, tmp_import_globals_19, const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto try_except_handler_3;
    }
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_OP_NO_COMPRESSION );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION, tmp_assign_source_30 );
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

    // Preserve existing published exception.
    exception_preserved_type_2 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != -1 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_module, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_ImportError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_iter_arg_1 = const_tuple_int_pos_16777216_int_pos_33554432_tuple;
    tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_31 != NULL );
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_31;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_32 == NULL )
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


        exception_lineno = 52;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_32;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_33 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_33 == NULL )
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


        exception_lineno = 52;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_33;

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

                goto try_except_handler_5;
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

        goto try_except_handler_5;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    tmp_assign_source_34 = tmp_tuple_unpack_1__element_1;

    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2, tmp_assign_source_34 );
    tmp_assign_source_35 = tmp_tuple_unpack_1__element_2;

    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3, tmp_assign_source_35 );
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_36 = const_int_pos_131072;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION, tmp_assign_source_36 );
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_4;
    branch_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$packages$urllib3$util$ssl_ );
    PyErr_SetObject( PyExc_RuntimeError, Py_None );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_3:;
    tmp_assign_source_37 = const_str_digest_716aea1eaac37029978ba81ff09f5824;
    UPDATE_STRING_DICT0( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_DEFAULT_CIPHERS, tmp_assign_source_37 );
    // Tried code:
    tmp_import_globals_20 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 75;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_20, tmp_import_globals_20, const_tuple_str_plain_SSLContext_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto try_except_handler_6;
    }
    tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_SSLContext );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_38 );
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

    // Preserve existing published exception.
    exception_preserved_type_3 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_3 );
    exception_preserved_value_3 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_3 );
    exception_preserved_tb_3 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_3 );

    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != -1 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_module, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    // Tried code:
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_ImportError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto try_except_handler_7;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_import_globals_21 = ((PyModuleObject *)module_requests$packages$urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 77;
    tmp_assign_source_39 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_21, tmp_import_globals_21, Py_None, const_int_0 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_39 );
    tmp_assign_source_40 = PyTuple_New( 1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_1 != NULL );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_40, 0, tmp_tuple_element_1 );
    assert( tmp_requests$packages$urllib3$util$ssl__class_creation_1__bases == NULL );
    tmp_requests$packages$urllib3$util$ssl__class_creation_1__bases = tmp_assign_source_40;

    tmp_assign_source_41 = PyDict_New();
    assert( tmp_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict == NULL );
    tmp_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict = tmp_assign_source_41;

    // Tried code:
    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto try_except_handler_8;
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
    tmp_dget_dict_1 = tmp_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict;

    tmp_dget_key_1 = const_str_plain_metaclass;
    tmp_class_meta_1 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_class_meta_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto try_except_handler_8;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_requests$packages$urllib3$util$ssl__class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto try_except_handler_8;
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
    tmp_subscribed_name_1 = tmp_requests$packages$urllib3$util$ssl__class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto try_except_handler_8;
    }
    tmp_class_meta_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_class_meta_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto try_except_handler_8;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_meta_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_1 != NULL );
    Py_INCREF( tmp_class_meta_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_class_bases_1 = tmp_requests$packages$urllib3$util$ssl__class_creation_1__bases;

    tmp_assign_source_42 = SELECT_METACLASS( tmp_class_meta_1, tmp_class_bases_1 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_1 );

        exception_lineno = 79;
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_class_meta_1 );
    assert( tmp_requests$packages$urllib3$util$ssl__class_creation_1__metaclass == NULL );
    tmp_requests$packages$urllib3$util$ssl__class_creation_1__metaclass = tmp_assign_source_42;

    tmp_compare_left_5 = const_str_plain_metaclass;
    tmp_compare_right_5 = tmp_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto try_except_handler_8;
    }
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_remove_dict = tmp_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto try_except_handler_8;
    }
    branch_no_4:;
    tmp_hasattr_source_1 = tmp_requests$packages$urllib3$util$ssl__class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto try_except_handler_8;
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
    tmp_source_name_1 = tmp_requests$packages$urllib3$util$ssl__class_creation_1__metaclass;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto try_except_handler_8;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_SSLContext;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_requests$packages$urllib3$util$ssl__class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict;

    frame_module->f_lineno = 79;
    tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto try_except_handler_8;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_43 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_requests$packages$urllib3$util$ssl__class_creation_1__prepared == NULL );
    tmp_requests$packages$urllib3$util$ssl__class_creation_1__prepared = tmp_assign_source_43;

    tmp_assign_source_44 = impl_class_1_SSLContext_of_requests$packages$urllib3$util$ssl_( tmp_requests$packages$urllib3$util$ssl__class_creation_1__bases, tmp_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict, tmp_requests$packages$urllib3$util$ssl__class_creation_1__metaclass, tmp_requests$packages$urllib3$util$ssl__class_creation_1__prepared );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_44 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_requests$packages$urllib3$util$ssl__class_creation_1__bases );
    tmp_requests$packages$urllib3$util$ssl__class_creation_1__bases = NULL;

    Py_XDECREF( tmp_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict );
    tmp_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$packages$urllib3$util$ssl__class_creation_1__metaclass );
    tmp_requests$packages$urllib3$util$ssl__class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_requests$packages$urllib3$util$ssl__class_creation_1__prepared );
    tmp_requests$packages$urllib3$util$ssl__class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_requests$packages$urllib3$util$ssl__class_creation_1__bases );
    tmp_requests$packages$urllib3$util$ssl__class_creation_1__bases = NULL;

    Py_XDECREF( tmp_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict );
    tmp_requests$packages$urllib3$util$ssl__class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_requests$packages$urllib3$util$ssl__class_creation_1__metaclass );
    tmp_requests$packages$urllib3$util$ssl__class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_requests$packages$urllib3$util$ssl__class_creation_1__prepared );
    tmp_requests$packages$urllib3$util$ssl__class_creation_1__prepared = NULL;

    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_7;
    branch_end_3:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$packages$urllib3$util$ssl_ );
    PyErr_SetObject( PyExc_RuntimeError, Py_None );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_6:;

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
    tmp_assign_source_45 = MAKE_FUNCTION_function_2_assert_fingerprint_of_requests$packages$urllib3$util$ssl_(  );
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_assert_fingerprint, tmp_assign_source_45 );
    tmp_assign_source_46 = MAKE_FUNCTION_function_3_resolve_cert_reqs_of_requests$packages$urllib3$util$ssl_(  );
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs, tmp_assign_source_46 );
    tmp_assign_source_47 = MAKE_FUNCTION_function_4_resolve_ssl_version_of_requests$packages$urllib3$util$ssl_(  );
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version, tmp_assign_source_47 );
    tmp_defaults_1 = const_tuple_none_none_none_none_tuple;
    tmp_assign_source_48 = MAKE_FUNCTION_function_5_create_urllib3_context_of_requests$packages$urllib3$util$ssl_( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_create_urllib3_context, tmp_assign_source_48 );
    tmp_defaults_2 = const_tuple_none_none_none_none_none_none_none_none_none_tuple;
    tmp_assign_source_49 = MAKE_FUNCTION_function_6_ssl_wrap_socket_of_requests$packages$urllib3$util$ssl_( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_requests$packages$urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket, tmp_assign_source_49 );

    return MOD_RETURN_VALUE( module_requests$packages$urllib3$util$ssl_ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
