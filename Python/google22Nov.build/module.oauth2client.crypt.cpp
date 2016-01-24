// Generated code for Python source for module 'oauth2client.crypt'
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

// The _module_oauth2client$crypt is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_oauth2client$crypt;
PyDictObject *moduledict_oauth2client$crypt;

// The module constants used
static PyObject *const_str_plain__bad_pkcs12_key_as_pem;
extern PyObject *const_str_plain_make_signed_jwt;
extern PyObject *const_str_plain_is_x509_cert;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_90dfa11e5d28c5b1252e5050885d08cc;
extern PyObject *const_str_plain_certs;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_PyCryptoSigner;
extern PyObject *const_str_plain_Signer;
static PyObject *const_str_digest_177d95d6d404d02b224f2cff023f36c7;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_86400;
static PyObject *const_str_plain_payload_dict;
static PyObject *const_tuple_82884dce0425b5f7faf5caf05372ddf6_tuple;
static PyObject *const_str_digest_a270a7128d569f4c7d92760a9151467a;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_plain__urlsafe_b64decode_tuple;
static PyObject *const_tuple_str_plain_PyCryptoVerifier_tuple;
static PyObject *const_str_digest_bbc6ec5179fb962cb832f43e3a5d6a12;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_json;
static PyObject *const_tuple_447fe76beaca35483ffb0e52b5449579_tuple;
extern PyObject *const_str_plain__json_encode;
static PyObject *const_str_plain_payload_bytes;
extern PyObject *const_str_plain_now;
static PyObject *const_str_digest_52b2a6eb99017dafc0668b73aba2a322;
extern PyObject *const_tuple_str_plain__from_bytes_tuple;
extern PyObject *const_str_plain_from_string;
static PyObject *const_str_digest_34910bef1cb907390a544f794f652d0c;
static PyObject *const_tuple_str_plain_OpenSSLSigner_tuple;
extern PyObject *const_str_plain_signature;
extern PyObject *const_str_plain_payload;
extern PyObject *const_str_plain__urlsafe_b64decode;
static PyObject *const_str_plain_jwt;
static PyObject *const_str_plain_latest;
static PyObject *const_tuple_str_plain_pkcs12_key_as_pem_tuple;
extern PyObject *const_str_plain_pkcs12_key_as_pem;
extern PyObject *const_str_plain_join;
static PyObject *const_str_digest_07927a8f6333b5ab0aa74329353ca557;
static PyObject *const_str_plain_signing_input;
static PyObject *const_str_digest_cd968f093f6bac1f5486148075b00d69;
extern PyObject *const_str_plain__from_bytes;
extern PyObject *const_str_digest_0c571f75d52676ec444ec6677aea0084;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_6b7f03d0d7244bf146747653c0152c77;
extern PyObject *const_str_plain_time;
extern PyObject *const_tuple_str_plain__json_encode_tuple;
extern PyObject *const_str_plain_PyCryptoVerifier;
static PyObject *const_str_plain_expiration;
extern PyObject *const_str_plain___package__;
extern PyObject *const_int_pos_300;
static PyObject *const_str_digest_e096211c6d5716702cdab75baee85a94;
extern PyObject *const_str_plain_OpenSSLSigner;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_crypt;
static PyObject *const_tuple_str_plain_PyCryptoSigner_tuple;
static PyObject *const_str_plain_AUTH_TOKEN_LIFETIME_SECS;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_exp;
extern PyObject *const_str_plain_verify_signed_jwt_with_certs;
static PyObject *const_dict_ab90cfcfb508ccb3ac7f59f0e1222e59;
static PyObject *const_str_plain__check_audience;
extern PyObject *const_bytes_chr_46;
extern PyObject *const_str_plain_message;
static PyObject *const_tuple_ad1d5a824fc31a8ac4c950f11c336c42_tuple;
extern PyObject *const_tuple_str_plain__urlsafe_b64encode_tuple;
extern PyObject *const_str_digest_4ee6d49526f58d4fff6e68f06291cb31;
extern PyObject *const_str_plain_pem;
static PyObject *const_str_plain_verifier;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_plain___loader__;
static PyObject *const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple;
extern PyObject *const_tuple_str_plain__to_bytes_tuple;
static PyObject *const_str_digest_8a9e6e89bae47a40c8116b3dea0633db;
static PyObject *const_str_plain_Verifier;
static PyObject *const_str_plain_earliest;
extern PyObject *const_str_plain_aud;
extern PyObject *const_str_digest_d45a20eeafb65ffb5e1659b43582b4bb;
extern PyObject *const_str_plain_split;
static PyObject *const_str_plain__verify_signature;
static PyObject *const_str_digest_c5d37d72671b97cf459ade35d2436684;
static PyObject *const_str_digest_54b31f61f0d44fb5d07c6f2df4c3c87d;
static PyObject *const_str_digest_116842ee94d1903f3e2a0b87009d840c;
extern PyObject *const_str_plain_count;
static PyObject *const_str_plain_AppIdentityError;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_alg;
extern PyObject *const_str_plain_oauth2client;
static PyObject *const_str_plain_audience_in_payload;
static PyObject *const_str_digest_8d9e9b22507f1ef9bc3df4a5a16824f6;
static PyObject *const_str_plain_issued_at;
static PyObject *const_str_digest_25fbe2a830a7097102305f8ed9cd970a;
extern PyObject *const_str_plain_segments;
extern PyObject *const_str_plain__to_bytes;
extern PyObject *const_str_plain_audience;
extern PyObject *const_str_plain_OpenSSLVerifier;
static PyObject *const_tuple_str_plain_OpenSSLVerifier_tuple;
extern PyObject *const_str_plain_header;
extern PyObject *const_str_plain_verify;
static PyObject *const_str_digest_22120e9b46afe7d33f24fbc3227a33cf;
extern PyObject *const_str_plain_iat;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_JWT;
static PyObject *const_str_plain_message_to_sign;
extern PyObject *const_str_digest_74c886a338443b13b70d63ad6c0409d3;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_CLOCK_SKEW_SECS;
extern PyObject *const_str_plain___class__;
static PyObject *const_tuple_340e9461a18277de2f85a275cf7bf816_tuple;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_typ;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_plain_MAX_TOKEN_LIFETIME_SECS;
extern PyObject *const_str_plain_logger;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_d5f3c974ef79683c2b4f59a75c68172d;
static PyObject *const_str_plain_signer;
extern PyObject *const_str_plain_RS256;
static PyObject *const_str_digest_9cefa5f189828dccaf7a7cb600fa5d90;
static PyObject *const_str_plain__verify_time_range;
extern PyObject *const_str_plain_loads;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_get;
static PyObject *const_dict_35c70eca0bfd4024df535206f5be2ada;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_logging;
static PyObject *const_str_digest_1a161abcd863b89eead18b29c26818a0;
extern PyObject *const_str_plain__urlsafe_b64encode;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain__bad_pkcs12_key_as_pem = UNSTREAM_STRING( &constant_bin[ 39999 ], 22, 1 );
    const_str_digest_90dfa11e5d28c5b1252e5050885d08cc = UNSTREAM_STRING( &constant_bin[ 284192 ], 51, 0 );
    const_str_digest_177d95d6d404d02b224f2cff023f36c7 = UNSTREAM_STRING( &constant_bin[ 284243 ], 35, 0 );
    const_str_plain_payload_dict = UNSTREAM_STRING( &constant_bin[ 40303 ], 12, 1 );
    const_tuple_82884dce0425b5f7faf5caf05372ddf6_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_82884dce0425b5f7faf5caf05372ddf6_tuple, 0, const_str_plain_payload_dict ); Py_INCREF( const_str_plain_payload_dict );
    PyTuple_SET_ITEM( const_tuple_82884dce0425b5f7faf5caf05372ddf6_tuple, 1, const_str_plain_audience ); Py_INCREF( const_str_plain_audience );
    const_str_plain_audience_in_payload = UNSTREAM_STRING( &constant_bin[ 40361 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_82884dce0425b5f7faf5caf05372ddf6_tuple, 2, const_str_plain_audience_in_payload ); Py_INCREF( const_str_plain_audience_in_payload );
    const_str_digest_a270a7128d569f4c7d92760a9151467a = UNSTREAM_STRING( &constant_bin[ 218884 ], 41, 0 );
    const_tuple_str_plain_PyCryptoVerifier_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PyCryptoVerifier_tuple, 0, const_str_plain_PyCryptoVerifier ); Py_INCREF( const_str_plain_PyCryptoVerifier );
    const_str_digest_bbc6ec5179fb962cb832f43e3a5d6a12 = UNSTREAM_STRING( &constant_bin[ 284278 ], 577, 0 );
    const_tuple_447fe76beaca35483ffb0e52b5449579_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_447fe76beaca35483ffb0e52b5449579_tuple, 0, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_447fe76beaca35483ffb0e52b5449579_tuple, 1, const_str_plain_signature ); Py_INCREF( const_str_plain_signature );
    PyTuple_SET_ITEM( const_tuple_447fe76beaca35483ffb0e52b5449579_tuple, 2, const_str_plain_certs ); Py_INCREF( const_str_plain_certs );
    PyTuple_SET_ITEM( const_tuple_447fe76beaca35483ffb0e52b5449579_tuple, 3, const_str_plain_pem ); Py_INCREF( const_str_plain_pem );
    const_str_plain_verifier = UNSTREAM_STRING( &constant_bin[ 284855 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_447fe76beaca35483ffb0e52b5449579_tuple, 4, const_str_plain_verifier ); Py_INCREF( const_str_plain_verifier );
    const_str_plain_payload_bytes = UNSTREAM_STRING( &constant_bin[ 40828 ], 13, 1 );
    const_str_digest_52b2a6eb99017dafc0668b73aba2a322 = UNSTREAM_STRING( &constant_bin[ 284863 ], 23, 0 );
    const_str_digest_34910bef1cb907390a544f794f652d0c = UNSTREAM_STRING( &constant_bin[ 284886 ], 33, 0 );
    const_tuple_str_plain_OpenSSLSigner_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_OpenSSLSigner_tuple, 0, const_str_plain_OpenSSLSigner ); Py_INCREF( const_str_plain_OpenSSLSigner );
    const_str_plain_jwt = UNSTREAM_STRING( &constant_bin[ 40779 ], 3, 1 );
    const_str_plain_latest = UNSTREAM_STRING( &constant_bin[ 40727 ], 6, 1 );
    const_tuple_str_plain_pkcs12_key_as_pem_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_pkcs12_key_as_pem_tuple, 0, const_str_plain_pkcs12_key_as_pem ); Py_INCREF( const_str_plain_pkcs12_key_as_pem );
    const_str_digest_07927a8f6333b5ab0aa74329353ca557 = UNSTREAM_STRING( &constant_bin[ 284919 ], 288, 0 );
    const_str_plain_signing_input = UNSTREAM_STRING( &constant_bin[ 40127 ], 13, 1 );
    const_str_digest_cd968f093f6bac1f5486148075b00d69 = UNSTREAM_STRING( &constant_bin[ 285207 ], 29, 0 );
    const_str_digest_6b7f03d0d7244bf146747653c0152c77 = UNSTREAM_STRING( &constant_bin[ 285236 ], 21, 0 );
    const_str_plain_expiration = UNSTREAM_STRING( &constant_bin[ 40480 ], 10, 1 );
    const_str_digest_e096211c6d5716702cdab75baee85a94 = UNSTREAM_STRING( &constant_bin[ 285257 ], 25, 0 );
    const_tuple_str_plain_PyCryptoSigner_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PyCryptoSigner_tuple, 0, const_str_plain_PyCryptoSigner ); Py_INCREF( const_str_plain_PyCryptoSigner );
    const_str_plain_AUTH_TOKEN_LIFETIME_SECS = UNSTREAM_STRING( &constant_bin[ 285282 ], 24, 1 );
    const_dict_ab90cfcfb508ccb3ac7f59f0e1222e59 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_ab90cfcfb508ccb3ac7f59f0e1222e59, const_str_plain_alg, const_str_plain_RS256 );
    PyDict_SetItem( const_dict_ab90cfcfb508ccb3ac7f59f0e1222e59, const_str_plain_typ, const_str_plain_JWT );
    assert( PyDict_Size( const_dict_ab90cfcfb508ccb3ac7f59f0e1222e59 ) == 2 );
    const_str_plain__check_audience = UNSTREAM_STRING( &constant_bin[ 41017 ], 15, 1 );
    const_tuple_ad1d5a824fc31a8ac4c950f11c336c42_tuple = PyTuple_New( 6 );
    const_str_plain_signer = UNSTREAM_STRING( &constant_bin[ 134742 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_ad1d5a824fc31a8ac4c950f11c336c42_tuple, 0, const_str_plain_signer ); Py_INCREF( const_str_plain_signer );
    PyTuple_SET_ITEM( const_tuple_ad1d5a824fc31a8ac4c950f11c336c42_tuple, 1, const_str_plain_payload ); Py_INCREF( const_str_plain_payload );
    PyTuple_SET_ITEM( const_tuple_ad1d5a824fc31a8ac4c950f11c336c42_tuple, 2, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyTuple_SET_ITEM( const_tuple_ad1d5a824fc31a8ac4c950f11c336c42_tuple, 3, const_str_plain_segments ); Py_INCREF( const_str_plain_segments );
    PyTuple_SET_ITEM( const_tuple_ad1d5a824fc31a8ac4c950f11c336c42_tuple, 4, const_str_plain_signing_input ); Py_INCREF( const_str_plain_signing_input );
    PyTuple_SET_ITEM( const_tuple_ad1d5a824fc31a8ac4c950f11c336c42_tuple, 5, const_str_plain_signature ); Py_INCREF( const_str_plain_signature );
    const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple, 0, const_str_plain_payload_dict ); Py_INCREF( const_str_plain_payload_dict );
    PyTuple_SET_ITEM( const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple, 1, const_str_plain_now ); Py_INCREF( const_str_plain_now );
    const_str_plain_issued_at = UNSTREAM_STRING( &constant_bin[ 40581 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple, 2, const_str_plain_issued_at ); Py_INCREF( const_str_plain_issued_at );
    PyTuple_SET_ITEM( const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple, 3, const_str_plain_expiration ); Py_INCREF( const_str_plain_expiration );
    const_str_plain_earliest = UNSTREAM_STRING( &constant_bin[ 40673 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple, 4, const_str_plain_earliest ); Py_INCREF( const_str_plain_earliest );
    PyTuple_SET_ITEM( const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple, 5, const_str_plain_latest ); Py_INCREF( const_str_plain_latest );
    const_str_digest_8a9e6e89bae47a40c8116b3dea0633db = UNSTREAM_STRING( &constant_bin[ 285306 ], 25, 0 );
    const_str_plain_Verifier = UNSTREAM_STRING( &constant_bin[ 30881 ], 8, 1 );
    const_str_plain__verify_signature = UNSTREAM_STRING( &constant_bin[ 40877 ], 17, 1 );
    const_str_digest_c5d37d72671b97cf459ade35d2436684 = UNSTREAM_STRING( &constant_bin[ 285331 ], 988, 0 );
    const_str_digest_54b31f61f0d44fb5d07c6f2df4c3c87d = UNSTREAM_STRING( &constant_bin[ 286319 ], 31, 0 );
    const_str_digest_116842ee94d1903f3e2a0b87009d840c = UNSTREAM_STRING( &constant_bin[ 286350 ], 510, 0 );
    const_str_plain_AppIdentityError = UNSTREAM_STRING( &constant_bin[ 40255 ], 16, 1 );
    const_str_digest_8d9e9b22507f1ef9bc3df4a5a16824f6 = UNSTREAM_STRING( &constant_bin[ 286860 ], 33, 0 );
    const_str_digest_25fbe2a830a7097102305f8ed9cd970a = UNSTREAM_STRING( &constant_bin[ 286893 ], 86, 0 );
    const_tuple_str_plain_OpenSSLVerifier_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_OpenSSLVerifier_tuple, 0, const_str_plain_OpenSSLVerifier ); Py_INCREF( const_str_plain_OpenSSLVerifier );
    const_str_digest_22120e9b46afe7d33f24fbc3227a33cf = UNSTREAM_STRING( &constant_bin[ 286979 ], 25, 0 );
    const_str_plain_message_to_sign = UNSTREAM_STRING( &constant_bin[ 40926 ], 15, 1 );
    const_str_plain_CLOCK_SKEW_SECS = UNSTREAM_STRING( &constant_bin[ 40626 ], 15, 1 );
    const_tuple_340e9461a18277de2f85a275cf7bf816_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 0, const_str_plain_jwt ); Py_INCREF( const_str_plain_jwt );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 1, const_str_plain_certs ); Py_INCREF( const_str_plain_certs );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 2, const_str_plain_audience ); Py_INCREF( const_str_plain_audience );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 3, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 4, const_str_plain_payload ); Py_INCREF( const_str_plain_payload );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 5, const_str_plain_signature ); Py_INCREF( const_str_plain_signature );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 6, const_str_plain_message_to_sign ); Py_INCREF( const_str_plain_message_to_sign );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 7, const_str_plain_payload_bytes ); Py_INCREF( const_str_plain_payload_bytes );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 8, const_str_plain_payload_dict ); Py_INCREF( const_str_plain_payload_dict );
    const_str_digest_d5f3c974ef79683c2b4f59a75c68172d = UNSTREAM_STRING( &constant_bin[ 273440 ], 18, 0 );
    const_str_digest_9cefa5f189828dccaf7a7cb600fa5d90 = UNSTREAM_STRING( &constant_bin[ 287004 ], 384, 0 );
    const_str_plain__verify_time_range = UNSTREAM_STRING( &constant_bin[ 40977 ], 18, 1 );
    const_dict_35c70eca0bfd4024df535206f5be2ada = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_35c70eca0bfd4024df535206f5be2ada, const_str_plain_is_x509_cert, Py_True );
    assert( PyDict_Size( const_dict_35c70eca0bfd4024df535206f5be2ada ) == 1 );
    const_str_digest_1a161abcd863b89eead18b29c26818a0 = UNSTREAM_STRING( &constant_bin[ 287388 ], 32, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_oauth2client$crypt( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_92215837991b5c352c49777d508e6326;
static PyCodeObject *codeobj_18578ad29caae09319fe67e8e8c0acc5;
static PyCodeObject *codeobj_7e3866d27c66b610b636fd58d0a2e170;
static PyCodeObject *codeobj_41c70259f61e96ea37922d925583d0b5;
static PyCodeObject *codeobj_6f201942511de13e4d978ed9cf1dc196;
static PyCodeObject *codeobj_3dfea617ff2d05ca46b0771791b945cd;
static PyCodeObject *codeobj_785f0af18374ee99db41dc590d48bc59;
static PyCodeObject *codeobj_dc4f3ab4511c2dfdb94ad5052ea1bd76;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_90dfa11e5d28c5b1252e5050885d08cc );
    codeobj_92215837991b5c352c49777d508e6326 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__bad_pkcs12_key_as_pem, 40, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_18578ad29caae09319fe67e8e8c0acc5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__bad_pkcs12_key_as_pem, 40, const_tuple_str_plain_args_str_plain_kwargs_tuple, 2, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_7e3866d27c66b610b636fd58d0a2e170 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__check_audience, 121, const_tuple_82884dce0425b5f7faf5caf05372ddf6_tuple, 2, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_41c70259f61e96ea37922d925583d0b5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__verify_signature, 100, const_tuple_447fe76beaca35483ffb0e52b5449579_tuple, 3, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_6f201942511de13e4d978ed9cf1dc196 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__verify_time_range, 149, const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple, 1, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_3dfea617ff2d05ca46b0771791b945cd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_crypt, 0, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_785f0af18374ee99db41dc590d48bc59 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_make_signed_jwt, 72, const_tuple_ad1d5a824fc31a8ac4c950f11c336c42_tuple, 2, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_dc4f3ab4511c2dfdb94ad5052ea1bd76 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verify_signed_jwt_with_certs, 200, const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 3, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_AppIdentityError_of_oauth2client$crypt( PyObject *&closure_oauth2client$crypt_class_creation_1__bases, PyObject *&closure_oauth2client$crypt_class_creation_1__class_decl_dict, PyObject *&closure_oauth2client$crypt_class_creation_1__metaclass, PyObject *&closure_oauth2client$crypt_class_creation_1__prepared );


static PyObject *MAKE_FUNCTION_function_1__bad_pkcs12_key_as_pem_of_oauth2client$crypt(  );


static PyObject *MAKE_FUNCTION_function_2_make_signed_jwt_of_oauth2client$crypt(  );


static PyObject *MAKE_FUNCTION_function_3__verify_signature_of_oauth2client$crypt(  );


static PyObject *MAKE_FUNCTION_function_4__check_audience_of_oauth2client$crypt(  );


static PyObject *MAKE_FUNCTION_function_5__verify_time_range_of_oauth2client$crypt(  );


static PyObject *MAKE_FUNCTION_function_6_verify_signed_jwt_with_certs_of_oauth2client$crypt( PyObject *defaults );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_AppIdentityError_of_oauth2client$crypt( PyObject *&closure_oauth2client$crypt_class_creation_1__bases, PyObject *&closure_oauth2client$crypt_class_creation_1__class_decl_dict, PyObject *&closure_oauth2client$crypt_class_creation_1__metaclass, PyObject *&closure_oauth2client$crypt_class_creation_1__prepared )
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
    tmp_set_locals = closure_oauth2client$crypt_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_d5f3c974ef79683c2b4f59a75c68172d;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_34910bef1cb907390a544f794f652d0c;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_AppIdentityError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_oauth2client$crypt_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_AppIdentityError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_oauth2client$crypt_class_creation_1__bases;

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
    tmp_kw_name_1 = closure_oauth2client$crypt_class_creation_1__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_1_AppIdentityError_of_oauth2client$crypt );
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
    NUITKA_CANNOT_GET_HERE( class_1_AppIdentityError_of_oauth2client$crypt );
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


static PyObject *impl_function_1__bad_pkcs12_key_as_pem_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = _python_par_args;
    PyObject *par_kwargs = _python_par_kwargs;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_18578ad29caae09319fe67e8e8c0acc5, module_oauth2client$crypt );
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
    tmp_make_exception_arg_1 = const_str_digest_177d95d6d404d02b224f2cff023f36c7;
    frame_function->f_lineno = 41;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 41;
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1__bad_pkcs12_key_as_pem_of_oauth2client$crypt );
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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1__bad_pkcs12_key_as_pem_of_oauth2client$crypt );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}
static PyObject *fparse_function_1__bad_pkcs12_key_as_pem_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                        PyErr_Format( PyExc_TypeError, "_bad_pkcs12_key_as_pem() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_bad_pkcs12_key_as_pem() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "_bad_pkcs12_key_as_pem() keywords must be strings" );
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


    return impl_function_1__bad_pkcs12_key_as_pem_of_oauth2client$crypt( self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1__bad_pkcs12_key_as_pem_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1__bad_pkcs12_key_as_pem_of_oauth2client$crypt( self, MAKE_TUPLE( &args[ 0 ], size > 0 ? size-0 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1__bad_pkcs12_key_as_pem_of_oauth2client$crypt( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_make_signed_jwt_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject *_python_par_signer, PyObject *_python_par_payload )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_signer = _python_par_signer;
    PyObject *par_payload = _python_par_payload;
    PyObject *var_header = NULL;
    PyObject *var_segments = NULL;
    PyObject *var_signing_input = NULL;
    PyObject *var_signature = NULL;
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
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_unicode_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_Copy( const_dict_ab90cfcfb508ccb3ac7f59f0e1222e59 );
    assert( var_header == NULL );
    var_header = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_785f0af18374ee99db41dc590d48bc59, module_oauth2client$crypt );
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
    tmp_assign_source_2 = PyList_New( 2 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__urlsafe_b64encode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__urlsafe_b64encode );
    }

    if ( tmp_called_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40037 ], 40, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__json_encode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__json_encode );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40077 ], 34, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_header;

    frame_function->f_lineno = 87;
    tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 87;
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_2, 0, tmp_list_element_1 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__urlsafe_b64encode );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__urlsafe_b64encode );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40037 ], 40, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__json_encode );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__json_encode );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40077 ], 34, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_payload;

    frame_function->f_lineno = 88;
    tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, tmp_args_element_name_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 88;
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_2, 1, tmp_list_element_1 );
    assert( var_segments == NULL );
    var_segments = tmp_assign_source_2;

    tmp_source_name_1 = const_bytes_chr_46;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_5 = var_segments;

    frame_function->f_lineno = 90;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, tmp_args_element_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    assert( var_signing_input == NULL );
    var_signing_input = tmp_assign_source_3;

    tmp_source_name_2 = par_signer;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sign );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_signing_input;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40111 ], 59, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 92;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, tmp_args_element_name_6 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    assert( var_signature == NULL );
    var_signature = tmp_assign_source_4;

    tmp_source_name_3 = var_segments;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38629 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__urlsafe_b64encode );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__urlsafe_b64encode );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40037 ], 40, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_signature;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 30760 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 93;
    tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, tmp_args_element_name_8 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 93;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, tmp_args_element_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_logger );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 32509 ], 28, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_debug );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_unicode_arg_1 = var_segments;

    if ( tmp_unicode_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38629 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = PyObject_Unicode( tmp_unicode_arg_1 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 95;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, tmp_args_element_name_9 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = const_bytes_chr_46;
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
    assert( tmp_called_name_10 != NULL );
    tmp_args_element_name_10 = var_segments;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38629 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 97;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, tmp_args_element_name_10 );
    Py_DECREF( tmp_called_name_10 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
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
            if ( var_header != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_header,
                    var_header
                );
                assert( tmp_res != -1 );

            }
            if ( var_segments != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_segments,
                    var_segments
                );
                assert( tmp_res != -1 );

            }
            if ( var_signing_input != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_signing_input,
                    var_signing_input
                );
                assert( tmp_res != -1 );

            }
            if ( var_signature != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_signature,
                    var_signature
                );
                assert( tmp_res != -1 );

            }
            if ( par_signer != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_signer,
                    par_signer
                );
                assert( tmp_res != -1 );

            }
            if ( par_payload != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_payload,
                    par_payload
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
    NUITKA_CANNOT_GET_HERE( function_2_make_signed_jwt_of_oauth2client$crypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_signer );
    par_signer = NULL;

    Py_XDECREF( par_payload );
    par_payload = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_segments );
    var_segments = NULL;

    Py_XDECREF( var_signing_input );
    var_signing_input = NULL;

    Py_XDECREF( var_signature );
    var_signature = NULL;

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

    Py_XDECREF( par_signer );
    par_signer = NULL;

    Py_XDECREF( par_payload );
    par_payload = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_segments );
    var_segments = NULL;

    Py_XDECREF( var_signing_input );
    var_signing_input = NULL;

    Py_XDECREF( var_signature );
    var_signature = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_make_signed_jwt_of_oauth2client$crypt );
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
static PyObject *fparse_function_2_make_signed_jwt_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_signer = NULL;
    PyObject *_python_par_payload = NULL;
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
                PyErr_Format( PyExc_TypeError, "make_signed_jwt() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_signer == key )
            {
                assert( _python_par_signer == NULL );
                _python_par_signer = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_payload == key )
            {
                assert( _python_par_payload == NULL );
                _python_par_payload = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_signer, key ) == 1 )
            {
                assert( _python_par_signer == NULL );
                _python_par_signer = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_payload, key ) == 1 )
            {
                assert( _python_par_payload == NULL );
                _python_par_payload = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "make_signed_jwt() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_signer != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_signer = args[ 0 ];
        Py_INCREF( _python_par_signer );
    }
    else if ( _python_par_signer == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_signer = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 );
            Py_INCREF( _python_par_signer );
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
         if (unlikely( _python_par_payload != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_payload = args[ 1 ];
        Py_INCREF( _python_par_payload );
    }
    else if ( _python_par_payload == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_payload = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 );
            Py_INCREF( _python_par_payload );
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
    if (unlikely( _python_par_signer == NULL || _python_par_payload == NULL ))
    {
        PyObject *values[] = { _python_par_signer, _python_par_payload };
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



    return impl_function_2_make_signed_jwt_of_oauth2client$crypt( self, _python_par_signer, _python_par_payload );

error_exit:;

    Py_XDECREF( _python_par_signer );
    Py_XDECREF( _python_par_payload );

    return NULL;
}

static PyObject *dparse_function_2_make_signed_jwt_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2_make_signed_jwt_of_oauth2client$crypt( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_make_signed_jwt_of_oauth2client$crypt( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__verify_signature_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject *_python_par_message, PyObject *_python_par_signature, PyObject *_python_par_certs )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = _python_par_message;
    PyObject *par_signature = _python_par_signature;
    PyObject *par_certs = _python_par_certs;
    PyObject *var_pem = NULL;
    PyObject *var_verifier = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_41c70259f61e96ea37922d925583d0b5, module_oauth2client$crypt );
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
    tmp_iter_arg_1 = par_certs;

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 112;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_pem;
        var_pem = tmp_assign_source_3;
        Py_INCREF( var_pem );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_Verifier );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Verifier );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40170 ], 30, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_from_string );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_pem;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40200 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_35c70eca0bfd4024df535206f5be2ada );
    frame_function->f_lineno = 113;
    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_verifier;
        var_verifier = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_verifier;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_verify );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_message;

    tmp_args_element_name_2 = par_signature;

    frame_function->f_lineno = 114;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, tmp_args_element_name_1, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 114;
        goto try_except_handler_2;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40249 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = const_str_digest_52b2a6eb99017dafc0668b73aba2a322;
    frame_function->f_lineno = 118;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_call_arg_element_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 118;
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
            if ( var_pem != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pem,
                    var_pem
                );
                assert( tmp_res != -1 );

            }
            if ( var_verifier != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_verifier,
                    var_verifier
                );
                assert( tmp_res != -1 );

            }
            if ( par_message != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_message,
                    par_message
                );
                assert( tmp_res != -1 );

            }
            if ( par_signature != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_signature,
                    par_signature
                );
                assert( tmp_res != -1 );

            }
            if ( par_certs != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_certs,
                    par_certs
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
    NUITKA_CANNOT_GET_HERE( function_3__verify_signature_of_oauth2client$crypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_message );
    par_message = NULL;

    Py_XDECREF( par_signature );
    par_signature = NULL;

    Py_XDECREF( par_certs );
    par_certs = NULL;

    Py_XDECREF( var_pem );
    var_pem = NULL;

    Py_XDECREF( var_verifier );
    var_verifier = NULL;

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

    Py_XDECREF( par_message );
    par_message = NULL;

    Py_XDECREF( par_signature );
    par_signature = NULL;

    Py_XDECREF( par_certs );
    par_certs = NULL;

    Py_XDECREF( var_pem );
    var_pem = NULL;

    Py_XDECREF( var_verifier );
    var_verifier = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3__verify_signature_of_oauth2client$crypt );
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
static PyObject *fparse_function_3__verify_signature_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_message = NULL;
    PyObject *_python_par_signature = NULL;
    PyObject *_python_par_certs = NULL;
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
                PyErr_Format( PyExc_TypeError, "_verify_signature() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_message == key )
            {
                assert( _python_par_message == NULL );
                _python_par_message = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_signature == key )
            {
                assert( _python_par_signature == NULL );
                _python_par_signature = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_certs == key )
            {
                assert( _python_par_certs == NULL );
                _python_par_certs = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_message, key ) == 1 )
            {
                assert( _python_par_message == NULL );
                _python_par_message = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_signature, key ) == 1 )
            {
                assert( _python_par_signature == NULL );
                _python_par_signature = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_certs, key ) == 1 )
            {
                assert( _python_par_certs == NULL );
                _python_par_certs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_verify_signature() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_message != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_message = args[ 0 ];
        Py_INCREF( _python_par_message );
    }
    else if ( _python_par_message == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_message = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 );
            Py_INCREF( _python_par_message );
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
         if (unlikely( _python_par_signature != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_signature = args[ 1 ];
        Py_INCREF( _python_par_signature );
    }
    else if ( _python_par_signature == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_signature = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 );
            Py_INCREF( _python_par_signature );
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
         if (unlikely( _python_par_certs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_certs = args[ 2 ];
        Py_INCREF( _python_par_certs );
    }
    else if ( _python_par_certs == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_certs = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 );
            Py_INCREF( _python_par_certs );
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
    if (unlikely( _python_par_message == NULL || _python_par_signature == NULL || _python_par_certs == NULL ))
    {
        PyObject *values[] = { _python_par_message, _python_par_signature, _python_par_certs };
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



    return impl_function_3__verify_signature_of_oauth2client$crypt( self, _python_par_message, _python_par_signature, _python_par_certs );

error_exit:;

    Py_XDECREF( _python_par_message );
    Py_XDECREF( _python_par_signature );
    Py_XDECREF( _python_par_certs );

    return NULL;
}

static PyObject *dparse_function_3__verify_signature_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_3__verify_signature_of_oauth2client$crypt( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__verify_signature_of_oauth2client$crypt( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4__check_audience_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject *_python_par_payload_dict, PyObject *_python_par_audience )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_payload_dict = _python_par_payload_dict;
    PyObject *par_audience = _python_par_audience;
    PyObject *var_audience_in_payload = NULL;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_compare_left_1 = par_audience;

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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    branch_no_1:;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7e3866d27c66b610b636fd58d0a2e170, module_oauth2client$crypt );
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
    tmp_source_name_1 = par_payload_dict;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_aud;
    frame_function->f_lineno = 140;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    assert( var_audience_in_payload == NULL );
    var_audience_in_payload = tmp_assign_source_1;

    tmp_compare_left_2 = var_audience_in_payload;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40249 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_22120e9b46afe7d33f24fbc3227a33cf;
    tmp_right_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_payload_dict;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40287 ], 58, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 143;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 143;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_compare_left_3 = var_audience_in_payload;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40345 ], 65, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = par_audience;

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40410 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40249 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = const_str_digest_cd968f093f6bac1f5486148075b00d69;
    tmp_right_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_2 = var_audience_in_payload;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40345 ], 65, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_audience;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40410 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_payload_dict;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40287 ], 58, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 2, tmp_tuple_element_2 );
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 146;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 146;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;

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
            if ( var_audience_in_payload != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_audience_in_payload,
                    var_audience_in_payload
                );
                assert( tmp_res != -1 );

            }
            if ( par_payload_dict != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_payload_dict,
                    par_payload_dict
                );
                assert( tmp_res != -1 );

            }
            if ( par_audience != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_audience,
                    par_audience
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
    NUITKA_CANNOT_GET_HERE( function_4__check_audience_of_oauth2client$crypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_payload_dict );
    par_payload_dict = NULL;

    Py_XDECREF( par_audience );
    par_audience = NULL;

    Py_XDECREF( var_audience_in_payload );
    var_audience_in_payload = NULL;

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

    Py_XDECREF( par_payload_dict );
    par_payload_dict = NULL;

    Py_XDECREF( par_audience );
    par_audience = NULL;

    Py_XDECREF( var_audience_in_payload );
    var_audience_in_payload = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4__check_audience_of_oauth2client$crypt );
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
static PyObject *fparse_function_4__check_audience_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_payload_dict = NULL;
    PyObject *_python_par_audience = NULL;
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
                PyErr_Format( PyExc_TypeError, "_check_audience() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_payload_dict == key )
            {
                assert( _python_par_payload_dict == NULL );
                _python_par_payload_dict = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_audience == key )
            {
                assert( _python_par_audience == NULL );
                _python_par_audience = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_payload_dict, key ) == 1 )
            {
                assert( _python_par_payload_dict == NULL );
                _python_par_payload_dict = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_audience, key ) == 1 )
            {
                assert( _python_par_audience == NULL );
                _python_par_audience = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_check_audience() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_payload_dict != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_payload_dict = args[ 0 ];
        Py_INCREF( _python_par_payload_dict );
    }
    else if ( _python_par_payload_dict == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_payload_dict = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 );
            Py_INCREF( _python_par_payload_dict );
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
         if (unlikely( _python_par_audience != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_audience = args[ 1 ];
        Py_INCREF( _python_par_audience );
    }
    else if ( _python_par_audience == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_audience = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 );
            Py_INCREF( _python_par_audience );
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
    if (unlikely( _python_par_payload_dict == NULL || _python_par_audience == NULL ))
    {
        PyObject *values[] = { _python_par_payload_dict, _python_par_audience };
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



    return impl_function_4__check_audience_of_oauth2client$crypt( self, _python_par_payload_dict, _python_par_audience );

error_exit:;

    Py_XDECREF( _python_par_payload_dict );
    Py_XDECREF( _python_par_audience );

    return NULL;
}

static PyObject *dparse_function_4__check_audience_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_4__check_audience_of_oauth2client$crypt( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4__check_audience_of_oauth2client$crypt( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5__verify_time_range_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject *_python_par_payload_dict )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_payload_dict = _python_par_payload_dict;
    PyObject *var_now = NULL;
    PyObject *var_issued_at = NULL;
    PyObject *var_expiration = NULL;
    PyObject *var_earliest = NULL;
    PyObject *var_latest = NULL;
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
    int tmp_cmp_Gt_1;
    int tmp_cmp_GtE_1;
    int tmp_cmp_Lt_1;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6f201942511de13e4d978ed9cf1dc196, module_oauth2client$crypt );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 623 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_time );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 173;
    tmp_int_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto frame_exception_exit_1;
    }
    assert( var_now == NULL );
    var_now = tmp_assign_source_1;

    tmp_source_name_2 = par_payload_dict;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_iat;
    frame_function->f_lineno = 176;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    assert( var_issued_at == NULL );
    var_issued_at = tmp_assign_source_2;

    tmp_compare_left_1 = var_issued_at;

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
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40249 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_8a9e6e89bae47a40c8116b3dea0633db;
    tmp_right_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_payload_dict;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40287 ], 58, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 178;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 178;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_3 = par_payload_dict;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40287 ], 58, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_get );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_exp;
    frame_function->f_lineno = 179;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto frame_exception_exit_1;
    }
    assert( var_expiration == NULL );
    var_expiration = tmp_assign_source_3;

    tmp_compare_left_2 = var_expiration;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40249 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = const_str_digest_e096211c6d5716702cdab75baee85a94;
    tmp_right_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_payload_dict;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40287 ], 58, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_2 );
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 181;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 181;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_compare_left_3 = var_expiration;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40464 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        goto frame_exception_exit_1;
    }

    tmp_left_name_3 = var_now;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12244 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_MAX_TOKEN_LIFETIME_SECS );

    if (unlikely( tmp_right_name_3 == NULL ))
    {
        tmp_right_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_TOKEN_LIFETIME_SECS );
    }

    if ( tmp_right_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40520 ], 45, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40249 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        goto frame_exception_exit_1;
    }

    tmp_left_name_4 = const_str_digest_54b31f61f0d44fb5d07c6f2df4c3c87d;
    tmp_right_name_4 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_payload_dict;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_right_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40287 ], 58, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_3 );
    tmp_args_element_name_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 186;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 186;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_left_name_5 = var_issued_at;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40565 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_CLOCK_SKEW_SECS );

    if (unlikely( tmp_right_name_5 == NULL ))
    {
        tmp_right_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CLOCK_SKEW_SECS );
    }

    if ( tmp_right_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40620 ], 37, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto frame_exception_exit_1;
    }
    assert( var_earliest == NULL );
    var_earliest = tmp_assign_source_4;

    tmp_compare_left_4 = var_now;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12244 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = var_earliest;

    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40249 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }

    tmp_left_name_6 = const_str_digest_8d9e9b22507f1ef9bc3df4a5a16824f6;
    tmp_right_name_6 = PyTuple_New( 3 );
    tmp_tuple_element_4 = var_now;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12244 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_earliest;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40657 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_6, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = par_payload_dict;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40287 ], 58, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_6, 2, tmp_tuple_element_4 );
    tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 192;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    exception_lineno = 192;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_left_name_7 = var_expiration;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40464 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_CLOCK_SKEW_SECS );

    if (unlikely( tmp_right_name_7 == NULL ))
    {
        tmp_right_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CLOCK_SKEW_SECS );
    }

    if ( tmp_right_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40620 ], 37, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        goto frame_exception_exit_1;
    }
    assert( var_latest == NULL );
    var_latest = tmp_assign_source_5;

    tmp_compare_left_5 = var_now;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12244 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = var_latest;

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40249 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_left_name_8 = const_str_digest_1a161abcd863b89eead18b29c26818a0;
    tmp_right_name_8 = PyTuple_New( 3 );
    tmp_tuple_element_5 = var_now;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_right_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12244 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 197;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_8, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_latest;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_right_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40711 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 197;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_8, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = par_payload_dict;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_right_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40287 ], 58, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 197;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_8, 2, tmp_tuple_element_5 );
    tmp_args_element_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 197;
    tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_raise_type_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_5;
    exception_lineno = 197;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_5:;

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
            if ( var_now != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_now,
                    var_now
                );
                assert( tmp_res != -1 );

            }
            if ( var_issued_at != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_issued_at,
                    var_issued_at
                );
                assert( tmp_res != -1 );

            }
            if ( var_expiration != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_expiration,
                    var_expiration
                );
                assert( tmp_res != -1 );

            }
            if ( var_earliest != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_earliest,
                    var_earliest
                );
                assert( tmp_res != -1 );

            }
            if ( var_latest != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_latest,
                    var_latest
                );
                assert( tmp_res != -1 );

            }
            if ( par_payload_dict != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_payload_dict,
                    par_payload_dict
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
    NUITKA_CANNOT_GET_HERE( function_5__verify_time_range_of_oauth2client$crypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_payload_dict );
    par_payload_dict = NULL;

    Py_XDECREF( var_now );
    var_now = NULL;

    Py_XDECREF( var_issued_at );
    var_issued_at = NULL;

    Py_XDECREF( var_expiration );
    var_expiration = NULL;

    Py_XDECREF( var_earliest );
    var_earliest = NULL;

    Py_XDECREF( var_latest );
    var_latest = NULL;

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

    Py_XDECREF( par_payload_dict );
    par_payload_dict = NULL;

    Py_XDECREF( var_now );
    var_now = NULL;

    Py_XDECREF( var_issued_at );
    var_issued_at = NULL;

    Py_XDECREF( var_expiration );
    var_expiration = NULL;

    Py_XDECREF( var_earliest );
    var_earliest = NULL;

    Py_XDECREF( var_latest );
    var_latest = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5__verify_time_range_of_oauth2client$crypt );
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
static PyObject *fparse_function_5__verify_time_range_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_payload_dict = NULL;
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
                PyErr_Format( PyExc_TypeError, "_verify_time_range() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_payload_dict == key )
            {
                assert( _python_par_payload_dict == NULL );
                _python_par_payload_dict = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_payload_dict, key ) == 1 )
            {
                assert( _python_par_payload_dict == NULL );
                _python_par_payload_dict = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_verify_time_range() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_payload_dict != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_payload_dict = args[ 0 ];
        Py_INCREF( _python_par_payload_dict );
    }
    else if ( _python_par_payload_dict == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_payload_dict = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
            Py_INCREF( _python_par_payload_dict );
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
    if (unlikely( _python_par_payload_dict == NULL ))
    {
        PyObject *values[] = { _python_par_payload_dict };
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



    return impl_function_5__verify_time_range_of_oauth2client$crypt( self, _python_par_payload_dict );

error_exit:;

    Py_XDECREF( _python_par_payload_dict );

    return NULL;
}

static PyObject *dparse_function_5__verify_time_range_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_5__verify_time_range_of_oauth2client$crypt( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5__verify_time_range_of_oauth2client$crypt( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_verify_signed_jwt_with_certs_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject *_python_par_jwt, PyObject *_python_par_certs, PyObject *_python_par_audience )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_jwt = _python_par_jwt;
    PyObject *par_certs = _python_par_certs;
    PyObject *par_audience = _python_par_audience;
    PyObject *var_header = NULL;
    PyObject *var_payload = NULL;
    PyObject *var_signature = NULL;
    PyObject *var_message_to_sign = NULL;
    PyObject *var_payload_bytes = NULL;
    PyObject *var_payload_dict = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
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
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
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
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_dc4f3ab4511c2dfdb94ad5052ea1bd76, module_oauth2client$crypt );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__to_bytes );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__to_bytes );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 30594 ], 31, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_jwt;

    frame_function->f_lineno = 217;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_jwt;
        par_jwt = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_source_name_1 = par_jwt;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_count );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_bytes_chr_46;
    frame_function->f_lineno = 219;
    tmp_compare_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40249 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_0c571f75d52676ec444ec6677aea0084;
    tmp_right_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_jwt;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40763 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 221;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 221;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    // Tried code:
    tmp_source_name_2 = par_jwt;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40763 ], 49, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        goto try_except_handler_2;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_split );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto try_except_handler_2;
    }
    tmp_call_arg_element_2 = const_bytes_chr_46;
    frame_function->f_lineno = 223;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
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


        exception_lineno = 223;
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


        exception_lineno = 223;
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


        exception_lineno = 223;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;

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
    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    assert( var_header == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_header = tmp_assign_source_6;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    assert( var_payload == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_payload = tmp_assign_source_7;

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;

    assert( var_signature == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_signature = tmp_assign_source_8;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_left_name_3 = var_header;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 23148 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_bytes_chr_46;
    tmp_left_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = var_payload;

    if ( tmp_right_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10555 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_9 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    assert( var_message_to_sign == NULL );
    var_message_to_sign = tmp_assign_source_9;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__urlsafe_b64decode );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__urlsafe_b64decode );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 31220 ], 40, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_signature;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 30760 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 225;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, tmp_args_element_name_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_signature;
        var_signature = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__urlsafe_b64decode );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__urlsafe_b64decode );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 31220 ], 40, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_payload;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10555 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 228;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, tmp_args_element_name_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        goto frame_exception_exit_1;
    }
    assert( var_payload_bytes == NULL );
    var_payload_bytes = tmp_assign_source_11;

    // Tried code:
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_json );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_json );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 30543 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        goto try_except_handler_3;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_loads );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        goto try_except_handler_3;
    }
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__from_bytes );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__from_bytes );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 34902 ], 33, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        goto try_except_handler_3;
    }

    tmp_args_element_name_6 = var_payload_bytes;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40812 ], 59, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        goto try_except_handler_3;
    }

    frame_function->f_lineno = 230;
    tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, tmp_args_element_name_6 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 230;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 230;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, tmp_args_element_name_5 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        goto try_except_handler_3;
    }
    assert( var_payload_dict == NULL );
    var_payload_dict = tmp_assign_source_12;

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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != -1 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_function, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40249 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 232;
        goto try_except_handler_4;
    }

    tmp_left_name_4 = const_str_digest_6b7f03d0d7244bf146747653c0152c77;
    tmp_right_name_4 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_payload_bytes;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_right_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40812 ], 59, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 232;
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_2 );
    tmp_args_element_name_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 232;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto try_except_handler_4;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 232;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_6_verify_signed_jwt_with_certs_of_oauth2client$crypt );
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__verify_signature );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_signature );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40871 ], 39, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 235;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_message_to_sign;

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40910 ], 61, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 235;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_signature;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 30760 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 235;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = par_certs;

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_values );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 235;
    tmp_args_element_name_10 = CALL_FUNCTION_NO_ARGS( tmp_called_name_11 );
    Py_DECREF( tmp_called_name_11 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 235;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__verify_time_range );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_time_range );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40971 ], 40, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_payload_dict;

    if ( tmp_args_element_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40287 ], 58, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 238;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__check_audience );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_audience );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41011 ], 37, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = var_payload_dict;

    if ( tmp_args_element_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40287 ], 58, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = par_audience;

    frame_function->f_lineno = 241;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, tmp_args_element_name_12, tmp_args_element_name_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_payload_dict;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40287 ], 58, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
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
            if ( var_header != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_header,
                    var_header
                );
                assert( tmp_res != -1 );

            }
            if ( var_payload != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_payload,
                    var_payload
                );
                assert( tmp_res != -1 );

            }
            if ( var_signature != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_signature,
                    var_signature
                );
                assert( tmp_res != -1 );

            }
            if ( var_message_to_sign != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_message_to_sign,
                    var_message_to_sign
                );
                assert( tmp_res != -1 );

            }
            if ( var_payload_bytes != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_payload_bytes,
                    var_payload_bytes
                );
                assert( tmp_res != -1 );

            }
            if ( var_payload_dict != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_payload_dict,
                    var_payload_dict
                );
                assert( tmp_res != -1 );

            }
            if ( par_jwt != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_jwt,
                    par_jwt
                );
                assert( tmp_res != -1 );

            }
            if ( par_certs != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_certs,
                    par_certs
                );
                assert( tmp_res != -1 );

            }
            if ( par_audience != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_audience,
                    par_audience
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
    NUITKA_CANNOT_GET_HERE( function_6_verify_signed_jwt_with_certs_of_oauth2client$crypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_jwt );
    par_jwt = NULL;

    Py_XDECREF( par_certs );
    par_certs = NULL;

    Py_XDECREF( par_audience );
    par_audience = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_payload );
    var_payload = NULL;

    Py_XDECREF( var_signature );
    var_signature = NULL;

    Py_XDECREF( var_message_to_sign );
    var_message_to_sign = NULL;

    Py_XDECREF( var_payload_bytes );
    var_payload_bytes = NULL;

    Py_XDECREF( var_payload_dict );
    var_payload_dict = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_jwt );
    par_jwt = NULL;

    Py_XDECREF( par_certs );
    par_certs = NULL;

    Py_XDECREF( par_audience );
    par_audience = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_payload );
    var_payload = NULL;

    Py_XDECREF( var_signature );
    var_signature = NULL;

    Py_XDECREF( var_message_to_sign );
    var_message_to_sign = NULL;

    Py_XDECREF( var_payload_bytes );
    var_payload_bytes = NULL;

    Py_XDECREF( var_payload_dict );
    var_payload_dict = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_6_verify_signed_jwt_with_certs_of_oauth2client$crypt );
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
static PyObject *fparse_function_6_verify_signed_jwt_with_certs_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_jwt = NULL;
    PyObject *_python_par_certs = NULL;
    PyObject *_python_par_audience = NULL;
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
                PyErr_Format( PyExc_TypeError, "verify_signed_jwt_with_certs() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_jwt == key )
            {
                assert( _python_par_jwt == NULL );
                _python_par_jwt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_certs == key )
            {
                assert( _python_par_certs == NULL );
                _python_par_certs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_audience == key )
            {
                assert( _python_par_audience == NULL );
                _python_par_audience = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_jwt, key ) == 1 )
            {
                assert( _python_par_jwt == NULL );
                _python_par_jwt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_certs, key ) == 1 )
            {
                assert( _python_par_certs == NULL );
                _python_par_certs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_audience, key ) == 1 )
            {
                assert( _python_par_audience == NULL );
                _python_par_audience = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "verify_signed_jwt_with_certs() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_jwt != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_jwt = args[ 0 ];
        Py_INCREF( _python_par_jwt );
    }
    else if ( _python_par_jwt == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_jwt = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 );
            Py_INCREF( _python_par_jwt );
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
         if (unlikely( _python_par_certs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_certs = args[ 1 ];
        Py_INCREF( _python_par_certs );
    }
    else if ( _python_par_certs == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_certs = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 );
            Py_INCREF( _python_par_certs );
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
         if (unlikely( _python_par_audience != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_audience = args[ 2 ];
        Py_INCREF( _python_par_audience );
    }
    else if ( _python_par_audience == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_audience = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 );
            Py_INCREF( _python_par_audience );
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
    if (unlikely( _python_par_jwt == NULL || _python_par_certs == NULL || _python_par_audience == NULL ))
    {
        PyObject *values[] = { _python_par_jwt, _python_par_certs, _python_par_audience };
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



    return impl_function_6_verify_signed_jwt_with_certs_of_oauth2client$crypt( self, _python_par_jwt, _python_par_certs, _python_par_audience );

error_exit:;

    Py_XDECREF( _python_par_jwt );
    Py_XDECREF( _python_par_certs );
    Py_XDECREF( _python_par_audience );

    return NULL;
}

static PyObject *dparse_function_6_verify_signed_jwt_with_certs_of_oauth2client$crypt( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_6_verify_signed_jwt_with_certs_of_oauth2client$crypt( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_verify_signed_jwt_with_certs_of_oauth2client$crypt( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1__bad_pkcs12_key_as_pem_of_oauth2client$crypt(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__bad_pkcs12_key_as_pem_of_oauth2client$crypt,
        dparse_function_1__bad_pkcs12_key_as_pem_of_oauth2client$crypt,
        const_str_plain__bad_pkcs12_key_as_pem,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_92215837991b5c352c49777d508e6326,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauth2client$crypt,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_make_signed_jwt_of_oauth2client$crypt(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_make_signed_jwt_of_oauth2client$crypt,
        dparse_function_2_make_signed_jwt_of_oauth2client$crypt,
        const_str_plain_make_signed_jwt,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_785f0af18374ee99db41dc590d48bc59,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauth2client$crypt,
        const_str_digest_07927a8f6333b5ab0aa74329353ca557
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__verify_signature_of_oauth2client$crypt(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__verify_signature_of_oauth2client$crypt,
        dparse_function_3__verify_signature_of_oauth2client$crypt,
        const_str_plain__verify_signature,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_41c70259f61e96ea37922d925583d0b5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauth2client$crypt,
        const_str_digest_9cefa5f189828dccaf7a7cb600fa5d90
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__check_audience_of_oauth2client$crypt(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4__check_audience_of_oauth2client$crypt,
        dparse_function_4__check_audience_of_oauth2client$crypt,
        const_str_plain__check_audience,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7e3866d27c66b610b636fd58d0a2e170,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauth2client$crypt,
        const_str_digest_bbc6ec5179fb962cb832f43e3a5d6a12
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5__verify_time_range_of_oauth2client$crypt(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5__verify_time_range_of_oauth2client$crypt,
        dparse_function_5__verify_time_range_of_oauth2client$crypt,
        const_str_plain__verify_time_range,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6f201942511de13e4d978ed9cf1dc196,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauth2client$crypt,
        const_str_digest_c5d37d72671b97cf459ade35d2436684
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_verify_signed_jwt_with_certs_of_oauth2client$crypt( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_verify_signed_jwt_with_certs_of_oauth2client$crypt,
        dparse_function_6_verify_signed_jwt_with_certs_of_oauth2client$crypt,
        const_str_plain_verify_signed_jwt_with_certs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dc4f3ab4511c2dfdb94ad5052ea1bd76,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauth2client$crypt,
        const_str_digest_116842ee94d1903f3e2a0b87009d840c
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_oauth2client$crypt =
{
    PyModuleDef_HEAD_INIT,
    "oauth2client.crypt",   /* m_name */
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

MOD_INIT_DECL( oauth2client$crypt )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_oauth2client$crypt );
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

    // puts( "in initoauth2client$crypt" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_oauth2client$crypt = Py_InitModule4(
        "oauth2client.crypt",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_oauth2client$crypt = PyModule_Create( &mdef_oauth2client$crypt );
#endif

    moduledict_oauth2client$crypt = (PyDictObject *)((PyModuleObject *)module_oauth2client$crypt)->md_dict;

    CHECK_OBJECT( module_oauth2client$crypt );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d5f3c974ef79683c2b4f59a75c68172d, module_oauth2client$crypt );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_oauth2client$crypt );

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
    PyObject *tmp_oauth2client$crypt_class_creation_1__bases = NULL;
    PyObject *tmp_oauth2client$crypt_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_oauth2client$crypt_class_creation_1__metaclass = NULL;
    PyObject *tmp_oauth2client$crypt_class_creation_1__prepared = NULL;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_meta_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_key_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
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
    PyObject *tmp_kw_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_remove_dict;
    PyObject *tmp_remove_key;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_a270a7128d569f4c7d92760a9151467a;
    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_90dfa11e5d28c5b1252e5050885d08cc;
    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_oauth2client;
    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_FRAME( codeobj_3dfea617ff2d05ca46b0771791b945cd, module_oauth2client$crypt );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_oauth2client$crypt)->md_dict;
    frame_module->f_lineno = 18;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_json, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_json, tmp_assign_source_5 );
    tmp_import_globals_2 = ((PyModuleObject *)module_oauth2client$crypt)->md_dict;
    frame_module->f_lineno = 19;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_logging, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_6 );
    tmp_import_globals_3 = ((PyModuleObject *)module_oauth2client$crypt)->md_dict;
    frame_module->f_lineno = 20;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_time, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_7 );
    tmp_import_globals_4 = ((PyModuleObject *)module_oauth2client$crypt)->md_dict;
    frame_module->f_lineno = 22;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_74c886a338443b13b70d63ad6c0409d3, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain__from_bytes_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain__from_bytes );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__from_bytes, tmp_assign_source_8 );
    tmp_import_globals_5 = ((PyModuleObject *)module_oauth2client$crypt)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_74c886a338443b13b70d63ad6c0409d3, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain__json_encode_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain__json_encode );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__json_encode, tmp_assign_source_9 );
    tmp_import_globals_6 = ((PyModuleObject *)module_oauth2client$crypt)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_74c886a338443b13b70d63ad6c0409d3, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain__to_bytes_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain__to_bytes );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__to_bytes, tmp_assign_source_10 );
    tmp_import_globals_7 = ((PyModuleObject *)module_oauth2client$crypt)->md_dict;
    frame_module->f_lineno = 25;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_74c886a338443b13b70d63ad6c0409d3, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain__urlsafe_b64decode_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__urlsafe_b64decode );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__urlsafe_b64decode, tmp_assign_source_11 );
    tmp_import_globals_8 = ((PyModuleObject *)module_oauth2client$crypt)->md_dict;
    frame_module->f_lineno = 26;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_74c886a338443b13b70d63ad6c0409d3, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain__urlsafe_b64encode_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain__urlsafe_b64encode );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__urlsafe_b64encode, tmp_assign_source_12 );
    tmp_assign_source_13 = const_int_pos_300;
    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_CLOCK_SKEW_SECS, tmp_assign_source_13 );
    tmp_assign_source_14 = const_int_pos_300;
    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AUTH_TOKEN_LIFETIME_SECS, tmp_assign_source_14 );
    tmp_assign_source_15 = const_int_pos_86400;
    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_MAX_TOKEN_LIFETIME_SECS, tmp_assign_source_15 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_logging );

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

        exception_lineno = 33;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getLogger );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_d5f3c974ef79683c2b4f59a75c68172d;
    frame_module->f_lineno = 33;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_logger, tmp_assign_source_16 );
    tmp_assign_source_17 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 0, tmp_tuple_element_1 );
    assert( tmp_oauth2client$crypt_class_creation_1__bases == NULL );
    tmp_oauth2client$crypt_class_creation_1__bases = tmp_assign_source_17;

    tmp_assign_source_18 = PyDict_New();
    assert( tmp_oauth2client$crypt_class_creation_1__class_decl_dict == NULL );
    tmp_oauth2client$crypt_class_creation_1__class_decl_dict = tmp_assign_source_18;

    // Tried code:
    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_oauth2client$crypt_class_creation_1__class_decl_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
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
    tmp_dget_dict_1 = tmp_oauth2client$crypt_class_creation_1__class_decl_dict;

    tmp_dget_key_1 = const_str_plain_metaclass;
    tmp_class_meta_1 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_class_meta_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_oauth2client$crypt_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
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
    tmp_subscribed_name_1 = tmp_oauth2client$crypt_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_1;
    }
    tmp_class_meta_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_class_meta_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_meta_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_class_meta_1 != NULL );
    Py_INCREF( tmp_class_meta_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_class_bases_1 = tmp_oauth2client$crypt_class_creation_1__bases;

    tmp_assign_source_19 = SELECT_METACLASS( tmp_class_meta_1, tmp_class_bases_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_class_meta_1 );

        exception_lineno = 36;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_class_meta_1 );
    assert( tmp_oauth2client$crypt_class_creation_1__metaclass == NULL );
    tmp_oauth2client$crypt_class_creation_1__metaclass = tmp_assign_source_19;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_oauth2client$crypt_class_creation_1__class_decl_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
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
    tmp_remove_dict = tmp_oauth2client$crypt_class_creation_1__class_decl_dict;

    tmp_remove_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_remove_dict, tmp_remove_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_oauth2client$crypt_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
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
    tmp_source_name_2 = tmp_oauth2client$crypt_class_creation_1__metaclass;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_AppIdentityError;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_oauth2client$crypt_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_oauth2client$crypt_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 36;
    tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_20 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_oauth2client$crypt_class_creation_1__prepared == NULL );
    tmp_oauth2client$crypt_class_creation_1__prepared = tmp_assign_source_20;

    tmp_assign_source_21 = impl_class_1_AppIdentityError_of_oauth2client$crypt( tmp_oauth2client$crypt_class_creation_1__bases, tmp_oauth2client$crypt_class_creation_1__class_decl_dict, tmp_oauth2client$crypt_class_creation_1__metaclass, tmp_oauth2client$crypt_class_creation_1__prepared );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError, tmp_assign_source_21 );
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

    Py_XDECREF( tmp_oauth2client$crypt_class_creation_1__bases );
    tmp_oauth2client$crypt_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_oauth2client$crypt_class_creation_1__class_decl_dict );
    tmp_oauth2client$crypt_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_oauth2client$crypt_class_creation_1__metaclass );
    tmp_oauth2client$crypt_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_oauth2client$crypt_class_creation_1__prepared );
    tmp_oauth2client$crypt_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_oauth2client$crypt_class_creation_1__bases );
    tmp_oauth2client$crypt_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_oauth2client$crypt_class_creation_1__class_decl_dict );
    tmp_oauth2client$crypt_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_oauth2client$crypt_class_creation_1__metaclass );
    tmp_oauth2client$crypt_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_oauth2client$crypt_class_creation_1__prepared );
    tmp_oauth2client$crypt_class_creation_1__prepared = NULL;

    tmp_assign_source_22 = MAKE_FUNCTION_function_1__bad_pkcs12_key_as_pem_of_oauth2client$crypt(  );
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__bad_pkcs12_key_as_pem, tmp_assign_source_22 );
    // Tried code:
    tmp_import_globals_9 = ((PyModuleObject *)module_oauth2client$crypt)->md_dict;
    frame_module->f_lineno = 45;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_d45a20eeafb65ffb5e1659b43582b4bb, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_OpenSSLVerifier_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto try_except_handler_2;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_OpenSSLVerifier );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLVerifier, tmp_assign_source_23 );
    tmp_import_globals_10 = ((PyModuleObject *)module_oauth2client$crypt)->md_dict;
    frame_module->f_lineno = 46;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_d45a20eeafb65ffb5e1659b43582b4bb, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_OpenSSLSigner_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_2;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_OpenSSLSigner );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLSigner, tmp_assign_source_24 );
    tmp_import_globals_11 = ((PyModuleObject *)module_oauth2client$crypt)->md_dict;
    frame_module->f_lineno = 47;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_d45a20eeafb65ffb5e1659b43582b4bb, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_pkcs12_key_as_pem_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_2;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_pkcs12_key_as_pem );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_pkcs12_key_as_pem, tmp_assign_source_25 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != -1 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_module, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_26 = Py_None;
    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLVerifier, tmp_assign_source_26 );
    tmp_assign_source_27 = Py_None;
    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLSigner, tmp_assign_source_27 );
    tmp_assign_source_28 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__bad_pkcs12_key_as_pem );

    if (unlikely( tmp_assign_source_28 == NULL ))
    {
        tmp_assign_source_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__bad_pkcs12_key_as_pem );
    }

    if ( tmp_assign_source_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 39993 ], 44, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        goto try_except_handler_3;
    }

    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_pkcs12_key_as_pem, tmp_assign_source_28 );
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_3;
    branch_end_2:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt );
    PyErr_SetObject( PyExc_RuntimeError, Py_None );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;
    // Tried code:
    tmp_import_globals_12 = ((PyModuleObject *)module_oauth2client$crypt)->md_dict;
    frame_module->f_lineno = 54;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_4ee6d49526f58d4fff6e68f06291cb31, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_PyCryptoVerifier_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_4;
    }
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_PyCryptoVerifier );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoVerifier, tmp_assign_source_29 );
    tmp_import_globals_13 = ((PyModuleObject *)module_oauth2client$crypt)->md_dict;
    frame_module->f_lineno = 55;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_4ee6d49526f58d4fff6e68f06291cb31, tmp_import_globals_13, tmp_import_globals_13, const_tuple_str_plain_PyCryptoSigner_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_4;
    }
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_PyCryptoSigner );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoSigner, tmp_assign_source_30 );
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

    // Preserve existing published exception.
    exception_preserved_type_2 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != -1 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_module, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_ImportError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_31 = Py_None;
    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoVerifier, tmp_assign_source_31 );
    tmp_assign_source_32 = Py_None;
    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoSigner, tmp_assign_source_32 );
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_5;
    branch_end_3:;
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
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt );
    PyErr_SetObject( PyExc_RuntimeError, Py_None );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_4:;
    tmp_cond_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLSigner );

    if (unlikely( tmp_cond_value_2 == NULL ))
    {
        tmp_cond_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSLSigner );
    }

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 31001 ], 35, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
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
    tmp_assign_source_33 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLSigner );

    if (unlikely( tmp_assign_source_33 == NULL ))
    {
        tmp_assign_source_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSLSigner );
    }

    if ( tmp_assign_source_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 31001 ], 35, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_Signer, tmp_assign_source_33 );
    tmp_assign_source_34 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLVerifier );

    if (unlikely( tmp_assign_source_34 == NULL ))
    {
        tmp_assign_source_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSLVerifier );
    }

    if ( tmp_assign_source_34 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 30868 ], 37, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_Verifier, tmp_assign_source_34 );
    goto branch_end_4;
    branch_no_4:;
    tmp_cond_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoSigner );

    if (unlikely( tmp_cond_value_3 == NULL ))
    {
        tmp_cond_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyCryptoSigner );
    }

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 31514 ], 36, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
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
    tmp_assign_source_35 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoSigner );

    if (unlikely( tmp_assign_source_35 == NULL ))
    {
        tmp_assign_source_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyCryptoSigner );
    }

    if ( tmp_assign_source_35 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 31514 ], 36, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_Signer, tmp_assign_source_35 );
    tmp_assign_source_36 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoVerifier );

    if (unlikely( tmp_assign_source_36 == NULL ))
    {
        tmp_assign_source_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyCryptoVerifier );
    }

    if ( tmp_assign_source_36 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 31476 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_Verifier, tmp_assign_source_36 );
    goto branch_end_5;
    branch_no_5:;
    tmp_make_exception_arg_1 = const_str_digest_25fbe2a830a7097102305f8ed9cd970a;
    frame_module->f_lineno = 68;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 68;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_5:;
    branch_end_4:;

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
    tmp_assign_source_37 = MAKE_FUNCTION_function_2_make_signed_jwt_of_oauth2client$crypt(  );
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_make_signed_jwt, tmp_assign_source_37 );
    tmp_assign_source_38 = MAKE_FUNCTION_function_3__verify_signature_of_oauth2client$crypt(  );
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__verify_signature, tmp_assign_source_38 );
    tmp_assign_source_39 = MAKE_FUNCTION_function_4__check_audience_of_oauth2client$crypt(  );
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__check_audience, tmp_assign_source_39 );
    tmp_assign_source_40 = MAKE_FUNCTION_function_5__verify_time_range_of_oauth2client$crypt(  );
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__verify_time_range, tmp_assign_source_40 );
    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_assign_source_41 = MAKE_FUNCTION_function_6_verify_signed_jwt_with_certs_of_oauth2client$crypt( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_verify_signed_jwt_with_certs, tmp_assign_source_41 );

    return MOD_RETURN_VALUE( module_oauth2client$crypt );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
