// Generated code for Python source for module 'OpenSSL'
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

// The _module_OpenSSL is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_OpenSSL;
PyDictObject *moduledict_OpenSSL;

// The module constants used
static PyObject *const_tuple_str_plain_rand_str_plain_crypto_str_plain_SSL_tuple;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_rand;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_SSL;
static PyObject *const_str_plain_tsafe;
extern PyObject *const_str_digest_69e665cd1c1ee14f52dfb85d4f885c38;
extern PyObject *const_str_plain___version__;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_598c5128122328c3e816ece52ab2e1f6;
static PyObject *const_list_str_digest_f57928fdcd6c8377b610708e55440936_list;
static PyObject *const_list_ae3c1402306effbf77270acb7dcf037d_list;
static PyObject *const_str_digest_f57928fdcd6c8377b610708e55440936;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_crypto;
extern PyObject *const_str_plain_OpenSSL;
extern PyObject *const_tuple_str_plain___version___tuple;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_4fc06e15359bd32eba0d6a6252a05c9d;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_rand_str_plain_crypto_str_plain_SSL_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_rand_str_plain_crypto_str_plain_SSL_tuple, 0, const_str_plain_rand ); Py_INCREF( const_str_plain_rand );
    PyTuple_SET_ITEM( const_tuple_str_plain_rand_str_plain_crypto_str_plain_SSL_tuple, 1, const_str_plain_crypto ); Py_INCREF( const_str_plain_crypto );
    PyTuple_SET_ITEM( const_tuple_str_plain_rand_str_plain_crypto_str_plain_SSL_tuple, 2, const_str_plain_SSL ); Py_INCREF( const_str_plain_SSL );
    const_str_plain_tsafe = UNSTREAM_STRING( &constant_bin[ 113799 ], 5, 1 );
    const_list_str_digest_f57928fdcd6c8377b610708e55440936_list = PyList_New( 1 );
    const_str_digest_f57928fdcd6c8377b610708e55440936 = UNSTREAM_STRING( &constant_bin[ 113804 ], 37, 0 );
    PyList_SET_ITEM( const_list_str_digest_f57928fdcd6c8377b610708e55440936_list, 0, const_str_digest_f57928fdcd6c8377b610708e55440936 ); Py_INCREF( const_str_digest_f57928fdcd6c8377b610708e55440936 );
    const_list_ae3c1402306effbf77270acb7dcf037d_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_ae3c1402306effbf77270acb7dcf037d_list, 0, const_str_plain_rand ); Py_INCREF( const_str_plain_rand );
    PyList_SET_ITEM( const_list_ae3c1402306effbf77270acb7dcf037d_list, 1, const_str_plain_crypto ); Py_INCREF( const_str_plain_crypto );
    PyList_SET_ITEM( const_list_ae3c1402306effbf77270acb7dcf037d_list, 2, const_str_plain_SSL ); Py_INCREF( const_str_plain_SSL );
    PyList_SET_ITEM( const_list_ae3c1402306effbf77270acb7dcf037d_list, 3, const_str_plain_tsafe ); Py_INCREF( const_str_plain_tsafe );
    PyList_SET_ITEM( const_list_ae3c1402306effbf77270acb7dcf037d_list, 4, const_str_plain___version__ ); Py_INCREF( const_str_plain___version__ );
    const_str_digest_4fc06e15359bd32eba0d6a6252a05c9d = UNSTREAM_STRING( &constant_bin[ 113841 ], 49, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_OpenSSL( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b808d08c0e43f9de33c6190ee28ee138;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_4fc06e15359bd32eba0d6a6252a05c9d );
    codeobj_b808d08c0e43f9de33c6190ee28ee138 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_OpenSSL, 0, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_OpenSSL =
{
    PyModuleDef_HEAD_INIT,
    "OpenSSL",   /* m_name */
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

MOD_INIT_DECL( OpenSSL )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_OpenSSL );
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

    // puts( "in initOpenSSL" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_OpenSSL = Py_InitModule4(
        "OpenSSL",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_OpenSSL = PyModule_Create( &mdef_OpenSSL );
#endif

    moduledict_OpenSSL = (PyDictObject *)((PyModuleObject *)module_OpenSSL)->md_dict;

    CHECK_OBJECT( module_OpenSSL );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_OpenSSL, module_OpenSSL );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_OpenSSL );

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
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_69e665cd1c1ee14f52dfb85d4f885c38;
    UPDATE_STRING_DICT0( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_4fc06e15359bd32eba0d6a6252a05c9d;
    UPDATE_STRING_DICT0( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_f57928fdcd6c8377b610708e55440936_list );
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_OpenSSL;
    UPDATE_STRING_DICT0( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_FRAME( codeobj_b808d08c0e43f9de33c6190ee28ee138, module_OpenSSL );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_OpenSSL)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_OpenSSL, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_rand_str_plain_crypto_str_plain_SSL_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_rand );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_rand, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_OpenSSL)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_OpenSSL, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_rand_str_plain_crypto_str_plain_SSL_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_crypto );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_crypto, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_OpenSSL)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_OpenSSL, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_rand_str_plain_crypto_str_plain_SSL_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_SSL );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_SSL, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_OpenSSL)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_598c5128122328c3e816ece52ab2e1f6, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain___version___tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain___version__ );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_9 );

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
    tmp_assign_source_10 = LIST_COPY( const_list_ae3c1402306effbf77270acb7dcf037d_list );
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10 );

    return MOD_RETURN_VALUE( module_OpenSSL );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
