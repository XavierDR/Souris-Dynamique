// Generated code for Python source for module 'gspread'
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

// The _module_gspread is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_gspread;
PyDictObject *moduledict_gspread;

// The module constants used
extern PyObject *const_str_plain_SpreadsheetNotFound;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_urllib;
extern PyObject *const_str_plain_RequestError;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_68ccdcf395d13f3313e7942e2bd35498;
extern PyObject *const_str_plain___version__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_login;
static PyObject *const_str_digest_ef2a0e81baac44d6d06d8cc69da1ebc6;
extern PyObject *const_str_plain_Worksheet;
extern PyObject *const_str_plain_client;
extern PyObject *const_str_plain_urlencode;
extern PyObject *const_str_plain_NoValidUrlKeyFound;
static PyObject *const_tuple_str_plain_Client_str_plain_login_str_plain_authorize_tuple;
extern PyObject *const_str_plain_UpdateCellError;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_Cell;
extern PyObject *const_str_plain_gspread;
static PyObject *const_str_digest_930bf81a4e4f1130de3da0aa6895d12c;
static PyObject *const_str_digest_e792c05279a11988b4371f480816193c;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_authorize;
extern PyObject *const_str_plain_GSpreadException;
extern PyObject *const_str_plain_AuthenticationError;
extern PyObject *const_str_plain_CellNotFound;
extern PyObject *const_str_plain_IncorrectCellLabel;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_Spreadsheet;
extern PyObject *const_str_plain_WorksheetNotFound;
extern PyObject *const_str_plain_Client;
static PyObject *const_list_str_digest_e792c05279a11988b4371f480816193c_list;
static PyObject *const_str_digest_0e2a071b458e8975516a32364ce5be98;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
extern PyObject *const_str_plain_models;
extern PyObject *const_tuple_str_plain_urlencode_tuple;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_tuple_str_plain_Spreadsheet_str_plain_Worksheet_str_plain_Cell_tuple;
static PyObject *const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_68ccdcf395d13f3313e7942e2bd35498 = UNSTREAM_STRING( &constant_bin[ 189438 ], 5, 0 );
    const_str_digest_ef2a0e81baac44d6d06d8cc69da1ebc6 = UNSTREAM_STRING( &constant_bin[ 189443 ], 49, 0 );
    const_tuple_str_plain_Client_str_plain_login_str_plain_authorize_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Client_str_plain_login_str_plain_authorize_tuple, 0, const_str_plain_Client ); Py_INCREF( const_str_plain_Client );
    PyTuple_SET_ITEM( const_tuple_str_plain_Client_str_plain_login_str_plain_authorize_tuple, 1, const_str_plain_login ); Py_INCREF( const_str_plain_login );
    PyTuple_SET_ITEM( const_tuple_str_plain_Client_str_plain_login_str_plain_authorize_tuple, 2, const_str_plain_authorize ); Py_INCREF( const_str_plain_authorize );
    const_str_digest_930bf81a4e4f1130de3da0aa6895d12c = UNSTREAM_STRING( &constant_bin[ 189492 ], 55, 0 );
    const_str_digest_e792c05279a11988b4371f480816193c = UNSTREAM_STRING( &constant_bin[ 189443 ], 37, 0 );
    const_list_str_digest_e792c05279a11988b4371f480816193c_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_e792c05279a11988b4371f480816193c_list, 0, const_str_digest_e792c05279a11988b4371f480816193c ); Py_INCREF( const_str_digest_e792c05279a11988b4371f480816193c );
    const_str_digest_0e2a071b458e8975516a32364ce5be98 = UNSTREAM_STRING( &constant_bin[ 189547 ], 15, 0 );
    const_tuple_str_plain_Spreadsheet_str_plain_Worksheet_str_plain_Cell_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Spreadsheet_str_plain_Worksheet_str_plain_Cell_tuple, 0, const_str_plain_Spreadsheet ); Py_INCREF( const_str_plain_Spreadsheet );
    PyTuple_SET_ITEM( const_tuple_str_plain_Spreadsheet_str_plain_Worksheet_str_plain_Cell_tuple, 1, const_str_plain_Worksheet ); Py_INCREF( const_str_plain_Worksheet );
    PyTuple_SET_ITEM( const_tuple_str_plain_Spreadsheet_str_plain_Worksheet_str_plain_Cell_tuple, 2, const_str_plain_Cell ); Py_INCREF( const_str_plain_Cell );
    const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, 0, const_str_plain_GSpreadException ); Py_INCREF( const_str_plain_GSpreadException );
    PyTuple_SET_ITEM( const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, 1, const_str_plain_AuthenticationError ); Py_INCREF( const_str_plain_AuthenticationError );
    PyTuple_SET_ITEM( const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, 2, const_str_plain_SpreadsheetNotFound ); Py_INCREF( const_str_plain_SpreadsheetNotFound );
    PyTuple_SET_ITEM( const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, 3, const_str_plain_NoValidUrlKeyFound ); Py_INCREF( const_str_plain_NoValidUrlKeyFound );
    PyTuple_SET_ITEM( const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, 4, const_str_plain_IncorrectCellLabel ); Py_INCREF( const_str_plain_IncorrectCellLabel );
    PyTuple_SET_ITEM( const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, 5, const_str_plain_WorksheetNotFound ); Py_INCREF( const_str_plain_WorksheetNotFound );
    PyTuple_SET_ITEM( const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, 6, const_str_plain_UpdateCellError ); Py_INCREF( const_str_plain_UpdateCellError );
    PyTuple_SET_ITEM( const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, 7, const_str_plain_RequestError ); Py_INCREF( const_str_plain_RequestError );
    PyTuple_SET_ITEM( const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, 8, const_str_plain_CellNotFound ); Py_INCREF( const_str_plain_CellNotFound );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_gspread( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_11491c6586e510942b012b56c9ca758f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_ef2a0e81baac44d6d06d8cc69da1ebc6 );
    codeobj_11491c6586e510942b012b56c9ca758f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_gspread, 0, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_gspread =
{
    PyModuleDef_HEAD_INIT,
    "gspread",   /* m_name */
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

MOD_INIT_DECL( gspread )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_gspread );
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

    // puts( "in initgspread" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_gspread = Py_InitModule4(
        "gspread",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_gspread = PyModule_Create( &mdef_gspread );
#endif

    moduledict_gspread = (PyDictObject *)((PyModuleObject *)module_gspread)->md_dict;

    CHECK_OBJECT( module_gspread );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_gspread, module_gspread );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_gspread );

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
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
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
    PyObject *tmp_import_name_from_17;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_930bf81a4e4f1130de3da0aa6895d12c;
    UPDATE_STRING_DICT0( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_ef2a0e81baac44d6d06d8cc69da1ebc6;
    UPDATE_STRING_DICT0( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_e792c05279a11988b4371f480816193c_list );
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_gspread;
    UPDATE_STRING_DICT0( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_68ccdcf395d13f3313e7942e2bd35498;
    UPDATE_STRING_DICT0( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_0e2a071b458e8975516a32364ce5be98;
    UPDATE_STRING_DICT0( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_7 );
    // Frame without reuse.
    frame_module = MAKE_FRAME( codeobj_11491c6586e510942b012b56c9ca758f, module_gspread );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    // Tried code:
    tmp_import_globals_1 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_urllib, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_urlencode_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto try_except_handler_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_urlencode );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_urlencode, tmp_assign_source_8 );
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


        exception_lineno = 17;
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
    tmp_import_globals_2 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_04991ea695faff4a76e4efb6a8a8593f, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_urlencode_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_2;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_urlencode );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_urlencode, tmp_assign_source_9 );
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
    NUITKA_CANNOT_GET_HERE( gspread );
    PyErr_SetObject( PyExc_RuntimeError, Py_None );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    tmp_import_globals_3 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_client, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_Client_str_plain_login_str_plain_authorize_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Client );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_Client, tmp_assign_source_10 );
    tmp_import_globals_4 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_client, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_Client_str_plain_login_str_plain_authorize_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_login );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_login, tmp_assign_source_11 );
    tmp_import_globals_5 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_client, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_Client_str_plain_login_str_plain_authorize_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_authorize );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_authorize, tmp_assign_source_12 );
    tmp_import_globals_6 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 22;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_models, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_Spreadsheet_str_plain_Worksheet_str_plain_Cell_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Spreadsheet );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_Spreadsheet, tmp_assign_source_13 );
    tmp_import_globals_7 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 22;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_models, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_Spreadsheet_str_plain_Worksheet_str_plain_Cell_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Worksheet );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_Worksheet, tmp_assign_source_14 );
    tmp_import_globals_8 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 22;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_models, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_Spreadsheet_str_plain_Worksheet_str_plain_Cell_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Cell );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_Cell, tmp_assign_source_15 );
    tmp_import_globals_9 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_9, tmp_import_globals_9, const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_GSpreadException );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_GSpreadException, tmp_assign_source_16 );
    tmp_import_globals_10 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_10, tmp_import_globals_10, const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_AuthenticationError );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_AuthenticationError, tmp_assign_source_17 );
    tmp_import_globals_11 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_11, tmp_import_globals_11, const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_SpreadsheetNotFound );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_SpreadsheetNotFound, tmp_assign_source_18 );
    tmp_import_globals_12 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_12, tmp_import_globals_12, const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_NoValidUrlKeyFound );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_NoValidUrlKeyFound, tmp_assign_source_19 );
    tmp_import_globals_13 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_13, tmp_import_globals_13, const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_IncorrectCellLabel );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_IncorrectCellLabel, tmp_assign_source_20 );
    tmp_import_globals_14 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_14, tmp_import_globals_14, const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_WorksheetNotFound );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_WorksheetNotFound, tmp_assign_source_21 );
    tmp_import_globals_15 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_15, tmp_import_globals_15, const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_UpdateCellError );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_UpdateCellError, tmp_assign_source_22 );
    tmp_import_globals_16 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_16, tmp_import_globals_16, const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_RequestError );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_RequestError, tmp_assign_source_23 );
    tmp_import_globals_17 = ((PyModuleObject *)module_gspread)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_17, tmp_import_globals_17, const_tuple_488c82d69e0179dc840d3f6fd4032b4a_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_CellNotFound );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_CellNotFound, tmp_assign_source_24 );

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

    return MOD_RETURN_VALUE( module_gspread );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
