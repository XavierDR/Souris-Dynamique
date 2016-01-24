// Generated code for Python source for module 'oauth2client'
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

// The _module_oauth2client is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_oauth2client;
PyDictObject *moduledict_oauth2client;

// The module constants used
extern PyObject *const_str_plain_GOOGLE_DEVICE_URI;
static PyObject *const_list_str_digest_597bea2d813ccf7388cf4366d3876e66_list;
static PyObject *const_str_digest_5414d6e8ada0616936b88037b8f9006d;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_0419e0641a78cbc133e7490b2a146f29;
extern PyObject *const_str_plain_GOOGLE_REVOKE_URI;
static PyObject *const_str_digest_f75da7df8470b1d0d050325b9f94e484;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_GOOGLE_AUTH_URI;
static PyObject *const_str_digest_b868d36edee8874e58c29389848cd5f7;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_oauth2client;
static PyObject *const_str_digest_22108eec809ace1f4aeb134c1b8e0591;
extern PyObject *const_str_plain_GOOGLE_TOKEN_URI;
static PyObject *const_str_digest_489310badcf89ca130d0211857650a47;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_digest_7c775b81b19563166c7ca11d059cb30a;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_597bea2d813ccf7388cf4366d3876e66;
extern PyObject *const_str_plain_GOOGLE_TOKEN_INFO_URI;
static PyObject *const_str_digest_2dba201bc54efcce6511af1111be3486;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_str_digest_597bea2d813ccf7388cf4366d3876e66_list = PyList_New( 1 );
    const_str_digest_597bea2d813ccf7388cf4366d3876e66 = UNSTREAM_STRING( &constant_bin[ 216032 ], 42, 0 );
    PyList_SET_ITEM( const_list_str_digest_597bea2d813ccf7388cf4366d3876e66_list, 0, const_str_digest_597bea2d813ccf7388cf4366d3876e66 ); Py_INCREF( const_str_digest_597bea2d813ccf7388cf4366d3876e66 );
    const_str_digest_5414d6e8ada0616936b88037b8f9006d = UNSTREAM_STRING( &constant_bin[ 216074 ], 5, 0 );
    const_str_digest_0419e0641a78cbc133e7490b2a146f29 = UNSTREAM_STRING( &constant_bin[ 216079 ], 54, 0 );
    const_str_digest_f75da7df8470b1d0d050325b9f94e484 = UNSTREAM_STRING( &constant_bin[ 216133 ], 61, 0 );
    const_str_digest_b868d36edee8874e58c29389848cd5f7 = UNSTREAM_STRING( &constant_bin[ 216194 ], 41, 0 );
    const_str_digest_22108eec809ace1f4aeb134c1b8e0591 = UNSTREAM_STRING( &constant_bin[ 216235 ], 48, 0 );
    const_str_digest_489310badcf89ca130d0211857650a47 = UNSTREAM_STRING( &constant_bin[ 216283 ], 42, 0 );
    const_str_digest_7c775b81b19563166c7ca11d059cb30a = UNSTREAM_STRING( &constant_bin[ 216325 ], 43, 0 );
    const_str_digest_2dba201bc54efcce6511af1111be3486 = UNSTREAM_STRING( &constant_bin[ 216368 ], 46, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_oauth2client( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.


static void createModuleCodeObjects(void)
{

}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_oauth2client =
{
    PyModuleDef_HEAD_INIT,
    "oauth2client",   /* m_name */
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

MOD_INIT_DECL( oauth2client )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_oauth2client );
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

    // puts( "in initoauth2client" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_oauth2client = Py_InitModule4(
        "oauth2client",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_oauth2client = PyModule_Create( &mdef_oauth2client );
#endif

    moduledict_oauth2client = (PyDictObject *)((PyModuleObject *)module_oauth2client)->md_dict;

    CHECK_OBJECT( module_oauth2client );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_oauth2client, module_oauth2client );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_oauth2client );

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

    // Module code.
    tmp_assign_source_1 = const_str_digest_f75da7df8470b1d0d050325b9f94e484;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_0419e0641a78cbc133e7490b2a146f29;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_597bea2d813ccf7388cf4366d3876e66_list );
    UPDATE_STRING_DICT1( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_oauth2client;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_5414d6e8ada0616936b88037b8f9006d;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_b868d36edee8874e58c29389848cd5f7;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain_GOOGLE_AUTH_URI, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_22108eec809ace1f4aeb134c1b8e0591;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain_GOOGLE_DEVICE_URI, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_7c775b81b19563166c7ca11d059cb30a;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain_GOOGLE_REVOKE_URI, tmp_assign_source_9 );
    tmp_assign_source_10 = const_str_digest_489310badcf89ca130d0211857650a47;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain_GOOGLE_TOKEN_URI, tmp_assign_source_10 );
    tmp_assign_source_11 = const_str_digest_2dba201bc54efcce6511af1111be3486;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain_GOOGLE_TOKEN_INFO_URI, tmp_assign_source_11 );

    return MOD_RETURN_VALUE( module_oauth2client );
}
