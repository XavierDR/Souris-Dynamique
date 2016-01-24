// Generated code for Python source for module 'rsa.varblock'
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

// The _module_rsa$varblock is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_rsa$varblock;
PyDictObject *moduledict_rsa$varblock;

// The module constants used
extern PyObject *const_str_plain_b;
static PyObject *const_tuple_str_plain_byte_str_plain_b_tuple;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_e261f635377b434fae6c91e17121e98e;
extern PyObject *const_str_digest_865e7095d477d90f1eead964158b0a6f;
extern PyObject *const_int_pos_127;
extern PyObject *const_str_plain_first_char;
extern PyObject *const_str_plain_char;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_infile;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_7a14f5d6736de06e0b07d38c86340922;
static PyObject *const_str_digest_51bb7535416659a40534ab11bf82e009;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_yield_varblocks;
static PyObject *const_str_plain_varint;
extern PyObject *const_str_plain_ZERO_BYTE;
static PyObject *const_tuple_str_plain_infile_str_plain_blocksize_tuple;
static PyObject *const_str_digest_d30341f6383fc4a6a43dfd56d25234e9;
static PyObject *const_str_plain_write_varint;
extern PyObject *const_int_0;
static PyObject *const_tuple_942ac3d2ab2f4e18371bc9712f485d59_tuple;
static PyObject *const_tuple_b5fa4d857c052efcac8d193251c93eb1_tuple;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_block_size;
static PyObject *const_str_digest_57a425a7c4dd1dc9b741b43a7db46e07;
extern PyObject *const_str_plain_byte;
static PyObject *const_str_digest_ef13737bb90312478d78a333c90314d8;
static PyObject *const_str_plain_outfile;
extern PyObject *const_int_pos_128;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_chr_0;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_rsa;
extern PyObject *const_str_plain_blocksize;
static PyObject *const_str_digest_652913daaf49e73e8c4b15744c3bfddd;
static PyObject *const_str_digest_b2e4d4da2e7c6d04d2124a77bda33195;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain_varblock;
static PyObject *const_str_digest_202dfbda4617a1c5e76178594d622429;
static PyObject *const_str_plain_read_varint;
extern PyObject *const_str_plain_yield_fixedblocks;
extern PyObject *const_str_plain_read;
static PyObject *const_tuple_int_0_int_0_tuple;
static PyObject *const_str_plain_to_write;
extern PyObject *const_str_plain___loader__;
static PyObject *const_tuple_str_plain_infile_tuple;
static PyObject *const_str_plain_VARBLOCK_VERSION;
static PyObject *const_str_plain_written_bytes;
static PyObject *const_str_plain_read_bytes;
static PyObject *const_str_plain_read_size;
static PyObject *const_tuple_e56eefed2566839ba56f19f8a3c45e3c_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_1246a9d896df7b2e85ef0619c4facb8b;
static PyObject *const_str_digest_094747ae488c1cb522020bd541a3c346;
extern PyObject *const_str_plain_block;
static PyObject *const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_byte_str_plain_b_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_byte_str_plain_b_tuple, 0, const_str_plain_byte ); Py_INCREF( const_str_plain_byte );
    PyTuple_SET_ITEM( const_tuple_str_plain_byte_str_plain_b_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_str_digest_e261f635377b434fae6c91e17121e98e = UNSTREAM_STRING( &constant_bin[ 882114 ], 627, 0 );
    const_str_plain_infile = UNSTREAM_STRING( &constant_bin[ 98361 ], 6, 1 );
    const_str_digest_7a14f5d6736de06e0b07d38c86340922 = UNSTREAM_STRING( &constant_bin[ 882741 ], 33, 0 );
    const_str_digest_51bb7535416659a40534ab11bf82e009 = UNSTREAM_STRING( &constant_bin[ 882774 ], 46, 0 );
    const_str_plain_yield_varblocks = UNSTREAM_STRING( &constant_bin[ 882820 ], 15, 1 );
    const_str_plain_varint = UNSTREAM_STRING( &constant_bin[ 98125 ], 6, 1 );
    const_tuple_str_plain_infile_str_plain_blocksize_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_infile_str_plain_blocksize_tuple, 0, const_str_plain_infile ); Py_INCREF( const_str_plain_infile );
    PyTuple_SET_ITEM( const_tuple_str_plain_infile_str_plain_blocksize_tuple, 1, const_str_plain_blocksize ); Py_INCREF( const_str_plain_blocksize );
    const_str_digest_d30341f6383fc4a6a43dfd56d25234e9 = UNSTREAM_STRING( &constant_bin[ 882835 ], 169, 0 );
    const_str_plain_write_varint = UNSTREAM_STRING( &constant_bin[ 883004 ], 12, 1 );
    const_tuple_942ac3d2ab2f4e18371bc9712f485d59_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_942ac3d2ab2f4e18371bc9712f485d59_tuple, 0, const_str_plain_infile ); Py_INCREF( const_str_plain_infile );
    PyTuple_SET_ITEM( const_tuple_942ac3d2ab2f4e18371bc9712f485d59_tuple, 1, const_str_plain_first_char ); Py_INCREF( const_str_plain_first_char );
    PyTuple_SET_ITEM( const_tuple_942ac3d2ab2f4e18371bc9712f485d59_tuple, 2, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_942ac3d2ab2f4e18371bc9712f485d59_tuple, 3, const_str_plain_block_size ); Py_INCREF( const_str_plain_block_size );
    const_str_plain_read_bytes = UNSTREAM_STRING( &constant_bin[ 98069 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_942ac3d2ab2f4e18371bc9712f485d59_tuple, 4, const_str_plain_read_bytes ); Py_INCREF( const_str_plain_read_bytes );
    PyTuple_SET_ITEM( const_tuple_942ac3d2ab2f4e18371bc9712f485d59_tuple, 5, const_str_plain_block ); Py_INCREF( const_str_plain_block );
    const_str_plain_read_size = UNSTREAM_STRING( &constant_bin[ 98413 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_942ac3d2ab2f4e18371bc9712f485d59_tuple, 6, const_str_plain_read_size ); Py_INCREF( const_str_plain_read_size );
    const_tuple_b5fa4d857c052efcac8d193251c93eb1_tuple = PyTuple_New( 4 );
    const_str_plain_outfile = UNSTREAM_STRING( &constant_bin[ 882874 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_b5fa4d857c052efcac8d193251c93eb1_tuple, 0, const_str_plain_outfile ); Py_INCREF( const_str_plain_outfile );
    PyTuple_SET_ITEM( const_tuple_b5fa4d857c052efcac8d193251c93eb1_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_plain_written_bytes = UNSTREAM_STRING( &constant_bin[ 98231 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_b5fa4d857c052efcac8d193251c93eb1_tuple, 2, const_str_plain_written_bytes ); Py_INCREF( const_str_plain_written_bytes );
    const_str_plain_to_write = UNSTREAM_STRING( &constant_bin[ 98177 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_b5fa4d857c052efcac8d193251c93eb1_tuple, 3, const_str_plain_to_write ); Py_INCREF( const_str_plain_to_write );
    const_str_digest_57a425a7c4dd1dc9b741b43a7db46e07 = UNSTREAM_STRING( &constant_bin[ 883016 ], 44, 0 );
    const_str_digest_ef13737bb90312478d78a333c90314d8 = UNSTREAM_STRING( &constant_bin[ 883060 ], 375, 0 );
    const_str_digest_652913daaf49e73e8c4b15744c3bfddd = UNSTREAM_STRING( &constant_bin[ 883435 ], 12, 0 );
    const_str_digest_b2e4d4da2e7c6d04d2124a77bda33195 = UNSTREAM_STRING( &constant_bin[ 883447 ], 197, 0 );
    const_str_digest_202dfbda4617a1c5e76178594d622429 = UNSTREAM_STRING( &constant_bin[ 883644 ], 214, 0 );
    const_str_plain_read_varint = UNSTREAM_STRING( &constant_bin[ 98318 ], 11, 1 );
    const_tuple_int_0_int_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_str_plain_infile_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_infile_tuple, 0, const_str_plain_infile ); Py_INCREF( const_str_plain_infile );
    const_str_plain_VARBLOCK_VERSION = UNSTREAM_STRING( &constant_bin[ 98280 ], 16, 1 );
    const_tuple_e56eefed2566839ba56f19f8a3c45e3c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_e56eefed2566839ba56f19f8a3c45e3c_tuple, 0, const_str_plain_infile ); Py_INCREF( const_str_plain_infile );
    PyTuple_SET_ITEM( const_tuple_e56eefed2566839ba56f19f8a3c45e3c_tuple, 1, const_str_plain_varint ); Py_INCREF( const_str_plain_varint );
    PyTuple_SET_ITEM( const_tuple_e56eefed2566839ba56f19f8a3c45e3c_tuple, 2, const_str_plain_read_bytes ); Py_INCREF( const_str_plain_read_bytes );
    PyTuple_SET_ITEM( const_tuple_e56eefed2566839ba56f19f8a3c45e3c_tuple, 3, const_str_plain_char ); Py_INCREF( const_str_plain_char );
    PyTuple_SET_ITEM( const_tuple_e56eefed2566839ba56f19f8a3c45e3c_tuple, 4, const_str_plain_byte ); Py_INCREF( const_str_plain_byte );
    const_str_digest_1246a9d896df7b2e85ef0619c4facb8b = UNSTREAM_STRING( &constant_bin[ 883858 ], 38, 0 );
    const_str_digest_094747ae488c1cb522020bd541a3c346 = UNSTREAM_STRING( &constant_bin[ 883896 ], 45, 0 );
    const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple, 0, const_str_plain_infile ); Py_INCREF( const_str_plain_infile );
    PyTuple_SET_ITEM( const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple, 1, const_str_plain_blocksize ); Py_INCREF( const_str_plain_blocksize );
    PyTuple_SET_ITEM( const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple, 2, const_str_plain_block ); Py_INCREF( const_str_plain_block );
    PyTuple_SET_ITEM( const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple, 3, const_str_plain_read_bytes ); Py_INCREF( const_str_plain_read_bytes );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_rsa$varblock( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_7528bd26d9a95fb159e10adf7407f4df;
static PyCodeObject *codeobj_bc56e485f2326b22011c77a1c94b3534;
static PyCodeObject *codeobj_f06b193a829d21e398759a029ff314ea;
static PyCodeObject *codeobj_2d952d3a034898c39b23f29c76ef01c0;
static PyCodeObject *codeobj_fe5d452e09a8c8eec4f93f3bdb99a77c;
static PyCodeObject *codeobj_751eb08f960d91493a757c7823352cf8;
static PyCodeObject *codeobj_46f1eede28ce8145621dcb47aa82e62f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_094747ae488c1cb522020bd541a3c346 );
    codeobj_7528bd26d9a95fb159e10adf7407f4df = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read_varint, 42, const_tuple_e56eefed2566839ba56f19f8a3c45e3c_tuple, 1, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_bc56e485f2326b22011c77a1c94b3534 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_varblock, 0, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_f06b193a829d21e398759a029ff314ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write_varint, 74, const_tuple_b5fa4d857c052efcac8d193251c93eb1_tuple, 2, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_2d952d3a034898c39b23f29c76ef01c0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_yield_fixedblocks, 137, const_tuple_str_plain_infile_str_plain_blocksize_tuple, 2, 0, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
    codeobj_fe5d452e09a8c8eec4f93f3bdb99a77c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_yield_fixedblocks, 137, const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple, 2, 0, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
    codeobj_751eb08f960d91493a757c7823352cf8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_yield_varblocks, 103, const_tuple_str_plain_infile_tuple, 1, 0, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
    codeobj_46f1eede28ce8145621dcb47aa82e62f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_yield_varblocks, 103, const_tuple_942ac3d2ab2f4e18371bc9712f485d59_tuple, 1, 0, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_read_varint_of_rsa$varblock(  );


static PyObject *MAKE_FUNCTION_function_2_write_varint_of_rsa$varblock(  );


static PyObject *MAKE_FUNCTION_function_3_yield_varblocks_of_rsa$varblock(  );


static PyObject *MAKE_FUNCTION_function_4_yield_fixedblocks_of_rsa$varblock(  );


// The module function definitions.
static PyObject *impl_function_1_read_varint_of_rsa$varblock( Nuitka_FunctionObject *self, PyObject *_python_par_infile )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_infile = _python_par_infile;
    PyObject *var_varint = NULL;
    PyObject *var_read_bytes = NULL;
    PyObject *var_char = NULL;
    PyObject *var_byte = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_ord_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_int_0;
    assert( var_varint == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_varint = tmp_assign_source_1;

    tmp_assign_source_2 = const_int_0;
    assert( var_read_bytes == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_read_bytes = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7528bd26d9a95fb159e10adf7407f4df, module_rsa$varblock );
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
    loop_start_1:;
    tmp_source_name_1 = par_infile;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_read );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_int_pos_1;
    frame_function->f_lineno = 58;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_char;
        var_char = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_len_arg_1 = var_char;

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_compare_left_2 = var_read_bytes;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98053 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = const_tuple_int_0_int_0_tuple;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_left_name_1 = const_str_digest_57a425a7c4dd1dc9b741b43a7db46e07;
    tmp_right_name_1 = var_varint;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98109 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 62;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_EOFError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 63;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_ord_arg_1 = var_char;

    if ( tmp_ord_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46434 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = BUILTIN_ORD( tmp_ord_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_byte;
        var_byte = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_left_name_2 = var_varint;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98109 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_left_name_4 = var_byte;

    tmp_right_name_3 = const_int_pos_127;
    tmp_left_name_3 = BINARY_OPERATION( PyNumber_And, tmp_left_name_4, tmp_right_name_3 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_left_name_5 = const_int_pos_7;
    tmp_right_name_5 = var_read_bytes;

    if ( tmp_right_name_5 == NULL )
    {
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98053 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_3, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_5 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    var_varint = tmp_assign_source_5;

    tmp_left_name_6 = var_read_bytes;

    if ( tmp_left_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98053 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
    tmp_assign_source_6 = tmp_left_name_6;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    var_read_bytes = tmp_assign_source_6;

    tmp_left_name_7 = var_byte;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48815 ], 50, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = const_int_pos_128;
    tmp_cond_value_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_varint;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98109 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_read_bytes;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98053 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

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
            if ( var_varint != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_varint,
                    var_varint
                );
                assert( tmp_res != -1 );

            }
            if ( var_read_bytes != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_read_bytes,
                    var_read_bytes
                );
                assert( tmp_res != -1 );

            }
            if ( var_char != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_char,
                    var_char
                );
                assert( tmp_res != -1 );

            }
            if ( var_byte != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_byte,
                    var_byte
                );
                assert( tmp_res != -1 );

            }
            if ( par_infile != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_infile,
                    par_infile
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
    NUITKA_CANNOT_GET_HERE( function_1_read_varint_of_rsa$varblock );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_infile );
    par_infile = NULL;

    Py_XDECREF( var_varint );
    var_varint = NULL;

    Py_XDECREF( var_read_bytes );
    var_read_bytes = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

    Py_XDECREF( var_byte );
    var_byte = NULL;

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

    Py_XDECREF( par_infile );
    par_infile = NULL;

    Py_XDECREF( var_varint );
    var_varint = NULL;

    Py_XDECREF( var_read_bytes );
    var_read_bytes = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

    Py_XDECREF( var_byte );
    var_byte = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_read_varint_of_rsa$varblock );
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
static PyObject *fparse_function_1_read_varint_of_rsa$varblock( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_infile = NULL;
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
                PyErr_Format( PyExc_TypeError, "read_varint() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_infile == key )
            {
                assert( _python_par_infile == NULL );
                _python_par_infile = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_infile, key ) == 1 )
            {
                assert( _python_par_infile == NULL );
                _python_par_infile = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "read_varint() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_infile != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_infile = args[ 0 ];
        Py_INCREF( _python_par_infile );
    }
    else if ( _python_par_infile == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_infile = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
            Py_INCREF( _python_par_infile );
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
    if (unlikely( _python_par_infile == NULL ))
    {
        PyObject *values[] = { _python_par_infile };
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



    return impl_function_1_read_varint_of_rsa$varblock( self, _python_par_infile );

error_exit:;

    Py_XDECREF( _python_par_infile );

    return NULL;
}

static PyObject *dparse_function_1_read_varint_of_rsa$varblock( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_read_varint_of_rsa$varblock( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_read_varint_of_rsa$varblock( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_write_varint_of_rsa$varblock( Nuitka_FunctionObject *self, PyObject *_python_par_outfile, PyObject *_python_par_value )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_outfile = _python_par_outfile;
    PyObject *par_value = _python_par_value;
    PyObject *var_written_bytes = NULL;
    PyObject *var_to_write = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f06b193a829d21e398759a029ff314ea, module_rsa$varblock );
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

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
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
    tmp_source_name_1 = par_outfile;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_write );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain_ZERO_BYTE );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ZERO_BYTE );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 97363 ], 31, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 86;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = const_int_pos_1;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = const_int_0;
    assert( var_written_bytes == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_written_bytes = tmp_assign_source_1;

    loop_start_1:;
    tmp_compare_left_2 = par_value;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9904 ], 51, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    tmp_left_name_1 = par_value;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9904 ], 51, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_127;
    tmp_assign_source_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_to_write;
        var_to_write = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_left_name_2 = par_value;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9904 ], 51, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_7;
    tmp_assign_source_3 = BINARY_OPERATION( PyNumber_Rshift, tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_value;
        par_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_compare_left_3 = par_value;

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_3 = var_to_write;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98161 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_128;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_4 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    var_to_write = tmp_assign_source_4;

    branch_no_3:;
    tmp_source_name_2 = par_outfile;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_write );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain_byte );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 97020 ], 26, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_to_write;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98161 ], 54, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 97;
    tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 97;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 97;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_4 = var_written_bytes;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98215 ], 59, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
    tmp_assign_source_5 = tmp_left_name_4;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto frame_exception_exit_1;
    }
    var_written_bytes = tmp_assign_source_5;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = var_written_bytes;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98215 ], 59, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
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
            if ( var_written_bytes != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_written_bytes,
                    var_written_bytes
                );
                assert( tmp_res != -1 );

            }
            if ( var_to_write != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_to_write,
                    var_to_write
                );
                assert( tmp_res != -1 );

            }
            if ( par_outfile != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_outfile,
                    par_outfile
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
    NUITKA_CANNOT_GET_HERE( function_2_write_varint_of_rsa$varblock );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_outfile );
    par_outfile = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( var_written_bytes );
    var_written_bytes = NULL;

    Py_XDECREF( var_to_write );
    var_to_write = NULL;

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

    Py_XDECREF( par_outfile );
    par_outfile = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( var_written_bytes );
    var_written_bytes = NULL;

    Py_XDECREF( var_to_write );
    var_to_write = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_write_varint_of_rsa$varblock );
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
static PyObject *fparse_function_2_write_varint_of_rsa$varblock( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_outfile = NULL;
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
                PyErr_Format( PyExc_TypeError, "write_varint() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_outfile == key )
            {
                assert( _python_par_outfile == NULL );
                _python_par_outfile = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_outfile, key ) == 1 )
            {
                assert( _python_par_outfile == NULL );
                _python_par_outfile = value;

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
                   "write_varint() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_outfile != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_outfile = args[ 0 ];
        Py_INCREF( _python_par_outfile );
    }
    else if ( _python_par_outfile == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_outfile = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 );
            Py_INCREF( _python_par_outfile );
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
    if (unlikely( _python_par_outfile == NULL || _python_par_value == NULL ))
    {
        PyObject *values[] = { _python_par_outfile, _python_par_value };
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



    return impl_function_2_write_varint_of_rsa$varblock( self, _python_par_outfile, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_outfile );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_2_write_varint_of_rsa$varblock( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2_write_varint_of_rsa$varblock( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_write_varint_of_rsa$varblock( self, args, size, NULL );
        return result;
    }

}




static void function_3_yield_varblocks_of_rsa$varblock_context2( Nuitka_GeneratorObject *generator )
{
    // Local variable initialization
    PyObject *var_first_char = NULL;
    PyObject *var_version = NULL;
    PyObject *var_block_size = NULL;
    PyObject *var_read_bytes = NULL;
    PyObject *var_block = NULL;
    PyObject *var_read_size = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_ord_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    int tmp_res;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_46f1eede28ce8145621dcb47aa82e62f, module_rsa$varblock );
    frame_function = cache_frame_function;

    Py_INCREF( frame_function );
    generator->m_frame = frame_function;
#if PYTHON_VERSION >= 340
    frame_function->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    frame_function->f_exc_type = thread_state->exc_type;
    if ( frame_function->f_exc_type == Py_None ) frame_function->f_exc_type = NULL;
    Py_XINCREF( frame_function->f_exc_type );
    frame_function->f_exc_value = thread_state->exc_value;
    Py_XINCREF( frame_function->f_exc_value );
    frame_function->f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( frame_function->f_exc_traceback );
#endif

    // Framed code:
    // Throwing into not started generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            exception_lineno = 103;
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    tmp_source_name_1 = generator->m_parameters[0];

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_read );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_int_pos_1;
    frame_function->f_lineno = 112;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    assert( var_first_char == NULL );
    var_first_char = tmp_assign_source_1;

    tmp_len_arg_1 = var_first_char;

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_1246a9d896df7b2e85ef0619c4facb8b;
    frame_function->f_lineno = 114;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_EOFError, tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 114;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_ord_arg_1 = var_first_char;

    if ( tmp_ord_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66859 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = BUILTIN_ORD( tmp_ord_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        goto frame_exception_exit_1;
    }
    assert( var_version == NULL );
    var_version = tmp_assign_source_2;

    tmp_compare_left_2 = var_version;

    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain_VARBLOCK_VERSION );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VARBLOCK_VERSION );
    }

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98274 ], 38, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
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
    tmp_left_name_1 = const_str_digest_7a14f5d6736de06e0b07d38c86340922;
    tmp_right_name_1 = var_version;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11528 ], 53, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 118;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    Py_DECREF( tmp_make_exception_arg_2 );
    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 118;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    loop_start_1:;
    // Tried code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain_read_varint );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_read_varint );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98312 ], 33, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = generator->m_parameters[0];

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98345 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 121;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        exception_lineno = 121;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 121;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_block_size;
        var_block_size = tmp_assign_source_6;
        Py_INCREF( var_block_size );
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_read_bytes;
        var_read_bytes = tmp_assign_source_7;
        Py_INCREF( var_read_bytes );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compexpr_left_1 = var_read_bytes;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98053 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = const_int_0;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 124;
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_compexpr_left_2 = var_block_size;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 97394 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = const_int_0;
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
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
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 124;
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
    goto loop_end_1;
    branch_no_3:;
    tmp_source_name_2 = generator->m_parameters[0];

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98345 ], 52, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_read );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_block_size;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 97394 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 127;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_block;
        var_block = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_len_arg_2 = var_block;

    tmp_assign_source_9 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_read_size;
        var_read_size = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_compare_left_3 = var_read_size;

    tmp_compare_right_3 = var_block_size;

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 97394 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_2 = const_str_digest_51bb7535416659a40534ab11bf82e009;
    tmp_right_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_block_size;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 97394 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_read_size;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98397 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_1 );
    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 131;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_EOFError, tmp_make_exception_arg_3 );
    Py_DECREF( tmp_make_exception_arg_3 );
    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 132;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_expression_name_1 = var_block;

    if ( tmp_expression_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 58966 ], 51, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        goto frame_exception_exit_1;
    }

    tmp_unused = YIELD( generator, INCREASE_REFCOUNT( tmp_expression_name_1 ) );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif

#if PYTHON_VERSION >= 300
    Py_CLEAR( frame_function->f_exc_type );
    Py_CLEAR( frame_function->f_exc_value );
    Py_CLEAR( frame_function->f_exc_traceback );
#endif

    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        int needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_tb->tb_frame != frame_function )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( var_first_char != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_first_char,
                    var_first_char
                );
                assert( tmp_res != -1 );

            }
            if ( var_version != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_version,
                    var_version
                );
                assert( tmp_res != -1 );

            }
            if ( var_block_size != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_block_size,
                    var_block_size
                );
                assert( tmp_res != -1 );

            }
            if ( var_read_bytes != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_read_bytes,
                    var_read_bytes
                );
                assert( tmp_res != -1 );

            }
            if ( var_block != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_block,
                    var_block
                );
                assert( tmp_res != -1 );

            }
            if ( var_read_size != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_read_size,
                    var_read_size
                );
                assert( tmp_res != -1 );

            }
            if ( generator->m_parameters[0] != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_infile,
                    generator->m_parameters[0]
                );
                assert( tmp_res != -1 );

            }


            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( frame_function->f_exc_type );
    Py_CLEAR( frame_function->f_exc_value );
    Py_CLEAR( frame_function->f_exc_traceback );
#endif

    Py_DECREF( frame_function );
    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;

    goto try_end_2;
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

    Py_XDECREF( var_first_char );
    var_first_char = NULL;

    Py_XDECREF( var_version );
    var_version = NULL;

    Py_XDECREF( var_block_size );
    var_block_size = NULL;

    Py_XDECREF( var_read_bytes );
    var_read_bytes = NULL;

    Py_XDECREF( var_block );
    var_block = NULL;

    Py_XDECREF( var_read_size );
    var_read_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( var_first_char );
    var_first_char = NULL;

    Py_XDECREF( var_version );
    var_version = NULL;

    Py_XDECREF( var_block_size );
    var_block_size = NULL;

    Py_XDECREF( var_read_bytes );
    var_read_bytes = NULL;

    Py_XDECREF( var_block );
    var_block = NULL;

    Py_XDECREF( var_read_size );
    var_read_size = NULL;


    RESTORE_ERROR_OCCURRED( PyExc_StopIteration, NULL, NULL );
    Py_INCREF( PyExc_StopIteration );

    generator->m_yielded = NULL;
    return;

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    generator->m_yielded = NULL;
    return;

}

#ifdef _NUITKA_MAKECONTEXT_INTS
static void function_3_yield_varblocks_of_rsa$varblock_context( int generator_address_1, int generator_address_2 )
{
    // Restore the pointer from ints should it be necessary, often it can be
    // directly received.
    int generator_addresses[2] = {
        generator_address_1,
        generator_address_2
    };

    Nuitka_GeneratorObject *generator = (Nuitka_GeneratorObject *)*(uintptr_t *)&generator_addresses[0];
#else
static void function_3_yield_varblocks_of_rsa$varblock_context( Nuitka_GeneratorObject *generator )
{
#endif

    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    function_3_yield_varblocks_of_rsa$varblock_context2( generator );

    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );
}
static PyObject *impl_function_3_yield_varblocks_of_rsa$varblock( Nuitka_FunctionObject *self, PyObject *_python_par_infile )
{
    PyObject **parameters = (PyObject **)malloc(1 * sizeof(PyObject *));
    parameters[0] = _python_par_infile;

    PyCellObject **closure = NULL;


    PyObject *result = Nuitka_Generator_New(
        function_3_yield_varblocks_of_rsa$varblock_context,
        const_str_plain_yield_varblocks,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_751eb08f960d91493a757c7823352cf8,
        closure,
        0,
        parameters,
        1
    );
    if (unlikely( result == NULL ))
    {
        PyErr_Format( PyExc_RuntimeError, "cannot create generator yield_varblocks" );
        return NULL;
    }

    return result;
}
static PyObject *fparse_function_3_yield_varblocks_of_rsa$varblock( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_infile = NULL;
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
                PyErr_Format( PyExc_TypeError, "yield_varblocks() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_infile == key )
            {
                assert( _python_par_infile == NULL );
                _python_par_infile = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_infile, key ) == 1 )
            {
                assert( _python_par_infile == NULL );
                _python_par_infile = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "yield_varblocks() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_infile != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_infile = args[ 0 ];
        Py_INCREF( _python_par_infile );
    }
    else if ( _python_par_infile == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_infile = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
            Py_INCREF( _python_par_infile );
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
    if (unlikely( _python_par_infile == NULL ))
    {
        PyObject *values[] = { _python_par_infile };
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



    return impl_function_3_yield_varblocks_of_rsa$varblock( self, _python_par_infile );

error_exit:;

    Py_XDECREF( _python_par_infile );

    return NULL;
}

static PyObject *dparse_function_3_yield_varblocks_of_rsa$varblock( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_yield_varblocks_of_rsa$varblock( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_yield_varblocks_of_rsa$varblock( self, args, size, NULL );
        return result;
    }

}




static void function_4_yield_fixedblocks_of_rsa$varblock_context2( Nuitka_GeneratorObject *generator )
{
    // Local variable initialization
    PyObject *var_block = NULL;
    PyObject *var_read_bytes = NULL;
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_len_arg_1;
    int tmp_res;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fe5d452e09a8c8eec4f93f3bdb99a77c, module_rsa$varblock );
    frame_function = cache_frame_function;

    Py_INCREF( frame_function );
    generator->m_frame = frame_function;
#if PYTHON_VERSION >= 340
    frame_function->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    frame_function->f_exc_type = thread_state->exc_type;
    if ( frame_function->f_exc_type == Py_None ) frame_function->f_exc_type = NULL;
    Py_XINCREF( frame_function->f_exc_type );
    frame_function->f_exc_value = thread_state->exc_value;
    Py_XINCREF( frame_function->f_exc_value );
    frame_function->f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( frame_function->f_exc_traceback );
#endif

    // Framed code:
    // Throwing into not started generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            exception_lineno = 137;
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    loop_start_1:;
    tmp_source_name_1 = generator->m_parameters[0];

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_read );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = generator->m_parameters[1];

    frame_function->f_lineno = 145;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_block;
        var_block = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_len_arg_1 = var_block;

    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_read_bytes;
        var_read_bytes = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_read_bytes;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
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
    goto loop_end_1;
    branch_no_1:;
    tmp_expression_name_1 = var_block;

    if ( tmp_expression_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 58966 ], 51, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_unused = YIELD( generator, INCREASE_REFCOUNT( tmp_expression_name_1 ) );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = var_read_bytes;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 98053 ], 56, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = generator->m_parameters[1];

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 96036 ], 55, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif

#if PYTHON_VERSION >= 300
    Py_CLEAR( frame_function->f_exc_type );
    Py_CLEAR( frame_function->f_exc_value );
    Py_CLEAR( frame_function->f_exc_traceback );
#endif

    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        int needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_tb->tb_frame != frame_function )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( var_block != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_block,
                    var_block
                );
                assert( tmp_res != -1 );

            }
            if ( var_read_bytes != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_read_bytes,
                    var_read_bytes
                );
                assert( tmp_res != -1 );

            }
            if ( generator->m_parameters[0] != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_infile,
                    generator->m_parameters[0]
                );
                assert( tmp_res != -1 );

            }
            if ( generator->m_parameters[1] != NULL )
            {
                tmp_res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_blocksize,
                    generator->m_parameters[1]
                );
                assert( tmp_res != -1 );

            }


            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( frame_function->f_exc_type );
    Py_CLEAR( frame_function->f_exc_value );
    Py_CLEAR( frame_function->f_exc_traceback );
#endif

    Py_DECREF( frame_function );
    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;

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

    Py_XDECREF( var_block );
    var_block = NULL;

    Py_XDECREF( var_read_bytes );
    var_read_bytes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:
    try_end_1:;
    Py_XDECREF( var_block );
    var_block = NULL;

    Py_XDECREF( var_read_bytes );
    var_read_bytes = NULL;


    RESTORE_ERROR_OCCURRED( PyExc_StopIteration, NULL, NULL );
    Py_INCREF( PyExc_StopIteration );

    generator->m_yielded = NULL;
    return;

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    generator->m_yielded = NULL;
    return;

}

#ifdef _NUITKA_MAKECONTEXT_INTS
static void function_4_yield_fixedblocks_of_rsa$varblock_context( int generator_address_1, int generator_address_2 )
{
    // Restore the pointer from ints should it be necessary, often it can be
    // directly received.
    int generator_addresses[2] = {
        generator_address_1,
        generator_address_2
    };

    Nuitka_GeneratorObject *generator = (Nuitka_GeneratorObject *)*(uintptr_t *)&generator_addresses[0];
#else
static void function_4_yield_fixedblocks_of_rsa$varblock_context( Nuitka_GeneratorObject *generator )
{
#endif

    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    function_4_yield_fixedblocks_of_rsa$varblock_context2( generator );

    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );
}
static PyObject *impl_function_4_yield_fixedblocks_of_rsa$varblock( Nuitka_FunctionObject *self, PyObject *_python_par_infile, PyObject *_python_par_blocksize )
{
    PyObject **parameters = (PyObject **)malloc(2 * sizeof(PyObject *));
    parameters[0] = _python_par_infile;
    parameters[1] = _python_par_blocksize;

    PyCellObject **closure = NULL;


    PyObject *result = Nuitka_Generator_New(
        function_4_yield_fixedblocks_of_rsa$varblock_context,
        const_str_plain_yield_fixedblocks,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_2d952d3a034898c39b23f29c76ef01c0,
        closure,
        0,
        parameters,
        2
    );
    if (unlikely( result == NULL ))
    {
        PyErr_Format( PyExc_RuntimeError, "cannot create generator yield_fixedblocks" );
        return NULL;
    }

    return result;
}
static PyObject *fparse_function_4_yield_fixedblocks_of_rsa$varblock( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_infile = NULL;
    PyObject *_python_par_blocksize = NULL;
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
                PyErr_Format( PyExc_TypeError, "yield_fixedblocks() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_infile == key )
            {
                assert( _python_par_infile == NULL );
                _python_par_infile = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_blocksize == key )
            {
                assert( _python_par_blocksize == NULL );
                _python_par_blocksize = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_infile, key ) == 1 )
            {
                assert( _python_par_infile == NULL );
                _python_par_infile = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_blocksize, key ) == 1 )
            {
                assert( _python_par_blocksize == NULL );
                _python_par_blocksize = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "yield_fixedblocks() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_infile != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_infile = args[ 0 ];
        Py_INCREF( _python_par_infile );
    }
    else if ( _python_par_infile == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_infile = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 );
            Py_INCREF( _python_par_infile );
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
         if (unlikely( _python_par_blocksize != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_blocksize = args[ 1 ];
        Py_INCREF( _python_par_blocksize );
    }
    else if ( _python_par_blocksize == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_blocksize = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 );
            Py_INCREF( _python_par_blocksize );
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
    if (unlikely( _python_par_infile == NULL || _python_par_blocksize == NULL ))
    {
        PyObject *values[] = { _python_par_infile, _python_par_blocksize };
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



    return impl_function_4_yield_fixedblocks_of_rsa$varblock( self, _python_par_infile, _python_par_blocksize );

error_exit:;

    Py_XDECREF( _python_par_infile );
    Py_XDECREF( _python_par_blocksize );

    return NULL;
}

static PyObject *dparse_function_4_yield_fixedblocks_of_rsa$varblock( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_4_yield_fixedblocks_of_rsa$varblock( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_yield_fixedblocks_of_rsa$varblock( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_read_varint_of_rsa$varblock(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_read_varint_of_rsa$varblock,
        dparse_function_1_read_varint_of_rsa$varblock,
        const_str_plain_read_varint,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7528bd26d9a95fb159e10adf7407f4df,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_rsa$varblock,
        const_str_digest_ef13737bb90312478d78a333c90314d8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_write_varint_of_rsa$varblock(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_write_varint_of_rsa$varblock,
        dparse_function_2_write_varint_of_rsa$varblock,
        const_str_plain_write_varint,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f06b193a829d21e398759a029ff314ea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_rsa$varblock,
        const_str_digest_d30341f6383fc4a6a43dfd56d25234e9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_yield_varblocks_of_rsa$varblock(  )
{
    return Nuitka_Function_New(
        fparse_function_3_yield_varblocks_of_rsa$varblock,
        dparse_function_3_yield_varblocks_of_rsa$varblock,
        const_str_plain_yield_varblocks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_46f1eede28ce8145621dcb47aa82e62f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_rsa$varblock,
        const_str_digest_202dfbda4617a1c5e76178594d622429
    );
}



static PyObject *MAKE_FUNCTION_function_4_yield_fixedblocks_of_rsa$varblock(  )
{
    return Nuitka_Function_New(
        fparse_function_4_yield_fixedblocks_of_rsa$varblock,
        dparse_function_4_yield_fixedblocks_of_rsa$varblock,
        const_str_plain_yield_fixedblocks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fe5d452e09a8c8eec4f93f3bdb99a77c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_rsa$varblock,
        const_str_digest_b2e4d4da2e7c6d04d2124a77bda33195
    );
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_rsa$varblock =
{
    PyModuleDef_HEAD_INIT,
    "rsa.varblock",   /* m_name */
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

MOD_INIT_DECL( rsa$varblock )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_rsa$varblock );
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

    // puts( "in initrsa$varblock" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_rsa$varblock = Py_InitModule4(
        "rsa.varblock",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_rsa$varblock = PyModule_Create( &mdef_rsa$varblock );
#endif

    moduledict_rsa$varblock = (PyDictObject *)((PyModuleObject *)module_rsa$varblock)->md_dict;

    CHECK_OBJECT( module_rsa$varblock );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_652913daaf49e73e8c4b15744c3bfddd, module_rsa$varblock );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_rsa$varblock );

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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_e261f635377b434fae6c91e17121e98e;
    UPDATE_STRING_DICT0( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_094747ae488c1cb522020bd541a3c346;
    UPDATE_STRING_DICT0( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_rsa;
    UPDATE_STRING_DICT0( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_FRAME( codeobj_bc56e485f2326b22011c77a1c94b3534, module_rsa$varblock );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_rsa$varblock)->md_dict;
    frame_module->f_lineno = 36;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_865e7095d477d90f1eead964158b0a6f, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_byte_str_plain_b_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_byte );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain_byte, tmp_assign_source_5 );
    tmp_import_globals_2 = ((PyModuleObject *)module_rsa$varblock)->md_dict;
    frame_module->f_lineno = 36;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_865e7095d477d90f1eead964158b0a6f, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_byte_str_plain_b_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_b );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain_b, tmp_assign_source_6 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain_b );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80091 ], 23, 0 );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = const_str_chr_0;
    frame_module->f_lineno = 39;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain_ZERO_BYTE, tmp_assign_source_7 );

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
    tmp_assign_source_8 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain_VARBLOCK_VERSION, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_function_1_read_varint_of_rsa$varblock(  );
    UPDATE_STRING_DICT1( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain_read_varint, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_function_2_write_varint_of_rsa$varblock(  );
    UPDATE_STRING_DICT1( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain_write_varint, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_function_3_yield_varblocks_of_rsa$varblock(  );
    UPDATE_STRING_DICT1( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain_yield_varblocks, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_function_4_yield_fixedblocks_of_rsa$varblock(  );
    UPDATE_STRING_DICT1( moduledict_rsa$varblock, (Nuitka_StringObject *)const_str_plain_yield_fixedblocks, tmp_assign_source_12 );

    return MOD_RETURN_VALUE( module_rsa$varblock );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
