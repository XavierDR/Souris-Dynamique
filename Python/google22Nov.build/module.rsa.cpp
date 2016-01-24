// Generated code for Python source for module 'rsa'
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

// The _module_rsa is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_rsa;
PyDictObject *moduledict_rsa;

// The module constants used
extern PyObject *const_str_digest_d87a867a1da18e127aa595b45709adf5;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_encrypt;
static PyObject *const_str_digest_e33e4e1a0d3ce74caa3df645a2447324;
static PyObject *const_str_digest_d60fb4ce8486bef0bca3cbbffc19836a;
static PyObject *const_tuple_str_plain_newkeys_str_plain_PrivateKey_str_plain_PublicKey_tuple;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_79f1c300de28f736c6e283bbb8459ba1;
static PyObject *const_str_digest_fc6be4516f2b0b0706b3a3db64233bac;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_PrivateKey;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_DecryptionError;
extern PyObject *const_str_plain_VerificationError;
extern PyObject *const_str_plain_decrypt;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_newkeys;
static PyObject *const_str_digest_d9612287852eee1c19c695d8cdcd3776;
extern PyObject *const_str_plain_rsa;
extern PyObject *const_str_plain_PublicKey;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_verify;
static PyObject *const_str_digest_4e73f9e116595258b59466fe74666042;
static PyObject *const_list_04de11f9fe7e154da4edfd9dcea4197b_list;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_digest_172952d0bc04806234e0d58ce32ce3d8;
static PyObject *const_tuple_1542f0460184d9839d4091d4caf61e0a_tuple;
static PyObject *const_list_str_digest_79f1c300de28f736c6e283bbb8459ba1_list;
static PyObject *const_str_plain___date__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_e33e4e1a0d3ce74caa3df645a2447324 = UNSTREAM_STRING( &constant_bin[ 856860 ], 45, 0 );
    const_str_digest_d60fb4ce8486bef0bca3cbbffc19836a = UNSTREAM_STRING( &constant_bin[ 318200 ], 3, 0 );
    const_tuple_str_plain_newkeys_str_plain_PrivateKey_str_plain_PublicKey_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_newkeys_str_plain_PrivateKey_str_plain_PublicKey_tuple, 0, const_str_plain_newkeys ); Py_INCREF( const_str_plain_newkeys );
    PyTuple_SET_ITEM( const_tuple_str_plain_newkeys_str_plain_PrivateKey_str_plain_PublicKey_tuple, 1, const_str_plain_PrivateKey ); Py_INCREF( const_str_plain_PrivateKey );
    PyTuple_SET_ITEM( const_tuple_str_plain_newkeys_str_plain_PrivateKey_str_plain_PublicKey_tuple, 2, const_str_plain_PublicKey ); Py_INCREF( const_str_plain_PublicKey );
    const_str_digest_79f1c300de28f736c6e283bbb8459ba1 = UNSTREAM_STRING( &constant_bin[ 856860 ], 33, 0 );
    const_str_digest_fc6be4516f2b0b0706b3a3db64233bac = UNSTREAM_STRING( &constant_bin[ 856905 ], 51, 0 );
    const_str_digest_d9612287852eee1c19c695d8cdcd3776 = UNSTREAM_STRING( &constant_bin[ 856956 ], 425, 0 );
    const_str_digest_4e73f9e116595258b59466fe74666042 = UNSTREAM_STRING( &constant_bin[ 857381 ], 10, 0 );
    const_list_04de11f9fe7e154da4edfd9dcea4197b_list = PyList_New( 9 );
    PyList_SET_ITEM( const_list_04de11f9fe7e154da4edfd9dcea4197b_list, 0, const_str_plain_newkeys ); Py_INCREF( const_str_plain_newkeys );
    PyList_SET_ITEM( const_list_04de11f9fe7e154da4edfd9dcea4197b_list, 1, const_str_plain_encrypt ); Py_INCREF( const_str_plain_encrypt );
    PyList_SET_ITEM( const_list_04de11f9fe7e154da4edfd9dcea4197b_list, 2, const_str_plain_decrypt ); Py_INCREF( const_str_plain_decrypt );
    PyList_SET_ITEM( const_list_04de11f9fe7e154da4edfd9dcea4197b_list, 3, const_str_plain_sign ); Py_INCREF( const_str_plain_sign );
    PyList_SET_ITEM( const_list_04de11f9fe7e154da4edfd9dcea4197b_list, 4, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyList_SET_ITEM( const_list_04de11f9fe7e154da4edfd9dcea4197b_list, 5, const_str_plain_PublicKey ); Py_INCREF( const_str_plain_PublicKey );
    PyList_SET_ITEM( const_list_04de11f9fe7e154da4edfd9dcea4197b_list, 6, const_str_plain_PrivateKey ); Py_INCREF( const_str_plain_PrivateKey );
    PyList_SET_ITEM( const_list_04de11f9fe7e154da4edfd9dcea4197b_list, 7, const_str_plain_DecryptionError ); Py_INCREF( const_str_plain_DecryptionError );
    PyList_SET_ITEM( const_list_04de11f9fe7e154da4edfd9dcea4197b_list, 8, const_str_plain_VerificationError ); Py_INCREF( const_str_plain_VerificationError );
    const_tuple_1542f0460184d9839d4091d4caf61e0a_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_1542f0460184d9839d4091d4caf61e0a_tuple, 0, const_str_plain_encrypt ); Py_INCREF( const_str_plain_encrypt );
    PyTuple_SET_ITEM( const_tuple_1542f0460184d9839d4091d4caf61e0a_tuple, 1, const_str_plain_decrypt ); Py_INCREF( const_str_plain_decrypt );
    PyTuple_SET_ITEM( const_tuple_1542f0460184d9839d4091d4caf61e0a_tuple, 2, const_str_plain_sign ); Py_INCREF( const_str_plain_sign );
    PyTuple_SET_ITEM( const_tuple_1542f0460184d9839d4091d4caf61e0a_tuple, 3, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyTuple_SET_ITEM( const_tuple_1542f0460184d9839d4091d4caf61e0a_tuple, 4, const_str_plain_DecryptionError ); Py_INCREF( const_str_plain_DecryptionError );
    PyTuple_SET_ITEM( const_tuple_1542f0460184d9839d4091d4caf61e0a_tuple, 5, const_str_plain_VerificationError ); Py_INCREF( const_str_plain_VerificationError );
    const_list_str_digest_79f1c300de28f736c6e283bbb8459ba1_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_79f1c300de28f736c6e283bbb8459ba1_list, 0, const_str_digest_79f1c300de28f736c6e283bbb8459ba1 ); Py_INCREF( const_str_digest_79f1c300de28f736c6e283bbb8459ba1 );
    const_str_plain___date__ = UNSTREAM_STRING( &constant_bin[ 857391 ], 8, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_rsa( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_94c23fbc5712a2b3603ba57688585b1c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_e33e4e1a0d3ce74caa3df645a2447324 );
    codeobj_94c23fbc5712a2b3603ba57688585b1c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rsa, 0, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_rsa =
{
    PyModuleDef_HEAD_INIT,
    "rsa",   /* m_name */
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

MOD_INIT_DECL( rsa )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_rsa );
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

    // puts( "in initrsa" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_rsa = Py_InitModule4(
        "rsa",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_rsa = PyModule_Create( &mdef_rsa );
#endif

    moduledict_rsa = (PyDictObject *)((PyModuleObject *)module_rsa)->md_dict;

    CHECK_OBJECT( module_rsa );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_rsa, module_rsa );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_rsa );

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
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_globals_9;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_d9612287852eee1c19c695d8cdcd3776;
    UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e33e4e1a0d3ce74caa3df645a2447324;
    UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_79f1c300de28f736c6e283bbb8459ba1_list );
    UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_rsa;
    UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_fc6be4516f2b0b0706b3a3db64233bac;
    UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_4e73f9e116595258b59466fe74666042;
    UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___date__, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_d60fb4ce8486bef0bca3cbbffc19836a;
    UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_8 );
    // Frame without reuse.
    frame_module = MAKE_FRAME( codeobj_94c23fbc5712a2b3603ba57688585b1c, module_rsa );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_rsa)->md_dict;
    frame_module->f_lineno = 34;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_d87a867a1da18e127aa595b45709adf5, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_newkeys_str_plain_PrivateKey_str_plain_PublicKey_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_newkeys );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_newkeys, tmp_assign_source_9 );
    tmp_import_globals_2 = ((PyModuleObject *)module_rsa)->md_dict;
    frame_module->f_lineno = 34;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_d87a867a1da18e127aa595b45709adf5, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_newkeys_str_plain_PrivateKey_str_plain_PublicKey_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_PrivateKey );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_PrivateKey, tmp_assign_source_10 );
    tmp_import_globals_3 = ((PyModuleObject *)module_rsa)->md_dict;
    frame_module->f_lineno = 34;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_d87a867a1da18e127aa595b45709adf5, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_newkeys_str_plain_PrivateKey_str_plain_PublicKey_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_PublicKey );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_PublicKey, tmp_assign_source_11 );
    tmp_import_globals_4 = ((PyModuleObject *)module_rsa)->md_dict;
    frame_module->f_lineno = 35;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_172952d0bc04806234e0d58ce32ce3d8, tmp_import_globals_4, tmp_import_globals_4, const_tuple_1542f0460184d9839d4091d4caf61e0a_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_encrypt );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_encrypt, tmp_assign_source_12 );
    tmp_import_globals_5 = ((PyModuleObject *)module_rsa)->md_dict;
    frame_module->f_lineno = 35;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_172952d0bc04806234e0d58ce32ce3d8, tmp_import_globals_5, tmp_import_globals_5, const_tuple_1542f0460184d9839d4091d4caf61e0a_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_decrypt );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_decrypt, tmp_assign_source_13 );
    tmp_import_globals_6 = ((PyModuleObject *)module_rsa)->md_dict;
    frame_module->f_lineno = 35;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_172952d0bc04806234e0d58ce32ce3d8, tmp_import_globals_6, tmp_import_globals_6, const_tuple_1542f0460184d9839d4091d4caf61e0a_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_sign );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_sign, tmp_assign_source_14 );
    tmp_import_globals_7 = ((PyModuleObject *)module_rsa)->md_dict;
    frame_module->f_lineno = 35;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_172952d0bc04806234e0d58ce32ce3d8, tmp_import_globals_7, tmp_import_globals_7, const_tuple_1542f0460184d9839d4091d4caf61e0a_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_verify );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_verify, tmp_assign_source_15 );
    tmp_import_globals_8 = ((PyModuleObject *)module_rsa)->md_dict;
    frame_module->f_lineno = 35;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_172952d0bc04806234e0d58ce32ce3d8, tmp_import_globals_8, tmp_import_globals_8, const_tuple_1542f0460184d9839d4091d4caf61e0a_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_DecryptionError );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_DecryptionError, tmp_assign_source_16 );
    tmp_import_globals_9 = ((PyModuleObject *)module_rsa)->md_dict;
    frame_module->f_lineno = 35;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_172952d0bc04806234e0d58ce32ce3d8, tmp_import_globals_9, tmp_import_globals_9, const_tuple_1542f0460184d9839d4091d4caf61e0a_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_VerificationError );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_VerificationError, tmp_assign_source_17 );

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
    tmp_assign_source_18 = LIST_COPY( const_list_04de11f9fe7e154da4edfd9dcea4197b_list );
    UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_18 );

    return MOD_RETURN_VALUE( module_rsa );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
