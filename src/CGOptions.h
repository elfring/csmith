// -*- mode: C++ -*-
//
// Copyright (c) 2008, 2009, 2010, 2011 The University of Utah
// All rights reserved.
//
// This file is part of `csmith', a random generator of C programs.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//   * Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//   * Redistributions in binary form must reproduce the above copyright
//     notice, this list of conditions and the following disclaimer in the
//     documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#ifndef CGOPTIONS_H
#define CGOPTIONS_H

#include <string>
#include <vector>
#include "Reducer.h"
using namespace std;

///////////////////////////////////////////////////////////////////////////////

/*
 * XXX --- Collect all the default values here.
 *
 * "static const int" still needs declared storage, so use #define's instead.
 */
#define CGOPTIONS_DEFAULT_MAX_FUNCS			(10)
#define CGOPTIONS_DEFAULT_MAX_PARAMS		(5)
#define CGOPTIONS_DEFAULT_FUNC1_MAX_PARAMS		(3)
#define CGOPTIONS_DEFAULT_COVERAGE_TEST_SIZE	(500)
#define CGOPTIONS_DEFAULT_MAX_BLOCK_SIZE	(4)
#define CGOPTIONS_DEFAULT_MAX_STMT_DEPTH	(5)
#define CGOPTIONS_DEFAULT_MAX_EXPR_DEPTH	(5)
#define CGOPTIONS_DEFAULT_MAX_STRUCT_FIELDS	(10)
#define CGOPTIONS_DEFAULT_MAX_NESTED_STRUCT_LEVEL	(0)
#define CGOPTIONS_DEFAULT_MAX_INDIRECT_LEVEL (2)
#define CGOPTIONS_DEFAULT_MAX_ARRAY_DIMENSIONS	(3)
#define CGOPTIONS_DEFAULT_MAX_ARRAY_LENGTH_PER_DIMENSION (10)
#define CGOPTIONS_DEFAULT_MAX_ARRAY_LENGTH	(100)
#define CGOPTIONS_DEFAULT_MAX_ARRAY_NUM_IN_LOOP	(4)
#define CGOPTIONS_DEFAULT_MAX_EXHAUSTIVE_DEPTH	(-1) 
// 0 means we output to the standard output
#define CGOPTIONS_DEFAULT_MAX_SPLIT_FILES	(0)
#define CGOPTIONS_DEFAULT_SPLIT_FILES_DIR	("./output") 
#define CGOPTIONS_DEFAULT_OUTPUT_FILE		("")
#define CGOPTIONS_DEFAULT_VOL_ADDR_FILE		("vol_addr.txt")

/*
 *
 */
class CGOptions {
public:
	static bool compute_hash(void);
	static bool compute_hash(bool p);

	static bool depth_protect(void);
	static bool depth_protect(bool p);

	static int max_split_files(void);
	static int max_split_files(int p);

	static std::string split_files_dir(void);
	static std::string split_files_dir(std::string p);

	static std::string output_file(void);
	static std::string output_file(std::string p);

	static int max_funcs(void);
	static int max_funcs(int p);

	static int max_params(void);
	static int max_params(int p);

	static int max_block_size(void);
	static int max_block_size(int p);

	static int max_stmt_depth(void);
	static int max_stmt_depth(int p);

	static int max_expr_depth(void);
	static int max_expr_depth(int p);

	static bool wrap_volatiles(void);
	static bool wrap_volatiles(bool p);

	static bool allow_const_volatile(void);
	static bool allow_const_volatile(bool p);

	static bool avoid_signed_overflow(void);
	static bool avoid_signed_overflow(bool p);

	static int max_struct_fields();
	static int max_struct_fields(int p);

	static int max_nested_struct_level();
	static int max_nested_struct_level(int p);

	static std::string struct_output();
	static std::string struct_output(std::string p);

	static bool fixed_struct_fields();
	static bool fixed_struct_fields(bool p);

	static bool expand_struct();
	static bool expand_struct(bool p);

	static bool use_struct();
	static bool use_struct(bool p);

	static int max_indirect_level();
	static int max_indirect_level(int p);

	static int max_array_dimensions();
	static int max_array_dimensions(int p);

	static int max_array_length_per_dimension();
	static int max_array_length_per_dimension(int p);

	static int max_array_length();
	static int max_array_length(int p);

	static bool compound_assignment(void);
	static bool compound_assignment(bool p);

	static int interested_facts();
	static int interested_facts(int p);

	static bool paranoid(void);
	static bool paranoid(bool p);

	static bool quiet(void);
	static bool quiet(bool p);

	static bool concise(void);
	static bool concise(bool p);

	static bool nomain(void);
	static bool nomain(bool p);

	static bool random_based(void);
	static bool random_based(bool p);

	static bool dfs_exhaustive(void);
	static bool dfs_exhaustive(bool p);

	static std::string dfs_debug_sequence(void);
	static std::string dfs_debug_sequence(std::string p);

	static int max_exhaustive_depth(void);
	static int max_exhaustive_depth(int p);

	static bool compact_output(void);
	static bool compact_output(bool p);

	static bool msp(void);
	static bool msp(bool p);

	static int func1_max_params(void);
	static int func1_max_params(int p);

	static bool splat(void);
	static bool splat(bool p);

	static bool klee(void);
	static bool klee(bool p);

	static bool crest(void);
	static bool crest(bool p);

	static bool ccomp(void);
	static bool ccomp(bool p);

	static bool coverage_test(void);
	static bool coverage_test(bool p);

	static int coverage_test_size(void);
	static int coverage_test_size(int p);

	static bool prefix_name(void);
	static bool prefix_name(bool p);

	static bool sequence_name_prefix(void);
	static bool sequence_name_prefix(bool p);

	static bool compatible_check(void);
	static bool compatible_check(bool p);

	static bool packed_struct(void);
	static bool packed_struct(bool p);

	static bool bitfields(void);
	static bool bitfields(bool p);

	static int bitfields_length(void);
	static int bitfields_length(int p);

	static std::string partial_expand(void);
	static std::string partial_expand(std::string p);

	static std::string delta_monitor(void);
	static std::string delta_monitor(std::string p);

	static std::string delta_output(void);
	static std::string delta_output(std::string p);

	static std::string go_delta(void);
	static std::string go_delta(std::string p);

	static std::string delta_input(void);
	static std::string delta_input(std::string p);

	static bool no_delta_reduction(void);
	static bool no_delta_reduction(bool p);

	static bool math_notmp(void);
	static bool math_notmp(bool p);

	static bool math64(void);
	static bool math64(bool p);

	static bool longlong(void);
	static bool longlong(bool p);

	static bool pointers(void);
	static bool pointers(bool p);

	static bool arrays(void);
	static bool arrays(bool p);

	static bool strict_const_arrays(void);
	static bool strict_const_arrays(bool p);

	static bool jumps(void);
	static bool jumps(bool p);

	static bool return_structs(void);
	static bool return_structs(bool p);

	static bool arg_structs(void);
	static bool arg_structs(bool p);

	static bool volatiles(void);
	static bool volatiles(bool p);

	static bool volatile_pointers(void);
	static bool volatile_pointers(bool p);

	static bool enable_vol_tests(void);
	static bool enable_vol_tests(bool p);

	static std::string vol_tests_mach(void);
	static bool set_vol_tests(const std::string &s);

	static std::string vol_addr_file(void);
	static std::string vol_addr_file(std::string p);

	static bool consts(void);
	static bool consts(bool p);

	static bool dangling_global_ptrs(void);
	static bool dangling_global_ptrs(bool p);

	static bool divs(void);
	static bool divs(bool p);

	static bool muls(void);
	static bool muls(bool p);

	static bool accept_argc(void);
	static bool accept_argc(bool p);

	static bool random_random(void);
	static bool random_random(bool p);

	static std::string dump_default_probabilities(void);
	static std::string dump_default_probabilities(std::string p);

	static std::string dump_random_probabilities(void);
	static std::string dump_random_probabilities(std::string p);

	static std::string probability_configuration(void);
	static std::string probability_configuration(std::string p);

	static bool step_hash_by_stmt(void);
	static bool step_hash_by_stmt(bool p);

	static bool blind_check_global(void);
	static bool blind_check_global(bool p);

	static int stop_by_stmt(void);
	static int stop_by_stmt(int p);

	static void monitored_funcs(string fnames);

	static bool deputy(void);
	static bool deputy(bool p);

	static bool const_as_condition(void);
	static bool const_as_condition(bool p);

	static bool no_return_dead_ptr(void);
	static bool no_return_dead_ptr(bool p);

	/////////////////////////////////////////////////////////
	static void set_default_settings(void);

	static bool has_conflict(void);
	static bool has_random_based_conflict(void);
	static const std::string& conflict_msg(void);

	static bool is_random(void);
	static bool resolve_bitfields_length();

	static bool has_extension_support();

	static bool allow_int64();

	static bool match_exact_qualifiers(void);
	static bool match_exact_qualifiers(bool p);

	static int max_array_num_in_loop();
	static int max_array_num_in_loop(int p);

	static void init_reducer(std::string fname) { reducer_ = new Reducer(fname);}
	static Reducer* get_reducer(void) { return reducer_; } 

	static bool x86_64();

	static bool identify_wrappers(void);
	static bool identify_wrappers(bool p);

	static void safe_math_wrapper(string ids);
	static bool safe_math_wrapper(int id);

	static bool mark_mutable_const(void);
	static bool mark_mutable_const(bool p);

private:
	static bool resolve_exhaustive_options();

	static bool has_delta_conflict();

	static bool has_extension_conflict();

	static void parse_string_options(string vname, vector<std::string> &v);

	// Until I do this right, just make them all static.
	static bool	compute_hash_;
	static bool	depth_protect_;
	static int	max_funcs_;
	static int	max_split_files_;
	static std::string split_files_dir_;
	static std::string output_file_;
	static int	max_params_;
	static int	max_block_size_;
	static int	max_stmt_depth_;
	static int	max_expr_depth_;
	static bool	wrap_volatiles_;
	static bool	allow_const_volatile_;
	static bool avoid_signed_overflow_;
	static int  max_struct_fields_;
	static int  max_nested_struct_level_;
	static std::string struct_output_;
	static bool  fixed_struct_fields_;
	static bool  expand_struct_;
	static bool use_struct_;
	static int  max_indirect_level_;
	static int  max_array_dimensions_;
	static int  max_array_length_per_dimension_;
	static int  max_array_length_;
	static int  interested_facts_;
	static bool paranoid_;
	static bool quiet_;
	static bool concise_;
	static bool nomain_;
	static bool compound_assignment_;
	static int stop_by_stmt_;
	static bool deputy_;
	static bool step_hash_by_stmt_;
	static bool blind_check_global_;
	static bool	random_based_;
	static bool	dfs_exhaustive_;
	static std::string dfs_debug_sequence_;
	static int	max_exhaustive_depth_;
	static bool	compact_output_;
	static bool	msp_;
	static int	func1_max_params_;
	static bool	splat_;
	static bool	klee_;
	static bool	crest_;
	static bool	ccomp_;
	static bool	coverage_test_;
	static int	coverage_test_size_;
	static bool	packed_struct_;
	static bool	bitfields_;
	static int	bitfields_length_;
	static bool	prefix_name_;
	static bool	sequence_name_prefix_;
	static bool	compatible_check_;
	static std::string	partial_expand_;
	static std::string	delta_monitor_;
	static std::string	delta_output_;
	static std::string	go_delta_;
	static std::string	delta_input_;
	static bool	no_delta_reduction_;
	static bool	math64_;
	static bool	math_notmp_;
	static bool	longlong_;
	static bool	pointers_;
	static bool	arrays_;
	static bool	strict_const_arrays_;
	static bool	jumps_;
	static bool	return_structs_;
	static bool	arg_structs_;
	static bool	volatiles_;
	static bool	volatile_pointers_;
	static bool	enable_vol_tests_;
	static std::string	vol_addr_file_;
	static std::string	vol_tests_mach_;
	static bool	consts_;
	static bool dangling_global_ptrs_;
	static bool divs_;
	static bool muls_;
	static bool accept_argc_;
	static bool random_random_;
	static bool const_as_condition_;
	static bool no_return_dead_ptr_;
	static std::string	dump_default_probabilities_;
	static std::string	dump_random_probabilities_;
	static std::string	probability_configuration_;

	static std::string conflict_msg_;
	static bool match_exact_qualifiers_;

	static int max_array_num_in_loop_;
	static bool identify_wrappers_;
	static vector<int> safe_math_wrapper_ids_;
	static bool mark_mutable_const_;
	static Reducer* reducer_; 

private:
	CGOptions(void);
	CGOptions(CGOptions &cgo);
};

///////////////////////////////////////////////////////////////////////////////

#endif // CGOPTIONS_H

// Local Variables:
// c-basic-offset: 4
// tab-width: 4
// End:

// End of file.
