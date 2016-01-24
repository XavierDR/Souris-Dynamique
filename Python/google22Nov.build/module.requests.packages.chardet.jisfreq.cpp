// Generated code for Python source for module 'requests.packages.chardet.jisfreq'
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

// The _module_requests$packages$chardet$jisfreq is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_requests$packages$chardet$jisfreq;
PyDictObject *moduledict_requests$packages$chardet$jisfreq;

// The module constants used
extern PyObject *const_str_plain_JIS_TABLE_SIZE;
static PyObject *const_str_digest_5d0cff2e70ae8173ce18597537f46241;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___loader__;
static PyObject *const_float_3_0;
extern PyObject *const_str_plain_JIS_TYPICAL_DISTRIBUTION_RATIO;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_digest_f35a391b90b1d073cd324e8af267f81c;
static PyObject *const_int_pos_4368;
extern PyObject *const_str_plain_JISCharToFreqOrder;
static PyObject *const_tuple_3a1428116c860170a315e5998b6c6cb5_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_d4bc62b40a606758ef694dada42b156f;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_5d0cff2e70ae8173ce18597537f46241 = UNSTREAM_STRING( &constant_bin[ 541266 ], 66, 0 );
    const_float_3_0 = UNSTREAM_FLOAT( &constant_bin[ 541332 ] );
    const_int_pos_4368 = PyLong_FromUnsignedLong( 4368ul );
    const_tuple_3a1428116c860170a315e5998b6c6cb5_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 541340 ], 41365 );
    const_str_digest_d4bc62b40a606758ef694dada42b156f = UNSTREAM_STRING( &constant_bin[ 582705 ], 33, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$packages$chardet$jisfreq( void )
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
static struct PyModuleDef mdef_requests$packages$chardet$jisfreq =
{
    PyModuleDef_HEAD_INIT,
    "requests.packages.chardet.jisfreq",   /* m_name */
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

MOD_INIT_DECL( requests$packages$chardet$jisfreq )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$packages$chardet$jisfreq );
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

    // puts( "in initrequests$packages$chardet$jisfreq" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$packages$chardet$jisfreq = Py_InitModule4(
        "requests.packages.chardet.jisfreq",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_requests$packages$chardet$jisfreq = PyModule_Create( &mdef_requests$packages$chardet$jisfreq );
#endif

    moduledict_requests$packages$chardet$jisfreq = (PyDictObject *)((PyModuleObject *)module_requests$packages$chardet$jisfreq)->md_dict;

    CHECK_OBJECT( module_requests$packages$chardet$jisfreq );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d4bc62b40a606758ef694dada42b156f, module_requests$packages$chardet$jisfreq );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_requests$packages$chardet$jisfreq );

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

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$packages$chardet$jisfreq, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_5d0cff2e70ae8173ce18597537f46241;
    UPDATE_STRING_DICT0( moduledict_requests$packages$chardet$jisfreq, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$packages$chardet$jisfreq, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_f35a391b90b1d073cd324e8af267f81c;
    UPDATE_STRING_DICT0( moduledict_requests$packages$chardet$jisfreq, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_float_3_0;
    UPDATE_STRING_DICT0( moduledict_requests$packages$chardet$jisfreq, (Nuitka_StringObject *)const_str_plain_JIS_TYPICAL_DISTRIBUTION_RATIO, tmp_assign_source_5 );
    tmp_assign_source_6 = const_int_pos_4368;
    UPDATE_STRING_DICT0( moduledict_requests$packages$chardet$jisfreq, (Nuitka_StringObject *)const_str_plain_JIS_TABLE_SIZE, tmp_assign_source_6 );
    tmp_assign_source_7 = const_tuple_3a1428116c860170a315e5998b6c6cb5_tuple;
    UPDATE_STRING_DICT0( moduledict_requests$packages$chardet$jisfreq, (Nuitka_StringObject *)const_str_plain_JISCharToFreqOrder, tmp_assign_source_7 );

    return MOD_RETURN_VALUE( module_requests$packages$chardet$jisfreq );
}
