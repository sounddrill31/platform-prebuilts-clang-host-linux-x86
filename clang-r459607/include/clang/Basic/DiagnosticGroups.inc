
#ifdef GET_DIAG_ARRAYS
static const int16_t DiagArrays[] = {
  /* Empty */ -1,
  /* DiagArray1 */ diag::warn_pragma_message, -1,
  /* DiagArray2 */ diag::pp_hash_warning, -1,
  /* DiagArray3 */ diag::warn_cfstring_truncated, -1,
  /* DiagArray5 */ diag::warn_independentclass_attribute, diag::warn_ptr_independentclass_attribute, -1,
  /* DiagArray6 */ diag::warn_nsobject_attribute, -1,
  /* DiagArray8 */ diag::warn_abs_too_small, diag::warn_pointer_abs, diag::warn_unsigned_abs, diag::warn_wrong_absolute_value_type, -1,
  /* DiagArray9 */ diag::warn_abstract_final_class, -1,
  /* DiagArray10 */ diag::warn_abstract_vbase_init_ignored, -1,
  /* DiagArray12 */ diag::warn_taking_address_of_packed_member, -1,
  /* DiagArray13 */ diag::ext_typecheck_addrof_temporary, -1,
  /* DiagArray15 */ diag::warn_not_xl_compatible, diag::warn_pragma_align_not_xl_compatible, -1,
  /* DiagArray16 */ diag::warn_param_mismatched_alignment, -1,
  /* DiagArray18 */ diag::warn_alloca, -1,
  /* DiagArray19 */ diag::warn_alloca_align_alignof, -1,
  /* DiagArray20 */ diag::warn_always_inline_coroutine, -1,
  /* DiagArray21 */ diag::warn_ambiguous_suitable_delete_function_found, -1,
  /* DiagArray22 */ diag::warn_misplaced_ellipsis_vararg, -1,
  /* DiagArray23 */ diag::warn_pp_ambiguous_macro, -1,
  /* DiagArray24 */ diag::ext_nested_name_member_ref_lookup_ambiguous, -1,
  /* DiagArray25 */ diag::ext_ovl_ambiguous_oper_binary_reversed, -1,
  /* DiagArray26 */ diag::warn_incompatible_analyzer_plugin_api, -1,
  /* DiagArray27 */ diag::warn_arith_conv_mixed_anon_enum_types, -1,
  /* DiagArray28 */ diag::ext_abstract_pack_declarator_parens, -1,
  /* DiagArray30 */ diag::warn_arc_bridge_cast_nonarc, -1,
  /* DiagArray31 */ diag::warn_arc_possible_repeated_use_of_weak, -1,
  /* DiagArray32 */ diag::warn_arc_object_memaccess, -1,
  /* DiagArray33 */ diag::warn_arc_perform_selector_leaks, -1,
  /* DiagArray34 */ diag::warn_arc_repeated_use_of_weak, -1,
  /* DiagArray35 */ diag::warn_arc_retain_cycle, -1,
  /* DiagArray36 */ diag::warn_arc_literal_assign, diag::warn_arc_retained_assign, diag::warn_arc_retained_property_assign, -1,
  /* DiagArray37 */ diag::warn_argument_invalid_range, -1,
  /* DiagArray38 */ diag::warn_argument_undefined_behaviour, -1,
  /* DiagArray39 */ diag::warn_array_index_exceeds_bounds, diag::warn_array_index_exceeds_max_addressable_bounds, diag::warn_array_index_precedes_bounds, diag::warn_ptr_arith_exceeds_max_addressable_bounds, diag::warn_static_array_too_small, -1,
  /* DiagArray40 */ diag::warn_ptr_arith_exceeds_bounds, diag::warn_ptr_arith_precedes_bounds, -1,
  /* DiagArray42 */ diag::warn_asm_mismatched_size_modifier, -1,
  /* DiagArray43 */ diag::warn_not_in_enum_assignment, -1,
  /* DiagArray44 */ diag::warn_assume_side_effects, -1,
  /* DiagArray46 */ diag::warn_atimport_in_framework_header, -1,
  /* DiagArray47 */ diag::warn_atomic_member_access, -1,
  /* DiagArray48 */ diag::warn_atomic_op_misaligned, diag::warn_atomic_op_oversized, -1,
  /* DiagArray49 */ diag::warn_atomic_implicit_seq_cst, -1,
  /* DiagArray50 */ diag::warn_atomic_op_has_invalid_memory_order, -1,
  /* DiagArray52 */ diag::warn_atomic_property_rule, -1,
  /* DiagArray53 */ diag::warn_attribute_packed_for_bitfield, -1,
  /* DiagArray54 */ diag::warn_fe_backend_warning_attr, -1,
  /* DiagArray56 */ diag::warn_drv_disabling_vptr_no_rtti_default, -1,
  /* DiagArray57 */ diag::warn_auto_module_import, -1,
  /* DiagArray58 */ diag::ext_auto_storage_class, -1,
  /* DiagArray59 */ diag::warn_auto_var_is_id, -1,
  /* DiagArray60 */ diag::warn_availability_and_unavailable, diag::warn_availability_fuchsia_unavailable_minor, diag::warn_availability_on_static_initializer, diag::warn_availability_swift_unavailable_deprecated_only, diag::warn_availability_unknown_platform, diag::warn_availability_version_ordering, diag::warn_expected_consistent_version_separator, diag::warn_mismatched_availability, diag::warn_mismatched_availability_override, diag::warn_mismatched_availability_override_unavail, -1,
  /* DiagArray61 */ diag::warn_drv_avr_family_linking_stdlibs_not_implemented, diag::warn_drv_avr_gcc_not_found, diag::warn_drv_avr_libc_not_found, diag::warn_drv_avr_linker_section_addresses_not_implemented, diag::warn_drv_avr_mcu_not_specified, diag::warn_drv_avr_stdlib_not_linked, -1,
  /* DiagArray62 */ diag::warn_fe_backend_plugin, -1,
  /* DiagArray63 */ diag::backslash_newline_space, -1,
  /* DiagArray64 */ diag::warn_bad_function_cast, -1,
  /* DiagArray66 */ diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, -1,
  /* DiagArray67 */ diag::ext_decomp_decl_cond, -1,
  /* DiagArray68 */ diag::ext_bit_int, -1,
  /* DiagArray69 */ diag::warn_impcast_bitfield_precision_constant, -1,
  /* DiagArray70 */ diag::warn_bitfield_too_small_for_enum, diag::warn_signed_bitfield_enum_conversion, diag::warn_unsigned_bitfield_assigned_signed_enum, -1,
  /* DiagArray71 */ diag::warn_bitfield_width_exceeds_type_width, -1,
  /* DiagArray72 */ diag::warn_precedence_bitwise_conditional, -1,
  /* DiagArray73 */ diag::warn_bitwise_instead_of_logical, -1,
  /* DiagArray74 */ diag::warn_bitwise_op_in_bitwise_op, -1,
  /* DiagArray75 */ diag::warn_block_capture_autoreleasing, -1,
  /* DiagArray76 */ diag::warn_impcast_bool_to_null_pointer, -1,
  /* DiagArray78 */ diag::warn_bitwise_negation_bool, -1,
  /* DiagArray79 */ diag::warn_braces_around_init, -1,
  /* DiagArray80 */ diag::warn_incompatible_branch_protection_option, diag::warn_target_unsupported_branch_protection_attribute, diag::warn_unsupported_branch_protection, diag::warn_unsupported_branch_protection_spec, -1,
  /* DiagArray81 */ diag::warn_objc_invalid_bridge, diag::warn_objc_invalid_bridge_to_cf, -1,
  /* DiagArray82 */ diag::warn_assume_aligned_too_great, -1,
  /* DiagArray83 */ diag::ext_pp_redef_builtin_macro, diag::ext_pp_undef_builtin_macro, -1,
  /* DiagArray84 */ diag::warn_builtin_chk_overflow, -1,
  /* DiagArray85 */ diag::warn_implicit_decl_requires_sysheader, -1,
  /* DiagArray86 */ diag::warn_zero_size_struct_union_compat, -1,
  /* DiagArray90 */ diag::ext_old_implicitly_unsigned_long_cxx, diag::warn_auto_storage_class, diag::warn_cxx11_compat_user_defined_literal, diag::warn_cxx11_keyword, diag::warn_cxx11_right_shift_in_template_arg, diag::warn_explicit_instantiation_inline_0x, diag::warn_explicit_instantiation_must_be_global_0x, diag::warn_explicit_instantiation_out_of_scope_0x, diag::warn_explicit_instantiation_unqualified_wrong_namespace_0x, diag::warn_old_implicitly_unsigned_long_cxx, -1,
  /* DiagArray91 */ diag::warn_deprecated_string_literal_conversion, -1,
  /* DiagArray93 */ diag::warn_cxx11_compat_reserved_user_defined_literal, -1,
  /* DiagArray94 */ diag::ext_alias_declaration, diag::ext_array_size_conversion, diag::ext_auto_type_specifier, diag::ext_cxx11_enum_fixed_underlying_type, diag::ext_defaulted_deleted_function, diag::ext_enum_friend, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_conversion_functions, diag::ext_extern_template, diag::ext_for_range, diag::ext_generalized_initializer_lists, diag::ext_nested_name_spec_is_enum, diag::ext_nonclass_type_friend, diag::ext_nonstatic_member_init, diag::ext_override_control_keyword, diag::ext_ref_qualifier, diag::ext_rvalue_reference, diag::ext_scoped_enum, diag::ext_static_data_member_in_union, diag::ext_template_arg_object_internal, diag::ext_template_outside_of_template, diag::ext_template_parameter_default_in_function_template, diag::ext_typename_outside_of_template, diag::ext_unelaborated_friend_type, diag::ext_variadic_templates, -1,
  /* DiagArray95 */ diag::ext_extra_semi_cxx11, -1,
  /* DiagArray96 */ diag::ext_inline_namespace, -1,
  /* DiagArray97 */ diag::ext_cxx11_longlong, -1,
  /* DiagArray98 */ diag::ext_cce_narrowing, diag::ext_init_list_constant_narrowing, diag::ext_init_list_type_narrowing, diag::ext_init_list_variable_narrowing, diag::warn_init_list_constant_narrowing, diag::warn_init_list_type_narrowing, diag::warn_init_list_variable_narrowing, -1,
  /* DiagArray99 */ diag::ext_cxx14_attr, -1,
  /* DiagArray100 */ diag::ext_binary_literal_cxx14, -1,
  /* DiagArray103 */ diag::ext_constexpr_body_invalid_stmt, diag::ext_constexpr_body_multiple_return, diag::ext_constexpr_local_var, diag::ext_constexpr_type_definition, diag::ext_decltype_auto_type_specifier, diag::ext_init_capture, diag::ext_variable_template, -1,
  /* DiagArray104 */ diag::ext_cxx17_attr, -1,
  /* DiagArray106 */ diag::warn_cxx17_compat_exception_spec_in_signature, -1,
  /* DiagArray108 */ diag::ext_auto_new_list_init, diag::ext_constexpr_if, diag::ext_constexpr_on_lambda_cxx17, diag::ext_cxx_static_assert_no_message, diag::ext_decomp_decl, diag::ext_fold_expression, diag::ext_for_range_begin_end_types_differ, diag::ext_hex_literal_invalid, diag::ext_init_statement, diag::ext_inline_variable, diag::ext_multi_using_declaration, diag::ext_nested_namespace_definition, diag::ext_ns_enum_attribute, diag::ext_star_this_lambda_capture_cxx17, diag::ext_template_template_param_typename, diag::ext_using_attribute_ns, diag::ext_using_declaration_pack, -1,
  /* DiagArray113 */ diag::ext_cxx20_attr, -1,
  /* DiagArray114 */ diag::warn_cxx20_compat_aggregate_init_with_ctors, diag::warn_cxx20_compat_consteval, diag::warn_cxx20_compat_constinit, diag::warn_cxx20_compat_explicit_bool, diag::warn_cxx20_compat_spaceship, diag::warn_cxx20_compat_use_of_unaddressable_function, diag::warn_cxx20_compat_utf8_string, diag::warn_cxx20_keyword, -1,
  /* DiagArray116 */ diag::ext_cxx_designated_init, -1,
  /* DiagArray117 */ diag::ext_adl_only_template_id, diag::ext_bitfield_member_init, diag::ext_constexpr_body_invalid_stmt_cxx20, diag::ext_constexpr_ctor_missing_init, diag::ext_constexpr_function_try_block_cxx20, diag::ext_constexpr_local_var_no_init, diag::ext_constexpr_union_ctor_no_init, diag::ext_decomp_decl_spec, diag::ext_defaulted_comparison, diag::ext_equals_this_lambda_capture_cxx20, diag::ext_explicit_bool, diag::ext_for_range_init_stmt, diag::ext_init_capture_pack, diag::ext_inline_nested_namespace_definition, diag::ext_lambda_template_parameter_list, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_using_decl_scoped_enumerator, diag::ext_using_enum_declaration, -1,
  /* DiagArray121 */ diag::ext_alias_in_init_statement, diag::ext_consteval_if, diag::ext_constexpr_body_invalid_stmt_cxx2b, diag::ext_constexpr_static_var, diag::ext_cxx2b_size_t_suffix, diag::ext_decl_attrs_on_lambda, diag::ext_lambda_missing_parens, -1,
  /* DiagArray127 */ diag::warn_cxx11_compat_binary_literal, -1,
  /* DiagArray129 */ diag::warn_cxx98_compat_alias_declaration, diag::warn_cxx98_compat_alignas, diag::warn_cxx98_compat_alignof, diag::warn_cxx98_compat_attribute, diag::warn_cxx98_compat_auto_type_specifier, diag::warn_cxx98_compat_constexpr, diag::warn_cxx98_compat_ctor_list_init, diag::warn_cxx98_compat_decltype, diag::warn_cxx98_compat_defaulted_deleted_function, diag::warn_cxx98_compat_delegating_ctor, diag::warn_cxx98_compat_empty_scalar_initializer, diag::warn_cxx98_compat_empty_sizeless_initializer, diag::warn_cxx98_compat_enum_fixed_underlying_type, diag::warn_cxx98_compat_enum_friend, diag::warn_cxx98_compat_enum_nested_name_spec, diag::warn_cxx98_compat_explicit_conversion_functions, diag::warn_cxx98_compat_for_range, diag::warn_cxx98_compat_friend_is_member, diag::warn_cxx98_compat_generalized_initializer_lists, diag::warn_cxx98_compat_goto_into_protected_scope, diag::warn_cxx98_compat_indirect_goto_in_protected_scope, diag::warn_cxx98_compat_initializer_list_init, diag::warn_cxx98_compat_inline_namespace, diag::warn_cxx98_compat_lambda, diag::warn_cxx98_compat_less_colon_colon, diag::warn_cxx98_compat_literal_operator, diag::warn_cxx98_compat_literal_ucn_control_character, diag::warn_cxx98_compat_literal_ucn_escape_basic_scs, diag::warn_cxx98_compat_noexcept_decl, diag::warn_cxx98_compat_noexcept_expr, diag::warn_cxx98_compat_non_static_member_use, diag::warn_cxx98_compat_nonclass_type_friend, diag::warn_cxx98_compat_nonstatic_member_init, diag::warn_cxx98_compat_nontrivial_union_or_anon_struct_member, diag::warn_cxx98_compat_nullptr, diag::warn_cxx98_compat_override_control_keyword, diag::warn_cxx98_compat_pass_non_pod_arg_to_vararg, diag::warn_cxx98_compat_raw_string_literal, diag::warn_cxx98_compat_ref_qualifier, diag::warn_cxx98_compat_reference_list_init, diag::warn_cxx98_compat_rvalue_reference, diag::warn_cxx98_compat_scoped_enum, diag::warn_cxx98_compat_sfinae_access_control, diag::warn_cxx98_compat_static_assert, diag::warn_cxx98_compat_static_data_member_in_union, diag::warn_cxx98_compat_switch_into_protected_scope, diag::warn_cxx98_compat_template_arg_extra_parens, diag::warn_cxx98_compat_template_arg_null, diag::warn_cxx98_compat_template_arg_object_internal, diag::warn_cxx98_compat_template_outside_of_template, diag::warn_cxx98_compat_template_parameter_default_in_function_template, diag::warn_cxx98_compat_trailing_return_type, diag::warn_cxx98_compat_two_right_angle_brackets, diag::warn_cxx98_compat_typename_outside_of_template, diag::warn_cxx98_compat_unelaborated_friend_type, diag::warn_cxx98_compat_unicode_literal, diag::warn_cxx98_compat_unicode_type, diag::warn_cxx98_compat_using_decl_constructor, diag::warn_cxx98_compat_variadic_templates, -1,
  /* DiagArray130 */ diag::warn_cxx98_compat_temp_copy, -1,
  /* DiagArray131 */ diag::warn_cxx98_compat_top_level_semi, -1,
  /* DiagArray132 */ diag::warn_cxx98_compat_template_arg_local_type, -1,
  /* DiagArray133 */ diag::warn_cxx98_compat_array_size_conversion, diag::warn_cxx98_compat_cast_fn_obj, diag::warn_cxx98_compat_empty_fnmacro_arg, diag::warn_cxx98_compat_enumerator_list_comma, diag::warn_cxx98_compat_extern_template, diag::warn_cxx98_compat_longlong, diag::warn_cxx98_compat_no_newline_eof, diag::warn_cxx98_compat_pp_line_too_big, diag::warn_cxx98_compat_variadic_macro, -1,
  /* DiagArray134 */ diag::warn_cxx98_compat_template_arg_unnamed_type, -1,
  /* DiagArray135 */ diag::ext_anonymous_union, diag::ext_c11_anonymous_struct, diag::ext_c11_feature, diag::ext_typecheck_compare_complete_incomplete_pointers, -1,
  /* DiagArray136 */ diag::ext_c2x_bitint_suffix, diag::ext_c_static_assert_no_message, diag::ext_parameter_name_omitted_c2x, -1,
  /* DiagArray137 */ diag::warn_c99_compat_unicode_id, diag::warn_c99_compat_unicode_literal, diag::warn_old_implicitly_unsigned_long, -1,
  /* DiagArray138 */ diag::ext_designated_init, diag::ext_designated_init_array, diag::ext_designated_init_brace_elision, diag::ext_designated_init_mixed, diag::ext_designated_init_nested, -1,
  /* DiagArray139 */ diag::ext_aggregate_init_not_constant, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_c99_whitespace_required_after_macro_name, diag::ext_empty_fnmacro_arg, diag::ext_enumerator_list_comma_c, diag::ext_hex_constant_invalid, -1,
  /* DiagArray140 */ diag::warn_call_to_pure_virtual_member_function_from_ctor_dtor, -1,
  /* DiagArray141 */ diag::warn_called_once_gets_called_twice, diag::warn_called_once_never_called, diag::warn_called_once_never_called_when, -1,
  /* DiagArray142 */ diag::warn_cast_align, -1,
  /* DiagArray143 */ diag::warn_cast_calling_conv, -1,
  /* DiagArray144 */ diag::warn_cast_function_type, -1,
  /* DiagArray145 */ diag::warn_cast_pointer_from_sel, -1,
  /* DiagArray146 */ diag::warn_cast_qual, diag::warn_cast_qual2, -1,
  /* DiagArray147 */ diag::ext_bad_cxx_cast_qualifiers_away_incoherent, -1,
  /* DiagArray149 */ diag::warn_omp_section_is_char, diag::warn_subscript_is_char, -1,
  /* DiagArray150 */ diag::warn_drv_yc_multiple_inputs_clang_cl, diag::warn_drv_ycyu_different_arg_clang_cl, diag::warn_pp_hdrstop_filename_ignored, diag::warn_pp_macro_def_mismatch_with_pch, -1,
  /* DiagArray151 */ diag::warn_conv_to_base_not_used, diag::warn_conv_to_self_not_used, diag::warn_conv_to_void_not_used, -1,
  /* DiagArray152 */ diag::warn_pass_class_arg_to_vararg, -1,
  /* DiagArray153 */ diag::warn_cmse_nonsecure_union, -1,
  /* DiagArray154 */ diag::warn_comma_operator, -1,
  /* DiagArray155 */ diag::escaped_newline_block_comment_end, diag::ext_line_comment, diag::ext_multi_line_line_comment, diag::warn_nested_block_comment, -1,
  /* DiagArray157 */ diag::ext_typecheck_comparison_of_distinct_pointers, -1,
  /* DiagArray158 */ diag::warn_completion_handler_called_twice, diag::warn_completion_handler_never_called, diag::warn_completion_handler_never_called_when, -1,
  /* DiagArray159 */ diag::ext_complex_component_init, -1,
  /* DiagArray161 */ diag::warn_compound_token_split_by_macro, -1,
  /* DiagArray162 */ diag::warn_compound_token_split_by_whitespace, -1,
  /* DiagArray163 */ diag::ext_concept_legacy_bool_keyword, -1,
  /* DiagArray164 */ diag::ext_typecheck_cond_pointer_integer_mismatch, -1,
  /* DiagArray165 */ diag::warn_maybe_uninit_var, -1,
  /* DiagArray166 */ diag::warn_module_config_macro_undef, -1,
  /* DiagArray167 */ diag::warn_impcast_integer_precision_constant, -1,
  /* DiagArray168 */ diag::warn_is_constant_evaluated_always_true_constexpr, -1,
  /* DiagArray169 */ diag::warn_logical_instead_of_bitwise, -1,
  /* DiagArray170 */ diag::warn_cxx14_compat_constexpr_not_const, -1,
  /* DiagArray171 */ diag::warn_attr_on_unconsumable_class, diag::warn_loop_state_mismatch, diag::warn_param_return_typestate_mismatch, diag::warn_param_typestate_mismatch, diag::warn_return_typestate_for_unconsumable_type, diag::warn_return_typestate_mismatch, diag::warn_use_in_invalid_state, diag::warn_use_of_temp_in_invalid_state, -1,
  /* DiagArray172 */ diag::warn_impcast_complex_scalar, diag::warn_impcast_vector_scalar, diag::warn_opencl_generic_address_space_arg, diag::warn_template_arg_negative, diag::warn_template_arg_too_large, -1,
  /* DiagArray174 */ diag::warn_coroutine_handle_address_invalid_return_type, -1,
  /* DiagArray175 */ diag::warn_coroutine_promise_unhandled_exception_required_with_exceptions, -1,
  /* DiagArray176 */ diag::warn_unreachable_default, -1,
  /* DiagArray178 */ diag::warn_objc_cdirective_format_string, -1,
  /* DiagArray179 */ diag::warn_ctad_maybe_unsupported, -1,
  /* DiagArray181 */ diag::warn_ctu_incompat_triple, -1,
  /* DiagArray182 */ diag::warn_attribute_argument_n_negative, diag::warn_cuda_attr_lambda_position, diag::warn_kern_is_inline, diag::warn_kern_is_method, diag::warn_pragma_unroll_cuda_value_in_parens, -1,
  /* DiagArray183 */ diag::warn_default_atomic_custom_getter_setter, -1,
  /* DiagArray184 */ diag::ext_cxx11_attr_placement, -1,
  /* DiagArray185 */ diag::warn_dangling_variable, diag::warn_unsupported_lifetime_extension, -1,
  /* DiagArray186 */ diag::warn_dangling_else, -1,
  /* DiagArray187 */ diag::warn_bind_ref_member_to_parameter, diag::warn_dangling_member, diag::warn_init_ptr_member_to_parameter_addr, diag::warn_new_dangling_reference, -1,
  /* DiagArray188 */ diag::warn_dangling_lifetime_pointer, diag::warn_dangling_lifetime_pointer_member, -1,
  /* DiagArray189 */ diag::warn_new_dangling_initializer_list, -1,
  /* DiagArray190 */ diag::warn_drv_darwin_sdk_invalid_settings, -1,
  /* DiagArray191 */ diag::warn_pp_date_time, -1,
  /* DiagArray192 */ diag::warn_dealloc_in_category, -1,
  /* DiagArray193 */ diag::warn_debug_compression_unavailable, -1,
  /* DiagArray194 */ diag::ext_mixed_decls_code, diag::warn_mixed_decls_code, -1,
  /* DiagArray195 */ diag::warn_defaulted_comparison_deleted, diag::warn_defaulted_method_deleted, -1,
  /* DiagArray196 */ diag::warn_delegating_ctor_cycle, -1,
  /* DiagArray197 */ diag::warn_delete_abstract_non_virtual_dtor, -1,
  /* DiagArray198 */ diag::ext_delete_void_ptr_operand, diag::warn_delete_incomplete, -1,
  /* DiagArray199 */ diag::warn_delete_non_virtual_dtor, -1,
  /* DiagArray201 */ diag::ext_delimited_escape_sequence, -1,
  /* DiagArray202 */ diag::warn_O4_is_O3, diag::warn_access_decl_deprecated, diag::warn_deprecated_redundant_constexpr_static_def, diag::warn_drv_deprecated_arg, diag::warn_drv_treating_input_as_cxx, diag::warn_fe_concepts_ts_flag, diag::warn_option_invalid_ocl_version, diag::warn_vector_long_decl_spec_combination, -1,
  /* DiagArray203 */ diag::warn_deprecated_altivec_src_compat, -1,
  /* DiagArray204 */ diag::warn_arith_conv_mixed_anon_enum_types_cxx20, -1,
  /* DiagArray205 */ diag::warn_depr_array_comparison, -1,
  /* DiagArray206 */ diag::warn_deprecated_noreturn_spelling, diag::warn_vector_mode_deprecated, -1,
  /* DiagArray207 */ diag::warn_deprecated_comma_subscript, -1,
  /* DiagArray208 */ diag::warn_deprecated_copy, -1,
  /* DiagArray210 */ diag::warn_deprecated_copy_with_dtor, -1,
  /* DiagArray211 */ diag::warn_deprecated_copy_with_user_provided_copy, -1,
  /* DiagArray212 */ diag::warn_deprecated_copy_with_user_provided_dtor, -1,
  /* DiagArray213 */ diag::warn_deprecated_for_co_await, -1,
  /* DiagArray214 */ diag::warn_atl_uuid_deprecated, diag::warn_cstyle_param, diag::warn_deprecated, diag::warn_deprecated_fwdclass_message, diag::warn_deprecated_message, diag::warn_property_method_deprecated, -1,
  /* DiagArray215 */ diag::warn_exception_spec_deprecated, -1,
  /* DiagArray216 */ diag::warn_comparison_mixed_enum_types_cxx20, -1,
  /* DiagArray217 */ diag::warn_conditional_mixed_enum_types_cxx20, -1,
  /* DiagArray218 */ diag::warn_arith_conv_mixed_enum_types_cxx20, -1,
  /* DiagArray219 */ diag::warn_arith_conv_enum_float_cxx20, -1,
  /* DiagArray220 */ diag::warn_deprecated_coroutine_namespace, -1,
  /* DiagArray221 */ diag::warn_deprecated_def, diag::warn_unavailable_def, -1,
  /* DiagArray222 */ diag::warn_increment_bool, -1,
  /* DiagArray223 */ diag::warn_non_prototype_changes_behavior, diag::warn_strict_uses_without_prototype, -1,
  /* DiagArray224 */ diag::warn_objc_isa_assign, diag::warn_objc_isa_use, -1,
  /* DiagArray225 */ diag::warn_objc_pointer_masking, -1,
  /* DiagArray226 */ diag::warn_objc_pointer_masking_performSelector, -1,
  /* DiagArray227 */ diag::warn_pragma_deprecated_macro_use, -1,
  /* DiagArray228 */ diag::warn_deprecated_register, -1,
  /* DiagArray229 */ diag::warn_deprecated_this_capture, -1,
  /* DiagArray230 */ diag::warn_ext_int_deprecated, -1,
  /* DiagArray231 */ diag::warn_deprecated_compound_assign_volatile, diag::warn_deprecated_increment_decrement_volatile, diag::warn_deprecated_simple_assign_volatile, diag::warn_deprecated_volatile_param, diag::warn_deprecated_volatile_return, diag::warn_deprecated_volatile_structured_binding, -1,
  /* DiagArray233 */ diag::warn_direct_ivar_access, -1,
  /* DiagArray234 */ diag::pp_disabled_macro_expansion, -1,
  /* DiagArray237 */ diag::warn_conflicting_param_modifiers, diag::warn_conflicting_ret_type_modifiers, -1,
  /* DiagArray239 */ diag::warn_remainder_division_by_zero, -1,
  /* DiagArray240 */ diag::warn_attribute_dll_redeclaration, -1,
  /* DiagArray241 */ diag::warn_attribute_dllexport_explicit_instantiation_decl, -1,
  /* DiagArray242 */ diag::warn_attribute_dllimport_static_field_definition, -1,
  /* DiagArray243 */ diag::warn_doc_api_container_decl_mismatch, diag::warn_doc_block_command_duplicate, diag::warn_doc_block_command_empty_paragraph, diag::warn_doc_container_decl_mismatch, diag::warn_doc_function_method_decl_mismatch, diag::warn_doc_html_start_tag_expected_ident_or_greater, diag::warn_doc_html_start_tag_expected_quoted_string, diag::warn_doc_inline_contents_no_argument, diag::warn_doc_param_duplicate, diag::warn_doc_param_invalid_direction, diag::warn_doc_param_not_attached_to_a_function_decl, diag::warn_doc_param_not_found, diag::warn_doc_returns_attached_to_a_void_function, diag::warn_doc_returns_not_attached_to_a_function_decl, diag::warn_doc_tparam_duplicate, diag::warn_doc_tparam_not_attached_to_a_template_decl, diag::warn_doc_tparam_not_found, diag::warn_not_a_doxygen_trailing_member_comment, diag::warn_verbatim_block_end_without_start, -1,
  /* DiagArray244 */ diag::warn_doc_deprecated_not_sync, -1,
  /* DiagArray245 */ diag::warn_doc_html_end_forbidden, diag::warn_doc_html_end_unbalanced, diag::warn_doc_html_missing_end_tag, diag::warn_doc_html_start_end_mismatch, -1,
  /* DiagArray246 */ diag::warn_doc_param_spaces_in_direction, -1,
  /* DiagArray247 */ diag::warn_correct_comment_command_name, diag::warn_unknown_comment_command_name, -1,
  /* DiagArray248 */ diag::ext_dollar_in_identifier, -1,
  /* DiagArray249 */ diag::warn_impcast_double_promotion, -1,
  /* DiagArray250 */ diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_qualified_dtor_named_in_lexical_scope, -1,
  /* DiagArray251 */ diag::ext_destructor_typedef_name, -1,
  /* DiagArray252 */ diag::ext_duplicate_declspec, diag::ext_warn_duplicate_declspec, diag::warn_attribute_address_multiple_identical_qualifiers, diag::warn_duplicate_declspec, -1,
  /* DiagArray253 */ diag::warn_duplicate_enum_values, -1,
  /* DiagArray254 */ diag::warn_method_param_declaration, -1,
  /* DiagArray255 */ diag::warn_duplicate_method_decl, -1,
  /* DiagArray256 */ diag::warn_duplicate_protocol_def, -1,
  /* DiagArray257 */ diag::warn_dyn_class_memaccess, -1,
  /* DiagArray258 */ diag::ext_dynamic_exception_spec, -1,
  /* DiagArray260 */ diag::ext_enum_base_in_type_specifier, -1,
  /* DiagArray261 */ diag::ext_elaborated_enum_class, -1,
  /* DiagArray262 */ diag::ext_embedded_directive, -1,
  /* DiagArray263 */ diag::warn_empty_for_body, diag::warn_empty_if_body, diag::warn_empty_range_based_for_body, diag::warn_empty_switch_body, diag::warn_empty_while_body, -1,
  /* DiagArray264 */ diag::ext_decomp_decl_empty, -1,
  /* DiagArray265 */ diag::warn_empty_init_statement, -1,
  /* DiagArray266 */ diag::ext_empty_translation_unit, -1,
  /* DiagArray267 */ diag::warn_incomplete_encoded_type, -1,
  /* DiagArray269 */ diag::warn_comparison_mixed_enum_types, -1,
  /* DiagArray270 */ diag::warn_conditional_mixed_enum_types, -1,
  /* DiagArray271 */ diag::warn_comparison_of_mixed_enum_types_switch, -1,
  /* DiagArray272 */ diag::warn_impcast_different_enum_types, -1,
  /* DiagArray273 */ diag::warn_arith_conv_mixed_enum_types, -1,
  /* DiagArray274 */ diag::warn_arith_conv_enum_float, -1,
  /* DiagArray275 */ diag::ext_enum_too_large, diag::ext_enumerator_increment_too_large, -1,
  /* DiagArray276 */ diag::warn_cdtor_function_try_handler_mem_expr, diag::warn_exception_caught_by_earlier_handler, diag::warn_throw_in_noexcept_func, -1,
  /* DiagArray277 */ diag::ext_excess_initializers, diag::ext_excess_initializers_for_sizeless_type, diag::ext_excess_initializers_in_char_array_initializer, diag::ext_initializer_string_for_char_array_too_long, -1,
  /* DiagArray278 */ diag::warn_exit_time_destructor, -1,
  /* DiagArray279 */ diag::warn_defined_in_function_type_macro, diag::warn_defined_in_object_type_macro, -1,
  /* DiagArray280 */ diag::warn_direct_initialize_call, diag::warn_direct_super_initialize_call, -1,
  /* DiagArray281 */ diag::warn_arc_strong_pointer_objc_pointer, -1,
  /* DiagArray282 */ diag::ext_export_no_name_block, diag::ext_export_no_names, -1,
  /* DiagArray283 */ diag::ext_export_using_directive, -1,
  /* DiagArray284 */ diag::warn_zero_size_struct_union_in_extern_c, -1,
  /* DiagArray285 */ diag::warn_extern_init, -1,
  /* DiagArray286 */ diag::warn_arm_interrupt_calling_convention, -1,
  /* DiagArray287 */ diag::warn_namespace_member_extra_qualification, -1,
  /* DiagArray288 */ diag::ext_extra_semi, diag::warn_extra_semi_after_mem_fn_def, -1,
  /* DiagArray289 */ diag::warn_null_statement, -1,
  /* DiagArray290 */ diag::ext_pp_extra_tokens_at_eol, diag::warn_omp_extra_tokens_at_eol, -1,
  /* DiagArray291 */ diag::warn_final_dtor_non_final_class, -1,
  /* DiagArray292 */ diag::warn_pragma_final_macro, -1,
  /* DiagArray293 */ diag::ext_clang_c_enum_fixed_underlying_type, -1,
  /* DiagArray294 */ diag::warn_fixedpoint_constant_overflow, -1,
  /* DiagArray295 */ diag::warn_flag_enum_constant_out_of_range, -1,
  /* DiagArray296 */ diag::ext_flexible_array_in_array, diag::ext_flexible_array_in_struct, -1,
  /* DiagArray297 */ diag::warn_impcast_float_integer, -1,
  /* DiagArray298 */ diag::warn_floatingpoint_eq, -1,
  /* DiagArray299 */ diag::warn_impcast_float_to_integer, diag::warn_impcast_float_to_integer_out_of_range, -1,
  /* DiagArray300 */ diag::warn_impcast_float_to_integer_zero, -1,
  /* DiagArray301 */ diag::warn_redundant_loop_iteration, diag::warn_variables_not_in_loop_body, -1,
  /* DiagArray302 */ diag::warn_format_P_no_precision, diag::warn_format_argument_needs_cast, diag::warn_format_bool_as_character, diag::warn_format_conversion_argument_type_mismatch, diag::warn_format_invalid_annotation, diag::warn_format_invalid_positional_specifier, diag::warn_format_mix_positional_nonpositional_args, diag::warn_format_nonsensical_length, diag::warn_format_string_is_wide_literal, diag::warn_format_zero_positional_specifier, diag::warn_missing_format_string, diag::warn_printf_ObjCflags_without_ObjCConversion, diag::warn_printf_asterisk_missing_arg, diag::warn_printf_asterisk_wrong_type, diag::warn_printf_empty_objc_flag, diag::warn_printf_format_string_contains_null_char, diag::warn_printf_format_string_not_null_terminated, diag::warn_printf_ignored_flag, diag::warn_printf_incomplete_specifier, diag::warn_printf_invalid_objc_flag, diag::warn_printf_narg_not_supported, diag::warn_printf_nonsensical_flag, diag::warn_printf_nonsensical_optional_amount, diag::warn_printf_positional_arg_exceeds_data_args, diag::warn_scanf_nonzero_width, diag::warn_scanf_scanlist_incomplete, -1,
  /* DiagArray303 */ diag::warn_printf_data_arg_not_used, -1,
  /* DiagArray304 */ diag::warn_printf_insufficient_data_args, -1,
  /* DiagArray305 */ diag::warn_format_invalid_conversion, -1,
  /* DiagArray306 */ diag::warn_format_non_standard, diag::warn_format_non_standard_conversion_spec, diag::warn_format_non_standard_positional_arg, -1,
  /* DiagArray307 */ diag::warn_format_nonliteral, -1,
  /* DiagArray308 */ diag::warn_format_argument_needs_cast_pedantic, diag::warn_format_conversion_argument_type_mismatch_pedantic, -1,
  /* DiagArray309 */ diag::warn_format_nonliteral_noargs, -1,
  /* DiagArray310 */ diag::warn_format_conversion_argument_type_mismatch_confusion, -1,
  /* DiagArray312 */ diag::warn_empty_format_string, -1,
  /* DiagArray314 */ diag::warn_fortify_scanf_overflow, diag::warn_fortify_source_format_overflow, diag::warn_fortify_source_overflow, diag::warn_fortify_source_size_mismatch, diag::warn_fortify_strlen_overflow, -1,
  /* DiagArray315 */ diag::warn_four_char_character_literal, -1,
  /* DiagArray316 */ diag::warn_frame_address, -1,
  /* DiagArray317 */ diag::warn_fe_backend_frame_larger_than, diag::warn_fe_frame_larger_than, -1,
  /* DiagArray319 */ diag::warn_framework_include_private_from_public, -1,
  /* DiagArray320 */ diag::warn_free_nonheap_object, -1,
  /* DiagArray321 */ diag::warn_function_def_in_objc_container, -1,
  /* DiagArray322 */ diag::warn_dispatch_body_ignored, diag::warn_multiversion_duplicate_entries, diag::warn_target_clone_duplicate_options, -1,
  /* DiagArray323 */ diag::warn_drv_fuse_ld_path, -1,
  /* DiagArray326 */ diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_warn_gnu_final, diag::warn_attribute_on_function_definition, diag::warn_break_binds_to_switch, diag::warn_cleanup_ext, diag::warn_gcc_attribute_location, diag::warn_gcc_ignores_type_attr, diag::warn_gcc_variable_decl_in_for_loop, diag::warn_loop_ctrl_binds_to_inner, -1,
  /* DiagArray327 */ diag::warn_global_constructor, diag::warn_global_destructor, -1,
  /* DiagArray328 */ diag::warn_drv_global_isel_incomplete, diag::warn_drv_global_isel_incomplete_opt, -1,
  /* DiagArray330 */ diag::ext_alignof_expr, -1,
  /* DiagArray331 */ diag::ext_gnu_anonymous_struct, -1,
  /* DiagArray332 */ diag::ext_array_init_parens, -1,
  /* DiagArray333 */ diag::ext_auto_type, -1,
  /* DiagArray334 */ diag::ext_binary_literal, -1,
  /* DiagArray335 */ diag::ext_gnu_case_range, -1,
  /* DiagArray336 */ diag::ext_integer_complex, -1,
  /* DiagArray337 */ diag::ext_array_init_copy, -1,
  /* DiagArray338 */ diag::ext_gnu_conditional_expr, -1,
  /* DiagArray339 */ diag::ext_gnu_array_range, diag::ext_gnu_missing_equal_designator, diag::ext_gnu_old_style_field_designator, -1,
  /* DiagArray340 */ diag::ext_gnu_empty_initializer, -1,
  /* DiagArray341 */ diag::ext_empty_struct_union, diag::ext_flexible_array_empty_aggregate_gnu, diag::ext_no_named_members_in_struct_union, -1,
  /* DiagArray342 */ diag::ext_flexible_array_init, -1,
  /* DiagArray343 */ diag::ext_flexible_array_union_gnu, -1,
  /* DiagArray344 */ diag::ext_expr_not_ice, diag::ext_in_class_initializer_non_constant, diag::ext_vla_folded_to_constant, -1,
  /* DiagArray345 */ diag::ext_imaginary_constant, -1,
  /* DiagArray346 */ diag::ext_pp_include_next_directive, -1,
  /* DiagArray347 */ diag::warn_gnu_inline_cplusplus_without_extern, -1,
  /* DiagArray348 */ diag::ext_gnu_address_of_label, diag::ext_gnu_indirect_goto, -1,
  /* DiagArray349 */ diag::warn_gnu_null_ptr_arith, -1,
  /* DiagArray350 */ diag::ext_gnu_ptr_func_arith, diag::ext_gnu_subscript_void_type, diag::ext_gnu_void_ptr, -1,
  /* DiagArray351 */ diag::ext_forward_ref_enum_def, -1,
  /* DiagArray352 */ diag::ext_gnu_statement_expr, -1,
  /* DiagArray353 */ diag::ext_in_class_initializer_float_type, -1,
  /* DiagArray354 */ diag::ext_string_literal_operator_template, -1,
  /* DiagArray355 */ diag::ext_typecheck_cast_to_union, -1,
  /* DiagArray356 */ diag::ext_variable_sized_type_in_struct, -1,
  /* DiagArray357 */ diag::ext_pp_line_zero, -1,
  /* DiagArray358 */ diag::ext_missing_varargs_arg, diag::ext_paste_comma, -1,
  /* DiagArray359 */ diag::warn_maybe_capture_bad_target_this_ptr, -1,
  /* DiagArray360 */ diag::warn_header_guard, -1,
  /* DiagArray361 */ diag::warn_using_directive_in_header, -1,
  /* DiagArray362 */ diag::warn_ignored_hip_only_option, -1,
  /* DiagArray363 */ diag::warn_condition_is_idiomatic_assignment, -1,
  /* DiagArray364 */ diag::ext_cannot_use_trivial_abi, diag::warn_alias_to_weak_alias, diag::warn_alias_with_section, diag::warn_aligned_attr_underaligned, diag::warn_attr_abi_tag_namespace, diag::warn_attribute_after_definition_ignored, diag::warn_attribute_cmse_entry_static, diag::warn_attribute_dllexport_explicit_instantiation_def, diag::warn_attribute_has_no_effect_on_compile_time_if, diag::warn_attribute_has_no_effect_on_infinite_loop, diag::warn_attribute_iboutlet, diag::warn_attribute_ignored, diag::warn_attribute_ignored_for_field_of_type, diag::warn_attribute_ignored_no_calls_in_stmt, diag::warn_attribute_ignored_on_inline, diag::warn_attribute_ignored_on_non_definition, diag::warn_attribute_invalid_on_definition, diag::warn_attribute_no_decl, diag::warn_attribute_nonnull_no_pointers, diag::warn_attribute_nonnull_parm_no_args, diag::warn_attribute_not_on_decl, diag::warn_attribute_pointer_or_reference_only, diag::warn_attribute_pointers_only, diag::warn_attribute_precede_definition, diag::warn_attribute_return_pointers_only, diag::warn_attribute_return_pointers_refs_only, diag::warn_attribute_sentinel_named_arguments, diag::warn_attribute_sentinel_not_variadic, diag::warn_attribute_type_not_supported, diag::warn_attribute_unknown_visibility, diag::warn_attribute_void_function_method, diag::warn_attribute_weak_on_field, diag::warn_attribute_weak_on_local, diag::warn_attribute_wrong_decl_type, diag::warn_attribute_wrong_decl_type_str, diag::warn_attributes_likelihood_ifstmt_conflict, diag::warn_block_literal_attributes_on_omitted_return_type, diag::warn_cconv_unsupported, diag::warn_cxx11_gnu_attribute_on_type, diag::warn_declspec_allocator_nonpointer, diag::warn_declspec_attribute_ignored, diag::warn_deprecated_anonymous_namespace, diag::warn_deprecated_ignored_on_using, diag::warn_dllimport_dropped_from_inline_function, diag::warn_duplicate_attribute, diag::warn_duplicate_attribute_exact, diag::warn_function_attribute_ignored_in_stmt, diag::warn_function_stmt_attribute_precedence, diag::warn_gc_attribute_weak_on_local, diag::warn_gnu_inline_attribute_requires_inline, diag::warn_ignored_ms_inheritance, diag::warn_ignored_objc_externally_retained, diag::warn_import_on_definition, diag::warn_internal_linkage_local_storage, diag::warn_interrupt_attribute_invalid, diag::warn_microsoft_qualifiers_ignored, diag::warn_mig_server_routine_does_not_return_kern_return_t, diag::warn_mismatched_import, diag::warn_mmap_unknown_attribute, diag::warn_nocf_check_attribute_ignored, diag::warn_noderef_on_non_pointer_or_array, diag::warn_nothrow_attribute_ignored, diag::warn_ns_attribute_wrong_parameter_type, diag::warn_ns_attribute_wrong_return_type, diag::warn_objc_direct_ignored, diag::warn_objc_direct_property_ignored, diag::warn_opencl_attr_deprecated_ignored, diag::warn_require_const_init_added_too_late, diag::warn_riscv_repeated_interrupt_attribute, diag::warn_sycl_kernel_invalid_template_param_type, diag::warn_sycl_kernel_num_of_function_params, diag::warn_sycl_kernel_num_of_template_params, diag::warn_sycl_kernel_return_type, diag::warn_transparent_union_attribute_field_size_align, diag::warn_transparent_union_attribute_floating, diag::warn_transparent_union_attribute_not_definition, diag::warn_transparent_union_attribute_zero_fields, diag::warn_type_attribute_wrong_type, diag::warn_unhandled_ms_attribute_ignored, diag::warn_unsupported_target_attribute, diag::warn_wrong_clang_attr_namespace, -1,
  /* DiagArray365 */ diag::warn_missing_sdksettings_for_availability_checking, -1,
  /* DiagArray366 */ diag::warn_drv_unsupported_opt_for_target, diag::warn_ignored_gcc_optimization, -1,
  /* DiagArray367 */ diag::warn_pragma_intrinsic_builtin, -1,
  /* DiagArray368 */ diag::warn_pragma_optimize, -1,
  /* DiagArray369 */ diag::warn_pragma_align_expected_equal, diag::warn_pragma_align_invalid_option, diag::warn_pragma_comment_ignored, diag::warn_pragma_debug_missing_argument, diag::warn_pragma_debug_unexpected_command, diag::warn_pragma_debug_unknown_module, diag::warn_pragma_expected_action_or_r_paren, diag::warn_pragma_expected_colon, diag::warn_pragma_expected_colon_r_paren, diag::warn_pragma_expected_comma, diag::warn_pragma_expected_identifier, diag::warn_pragma_expected_init_seg, diag::warn_pragma_expected_integer, diag::warn_pragma_expected_lparen, diag::warn_pragma_expected_non_wide_string, diag::warn_pragma_expected_predicate, diag::warn_pragma_expected_punc, diag::warn_pragma_expected_rparen, diag::warn_pragma_expected_section_label_or_name, diag::warn_pragma_expected_section_name, diag::warn_pragma_expected_section_push_pop_or_name, diag::warn_pragma_expected_string, diag::warn_pragma_extra_tokens_at_eol, diag::warn_pragma_force_cuda_host_device_bad_arg, diag::warn_pragma_fp_ignored, diag::warn_pragma_init_seg_unsupported_target, diag::warn_pragma_invalid_action, diag::warn_pragma_invalid_argument, diag::warn_pragma_invalid_specific_action, diag::warn_pragma_missing_argument, diag::warn_pragma_ms_fenv_access, diag::warn_pragma_ms_struct, diag::warn_pragma_options_align_reset_failed, diag::warn_pragma_options_expected_align, diag::warn_pragma_pack_invalid_alignment, diag::warn_pragma_pack_malformed, diag::warn_pragma_pop_failed, diag::warn_pragma_pop_macro_no_push, diag::warn_pragma_unknown_extension, diag::warn_pragma_unsupported_action, diag::warn_pragma_unsupported_extension, diag::warn_pragma_unused_expected_var, diag::warn_pragma_unused_expected_var_arg, diag::warn_pragma_unused_undeclared_var, diag::warn_stdc_unknown_rounding_mode, -1,
  /* DiagArray370 */ diag::warn_arc_lifetime_result_type, diag::warn_block_literal_qualifiers_on_omitted_return_type, diag::warn_qual_return_type, diag::warn_typecheck_function_qualifiers_ignored, -1,
  /* DiagArray371 */ diag::warn_typecheck_reference_qualifiers, -1,
  /* DiagArray373 */ diag::warn_auto_implicit_atomic_property, diag::warn_implicit_atomic_property, -1,
  /* DiagArray374 */ diag::warn_impcast_integer_float_precision_constant, -1,
  /* DiagArray375 */ diag::warn_impcast_floating_point_to_bool, -1,
  /* DiagArray376 */ diag::ext_implicit_exception_spec_mismatch, -1,
  /* DiagArray377 */ diag::warn_unannotated_fallthrough, -1,
  /* DiagArray378 */ diag::warn_unannotated_fallthrough_per_function, -1,
  /* DiagArray379 */ diag::warn_impcast_fixed_point_range, -1,
  /* DiagArray380 */ diag::warn_impcast_float_precision, diag::warn_impcast_float_result_precision, -1,
  /* DiagArray381 */ diag::ext_implicit_function_decl_c99, diag::ext_implicit_lib_function_decl, diag::ext_implicit_lib_function_decl_c99, diag::warn_builtin_unknown, diag::warn_implicit_function_decl, -1,
  /* DiagArray382 */ diag::ext_missing_type_specifier, -1,
  /* DiagArray383 */ diag::warn_impcast_high_order_zero_bits, diag::warn_impcast_integer_precision, -1,
  /* DiagArray384 */ diag::warn_impcast_integer_float_precision, -1,
  /* DiagArray385 */ diag::warn_implicitly_retains_self, -1,
  /* DiagArray386 */ diag::ext_integer_literal_too_large_for_signed, -1,
  /* DiagArray388 */ diag::ext_pp_import_directive, -1,
  /* DiagArray389 */ diag::warn_inaccessible_base_class, -1,
  /* DiagArray390 */ diag::pp_include_next_absolute_path, -1,
  /* DiagArray391 */ diag::pp_include_next_in_primary, -1,
  /* DiagArray392 */ diag::warn_deep_exception_specs_differ, diag::warn_incompatible_exception_specs, -1,
  /* DiagArray393 */ diag::ext_typecheck_convert_incompatible_function_pointer, -1,
  /* DiagArray394 */ diag::warn_redecl_library_builtin, -1,
  /* DiagArray395 */ diag::warn_cxx_ms_struct, diag::warn_npot_ms_struct, -1,
  /* DiagArray396 */ diag::ext_typecheck_convert_incompatible_pointer, -1,
  /* DiagArray397 */ diag::ext_nested_pointer_qualifier_mismatch, diag::ext_typecheck_convert_discards_qualifiers, diag::warn_bad_cxx_cast_nested_pointer_addr_space, -1,
  /* DiagArray398 */ diag::warn_property_types_are_incompatible, -1,
  /* DiagArray399 */ diag::warn_incompatible_sysroot, -1,
  /* DiagArray400 */ diag::warn_mmap_incomplete_framework_module_declaration, -1,
  /* DiagArray401 */ diag::warn_undef_method_impl, -1,
  /* DiagArray403 */ diag::warn_implicit_decl_no_jmp_buf, -1,
  /* DiagArray404 */ diag::warn_missing_submodule, diag::warn_mmap_umbrella_dir_not_found, diag::warn_uncovered_module_header, -1,
  /* DiagArray405 */ diag::warn_redeclaration_without_attribute_prev_attribute_ignored, diag::warn_redeclaration_without_import_attribute, -1,
  /* DiagArray406 */ diag::warn_inconsistent_destructor_marked_not_override_overriding, -1,
  /* DiagArray407 */ diag::warn_inconsistent_function_marked_not_override_overriding, -1,
  /* DiagArray408 */ diag::ext_increment_bool, -1,
  /* DiagArray409 */ diag::warn_infinite_recursive_function, -1,
  /* DiagArray411 */ diag::ext_initializer_overrides, diag::warn_initializer_overrides, -1,
  /* DiagArray412 */ diag::ext_out_of_line_qualified_id_type_names_constructor, -1,
  /* DiagArray414 */ diag::warn_fe_inline_asm, -1,
  /* DiagArray415 */ diag::warn_inline_namespace_reopened_noninline, -1,
  /* DiagArray416 */ diag::ext_operator_new_delete_declared_inline, -1,
  /* DiagArray417 */ diag::warn_explicit_instantiation_after_specialization, -1,
  /* DiagArray418 */ diag::ext_typecheck_convert_int_pointer, diag::ext_typecheck_convert_pointer_int, -1,
  /* DiagArray420 */ diag::warn_enum_constant_in_bool_context, diag::warn_left_shift_in_bool_context, -1,
  /* DiagArray421 */ diag::warn_int_to_pointer_cast, -1,
  /* DiagArray422 */ diag::warn_int_to_void_pointer_cast, -1,
  /* DiagArray423 */ diag::warn_integer_constant_overflow, -1,
  /* DiagArray424 */ diag::warn_anyx86_interrupt_regsave, -1,
  /* DiagArray425 */ diag::warn_drv_missing_plugin_arg, diag::warn_drv_missing_plugin_name, diag::warn_drv_msp430_hwmult_mismatch, diag::warn_drv_msp430_hwmult_no_device, diag::warn_drv_msp430_hwmult_unsupported, diag::warn_drv_object_size_disabled_O0, diag::warn_drv_optimization_value, diag::warn_target_unsupported_extension, -1,
  /* DiagArray426 */ diag::ext_constexpr_function_never_constant_expr, -1,
  /* DiagArray427 */ diag::warn_iboutlet_object_type, diag::warn_iboutletcollection_property_assign, -1,
  /* DiagArray428 */ diag::warn_invalid_initializer_from_system_header, -1,
  /* DiagArray429 */ diag::warn_invalid_ios_deployment_target, -1,
  /* DiagArray430 */ diag::warn_attribute_no_builtin_invalid_builtin_name, -1,
  /* DiagArray431 */ diag::warn_falloff_noreturn_function, diag::warn_noreturn_function_has_return_expr, -1,
  /* DiagArray432 */ diag::ext_offsetof_non_pod_type, diag::ext_offsetof_non_standardlayout_type, -1,
  /* DiagArray433 */ diag::warn_drv_ps_sdk_dir, diag::warn_drv_unable_to_find_directory_expected, -1,
  /* DiagArray434 */ diag::ext_partial_spec_not_more_specialized_than_primary, -1,
  /* DiagArray436 */ diag::ext_empty_character, diag::ext_unterminated_char_or_string, -1,
  /* DiagArray437 */ diag::warn_bad_character_encoding, diag::warn_bad_string_encoding, -1,
  /* DiagArray438 */ diag::ext_pp_bad_paste_ms, -1,
  /* DiagArray439 */ diag::warn_jump_out_of_seh_finally, -1,
  /* DiagArray440 */ diag::ext_keyword_as_ident, -1,
  /* DiagArray441 */ diag::warn_pp_macro_hides_keyword, -1,
  /* DiagArray442 */ diag::ext_param_promoted_not_compatible_with_prototype, -1,
  /* DiagArray443 */ diag::ext_token_used, -1,
  /* DiagArray444 */ diag::warn_parameter_size, diag::warn_return_value_size, -1,
  /* DiagArray446 */ diag::warn_fe_linking_module, -1,
  /* DiagArray447 */ diag::warn_impcast_literal_float_to_integer, diag::warn_impcast_literal_float_to_integer_out_of_range, -1,
  /* DiagArray448 */ diag::warn_float_compare_literal, diag::warn_float_overflow, diag::warn_float_underflow, -1,
  /* DiagArray449 */ diag::ext_template_arg_local_type, -1,
  /* DiagArray450 */ diag::warn_logical_not_on_lhs_of_check, -1,
  /* DiagArray451 */ diag::warn_logical_and_in_logical_or, -1,
  /* DiagArray452 */ diag::ext_c99_longlong, -1,
  /* DiagArray454 */ diag::ext_pp_macro_redef, -1,
  /* DiagArray455 */ diag::ext_main_used, diag::ext_noreturn_main, diag::ext_variadic_main, diag::warn_main_one_arg, diag::warn_main_redefined, diag::warn_main_returns_bool_literal, diag::warn_static_main, -1,
  /* DiagArray456 */ diag::ext_main_returns_nonint, -1,
  /* DiagArray457 */ diag::warn_has_warning_invalid_option, -1,
  /* DiagArray458 */ diag::ext_many_braces_around_init, -1,
  /* DiagArray459 */ diag::warn_max_tokens, diag::warn_max_tokens_total, -1,
  /* DiagArray460 */ diag::warn_max_unsigned_zero, -1,
  /* DiagArray461 */ diag::warn_suspicious_sizeof_memset, -1,
  /* DiagArray462 */ diag::warn_memsize_comparison, -1,
  /* DiagArray463 */ diag::warn_non_contravariant_param_types, diag::warn_non_covariant_ret_types, -1,
  /* DiagArray465 */ diag::ext_ms_abstract_keyword, -1,
  /* DiagArray466 */ diag::ext_anonymous_record_with_type, diag::ext_ms_anonymous_record, -1,
  /* DiagArray467 */ diag::ext_ms_cast_fn_obj, diag::ext_ms_impcast_fn_obj, -1,
  /* DiagArray468 */ diag::ext_charize_microsoft, -1,
  /* DiagArray469 */ diag::ext_comment_paste_microsoft, -1,
  /* DiagArray470 */ diag::ext_default_init_const, -1,
  /* DiagArray471 */ diag::ext_pp_operator_used_as_macro_name, -1,
  /* DiagArray472 */ diag::ext_param_default_argument_redefinition, -1,
  /* DiagArray473 */ diag::warn_attribute_section_drectve, -1,
  /* DiagArray474 */ diag::ext_ctrl_z_eof_microsoft, -1,
  /* DiagArray475 */ diag::ext_ms_forward_ref_enum, -1,
  /* DiagArray476 */ diag::ext_enumerator_too_large, -1,
  /* DiagArray477 */ diag::ext_ellipsis_exception_spec, diag::ext_incomplete_in_exception_spec, diag::ext_mismatched_exception_spec, diag::ext_mismatched_exception_spec_explicit_instantiation, diag::ext_override_exception_spec, -1,
  /* DiagArray478 */ diag::warn_microsoft_dependent_exists, -1,
  /* DiagArray479 */ diag::ext_ms_explicit_constructor_call, -1,
  /* DiagArray480 */ diag::warn_member_extra_qualification, -1,
  /* DiagArray481 */ diag::ext_ms_c_enum_fixed_underlying_type, -1,
  /* DiagArray482 */ diag::ext_flexible_array_empty_aggregate_ms, diag::ext_flexible_array_union_ms, -1,
  /* DiagArray483 */ diag::ext_goto_into_protected_scope, -1,
  /* DiagArray484 */ diag::ext_ms_ambiguous_direct_base, -1,
  /* DiagArray485 */ diag::ext_pp_include_search_ms, -1,
  /* DiagArray486 */ diag::ext_mutable_reference, -1,
  /* DiagArray487 */ diag::ext_pure_function_definition, -1,
  /* DiagArray488 */ diag::ext_static_non_static, -1,
  /* DiagArray489 */ diag::ext_ms_sealed_keyword, -1,
  /* DiagArray490 */ diag::ext_ms_static_assert, -1,
  /* DiagArray491 */ diag::ext_explicit_instantiation_duplicate, diag::ext_found_in_dependent_base, diag::ext_found_later_in_class, diag::ext_ms_delayed_template_argument, diag::ext_ms_deref_template_argument, diag::ext_ms_template_spec_redecl_out_of_scope, diag::ext_ms_template_type_arg_missing_typename, diag::ext_static_out_of_line, diag::ext_undeclared_unqual_id_with_dependent_base, -1,
  /* DiagArray492 */ diag::ext_template_param_shadow, -1,
  /* DiagArray493 */ diag::ext_union_member_of_reference_type, -1,
  /* DiagArray494 */ diag::ext_friend_tag_redecl_outside_namespace, -1,
  /* DiagArray495 */ diag::ext_ms_using_declaration_inaccessible, -1,
  /* DiagArray496 */ diag::ext_pseudo_dtor_on_void, -1,
  /* DiagArray497 */ diag::warn_profile_data_misexpect, -1,
  /* DiagArray498 */ diag::warn_misleading_indentation, -1,
  /* DiagArray499 */ diag::warn_mismatched_delete_new, -1,
  /* DiagArray500 */ diag::warn_conflicting_param_types, -1,
  /* DiagArray501 */ diag::warn_conflicting_ret_types, -1,
  /* DiagArray502 */ diag::warn_struct_class_previous_tag_mismatch, diag::warn_struct_class_tag_mismatch, -1,
  /* DiagArray503 */ diag::warn_missing_braces, -1,
  /* DiagArray504 */ diag::ext_constinit_missing, -1,
  /* DiagArray505 */ diag::ext_no_declarators, diag::ext_standalone_specifier, diag::ext_typedef_without_a_name, diag::warn_standalone_specifier, -1,
  /* DiagArray506 */ diag::ext_missing_exception_specification, -1,
  /* DiagArray507 */ diag::warn_missing_field_initializers, -1,
  /* DiagArray510 */ diag::warn_missing_method_return_type, -1,
  /* DiagArray511 */ diag::warn_overriding_method_missing_noescape, -1,
  /* DiagArray512 */ diag::warn_suggest_noreturn_block, diag::warn_suggest_noreturn_function, -1,
  /* DiagArray513 */ diag::warn_cconv_knr, -1,
  /* DiagArray514 */ diag::warn_missing_prototype, -1,
  /* DiagArray515 */ diag::warn_missing_selector_name, -1,
  /* DiagArray516 */ diag::warn_missing_sysroot, -1,
  /* DiagArray517 */ diag::warn_missing_variable_declarations, -1,
  /* DiagArray518 */ diag::warn_assume_attribute_string_unknown_suggested, -1,
  /* DiagArray519 */ diag::remark_module_build, diag::remark_module_build_done, diag::remark_module_lock_failure, diag::remark_module_lock_timeout, -1,
  /* DiagArray520 */ diag::warn_module_conflict, diag::warn_module_system_bit_conflict, -1,
  /* DiagArray521 */ diag::warn_module_config_mismatch, -1,
  /* DiagArray522 */ diag::warn_duplicate_module_file_extension, -1,
  /* DiagArray523 */ diag::remark_module_import, -1,
  /* DiagArray524 */ diag::ext_module_import_in_extern_c, -1,
  /* DiagArray525 */ diag::remark_module_lock, -1,
  /* DiagArray526 */ diag::ext_equivalent_internal_linkage_decl_in_modules, -1,
  /* DiagArray527 */ diag::ext_module_import_not_at_top_level_noop, -1,
  /* DiagArray531 */ diag::warn_drv_msvc_not_found, -1,
  /* DiagArray532 */ diag::warn_multichar_character_literal, -1,
  /* DiagArray533 */ diag::warn_vbase_moved_multiple_times, -1,
  /* DiagArray535 */ diag::ext_anonymous_record_with_anonymous_type, -1,
  /* DiagArray537 */ diag::warn_operator_new_returns_null, -1,
  /* DiagArray538 */ diag::ext_no_newline_eof, diag::warn_no_newline_eof, -1,
  /* DiagArray539 */ diag::warn_dereference_of_noderef_type, diag::warn_dereference_of_noderef_type_no_decl, diag::warn_noderef_to_dereferenceable_pointer, -1,
  /* DiagArray541 */ diag::ext_non_c_like_anon_struct_in_typedef, -1,
  /* DiagArray543 */ diag::warn_non_literal_null_pointer, -1,
  /* DiagArray544 */ diag::warn_non_modular_include_in_framework_module, -1,
  /* DiagArray545 */ diag::warn_non_modular_include_in_module, -1,
  /* DiagArray546 */ diag::warn_cannot_pass_non_pod_arg_to_vararg, diag::warn_non_pod_vararg_with_format_string, diag::warn_second_parameter_to_va_arg_not_pod, diag::warn_second_parameter_to_va_arg_ownership_qualified, -1,
  /* DiagArray547 */ diag::warn_alignment_not_power_of_two, -1,
  /* DiagArray548 */ diag::warn_non_virtual_dtor, -1,
  /* DiagArray549 */ diag::warn_null_arg, diag::warn_null_ret, -1,
  /* DiagArray551 */ diag::pp_nonportable_path, -1,
  /* DiagArray552 */ diag::pp_nonportable_system_path, -1,
  /* DiagArray553 */ diag::warn_neon_vector_initializer_non_portable, -1,
  /* DiagArray554 */ diag::warn_cstruct_memaccess, -1,
  /* DiagArray555 */ diag::warn_nsconsumed_attribute_mismatch, -1,
  /* DiagArray556 */ diag::warn_nsreturns_retained_attribute_mismatch, -1,
  /* DiagArray557 */ diag::warn_null_in_arithmetic_operation, diag::warn_null_in_comparison_operation, -1,
  /* DiagArray558 */ diag::null_in_char_or_string, diag::null_in_file, -1,
  /* DiagArray559 */ diag::warn_impcast_null_pointer_to_integer, -1,
  /* DiagArray560 */ diag::warn_binding_null_to_reference, diag::warn_indirection_through_null, -1,
  /* DiagArray561 */ diag::warn_pointer_arith_null_ptr, -1,
  /* DiagArray562 */ diag::warn_pointer_sub_null_ptr, -1,
  /* DiagArray563 */ diag::warn_conflicting_nullability_attr_overriding_param_types, diag::warn_conflicting_nullability_attr_overriding_ret_types, diag::warn_mismatched_nullability_attr, diag::warn_null_resettable_setter, diag::warn_nullability_duplicate, -1,
  /* DiagArray564 */ diag::warn_nullability_missing, -1,
  /* DiagArray565 */ diag::warn_nullability_missing_array, -1,
  /* DiagArray566 */ diag::warn_nullability_declspec, -1,
  /* DiagArray567 */ diag::ext_nullability, -1,
  /* DiagArray568 */ diag::warn_nullability_inferred_on_nested_type, -1,
  /* DiagArray569 */ diag::warn_nullability_lost, -1,
  /* DiagArray570 */ diag::warn_autosynthesis_property_ivar_match, -1,
  /* DiagArray571 */ diag::warn_impcast_constant_value_to_objc_bool, -1,
  /* DiagArray572 */ diag::warn_objc_boxing_invalid_utf8_string, -1,
  /* DiagArray573 */ diag::warn_objc_circular_container, -1,
  /* DiagArray575 */ diag::warn_objc_designated_init_missing_super_call, diag::warn_objc_designated_init_non_designated_init_call, diag::warn_objc_designated_init_non_super_designated_init_call, diag::warn_objc_implementation_missing_designated_init_override, diag::warn_objc_secondary_init_missing_init_call, diag::warn_objc_secondary_init_super_init_call, -1,
  /* DiagArray576 */ diag::warn_nsdictionary_duplicate_key, -1,
  /* DiagArray577 */ diag::warn_superclass_variable_sized_type_not_at_end, diag::warn_variable_sized_ivar_visibility, -1,
  /* DiagArray578 */ diag::warn_forward_class_redefinition, -1,
  /* DiagArray579 */ diag::warn_ivars_in_interface, -1,
  /* DiagArray580 */ diag::warn_objc_literal_comparison, -1,
  /* DiagArray581 */ diag::warn_impcast_objective_c_literal_to_bool, diag::warn_objc_collection_literal_element, -1,
  /* DiagArray582 */ diag::warn_pp_objc_macro_redef_ignored, -1,
  /* DiagArray583 */ diag::warn_messaging_unqualified_id, -1,
  /* DiagArray584 */ diag::warn_class_method_not_found, diag::warn_class_method_not_found_with_typo, diag::warn_inst_method_not_found, diag::warn_instance_method_not_found_with_typo, diag::warn_instance_method_on_class_found, diag::warn_root_inst_method_not_found, -1,
  /* DiagArray585 */ diag::warn_missing_explicit_synthesis, -1,
  /* DiagArray586 */ diag::warn_objc_missing_super_call, -1,
  /* DiagArray587 */ diag::warn_multiple_method_decl, -1,
  /* DiagArray588 */ diag::warn_objc_property_retain_of_block, -1,
  /* DiagArray589 */ diag::warn_objc_pointer_cxx_catch_fragile, -1,
  /* DiagArray590 */ diag::warn_objc_property_assign_on_object, -1,
  /* DiagArray591 */ diag::warn_impl_required_for_class_property, diag::warn_impl_required_in_category_for_class_property, diag::warn_setter_getter_impl_required, diag::warn_setter_getter_impl_required_in_category, -1,
  /* DiagArray592 */ diag::warn_property_implicitly_mismatched, -1,
  /* DiagArray593 */ diag::warn_cocoa_naming_owned_rule, -1,
  /* DiagArray594 */ diag::warn_objc_property_default_assign_on_object, diag::warn_objc_property_no_assignment_attribute, -1,
  /* DiagArray595 */ diag::warn_autosynthesis_property_in_superclass, diag::warn_no_autosynthesis_property, diag::warn_no_autosynthesis_shared_ivar_property, -1,
  /* DiagArray596 */ diag::warn_category_method_impl_match, -1,
  /* DiagArray597 */ diag::warn_auto_synthesizing_protocol_property, -1,
  /* DiagArray598 */ diag::warn_objc_redundant_qualified_class_type, -1,
  /* DiagArray599 */ diag::warn_objc_readonly_property_has_setter, -1,
  /* DiagArray601 */ diag::warn_objc_redundant_literal_use, -1,
  /* DiagArray602 */ diag::warn_objc_root_class_missing, -1,
  /* DiagArray604 */ diag::warn_impcast_float_to_objc_signed_char_bool, -1,
  /* DiagArray605 */ diag::warn_impcast_int_to_objc_signed_char_bool, -1,
  /* DiagArray606 */ diag::warn_objc_string_literal_comparison, -1,
  /* DiagArray607 */ diag::warn_concatenated_nsarray_literal, -1,
  /* DiagArray608 */ diag::warn_objc_unsafe_perform_selector, -1,
  /* DiagArray609 */ diag::warn_odr_different_num_template_parameters, diag::warn_odr_different_template_parameter_kind, diag::warn_odr_field_type_inconsistent, diag::warn_odr_function_type_inconsistent, diag::warn_odr_ivar_type_inconsistent, diag::warn_odr_non_type_parameter_type_inconsistent, diag::warn_odr_objc_method_num_params_inconsistent, diag::warn_odr_objc_method_param_type_inconsistent, diag::warn_odr_objc_method_result_type_inconsistent, diag::warn_odr_objc_method_variadic_inconsistent, diag::warn_odr_objc_property_impl_kind_inconsistent, diag::warn_odr_objc_property_type_inconsistent, diag::warn_odr_objc_superclass_inconsistent, diag::warn_odr_objc_synthesize_ivar_inconsistent, diag::warn_odr_parameter_pack_non_pack, diag::warn_odr_tag_type_inconsistent, diag::warn_odr_variable_multiple_def, diag::warn_odr_variable_type_inconsistent, -1,
  /* DiagArray610 */ diag::warn_old_style_cast, -1,
  /* DiagArray612 */ diag::ext_opencl_ext_vector_type_rgba_selector, -1,
  /* DiagArray614 */ diag::ext_omp_attributes, -1,
  /* DiagArray615 */ diag::warn_omp_alignment_not_power_of_two, diag::warn_omp_allocate_thread_on_task_target_directive, diag::warn_omp_ctx_incompatible_property_for_selector, diag::warn_omp_ctx_incompatible_score_for_property, diag::warn_omp_ctx_incompatible_selector_for_set, diag::warn_omp_ctx_selector_without_properties, diag::warn_omp_declare_variant_ctx_mutiple_use, diag::warn_omp_declare_variant_ctx_not_a_property, diag::warn_omp_declare_variant_ctx_not_a_selector, diag::warn_omp_declare_variant_ctx_not_a_set, diag::warn_omp_declare_variant_expected, diag::warn_omp_declare_variant_string_literal_or_identifier, diag::warn_omp_linear_step_zero, diag::warn_omp_more_one_device_type_clause, diag::warn_omp_more_one_interop_type, diag::warn_omp_unknown_assumption_clause_missing_id, diag::warn_omp_unknown_assumption_clause_without_args, diag::warn_omp_used_different_allocator, -1,
  /* DiagArray616 */ diag::ext_omp_loop_not_canonical_init, diag::warn_omp_loop_64_bit_var, -1,
  /* DiagArray617 */ diag::warn_omp_non_trivial_type_mapped, -1,
  /* DiagArray618 */ diag::warn_drv_omp_offload_target_duplicate, diag::warn_omp_declare_target_after_first_use, diag::warn_omp_not_in_target_context, -1,
  /* DiagArray619 */ diag::warn_drv_fine_grained_bitfield_accesses_ignored, diag::warn_drv_fjmc_for_elf_only, diag::warn_drv_jmc_requires_debuginfo, diag::warn_drv_moutline_atomics_unsupported_opt, diag::warn_drv_moutline_unsupported_opt, diag::warn_drv_needs_hvx, diag::warn_drv_ps4_force_pic, diag::warn_drv_unsupported_longcalls, diag::warn_drv_unsupported_option_for_offload_arch_req_feature, diag::warn_drv_unsupported_option_for_target, diag::warn_drv_unsupported_pic_with_mabicalls, diag::warn_drv_unsupported_sdata, -1,
  /* DiagArray620 */ diag::ext_typecheck_ordered_comparison_of_function_pointers, diag::warn_typecheck_ordered_comparison_of_function_pointers, -1,
  /* DiagArray621 */ diag::ext_out_of_line_declaration, -1,
  /* DiagArray622 */ diag::ext_use_out_of_scope_declaration, -1,
  /* DiagArray623 */ diag::warn_overaligned_type, -1,
  /* DiagArray625 */ diag::ext_string_too_long, -1,
  /* DiagArray626 */ diag::warn_overloaded_shift_in_comparison, -1,
  /* DiagArray627 */ diag::warn_overloaded_virtual, -1,
  /* DiagArray629 */ diag::warn_fe_override_module, -1,
  /* DiagArray630 */ diag::warn_conflicting_overriding_param_modifiers, diag::warn_conflicting_overriding_param_types, diag::warn_conflicting_overriding_ret_type_modifiers, diag::warn_conflicting_overriding_ret_types, diag::warn_conflicting_overriding_variadic, diag::warn_non_contravariant_overriding_param_types, diag::warn_non_covariant_overriding_ret_types, -1,
  /* DiagArray631 */ diag::warn_drv_overriding_flag_option, -1,
  /* DiagArray632 */ diag::warn_unnecessary_packed, -1,
  /* DiagArray633 */ diag::warn_padded_struct_anon_field, diag::warn_padded_struct_field, diag::warn_padded_struct_size, -1,
  /* DiagArray634 */ diag::warn_condition_is_assignment, diag::warn_precedence_bitwise_rel, diag::warn_precedence_conditional, -1,
  /* DiagArray635 */ diag::warn_equality_with_extra_parens, -1,
  /* DiagArray637 */ diag::remark_fe_backend_optimization_remark, -1,
  /* DiagArray638 */ diag::remark_fe_backend_optimization_remark_analysis, diag::remark_fe_backend_optimization_remark_analysis_aliasing, diag::remark_fe_backend_optimization_remark_analysis_fpcommute, -1,
  /* DiagArray639 */ diag::warn_fe_backend_optimization_failure, -1,
  /* DiagArray640 */ diag::remark_fe_backend_optimization_remark_missed, -1,
  /* DiagArray641 */ diag::warn_module_uses_date_time, -1,
  /* DiagArray642 */ diag::ext_aggregate_init_not_constant, diag::ext_anonymous_record_with_type, diag::ext_anonymous_struct_union_qualified, diag::ext_array_size_conversion, diag::ext_auto_new_list_init, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_cast_fn_obj, diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_cxx11_enum_fixed_underlying_type, diag::ext_designated_init, diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_duplicate_declspec, diag::ext_ellipsis_exception_spec, diag::ext_empty_fnmacro_arg, diag::ext_enum_value_not_int, diag::ext_enumerator_list_comma_c, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_instantiation_without_qualified_id, diag::ext_expr_not_ice, diag::ext_extern_template, diag::ext_extra_semi, diag::ext_forward_ref_enum, diag::ext_freestanding_complex, diag::ext_gnu_array_range, diag::ext_hex_constant_invalid, diag::ext_hex_literal_invalid, diag::ext_ident_list_in_param, diag::ext_in_class_initializer_non_constant, diag::ext_integer_complement_complex, diag::ext_integer_increment_complex, diag::ext_internal_in_extern_inline_quiet, diag::ext_line_comment, diag::ext_main_used, diag::ext_mixed_decls_code, diag::ext_multi_line_line_comment, diag::ext_named_variadic_macro, diag::ext_no_newline_eof, diag::ext_nonstandard_escape, diag::ext_ns_enum_attribute, diag::ext_opencl_double_without_pragma, diag::ext_param_not_declared, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_pp_bad_vaargs_use, diag::ext_pp_comma_expr, diag::ext_pp_ident_directive, diag::ext_pp_line_too_big, diag::ext_pp_opencl_variadic_macros, diag::ext_pp_warning_directive, diag::ext_return_has_void_expr, diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::ext_subscript_non_lvalue, diag::ext_subscript_overload, diag::ext_thread_before, diag::ext_typecheck_addrof_void, diag::ext_typecheck_cast_nonscalar, diag::ext_typecheck_comparison_of_fptr_to_void, diag::ext_typecheck_cond_one_void, diag::ext_typecheck_convert_pointer_void_func, diag::ext_typecheck_ordered_comparison_of_pointer_and_zero, diag::ext_variadic_macro, diag::warn_defined_in_function_type_macro, diag::warn_format_conversion_argument_type_mismatch_pedantic, diag::warn_kern_is_method, diag::warn_strict_prototypes, -1,
  /* DiagArray643 */ diag::warn_opencl_unsupported_core_feature, diag::warn_pragma_extension_is_core, -1,
  /* DiagArray645 */ diag::warn_pessimizing_move_on_initialization, diag::warn_pessimizing_move_on_return, -1,
  /* DiagArray646 */ diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::warn_sub_ptr_zero_size_types, -1,
  /* DiagArray647 */ diag::warn_cast_nonnull_to_bool, diag::warn_impcast_pointer_to_bool, -1,
  /* DiagArray648 */ diag::warn_pointer_compare, -1,
  /* DiagArray649 */ diag::ext_typecheck_comparison_of_pointer_integer, -1,
  /* DiagArray650 */ diag::ext_typecheck_convert_incompatible_pointer_sign, -1,
  /* DiagArray651 */ diag::warn_pointer_to_enum_cast, -1,
  /* DiagArray652 */ diag::warn_pointer_to_int_cast, -1,
  /* DiagArray653 */ diag::ext_typecheck_cond_incompatible_pointers, -1,
  /* DiagArray654 */ diag::warn_poison_system_directories, -1,
  /* DiagArray655 */ diag::warn_potentially_direct_selector_expression, -1,
  /* DiagArray656 */ diag::warn_side_effects_typeid, -1,
  /* DiagArray657 */ diag::warn_pragma_attribute_unused, -1,
  /* DiagArray658 */ diag::pp_pragma_once_in_main_file, -1,
  /* DiagArray659 */ diag::warn_pragma_pack_modified_after_include, diag::warn_pragma_pack_no_pop_eof, -1,
  /* DiagArray660 */ diag::warn_pragma_pack_non_default_at_include, -1,
  /* DiagArray661 */ diag::pp_pragma_sysheader_in_main_file, -1,
  /* DiagArray662 */ diag::warn_no_support_for_eval_method_source_on_m32, diag::warn_redefine_extname_not_applied, -1,
  /* DiagArray663 */ diag::warn_cxx11_compat_constexpr_body_invalid_stmt, diag::warn_cxx11_compat_constexpr_body_multiple_return, diag::warn_cxx11_compat_constexpr_body_no_return, diag::warn_cxx11_compat_constexpr_local_var, diag::warn_cxx11_compat_constexpr_type_definition, diag::warn_cxx11_compat_decltype_auto_type_specifier, diag::warn_cxx11_compat_deduced_return_type, diag::warn_cxx11_compat_digit_separator, diag::warn_cxx11_compat_generic_lambda, diag::warn_cxx11_compat_init_capture, diag::warn_cxx11_compat_variable_template, -1,
  /* DiagArray665 */ diag::warn_cxx14_compat_class_template_argument_deduction, diag::warn_cxx14_compat_constexpr_if, diag::warn_cxx14_compat_constexpr_on_lambda, diag::warn_cxx14_compat_decomp_decl, diag::warn_cxx14_compat_fold_expression, diag::warn_cxx14_compat_init_statement, diag::warn_cxx14_compat_inline_variable, diag::warn_cxx14_compat_nested_namespace_definition, diag::warn_cxx14_compat_star_this_lambda_capture, diag::warn_cxx14_compat_static_assert_no_message, diag::warn_cxx14_compat_template_nontype_parm_auto_type, diag::warn_cxx14_compat_template_template_param_typename, diag::warn_cxx14_compat_u8_character_literal, diag::warn_cxx14_compat_using_attribute_ns, diag::warn_cxx17_compat_multi_using_declaration, diag::warn_cxx17_compat_using_declaration_pack, diag::warn_for_range_begin_end_types_differ, -1,
  /* DiagArray666 */ diag::warn_cxx14_compat_ns_enum_attribute, diag::warn_cxx17_hex_literal, -1,
  /* DiagArray667 */ diag::warn_cxx17_compat_adl_only_template_id, diag::warn_cxx17_compat_bitfield_member_init, diag::warn_cxx17_compat_constexpr_body_invalid_stmt, diag::warn_cxx17_compat_constexpr_ctor_missing_init, diag::warn_cxx17_compat_constexpr_function_try_block, diag::warn_cxx17_compat_constexpr_local_var_no_init, diag::warn_cxx17_compat_constexpr_union_ctor_no_init, diag::warn_cxx17_compat_constexpr_virtual, diag::warn_cxx17_compat_decomp_decl_spec, diag::warn_cxx17_compat_defaulted_comparison, diag::warn_cxx17_compat_defaulted_method_type_mismatch, diag::warn_cxx17_compat_equals_this_lambda_capture, diag::warn_cxx17_compat_explicit_bool, diag::warn_cxx17_compat_for_range_init_stmt, diag::warn_cxx17_compat_init_capture_pack, diag::warn_cxx17_compat_inline_nested_namespace_definition, diag::warn_cxx17_compat_lambda_def_ctor_assign, diag::warn_cxx17_compat_lambda_template_parameter_list, diag::warn_cxx17_compat_missing_varargs_arg, diag::warn_cxx17_compat_spaceship, diag::warn_cxx17_compat_template_nontype_parm_type, diag::warn_cxx17_compat_unicode_type, diag::warn_cxx17_compat_using_decl_class_member_enumerator, diag::warn_cxx17_compat_using_decl_non_member_enumerator, diag::warn_cxx17_compat_using_decl_scoped_enumerator, diag::warn_cxx17_compat_using_enum_declaration, -1,
  /* DiagArray668 */ diag::warn_cxx17_compat_designated_init, diag::warn_cxx17_compat_pointer_to_const_ref_member_on_rvalue, -1,
  /* DiagArray669 */ diag::ext_subscript_overload, diag::warn_cxx20_alias_in_init_statement, diag::warn_cxx20_compat_auto_expr, diag::warn_cxx20_compat_consteval_if, diag::warn_cxx20_compat_constexpr_body_invalid_stmt, diag::warn_cxx20_compat_constexpr_var, diag::warn_cxx20_compat_decl_attrs_on_lambda, diag::warn_cxx20_compat_size_t_suffix, -1,
  /* DiagArray671 */ diag::warn_c17_compat_bit_int, diag::warn_c17_compat_static_assert_no_message, diag::warn_c2x_compat_bitint_suffix, diag::warn_c2x_compat_digit_separator, -1,
  /* DiagArray673 */ diag::warn_omp51_compat_attributes, -1,
  /* DiagArray674 */ diag::ext_predef_outside_function, -1,
  /* DiagArray675 */ diag::warn_private_extern, -1,
  /* DiagArray676 */ diag::warn_use_of_private_header_outside_module, -1,
  /* DiagArray677 */ diag::warn_mmap_mismatched_private_module_name, diag::warn_mmap_mismatched_private_submodule, diag::warn_mmap_redundant_export_as, diag::warn_no_priv_submodule_use_toplevel, -1,
  /* DiagArray678 */ diag::warn_profile_data_missing, -1,
  /* DiagArray679 */ diag::warn_profile_data_out_of_date, -1,
  /* DiagArray680 */ diag::warn_profile_data_unprofiled, -1,
  /* DiagArray681 */ diag::warn_property_access_suggest, -1,
  /* DiagArray682 */ diag::warn_property_attr_mismatch, diag::warn_property_attribute, diag::warn_property_redecl_getter_mismatch, diag::warn_readonly_property, -1,
  /* DiagArray683 */ diag::warn_unimplemented_protocol_method, -1,
  /* DiagArray684 */ diag::warn_protocol_property_mismatch, -1,
  /* DiagArray685 */ diag::warn_avx_calling_convention, -1,
  /* DiagArray686 */ diag::err_func_returning_qualified_void, -1,
  /* DiagArray687 */ diag::warn_quoted_include_in_framework_header, -1,
  /* DiagArray689 */ diag::warn_for_range_ref_binds_ret_temp, -1,
  /* DiagArray690 */ diag::warn_for_range_const_ref_binds_temp_built_from_ref, diag::warn_for_range_copy, -1,
  /* DiagArray691 */ diag::warn_auto_readonly_iboutlet_property, -1,
  /* DiagArray692 */ diag::warn_bad_receiver_type, -1,
  /* DiagArray693 */ diag::warn_receiver_forward_class, diag::warn_receiver_forward_instance, -1,
  /* DiagArray694 */ diag::ext_member_redeclared, -1,
  /* DiagArray695 */ diag::warn_consteval_if_always_true, -1,
  /* DiagArray697 */ diag::warn_redundant_move_on_return, -1,
  /* DiagArray698 */ diag::warn_redundant_parens_around_declarator, -1,
  /* DiagArray699 */ diag::ext_register_storage_class, -1,
  /* DiagArray700 */ diag::warn_reinterpret_different_from_static, -1,
  /* DiagArray701 */ diag::remark_fe_backend_plugin, -1,
  /* DiagArray703 */ diag::warn_initializer_out_of_order, diag::warn_some_initializers_out_of_order, -1,
  /* DiagArray704 */ diag::ext_designated_init_reordered, -1,
  /* DiagArray705 */ diag::warn_objc_requires_super_protocol, -1,
  /* DiagArray707 */ diag::warn_reserved_extern_symbol, -1,
  /* DiagArray708 */ diag::warn_pp_macro_is_reserved_id, -1,
  /* DiagArray709 */ diag::ext_ms_reserved_user_defined_literal, diag::ext_reserved_user_defined_literal, -1,
  /* DiagArray710 */ diag::warn_pragma_restrict_expansion_macro_use, -1,
  /* DiagArray711 */ diag::ext_retained_language_linkage, -1,
  /* DiagArray712 */ diag::warn_ret_addr_label, diag::warn_ret_local_temp_addr_ref, diag::warn_ret_stack_addr_ref, -1,
  /* DiagArray714 */ diag::ext_return_has_expr, diag::ext_return_missing_expr, diag::warn_falloff_nonvoid_coroutine, diag::warn_falloff_nonvoid_function, diag::warn_falloff_nonvoid_lambda, diag::warn_maybe_falloff_nonvoid_coroutine, diag::warn_maybe_falloff_nonvoid_function, diag::warn_maybe_falloff_nonvoid_lambda, diag::warn_return_missing_expr, -1,
  /* DiagArray715 */ diag::warn_return_value_udt, diag::warn_return_value_udt_incomplete, -1,
  /* DiagArray716 */ diag::ext_ovl_rewrite_equalequal_not_bool, -1,
  /* DiagArray717 */ diag::remark_cc1_round_trip_generated, -1,
  /* DiagArray718 */ diag::warn_no_dynamic_cast_with_rtti_disabled, diag::warn_no_typeid_with_rtti_disabled, -1,
  /* DiagArray719 */ diag::remark_sanitize_address_insert_extra_padding_accepted, diag::remark_sanitize_address_insert_extra_padding_rejected, -1,
  /* DiagArray720 */ diag::remark_pp_search_path_usage, -1,
  /* DiagArray721 */ diag::warn_attribute_section_on_redeclaration, diag::warn_duplicate_codeseg_attribute, diag::warn_mismatched_section, -1,
  /* DiagArray722 */ diag::warn_unimplemented_selector, -1,
  /* DiagArray723 */ diag::warn_multiple_selectors, -1,
  /* DiagArray724 */ diag::warn_self_assignment_builtin, -1,
  /* DiagArray725 */ diag::warn_identity_field_assign, -1,
  /* DiagArray726 */ diag::warn_self_assignment_overloaded, -1,
  /* DiagArray727 */ diag::warn_self_move, -1,
  /* DiagArray728 */ diag::warn_semicolon_before_method_body, -1,
  /* DiagArray729 */ diag::warn_missing_sentinel, diag::warn_not_enough_argument, -1,
  /* DiagArray731 */ diag::warn_fe_serialized_diag_failure, diag::warn_fe_serialized_diag_failure_during_finalisation, diag::warn_fe_serialized_diag_merge_failure, -1,
  /* DiagArray732 */ diag::warn_decl_shadow, -1,
  /* DiagArray734 */ diag::warn_shadow_field, -1,
  /* DiagArray735 */ diag::warn_ctor_parm_shadows_field, -1,
  /* DiagArray736 */ diag::warn_modifying_shadowing_decl, -1,
  /* DiagArray737 */ diag::warn_ivar_use_hidden, -1,
  /* DiagArray738 */ diag::warn_decl_shadow_uncaptured_local, -1,
  /* DiagArray739 */ diag::warn_shift_negative, -1,
  /* DiagArray740 */ diag::warn_shift_gt_typewidth, -1,
  /* DiagArray741 */ diag::warn_shift_lhs_negative, -1,
  /* DiagArray742 */ diag::warn_addition_in_bitshift, -1,
  /* DiagArray743 */ diag::warn_shift_result_gt_typewidth, -1,
  /* DiagArray744 */ diag::warn_shift_result_sets_sign_bit, -1,
  /* DiagArray745 */ diag::warn_impcast_integer_64_32, -1,
  /* DiagArray746 */ diag::warn_mixed_sign_comparison, -1,
  /* DiagArray747 */ diag::warn_impcast_integer_sign, diag::warn_impcast_integer_sign_conditional, diag::warn_impcast_nonnegative_result, -1,
  /* DiagArray749 */ diag::warn_no_underlying_type_specified_for_enum_bitfield, -1,
  /* DiagArray750 */ diag::ext_wchar_t_sign_spec, -1,
  /* DiagArray751 */ diag::warn_sizeof_array_param, -1,
  /* DiagArray752 */ diag::warn_sizeof_array_decay, -1,
  /* DiagArray753 */ diag::warn_division_sizeof_array, -1,
  /* DiagArray754 */ diag::warn_division_sizeof_ptr, -1,
  /* DiagArray755 */ diag::warn_sizeof_pointer_expr_memaccess, diag::warn_sizeof_pointer_type_memaccess, -1,
  /* DiagArray756 */ diag::warn_slash_u_filename, -1,
  /* DiagArray757 */ diag::warn_slh_does_not_support_asm_goto, -1,
  /* DiagArray758 */ diag::warn_sometimes_uninit_var, -1,
  /* DiagArray759 */ diag::warn_fe_source_mgr, -1,
  /* DiagArray760 */ diag::warn_omp_declare_variant_after_emitted, diag::warn_omp_declare_variant_after_used, diag::warn_omp_declare_variant_marked_as_declare_variant, diag::warn_omp_declare_variant_score_not_constant, diag::warn_omp_nesting_simd, diag::warn_pragma_omp_ignored, diag::warn_unknown_declare_variant_isa_trait, -1,
  /* DiagArray761 */ diag::warn_sampler_initializer_invalid_bits, -1,
  /* DiagArray763 */ diag::warn_stack_exhausted, -1,
  /* DiagArray764 */ diag::warn_stack_clash_protection_inline_asm, -1,
  /* DiagArray765 */ diag::ext_in_class_initializer_float_type_cxx11, -1,
  /* DiagArray766 */ diag::ext_internal_in_extern_inline, diag::ext_internal_in_extern_inline_quiet, -1,
  /* DiagArray767 */ diag::warn_static_inline_explicit_inst_ignored, -1,
  /* DiagArray768 */ diag::warn_static_local_in_extern_inline, -1,
  /* DiagArray769 */ diag::warn_static_self_reference_in_init, -1,
  /* DiagArray770 */ diag::warn_drv_libstdcxx_not_found, -1,
  /* DiagArray782 */ diag::warn_strict_potentially_direct_selector_expression, -1,
  /* DiagArray783 */ diag::warn_strict_prototypes, -1,
  /* DiagArray784 */ diag::warn_strict_multiple_method_decl, -1,
  /* DiagArray785 */ diag::warn_stringcompare, -1,
  /* DiagArray786 */ diag::warn_concatenated_literal_array_init, -1,
  /* DiagArray787 */ diag::warn_impcast_string_literal_to_bool, -1,
  /* DiagArray788 */ diag::warn_string_plus_char, -1,
  /* DiagArray789 */ diag::warn_string_plus_int, -1,
  /* DiagArray790 */ diag::warn_strlcpycat_wrong_size, -1,
  /* DiagArray791 */ diag::warn_strncat_large_size, diag::warn_strncat_src_size, diag::warn_strncat_wrong_size, -1,
  /* DiagArray792 */ diag::warn_suggest_destructor_marked_not_override_overriding, -1,
  /* DiagArray793 */ diag::warn_suggest_function_marked_not_override_overriding, -1,
  /* DiagArray794 */ diag::ext_typecheck_base_super, -1,
  /* DiagArray795 */ diag::warn_suspicious_bzero_size, -1,
  /* DiagArray797 */ diag::warn_attr_swift_name_decl_kind, diag::warn_attr_swift_name_decl_missing_params, diag::warn_attr_swift_name_function, diag::warn_attr_swift_name_getter_parameters, diag::warn_attr_swift_name_invalid_identifier, diag::warn_attr_swift_name_missing_parameters, diag::warn_attr_swift_name_multiple_selfs, diag::warn_attr_swift_name_num_params, diag::warn_attr_swift_name_setter_parameters, diag::warn_attr_swift_name_subscript_getter_newValue, diag::warn_attr_swift_name_subscript_invalid_parameter, diag::warn_attr_swift_name_subscript_setter_multiple_newValues, diag::warn_attr_swift_name_subscript_setter_no_newValue, -1,
  /* DiagArray798 */ diag::warn_case_value_overflow, diag::warn_missing_case, diag::warn_not_in_enum, -1,
  /* DiagArray799 */ diag::warn_bool_switch_condition, -1,
  /* DiagArray801 */ diag::warn_def_missing_case, -1,
  /* DiagArray802 */ diag::warn_sync_fetch_and_nand_semantics_change, -1,
  /* DiagArray804 */ diag::warn_target_clone_mixed_values, -1,
  /* DiagArray805 */ diag::warn_comparison_bitwise_always, diag::warn_comparison_bitwise_or, -1,
  /* DiagArray806 */ diag::warn_alignment_builtin_useless, diag::warn_comparison_always, -1,
  /* DiagArray807 */ diag::warn_integer_constants_in_conditional_always_true, diag::warn_left_shift_always, diag::warn_tautological_bool_compare, -1,
  /* DiagArray809 */ diag::warn_out_of_range_compare, -1,
  /* DiagArray810 */ diag::warn_tautological_compare_objc_bool, -1,
  /* DiagArray811 */ diag::warn_tautological_overlap_comparison, -1,
  /* DiagArray812 */ diag::warn_nonnull_expr_compare, diag::warn_null_pointer_compare, -1,
  /* DiagArray813 */ diag::warn_tautological_constant_compare, -1,
  /* DiagArray814 */ diag::warn_address_of_reference_null_compare, diag::warn_this_null_compare, -1,
  /* DiagArray815 */ diag::warn_unsigned_char_always_true_comparison, -1,
  /* DiagArray816 */ diag::warn_unsigned_enum_always_true_comparison, -1,
  /* DiagArray817 */ diag::warn_unsigned_always_true_comparison, -1,
  /* DiagArray818 */ diag::warn_tautological_compare_value_range, -1,
  /* DiagArray819 */ diag::warn_tcb_enforcement_violation, -1,
  /* DiagArray820 */ diag::ext_typecheck_decl_incomplete_type, -1,
  /* DiagArray822 */ diag::warn_acquired_before, diag::warn_acquired_before_after_cycle, diag::warn_cannot_resolve_lock, diag::warn_double_lock, diag::warn_expecting_lock_held_on_loop, diag::warn_expecting_locked, diag::warn_fun_excludes_mutex, diag::warn_fun_requires_lock, diag::warn_fun_requires_negative_cap, diag::warn_lock_exclusive_and_shared, diag::warn_lock_some_predecessors, diag::warn_no_unlock, diag::warn_unlock_but_no_lock, diag::warn_unlock_kind_mismatch, diag::warn_var_deref_requires_any_lock, diag::warn_var_deref_requires_lock, diag::warn_variable_requires_any_lock, diag::warn_variable_requires_lock, -1,
  /* DiagArray823 */ diag::warn_thread_attribute_argument_not_lockable, diag::warn_thread_attribute_decl_not_lockable, diag::warn_thread_attribute_decl_not_pointer, diag::warn_thread_attribute_ignored, diag::warn_thread_attribute_not_on_capability_member, diag::warn_thread_attribute_not_on_non_static_member, -1,
  /* DiagArray824 */ diag::warn_thread_safety_beta, -1,
  /* DiagArray825 */ diag::warn_acquire_requires_negative_cap, -1,
  /* DiagArray826 */ diag::warn_fun_requires_lock_precise, diag::warn_var_deref_requires_lock_precise, diag::warn_variable_requires_lock_precise, -1,
  /* DiagArray827 */ diag::warn_guarded_pass_by_reference, diag::warn_pt_guarded_pass_by_reference, -1,
  /* DiagArray828 */ diag::warn_thread_safety_verbose, -1,
  /* DiagArray829 */ diag::trigraph_converted, diag::trigraph_ends_block_comment, diag::trigraph_ignored, diag::trigraph_ignored_block_comment, -1,
  /* DiagArray831 */ diag::warn_type_safety_null_pointer_required, diag::warn_type_safety_type_mismatch, diag::warn_type_tag_for_datatype_wrong_kind, -1,
  /* DiagArray832 */ diag::ext_redefinition_of_typedef, -1,
  /* DiagArray833 */ diag::ext_typename_missing, -1,
  /* DiagArray834 */ diag::warn_fe_unable_to_open_stats_file, -1,
  /* DiagArray835 */ diag::warn_unaligned_access, -1,
  /* DiagArray836 */ diag::warn_imp_cast_drops_unaligned, -1,
  /* DiagArray837 */ diag::warn_unavailable_fwdclass_message, -1,
  /* DiagArray838 */ diag::warn_undeclared_selector, diag::warn_undeclared_selector_with_typo, -1,
  /* DiagArray839 */ diag::warn_pp_undef_identifier, -1,
  /* DiagArray840 */ diag::warn_pp_undef_prefix, -1,
  /* DiagArray841 */ diag::warn_address_of_reference_bool_conversion, diag::warn_this_bool_conversion, -1,
  /* DiagArray842 */ diag::warn_func_template_missing, -1,
  /* DiagArray843 */ diag::warn_undefined_inline, -1,
  /* DiagArray844 */ diag::warn_undefined_internal, -1,
  /* DiagArray845 */ diag::ext_undefined_internal_type, -1,
  /* DiagArray846 */ diag::warn_pointer_indirection_from_incompatible_type, diag::warn_undefined_reinterpret_cast, -1,
  /* DiagArray847 */ diag::warn_var_template_missing, -1,
  /* DiagArray848 */ diag::warn_throw_underaligned_obj, -1,
  /* DiagArray849 */ diag::warn_side_effects_unevaluated_context, -1,
  /* DiagArray850 */ diag::warn_unguarded_availability, -1,
  /* DiagArray851 */ diag::warn_unguarded_availability_new, -1,
  /* DiagArray852 */ diag::warn_delimited_ucn_empty, diag::warn_delimited_ucn_incomplete, diag::warn_ucn_escape_incomplete, diag::warn_ucn_escape_no_digits, diag::warn_ucn_escape_surrogate, diag::warn_ucn_not_valid_in_c89, diag::warn_ucn_not_valid_in_c89_literal, -1,
  /* DiagArray853 */ diag::warn_utf8_symbol_homoglyph, -1,
  /* DiagArray854 */ diag::ext_unicode_whitespace, -1,
  /* DiagArray855 */ diag::warn_utf8_symbol_zero_width, -1,
  /* DiagArray856 */ diag::warn_base_class_is_uninit, diag::warn_field_is_uninit, diag::warn_reference_field_is_uninit, diag::warn_uninit_byref_blockvar_captured_by_block, diag::warn_uninit_self_reference_in_init, diag::warn_uninit_self_reference_in_reference_init, diag::warn_uninit_var, -1,
  /* DiagArray857 */ diag::warn_uninit_const_reference, -1,
  /* DiagArray858 */ diag::warn_drv_unknown_argument_clang_cl, diag::warn_drv_unknown_argument_clang_cl_with_suggestion, -1,
  /* DiagArray859 */ diag::warn_assume_attribute_string_unknown, -1,
  /* DiagArray860 */ diag::warn_unknown_attribute_ignored, -1,
  /* DiagArray861 */ diag::warn_drv_new_cuda_version, diag::warn_drv_partially_supported_cuda_version, -1,
  /* DiagArray862 */ diag::ext_unknown_escape, -1,
  /* DiagArray863 */ diag::ext_on_off_switch_syntax, diag::ext_pragma_syntax_eod, diag::ext_stdc_pragma_ignored, diag::warn_pragma_diagnostic_cannot_pop, diag::warn_pragma_diagnostic_invalid, diag::warn_pragma_diagnostic_invalid_option, diag::warn_pragma_diagnostic_invalid_token, diag::warn_pragma_exec_charset_expected, diag::warn_pragma_exec_charset_push_invalid, diag::warn_pragma_exec_charset_spec_invalid, diag::warn_pragma_ignored, diag::warn_pragma_include_alias_expected, diag::warn_pragma_include_alias_expected_filename, diag::warn_pragma_include_alias_mismatch_angle, diag::warn_pragma_include_alias_mismatch_quote, diag::warn_pragma_warning_expected, diag::warn_pragma_warning_expected_number, diag::warn_pragma_warning_push_level, diag::warn_pragma_warning_spec_invalid, diag::warn_stdc_fenv_round_not_supported, -1,
  /* DiagArray864 */ diag::warn_unknown_sanitizer_ignored, -1,
  /* DiagArray865 */ diag::warn_pragma_diagnostic_unknown_warning, diag::warn_unknown_diag_option, diag::warn_unknown_warning_specifier, -1,
  /* DiagArray866 */ diag::ext_template_arg_unnamed_type, -1,
  /* DiagArray867 */ diag::warn_unneeded_internal_decl, diag::warn_unneeded_static_internal_decl, -1,
  /* DiagArray868 */ diag::warn_unneeded_member_function, -1,
  /* DiagArray869 */ diag::warn_unqualified_call_to_std_cast_function, -1,
  /* DiagArray870 */ diag::warn_unreachable, -1,
  /* DiagArray872 */ diag::warn_unreachable_break, -1,
  /* DiagArray873 */ diag::warn_unreachable_fallthrough_attr, -1,
  /* DiagArray874 */ diag::warn_unreachable_loop_increment, -1,
  /* DiagArray875 */ diag::warn_unreachable_return, -1,
  /* DiagArray876 */ diag::warn_unsequenced_mod_mod, diag::warn_unsequenced_mod_use, -1,
  /* DiagArray877 */ diag::warn_drv_unsupported_float_abi_by_lib, -1,
  /* DiagArray878 */ diag::warn_target_unsupported_abs2008, diag::warn_target_unsupported_abslegacy, -1,
  /* DiagArray879 */ diag::warn_at_available_unchecked_use, -1,
  /* DiagArray880 */ diag::warn_target_unsupported_compact_branches, -1,
  /* DiagArray881 */ diag::warn_attribute_dll_instantiated_base_class, -1,
  /* DiagArray882 */ diag::warn_fe_backend_unsupported_fp_exceptions, diag::warn_fe_backend_unsupported_fp_rounding, -1,
  /* DiagArray883 */ diag::warn_template_qualified_friend_ignored, diag::warn_template_qualified_friend_unsupported, -1,
  /* DiagArray884 */ diag::warn_drv_unsupported_gpopt, -1,
  /* DiagArray885 */ diag::warn_target_unsupported_nan2008, diag::warn_target_unsupported_nanlegacy, -1,
  /* DiagArray886 */ diag::warn_drv_dwarf_version_limited_by_target, diag::warn_drv_unsupported_debug_info_opt_for_target, -1,
  /* DiagArray887 */ diag::warn_attribute_protected_visibility, -1,
  /* DiagArray888 */ diag::ext_partial_specs_not_deducible, -1,
  /* DiagArray891 */ diag::warn_unused_but_set_parameter, -1,
  /* DiagArray892 */ diag::warn_unused_but_set_variable, -1,
  /* DiagArray893 */ diag::warn_drv_diagnostics_hotness_requires_pgo, diag::warn_drv_diagnostics_misexpect_requires_pgo, diag::warn_drv_empty_joined_argument, diag::warn_drv_input_file_unused, diag::warn_drv_input_file_unused_by_cpp, diag::warn_drv_invalid_arch_name_with_suggestion, diag::warn_drv_preprocessed_input_file_unused, diag::warn_drv_unused_argument, diag::warn_drv_unused_x, diag::warn_ignored_clang_option, diag::warn_ignoring_fdiscard_for_bitcode, diag::warn_ignoring_verify_debuginfo_preserve_export, -1,
  /* DiagArray894 */ diag::warn_unused_comparison, -1,
  /* DiagArray895 */ diag::warn_unused_const_variable, -1,
  /* DiagArray896 */ diag::warn_unused_exception_param, -1,
  /* DiagArray897 */ diag::warn_unused_function, -1,
  /* DiagArray898 */ diag::warn_unused_property_expr, -1,
  /* DiagArray899 */ diag::warn_unused_label, -1,
  /* DiagArray900 */ diag::warn_unused_lambda_capture, -1,
  /* DiagArray901 */ diag::warn_unused_local_typedef, -1,
  /* DiagArray903 */ diag::pp_macro_not_used, -1,
  /* DiagArray904 */ diag::warn_unused_member_function, -1,
  /* DiagArray905 */ diag::warn_unused_parameter, -1,
  /* DiagArray906 */ diag::warn_unused_private_field, -1,
  /* DiagArray907 */ diag::warn_unused_property_backing_ivar, -1,
  /* DiagArray908 */ diag::warn_unused_result, diag::warn_unused_result_msg, -1,
  /* DiagArray909 */ diag::warn_unused_template, -1,
  /* DiagArray910 */ diag::warn_unused_call, diag::warn_unused_comma_left_operand, diag::warn_unused_constructor, diag::warn_unused_constructor_msg, diag::warn_unused_container_subscript_expr, diag::warn_unused_expr, diag::warn_unused_voidptr, -1,
  /* DiagArray911 */ diag::warn_unused_variable, -1,
  /* DiagArray912 */ diag::warn_unused_volatile, -1,
  /* DiagArray913 */ diag::warn_used_but_marked_unused, -1,
  /* DiagArray914 */ diag::warn_user_literal_reserved, -1,
  /* DiagArray915 */ diag::warn_diagnose_if_succeeded, -1,
  /* DiagArray916 */ diag::warn_second_arg_of_va_start_not_last_named_param, diag::warn_second_parameter_to_va_arg_never_compatible, diag::warn_va_start_type_is_undefined, -1,
  /* DiagArray917 */ diag::ext_named_variadic_macro, diag::ext_pp_bad_vaopt_use, diag::ext_variadic_macro, -1,
  /* DiagArray918 */ diag::warn_typecheck_vector_element_sizes_not_equal, -1,
  /* DiagArray919 */ diag::warn_incompatible_vectors, -1,
  /* DiagArray921 */ diag::warn_empty_parens_are_function_decl, diag::warn_parens_disambiguated_as_function_declaration, diag::warn_parens_disambiguated_as_variable_declaration, -1,
  /* DiagArray922 */ diag::warn_decl_in_param_list, diag::warn_redefinition_in_param_list, -1,
  /* DiagArray923 */ diag::warn_vla_used, -1,
  /* DiagArray924 */ diag::ext_vla, -1,
  /* DiagArray925 */ diag::warn_void_pointer_to_enum_cast, -1,
  /* DiagArray926 */ diag::warn_void_pointer_to_int_cast, -1,
  /* DiagArray927 */ diag::ext_typecheck_indirection_through_void_pointer, -1,
  /* DiagArray929 */ diag::warn_wasm_dynamic_exception_spec_ignored, -1,
  /* DiagArray930 */ diag::warn_weak_template_vtable, -1,
  /* DiagArray931 */ diag::warn_weak_vtable, -1,
  /* DiagArray932 */ diag::ext_deprecated_string_literal_conversion, -1,
  /* DiagArray934 */ diag::warn_xor_used_as_pow, diag::warn_xor_used_as_pow_base, diag::warn_xor_used_as_pow_base_extra, -1,
  /* DiagArray935 */ diag::warn_zero_as_null_pointer_constant, -1,
  /* DiagArray936 */ diag::ext_typecheck_zero_array_size, -1,
};

static const int16_t DiagSubGroups[] = {
  /* Empty */ -1,
  /* DiagSubGroup0 */ 286, -1,
  /* DiagSubGroup4 */ 17, 286, -1,
  /* DiagSubGroup11 */ 647, 785, 812, -1,
  /* DiagSubGroup17 */ 528, 634, 798, 799, 498, -1,
  /* DiagSubGroup27 */ 204, -1,
  /* DiagSubGroup29 */ 36, 35, 32, -1,
  /* DiagSubGroup34 */ 31, -1,
  /* DiagSubGroup41 */ 42, -1,
  /* DiagSubGroup51 */ 373, 183, -1,
  /* DiagSubGroup55 */ 860, 364, -1,
  /* DiagSubGroup65 */ 100, 127, 334, -1,
  /* DiagSubGroup66 */ 130, -1,
  /* DiagSubGroup76 */ 647, 841, -1,
  /* DiagSubGroup77 */ 76, -1,
  /* DiagSubGroup78 */ 73, -1,
  /* DiagSubGroup87 */ 90, -1,
  /* DiagSubGroup88 */ 94, -1,
  /* DiagSubGroup89 */ 98, -1,
  /* DiagSubGroup90 */ 98, 93, 91, 663, 665, 667, 669, -1,
  /* DiagSubGroup92 */ 90, 664, 666, 668, 670, -1,
  /* DiagSubGroup94 */ 95, 96, 97, -1,
  /* DiagSubGroup101 */ 665, 667, 669, -1,
  /* DiagSubGroup102 */ 101, 666, 668, 670, -1,
  /* DiagSubGroup103 */ 100, 99, -1,
  /* DiagSubGroup105 */ 228, 222, 106, 667, 669, -1,
  /* DiagSubGroup107 */ 105, 668, 670, -1,
  /* DiagSubGroup108 */ 104, -1,
  /* DiagSubGroup109 */ 103, -1,
  /* DiagSubGroup110 */ 105, -1,
  /* DiagSubGroup111 */ 106, -1,
  /* DiagSubGroup112 */ 108, -1,
  /* DiagSubGroup114 */ 669, -1,
  /* DiagSubGroup115 */ 114, 670, -1,
  /* DiagSubGroup117 */ 116, 113, -1,
  /* DiagSubGroup118 */ 114, -1,
  /* DiagSubGroup119 */ 115, -1,
  /* DiagSubGroup120 */ 117, -1,
  /* DiagSubGroup122 */ 667, -1,
  /* DiagSubGroup123 */ 668, -1,
  /* DiagSubGroup124 */ 665, -1,
  /* DiagSubGroup125 */ 666, -1,
  /* DiagSubGroup126 */ 663, -1,
  /* DiagSubGroup128 */ 664, -1,
  /* DiagSubGroup129 */ 132, 134, 663, 665, 667, 669, -1,
  /* DiagSubGroup133 */ 129, 130, 131, 664, 666, 668, 670, -1,
  /* DiagSubGroup138 */ 116, -1,
  /* DiagSubGroup139 */ 138, -1,
  /* DiagSubGroup141 */ 158, -1,
  /* DiagSubGroup152 */ 546, -1,
  /* DiagSubGroup156 */ 155, -1,
  /* DiagSubGroup160 */ 161, 162, -1,
  /* DiagSubGroup167 */ 69, 571, -1,
  /* DiagSubGroup172 */ 76, 167, 272, 70, 297, 745, 418, 383, 380, 447, 543, 559, 581, 747, 787, -1,
  /* DiagSubGroup173 */ 559, -1,
  /* DiagSubGroup174 */ 175, 213, 20, -1,
  /* DiagSubGroup177 */ 2, -1,
  /* DiagSubGroup185 */ 187, 189, 188, 712, -1,
  /* DiagSubGroup200 */ 199, 197, -1,
  /* DiagSubGroup202 */ 204, 205, 206, 207, 208, 210, 214, 215, 216, 217, 218, 219, 222, 227, 228, 229, 230, 231, 232, -1,
  /* DiagSubGroup208 */ 211, -1,
  /* DiagSubGroup209 */ 210, -1,
  /* DiagSubGroup210 */ 212, -1,
  /* DiagSubGroup213 */ 220, -1,
  /* DiagSubGroup225 */ 226, -1,
  /* DiagSubGroup232 */ 91, -1,
  /* DiagSubGroup238 */ 239, -1,
  /* DiagSubGroup243 */ 245, 244, -1,
  /* DiagSubGroup246 */ 247, -1,
  /* DiagSubGroup258 */ 215, -1,
  /* DiagSubGroup259 */ 548, -1,
  /* DiagSubGroup268 */ 290, -1,
  /* DiagSubGroup269 */ 271, 216, -1,
  /* DiagSubGroup270 */ 217, -1,
  /* DiagSubGroup272 */ 273, 274, 270, -1,
  /* DiagSubGroup273 */ 218, -1,
  /* DiagSubGroup274 */ 219, -1,
  /* DiagSubGroup286 */ 208, 507, 370, 411, 728, 510, 746, 905, 891, 561, 562, 265, 786, 323, -1,
  /* DiagSubGroup288 */ 131, 95, -1,
  /* DiagSubGroup289 */ 265, -1,
  /* DiagSubGroup297 */ 299, 300, -1,
  /* DiagSubGroup302 */ 303, 312, 549, 309, 311, 305, 304, -1,
  /* DiagSubGroup313 */ 307, 309, 311, -1,
  /* DiagSubGroup318 */ 317, -1,
  /* DiagSubGroup322 */ 804, -1,
  /* DiagSubGroup324 */ 99, 104, 113, -1,
  /* DiagSubGroup329 */ 330, 331, 333, 334, 335, 336, 337, 338, 339, 340, 341, 924, 342, 343, 344, 345, 346, 348, 349, 350, 694, 351, 352, 353, 354, 355, 356, 936, 357, 358, -1,
  /* DiagSubGroup369 */ 367, 368, -1,
  /* DiagSubGroup370 */ 371, -1,
  /* DiagSubGroup372 */ 381, 382, -1,
  /* DiagSubGroup377 */ 378, -1,
  /* DiagSubGroup380 */ 384, 604, -1,
  /* DiagSubGroup383 */ 605, -1,
  /* DiagSubGroup384 */ 374, -1,
  /* DiagSubGroup396 */ 397, 393, -1,
  /* DiagSubGroup402 */ 404, 545, -1,
  /* DiagSubGroup408 */ 222, -1,
  /* DiagSubGroup419 */ 418, -1,
  /* DiagSubGroup421 */ 422, -1,
  /* DiagSubGroup425 */ 366, -1,
  /* DiagSubGroup449 */ 132, -1,
  /* DiagSubGroup452 */ 97, -1,
  /* DiagSubGroup453 */ 301, 688, -1,
  /* DiagSubGroup464 */ 468, 473, 485, 471, 481, 489, 465, 494, 477, 495, 486, 487, 493, 479, 476, 472, 491, 488, 475, 483, 482, 480, 467, 470, 496, 466, 469, 474, 490, 405, -1,
  /* DiagSubGroup491 */ 492, -1,
  /* DiagSubGroup528 */ 78, 149, 155, 200, 302, 301, 316, 372, 409, 420, 502, 503, 529, 532, 690, 702, 714, 724, 727, 751, 752, 789, 806, 829, 856, 863, 889, 928, 586, 575, 577, 627, 675, 145, 284, 915, -1,
  /* DiagSubGroup529 */ 645, 697, 713, 727, -1,
  /* DiagSubGroup530 */ 485, -1,
  /* DiagSubGroup534 */ 98, -1,
  /* DiagSubGroup540 */ 106, -1,
  /* DiagSubGroup542 */ 746, 172, 448, -1,
  /* DiagSubGroup545 */ 544, -1,
  /* DiagSubGroup561 */ 349, -1,
  /* DiagSubGroup564 */ 565, -1,
  /* DiagSubGroup574 */ 600, -1,
  /* DiagSubGroup580 */ 606, -1,
  /* DiagSubGroup600 */ 601, -1,
  /* DiagSubGroup603 */ 605, 604, 571, 810, -1,
  /* DiagSubGroup613 */ 760, 615, 616, 618, 617, 614, -1,
  /* DiagSubGroup618 */ 617, -1,
  /* DiagSubGroup628 */ 411, -1,
  /* DiagSubGroup634 */ 451, 450, 72, 74, 742, 626, 635, 186, -1,
  /* DiagSubGroup636 */ 850, -1,
  /* DiagSubGroup642 */ 135, 95, 97, 99, 100, 104, 113, 116, 296, 324, 331, 333, 334, 335, 336, 337, 338, 340, 341, 342, 343, 345, 346, 348, 349, 350, 351, 352, 355, 357, 358, 441, 452, 468, 469, 471, 474, 476, 481, 482, 488, 625, 924, 936, 388, 262, 266, 567, 293, 68, 845, 711, 159, 535, 248, 443, 201, -1,
  /* DiagSubGroup644 */ 227, 454, 83, 710, 292, -1,
  /* DiagSubGroup646 */ 350, -1,
  /* DiagSubGroup651 */ 925, -1,
  /* DiagSubGroup652 */ 651, 926, -1,
  /* DiagSubGroup659 */ 660, -1,
  /* DiagSubGroup662 */ 863, 369, 657, 659, -1,
  /* DiagSubGroup664 */ 663, 127, -1,
  /* DiagSubGroup666 */ 665, -1,
  /* DiagSubGroup668 */ 667, -1,
  /* DiagSubGroup670 */ 669, -1,
  /* DiagSubGroup672 */ 671, -1,
  /* DiagSubGroup688 */ 690, 689, -1,
  /* DiagSubGroup699 */ 228, -1,
  /* DiagSubGroup702 */ 703, 704, -1,
  /* DiagSubGroup706 */ 708, -1,
  /* DiagSubGroup707 */ 708, -1,
  /* DiagSubGroup709 */ 93, -1,
  /* DiagSubGroup714 */ 715, -1,
  /* DiagSubGroup722 */ 723, -1,
  /* DiagSubGroup724 */ 726, 725, -1,
  /* DiagSubGroup730 */ 876, -1,
  /* DiagSubGroup732 */ 736, 737, -1,
  /* DiagSubGroup733 */ 732, 735, 738, 734, -1,
  /* DiagSubGroup735 */ 736, -1,
  /* DiagSubGroup762 */ 761, -1,
  /* DiagSubGroup765 */ 353, -1,
  /* DiagSubGroup782 */ 655, -1,
  /* DiagSubGroup783 */ 223, -1,
  /* DiagSubGroup796 */ 755, 257, 554, 461, 795, -1,
  /* DiagSubGroup806 */ 807, 812, 811, 805, 814, 810, -1,
  /* DiagSubGroup807 */ 809, -1,
  /* DiagSubGroup808 */ 830, 818, -1,
  /* DiagSubGroup821 */ 823, 822, 826, 827, -1,
  /* DiagSubGroup830 */ 813, 817, 815, 816, -1,
  /* DiagSubGroup849 */ 656, -1,
  /* DiagSubGroup850 */ 851, -1,
  /* DiagSubGroup856 */ 758, 769, 857, -1,
  /* DiagSubGroup866 */ 134, -1,
  /* DiagSubGroup870 */ 874, 873, -1,
  /* DiagSubGroup871 */ 870, 872, 875, -1,
  /* DiagSubGroup889 */ 890, 897, 899, 906, 900, 901, 910, 911, 892, 907, -1,
  /* DiagSubGroup897 */ 867, -1,
  /* DiagSubGroup902 */ 901, -1,
  /* DiagSubGroup904 */ 868, -1,
  /* DiagSubGroup909 */ 867, -1,
  /* DiagSubGroup910 */ 894, 908, 849, -1,
  /* DiagSubGroup911 */ 895, -1,
  /* DiagSubGroup920 */ 919, -1,
  /* DiagSubGroup923 */ 924, -1,
  /* DiagSubGroup926 */ 925, -1,
  /* DiagSubGroup932 */ 232, -1,
  /* DiagSubGroup933 */ 932, -1,
};

static const char DiagGroupNames[] = {
    "\000\020#pragma-messages\t#warnings\020CFString-literal\003CL4\032Indep"
    "endentClass-attribute\022NSObject-attribute\003abi\016absolute-value\024"
    "abstract-final-class\023abstract-vbase-init\007address\030address-of-pa"
    "cked-member\024address-of-temporary\020aggregate-return\naix-compat\016"
    "align-mismatch\003all\006alloca\031alloca-with-align-alignof\027always-"
    "inline-coroutine\020ambiguous-delete\022ambiguous-ellipsis\017ambiguous"
    "-macro\031ambiguous-member-template\033ambiguous-reversed-operator\034a"
    "nalyzer-incompatible-plugin\031anon-enum-enum-conversion\025anonymous-p"
    "ack-parens\003arc%arc-bridge-casts-disallowed-in-nonarc\036arc-maybe-re"
    "peated-use-of-weak\025arc-non-pod-memaccess\031arc-performSelector-leak"
    "s\030arc-repeated-use-of-weak\021arc-retain-cycles\032arc-unsafe-retain"
    "ed-assign\026argument-outside-range\034argument-undefined-behaviour\014"
    "array-bounds\037array-bounds-pointer-arithmetic\003asm\022asm-operand-w"
    "idths\013assign-enum\006assume\013at-protocol\034atimport-in-framework-"
    "header\015atomic-access\020atomic-alignment\027atomic-implicit-seq-cst\026"
    "atomic-memory-ordering\021atomic-properties*atomic-property-with-user-d"
    "efined-accessor\035attribute-packed-for-bitfield\021attribute-warning\n"
    "attributes\033auto-disable-vptr-sanitizer\013auto-import\022auto-storag"
    "e-class\013auto-var-id\014availability\030avr-rtlib-linking-quirks\016b"
    "ackend-plugin\030backslash-newline-escape\021bad-function-cast\016binar"
    "y-literal\026bind-to-temporary-copy\024binding-in-condition\021bit-int-"
    "extension\034bitfield-constant-conversion\030bitfield-enum-conversion\016"
    "bitfield-width\037bitwise-conditional-parentheses\032bitwise-instead-of"
    "-logical\026bitwise-op-parentheses\033block-capture-autoreleasing\017bo"
    "ol-conversion\020bool-conversions\016bool-operation\022braced-scalar-in"
    "it\021branch-protection\013bridge-cast builtin-assume-aligned-alignment"
    "\027builtin-macro-redefined\027builtin-memcpy-chk-size\027builtin-requi"
    "res-header\nc++-compat\014c++0x-compat\020c++0x-extensions\017c++0x-nar"
    "rowing\014c++11-compat(c++11-compat-deprecated-writable-strings\025c++1"
    "1-compat-pedantic*c++11-compat-reserved-user-defined-literal\020c++11-e"
    "xtensions\020c++11-extra-semi\026c++11-inline-namespace\017c++11-long-l"
    "ong\017c++11-narrowing\032c++14-attribute-extensions\024c++14-binary-li"
    "teral\014c++14-compat\025c++14-compat-pedantic\020c++14-extensions\032c"
    "++17-attribute-extensions\014c++17-compat\025c++17-compat-mangling\025c"
    "++17-compat-pedantic\020c++17-extensions\020c++1y-extensions\014c++1z-c"
    "ompat\025c++1z-compat-mangling\020c++1z-extensions\032c++20-attribute-e"
    "xtensions\014c++20-compat\025c++20-compat-pedantic\020c++20-designator\020"
    "c++20-extensions\014c++2a-compat\025c++2a-compat-pedantic\020c++2a-exte"
    "nsions\020c++2b-extensions\036c++98-c++11-c++14-c++17-compat'c++98-c++1"
    "1-c++14-c++17-compat-pedantic\030c++98-c++11-c++14-compat!c++98-c++11-c"
    "++14-compat-pedantic\022c++98-c++11-compat!c++98-c++11-compat-binary-li"
    "teral\033c++98-c++11-compat-pedantic\014c++98-compat#c++98-compat-bind-"
    "to-temporary-copy\027c++98-compat-extra-semi%c++98-compat-local-type-te"
    "mplate-args\025c++98-compat-pedantic'c++98-compat-unnamed-type-template"
    "-args\016c11-extensions\016c2x-extensions\nc99-compat\016c99-designator"
    "\016c99-extensions#call-to-pure-virtual-from-ctor-dtor\025called-once-p"
    "arameter\ncast-align\027cast-calling-convention\022cast-function-type\020"
    "cast-of-sel-type\tcast-qual\023cast-qual-unrelated\nchar-align\017char-"
    "subscripts\014clang-cl-pch\020class-conversion\015class-varargs\017cmse"
    "-union-leak\005comma\007comment\010comments\036compare-distinct-pointer"
    "-types\022completion-handler\026complex-component-init\024compound-toke"
    "n-split\035compound-token-split-by-macro\035compound-token-split-by-spa"
    "ce\022concepts-ts-compat\031conditional-type-mismatch\031conditional-un"
    "initialized\015config-macros\023constant-conversion\022constant-evaluat"
    "ed\030constant-logical-operand\023constexpr-not-const\010consumed\nconv"
    "ersion\017conversion-null\tcoroutine%coroutine-missing-unhandled-except"
    "ion\026covered-switch-default\003cpp\030cstring-format-directive\026cta"
    "d-maybe-unsupported\021ctor-dtor-privacy\003ctu\013cuda-compat\030custo"
    "m-atomic-properties\027cxx-attribute-extension\010dangling\015dangling-"
    "else\016dangling-field\014dangling-gsl\031dangling-initializer-list\023"
    "darwin-sdk-settings\tdate-time\023dealloc-in-category\035debug-compress"
    "ion-unavailable\033declaration-after-statement\032defaulted-function-de"
    "leted\026delegating-ctor-cycles delete-abstract-non-virtual-dtor\021del"
    "ete-incomplete$delete-non-abstract-non-virtual-dtor\027delete-non-virtu"
    "al-dtor#delimited-escape-sequence-extension\ndeprecated\035deprecated-a"
    "ltivec-src-compat$deprecated-anon-enum-enum-conversion\030deprecated-ar"
    "ray-compare\025deprecated-attributes\032deprecated-comma-subscript\017d"
    "eprecated-copy\024deprecated-copy-dtor\031deprecated-copy-with-dtor'dep"
    "recated-copy-with-user-provided-copy'deprecated-copy-with-user-provided"
    "-dtor\024deprecated-coroutine\027deprecated-declarations!deprecated-dyn"
    "amic-exception-spec\027deprecated-enum-compare#deprecated-enum-compare-"
    "conditional\037deprecated-enum-enum-conversion deprecated-enum-float-co"
    "nversion!deprecated-experimental-coroutine\032deprecated-implementation"
    "s\031deprecated-increment-bool\030deprecated-non-prototype\031deprecate"
    "d-objc-isa-usage%deprecated-objc-pointer-introspection5deprecated-objc-"
    "pointer-introspection-performSelector\021deprecated-pragma\023deprecate"
    "d-register\027deprecated-this-capture\017deprecated-type\023deprecated-"
    "volatile\033deprecated-writable-strings\022direct-ivar-access\030disabl"
    "ed-macro-expansion\025disabled-optimization\014discard-qual\034distribu"
    "ted-object-modifiers\013div-by-zero\020division-by-zero\036dll-attribut"
    "e-on-redeclaration%dllexport-explicit-instantiation-decl\032dllimport-s"
    "tatic-field-def\015documentation\035documentation-deprecated-sync\022do"
    "cumentation-html\026documentation-pedantic\035documentation-unknown-com"
    "mand\036dollar-in-identifier-extension\020double-promotion\tdtor-name\014"
    "dtor-typedef\030duplicate-decl-specifier\016duplicate-enum\024duplicate"
    "-method-arg\026duplicate-method-match\022duplicate-protocol\027dynamic-"
    "class-memaccess\026dynamic-exception-spec\006effc++\024elaborated-enum-"
    "base\025elaborated-enum-class\022embedded-directive\nempty-body\023empt"
    "y-decomposition\017empty-init-stmt\026empty-translation-unit\013encode-"
    "type\014endif-labels\014enum-compare\030enum-compare-conditional\023enu"
    "m-compare-switch\017enum-conversion\024enum-enum-conversion\025enum-flo"
    "at-conversion\016enum-too-large\nexceptions\023excess-initializers\025e"
    "xit-time-destructors\024expansion-to-defined\030explicit-initialize-cal"
    "l\027explicit-ownership-type\016export-unnamed\026export-using-directiv"
    "e\017extern-c-compat\022extern-initializer\005extra\023extra-qualificat"
    "ion\nextra-semi\017extra-semi-stmt\014extra-tokens\032final-dtor-non-fi"
    "nal-class\013final-macro\024fixed-enum-extension\024fixed-point-overflo"
    "w\tflag-enum\031flexible-array-extensions\020float-conversion\013float-"
    "equal\031float-overflow-conversion\025float-zero-conversion\021for-loop"
    "-analysis\006format\021format-extra-args\030format-insufficient-args\030"
    "format-invalid-specifier\016format-non-iso\021format-nonliteral\017form"
    "at-pedantic\017format-security\025format-type-confusion\nformat-y2k\022"
    "format-zero-length\010format=2\016fortify-source\023four-char-constants"
    "\015frame-address\021frame-larger-than\022frame-larger-than=%framework-"
    "include-private-from-public\023free-nonheap-object\036function-def-in-o"
    "bjc-container\025function-multiversion\014fuse-ld-path\033future-attrib"
    "ute-extensions\015future-compat\ngcc-compat\023global-constructors\013g"
    "lobal-isel\003gnu\026gnu-alignof-expression\024gnu-anonymous-struct\033"
    "gnu-array-member-paren-init\015gnu-auto-type\022gnu-binary-literal\016g"
    "nu-case-range\023gnu-complex-integer gnu-compound-literal-initializer\037"
    "gnu-conditional-omitted-operand\016gnu-designator\025gnu-empty-initiali"
    "zer\020gnu-empty-struct\036gnu-flexible-array-initializer\037gnu-flexib"
    "le-array-union-member\024gnu-folding-constant\026gnu-imaginary-constant"
    "\020gnu-include-next\035gnu-inline-cpp-without-extern\022gnu-label-as-v"
    "alue\033gnu-null-pointer-arithmetic\021gnu-pointer-arith\023gnu-redecla"
    "red-enum\030gnu-statement-expression\025gnu-static-float-init$gnu-strin"
    "g-literal-operator-template\016gnu-union-cast\"gnu-variable-sized-type-"
    "not-at-end\027gnu-zero-line-directive!gnu-zero-variadic-macro-arguments"
    "\024gpu-maybe-wrong-side\014header-guard\016header-hygiene\010hip-only\025"
    "idiomatic-parentheses\022ignored-attributes)ignored-availability-withou"
    "t-sdk-settings\035ignored-optimization-argument\030ignored-pragma-intri"
    "nsic\027ignored-pragma-optimize\017ignored-pragmas\022ignored-qualifier"
    "s\034ignored-reference-qualifiers\010implicit\032implicit-atomic-proper"
    "ties#implicit-const-int-float-conversion*implicit-conversion-floating-p"
    "oint-to-bool implicit-exception-spec-mismatch\024implicit-fallthrough!i"
    "mplicit-fallthrough-per-function\037implicit-fixed-point-conversion\031"
    "implicit-float-conversion\035implicit-function-declaration\014implicit-"
    "int\027implicit-int-conversion\035implicit-int-float-conversion\024impl"
    "icit-retain-self\033implicitly-unsigned-literal\006import&import-prepro"
    "cessor-directive-pedantic\021inaccessible-base\032include-next-absolute"
    "-path\033include-next-outside-header\033incompatible-exception-spec#inc"
    "ompatible-function-pointer-types\"incompatible-library-redeclaration\026"
    "incompatible-ms-struct\032incompatible-pointer-types.incompatible-point"
    "er-types-discards-qualifiers\032incompatible-property-type\024incompati"
    "ble-sysroot'incomplete-framework-module-declaration\031incomplete-imple"
    "mentation\021incomplete-module\035incomplete-setjmp-declaration\023inco"
    "mplete-umbrella\026inconsistent-dllimport(inconsistent-missing-destruct"
    "or-override\035inconsistent-missing-override\016increment-bool\022infin"
    "ite-recursion\tinit-self\025initializer-overrides\023injected-class-nam"
    "e\006inline\ninline-asm#inline-namespace-reopened-noninline\021inline-n"
    "ew-delete\"instantiation-after-specialization\016int-conversion\017int-"
    "conversions\023int-in-bool-context\023int-to-pointer-cast\030int-to-voi"
    "d-pointer-cast\020integer-overflow\031interrupt-service-routine\035inva"
    "lid-command-line-argument\021invalid-constexpr\020invalid-iboutlet&inva"
    "lid-initializer-from-system-header\035invalid-ios-deployment-target\030"
    "invalid-no-builtin-names\020invalid-noreturn\020invalid-offsetof invali"
    "d-or-nonexistent-directory\036invalid-partial-specialization\013invalid"
    "-pch\020invalid-pp-token\027invalid-source-encoding\023invalid-token-pa"
    "ste\020jump-seh-finally\016keyword-compat\015keyword-macro\026knr-promo"
    "ted-parameter\030language-extension-token\023large-by-value-copy\006lib"
    "lto\017linker-warnings\022literal-conversion\015literal-range\030local-"
    "type-template-args\027logical-not-parentheses\026logical-op-parentheses"
    "\tlong-long\015loop-analysis\017macro-redefined\004main\020main-return-"
    "type\027malformed-warning-check\036many-braces-around-scalar-init\nmax-"
    "tokens\021max-unsigned-zero\026memset-transposed-args\022memsize-compar"
    "ison\021method-signatures\tmicrosoft\022microsoft-abstract\022microsoft"
    "-anon-tag\016microsoft-cast\021microsoft-charize\027microsoft-comment-p"
    "aste\024microsoft-const-init\023microsoft-cpp-macro\"microsoft-default-"
    "arg-redefinition\031microsoft-drectve-section\025microsoft-end-of-file "
    "microsoft-enum-forward-reference\024microsoft-enum-value\030microsoft-e"
    "xception-spec\020microsoft-exists#microsoft-explicit-constructor-call\035"
    "microsoft-extra-qualification\024microsoft-fixed-enum\030microsoft-flex"
    "ible-array\016microsoft-goto\033microsoft-inaccessible-base\021microsof"
    "t-include\033microsoft-mutable-reference\031microsoft-pure-definition\032"
    "microsoft-redeclare-static\020microsoft-sealed\027microsoft-static-asse"
    "rt\022microsoft-template\031microsoft-template-shadow microsoft-union-m"
    "ember-reference\034microsoft-unqualified-friend\024microsoft-using-decl"
    "\032microsoft-void-pseudo-dtor\tmisexpect\026misleading-indentation\025"
    "mismatched-new-delete\032mismatched-parameter-types\027mismatched-retur"
    "n-types\017mismatched-tags\016missing-braces\021missing-constinit\024mi"
    "ssing-declarations\026missing-exception-spec\032missing-field-initializ"
    "ers\030missing-format-attribute\024missing-include-dirs\032missing-meth"
    "od-return-type\020missing-noescape\020missing-noreturn\030missing-proto"
    "type-for-cc\022missing-prototypes\025missing-selector-name\017missing-s"
    "ysroot\035missing-variable-declarations\025misspelled-assumption\014mod"
    "ule-build\017module-conflict\033module-file-config-mismatch\025module-f"
    "ile-extension\015module-import\031module-import-in-extern-c\013module-l"
    "ock\"modules-ambiguous-internal-linkage\037modules-import-nested-redund"
    "ant\004most\004move\014msvc-include\016msvc-not-found\tmultichar\023mul"
    "tiple-move-vbase\tnarrowing\021nested-anon-types\016nested-externs\020n"
    "ew-returns-null\013newline-eof\007noderef\015noexcept-type\031non-c-typ"
    "edef-for-linkage\007non-gcc\033non-literal-null-conversion'non-modular-"
    "include-in-framework-module\035non-modular-include-in-module\017non-pod"
    "-varargs\032non-power-of-two-alignment\020non-virtual-dtor\007nonnull\025"
    "nonportable-cfstrings\030nonportable-include-path\037nonportable-system"
    "-include-path!nonportable-vector-initialization\024nontrivial-memaccess"
    "\023nsconsumed-mismatch\022nsreturns-mismatch\017null-arithmetic\016nul"
    "l-character\017null-conversion\020null-dereference\027null-pointer-arit"
    "hmetic\030null-pointer-subtraction\013nullability\030nullability-comple"
    "teness\"nullability-completeness-on-arrays\024nullability-declspec\025n"
    "ullability-extension#nullability-inferred-on-nested-type\036nullable-to"
    "-nonnull-conversion+objc-autosynthesis-property-ivar-name-match\035objc"
    "-bool-constant-conversion\013objc-boxing\027objc-circular-container\016"
    "objc-cocoa-api\034objc-designated-initializers\036objc-dictionary-dupli"
    "cate-keys\023objc-flexible-array\037objc-forward-class-redefinition\024"
    "objc-interface-ivars\024objc-literal-compare\027objc-literal-conversion"
    "\027objc-macro-redefinition\021objc-messaging-id\022objc-method-access\037"
    "objc-missing-property-synthesis\030objc-missing-super-calls\032objc-mul"
    "tiple-method-names\"objc-noncopy-retain-block-property\032objc-nonunifi"
    "ed-exceptions#objc-property-assign-on-object-type\034objc-property-impl"
    "ementation\037objc-property-implicit-mismatch*objc-property-matches-coc"
    "oa-ownership-rule\032objc-property-no-attribute\027objc-property-synthe"
    "sis#objc-protocol-method-implementation objc-protocol-property-synthesi"
    "s\030objc-protocol-qualifiers\"objc-readonly-with-setter-property\026ob"
    "jc-redundant-api-use\032objc-redundant-literal-use\017objc-root-class\025"
    "objc-signed-char-bool/objc-signed-char-bool-implicit-float-conversion-o"
    "bjc-signed-char-bool-implicit-int-conversion\023objc-string-compare\031"
    "objc-string-concatenation\034objc-unsafe-perform-selector\003odr\016old"
    "-style-cast\024old-style-definition\027opencl-unsupported-rgba\006openm"
    "p\024openmp-51-extensions\016openmp-clauses\020openmp-loop-form\016open"
    "mp-mapping\015openmp-target\016option-ignored!ordered-compare-function-"
    "pointers\027out-of-line-declaration\025out-of-scope-function\014over-al"
    "igned\010overflow\022overlength-strings\037overloaded-shift-op-parenthe"
    "ses\022overloaded-virtual\015override-init\017override-module\032overri"
    "ding-method-mismatch\023overriding-t-option\006packed\006padded\013pare"
    "ntheses\024parentheses-equality\024partial-availability\004pass\015pass"
    "-analysis\013pass-failed\013pass-missed\015pch-date-time\010pedantic\026"
    "pedantic-core-features\017pedantic-macros\020pessimizing-move\015pointe"
    "r-arith\027pointer-bool-conversion\017pointer-compare\027pointer-intege"
    "r-compare\014pointer-sign\024pointer-to-enum-cast\023pointer-to-int-cas"
    "t\025pointer-type-mismatch\031poison-system-directories\033potentially-"
    "direct-selector potentially-evaluated-expression\026pragma-clang-attrib"
    "ute\032pragma-once-outside-header\013pragma-pack\036pragma-pack-suspici"
    "ous-include#pragma-system-header-outside-header\007pragmas\020pre-c++14"
    "-compat\031pre-c++14-compat-pedantic\020pre-c++17-compat\031pre-c++17-c"
    "ompat-pedantic\020pre-c++20-compat\031pre-c++20-compat-pedantic\020pre-"
    "c++2b-compat\031pre-c++2b-compat-pedantic\016pre-c2x-compat\027pre-c2x-"
    "compat-pedantic\024pre-openmp-51-compat&predefined-identifier-outside-f"
    "unction\016private-extern\016private-header\016private-module\025profil"
    "e-instr-missing\031profile-instr-out-of-date\030profile-instr-unprofile"
    "d\032property-access-dot-syntax\033property-attribute-mismatch\010proto"
    "col%protocol-property-synthesis-ambiguity\005psabi\032qualified-void-re"
    "turn-type\"quoted-include-in-framework-header\023range-loop-analysis\031"
    "range-loop-bind-reference\024range-loop-construct\032readonly-iboutlet-"
    "property\015receiver-expr\026receiver-forward-class\027redeclared-class"
    "-member\026redundant-consteval-if\017redundant-decls\016redundant-move\020"
    "redundant-parens\010register\026reinterpret-base-class\025remark-backen"
    "d-plugin\007reorder\014reorder-ctor\021reorder-init-list\030requires-su"
    "per-attribute\021reserved-id-macro\023reserved-identifier\031reserved-m"
    "acro-identifier\035reserved-user-defined-literal\022restrict-expansion\031"
    "retained-language-linkage\024return-stack-address\017return-std-move\013"
    "return-type\025return-type-c-linkage\020rewrite-not-bool\023round-trip-"
    "cc1-args\004rtti\020sanitize-address\021search-path-usage\007section\010"
    "selector\026selector-type-mismatch\013self-assign\021self-assign-field\026"
    "self-assign-overloaded\tself-move\034semicolon-before-method-body\010se"
    "ntinel\016sequence-point\026serialized-diagnostics\006shadow\nshadow-al"
    "l\014shadow-field\033shadow-field-in-constructor$shadow-field-in-constr"
    "uctor-modified\013shadow-ivar\027shadow-uncaptured-local\024shift-count"
    "-negative\024shift-count-overflow\024shift-negative-value\024shift-op-p"
    "arentheses\016shift-overflow\023shift-sign-overflow\020shorten-64-to-32"
    "\014sign-compare\017sign-conversion\nsign-promo\024signed-enum-bitfield"
    "\025signed-unsigned-wchar\025sizeof-array-argument\022sizeof-array-deca"
    "y\020sizeof-array-div\022sizeof-pointer-div\030sizeof-pointer-memaccess"
    "\020slash-u-filename\014slh-asm-goto\027sometimes-uninitialized\nsource"
    "-mgr\022source-uses-openmp\013spir-compat\014spirv-compat\017stack-exha"
    "usted\017stack-protector\021static-float-init\020static-in-inline$stati"
    "c-inline-explicit-instantiation\026static-local-in-inline\020static-sel"
    "f-init\023stdlibcxx-not-found\017strict-aliasing\021strict-aliasing=0\021"
    "strict-aliasing=1\021strict-aliasing=2\017strict-overflow\021strict-ove"
    "rflow=0\021strict-overflow=1\021strict-overflow=2\021strict-overflow=3\021"
    "strict-overflow=4\021strict-overflow=5\"strict-potentially-direct-selec"
    "tor\021strict-prototypes\025strict-selector-match\016string-compare\024"
    "string-concatenation\021string-conversion\020string-plus-char\017string"
    "-plus-int\024strlcpy-strlcat-size\014strncat-size\033suggest-destructor"
    "-override\020suggest-override\033super-class-method-mismatch\020suspici"
    "ous-bzero\024suspicious-memaccess\024swift-name-attribute\006switch\013"
    "switch-bool\016switch-default\013switch-enum%sync-fetch-and-nand-semant"
    "ics-changed\005synth\036target-clones-mixed-specifiers\034tautological-"
    "bitwise-compare\024tautological-compare\035tautological-constant-compar"
    "e&tautological-constant-in-range-compare*tautological-constant-out-of-r"
    "ange-compare\036tautological-objc-bool-compare\034tautological-overlap-"
    "compare\034tautological-pointer-compare\037tautological-type-limit-comp"
    "are\036tautological-undefined-compare'tautological-unsigned-char-zero-c"
    "ompare'tautological-unsigned-enum-zero-compare\"tautological-unsigned-z"
    "ero-compare tautological-value-range-compare\017tcb-enforcement$tentati"
    "ve-definition-incomplete-type\015thread-safety\026thread-safety-analysi"
    "s\030thread-safety-attributes\022thread-safety-beta\026thread-safety-ne"
    "gative\025thread-safety-precise\027thread-safety-reference\025thread-sa"
    "fety-verbose\ttrigraphs\013type-limits\013type-safety\024typedef-redefi"
    "nition\020typename-missing\031unable-to-open-stats-file\020unaligned-ac"
    "cess!unaligned-qualifier-implicit-cast\030unavailable-declarations\023u"
    "ndeclared-selector\005undef\014undef-prefix\031undefined-bool-conversio"
    "n\027undefined-func-template\020undefined-inline\022undefined-internal\027"
    "undefined-internal-type\032undefined-reinterpret-cast\026undefined-var-"
    "template\035underaligned-exception-object\026unevaluated-expression\026"
    "unguarded-availability\032unguarded-availability-new\007unicode\021unic"
    "ode-homoglyph\022unicode-whitespace\022unicode-zero-width\015uninitiali"
    "zed\035uninitialized-const-reference\020unknown-argument\022unknown-ass"
    "umption\022unknown-attributes\024unknown-cuda-version\027unknown-escape"
    "-sequence\017unknown-pragmas\022unknown-sanitizers\026unknown-warning-o"
    "ption\032unnamed-type-template-args\035unneeded-internal-declaration\030"
    "unneeded-member-function\031unqualified-std-cast-call\020unreachable-co"
    "de\033unreachable-code-aggressive\026unreachable-code-break\034unreacha"
    "ble-code-fallthrough\037unreachable-code-loop-increment\027unreachable-"
    "code-return\013unsequenced\017unsupported-abi\017unsupported-abs\036uns"
    "upported-availability-guard\016unsupported-cb#unsupported-dll-base-clas"
    "s-template\036unsupported-floating-point-opt\022unsupported-friend\021u"
    "nsupported-gpopt\017unsupported-nan\026unsupported-target-opt\026unsupp"
    "orted-visibility\037unusable-partial-specialization\006unused\017unused"
    "-argument\030unused-but-set-parameter\027unused-but-set-variable\034unu"
    "sed-command-line-argument\021unused-comparison\025unused-const-variable"
    "\032unused-exception-parameter\017unused-function\032unused-getter-retu"
    "rn-value\014unused-label\025unused-lambda-capture\024unused-local-typed"
    "ef\025unused-local-typedefs\015unused-macros\026unused-member-function\020"
    "unused-parameter\024unused-private-field\024unused-property-ivar\015unu"
    "sed-result\017unused-template\014unused-value\017unused-variable\026unu"
    "sed-volatile-lvalue\026used-but-marked-unused\025user-defined-literals\025"
    "user-defined-warnings\007varargs\017variadic-macros\015vec-elem-size\021"
    "vector-conversion\022vector-conversions\014vexing-parse\nvisibility\003"
    "vla\015vla-extension\031void-pointer-to-enum-cast\030void-pointer-to-in"
    "t-cast\024void-ptr-dereference\025volatile-register-var\023wasm-excepti"
    "on-spec\025weak-template-vtables\014weak-vtables\020writable-strings\015"
    "write-strings\017xor-used-as-pow\035zero-as-null-pointer-constant\021ze"
    "ro-length-array"};

#endif // GET_DIAG_ARRAYS


#ifdef DIAG_ENTRY
DIAG_ENTRY(anonymous_53 /*  */, 0, 0, /* DiagSubGroup0 */ 1)
DIAG_ENTRY(PoundPragmaMessage /* #pragma-messages */, 1, /* DiagArray1 */ 1, 0)
DIAG_ENTRY(PoundWarning /* #warnings */, 18, /* DiagArray2 */ 3, 0)
DIAG_ENTRY(anonymous_251 /* CFString-literal */, 28, /* DiagArray3 */ 5, 0)
DIAG_ENTRY(anonymous_52 /* CL4 */, 45, 0, /* DiagSubGroup4 */ 3)
DIAG_ENTRY(IndependentClassAttribute /* IndependentClass-attribute */, 49, /* DiagArray5 */ 7, 0)
DIAG_ENTRY(NSobjectAttribute /* NSObject-attribute */, 76, /* DiagArray6 */ 10, 0)
DIAG_ENTRY(anonymous_0 /* abi */, 95, 0, 0)
DIAG_ENTRY(AbsoluteValue /* absolute-value */, 99, /* DiagArray8 */ 12, 0)
DIAG_ENTRY(AbstractFinalClass /* abstract-final-class */, 114, /* DiagArray9 */ 17, 0)
DIAG_ENTRY(anonymous_245 /* abstract-vbase-init */, 135, /* DiagArray10 */ 19, 0)
DIAG_ENTRY(anonymous_51 /* address */, 155, 0, /* DiagSubGroup11 */ 6)
DIAG_ENTRY(anonymous_225 /* address-of-packed-member */, 163, /* DiagArray12 */ 21, 0)
DIAG_ENTRY(AddressOfTemporary /* address-of-temporary */, 188, /* DiagArray13 */ 23, 0)
DIAG_ENTRY(anonymous_1 /* aggregate-return */, 209, 0, 0)
DIAG_ENTRY(AIXCompat /* aix-compat */, 226, /* DiagArray15 */ 25, 0)
DIAG_ENTRY(anonymous_226 /* align-mismatch */, 237, /* DiagArray16 */ 28, 0)
DIAG_ENTRY(All /* all */, 252, 0, /* DiagSubGroup17 */ 10)
DIAG_ENTRY(anonymous_170 /* alloca */, 256, /* DiagArray18 */ 30, 0)
DIAG_ENTRY(anonymous_171 /* alloca-with-align-alignof */, 263, /* DiagArray19 */ 32, 0)
DIAG_ENTRY(AlwaysInlineCoroutine /* always-inline-coroutine */, 289, /* DiagArray20 */ 34, 0)
DIAG_ENTRY(anonymous_232 /* ambiguous-delete */, 313, /* DiagArray21 */ 36, 0)
DIAG_ENTRY(anonymous_125 /* ambiguous-ellipsis */, 330, /* DiagArray22 */ 38, 0)
DIAG_ENTRY(AmbiguousMacro /* ambiguous-macro */, 349, /* DiagArray23 */ 40, 0)
DIAG_ENTRY(AmbigMemberTemplate /* ambiguous-member-template */, 365, /* DiagArray24 */ 42, 0)
DIAG_ENTRY(anonymous_191 /* ambiguous-reversed-operator */, 391, /* DiagArray25 */ 44, 0)
DIAG_ENTRY(anonymous_87 /* analyzer-incompatible-plugin */, 419, /* DiagArray26 */ 46, 0)
DIAG_ENTRY(AnonEnumEnumConversion /* anon-enum-enum-conversion */, 448, /* DiagArray27 */ 48, /* DiagSubGroup27 */ 16)
DIAG_ENTRY(anonymous_126 /* anonymous-pack-parens */, 474, /* DiagArray28 */ 50, 0)
DIAG_ENTRY(AutomaticReferenceCounting /* arc */, 496, 0, /* DiagSubGroup29 */ 18)
DIAG_ENTRY(anonymous_124 /* arc-bridge-casts-disallowed-in-nonarc */, 500, /* DiagArray30 */ 52, 0)
DIAG_ENTRY(ARCRepeatedUseOfWeakMaybe /* arc-maybe-repeated-use-of-weak */, 538, /* DiagArray31 */ 54, 0)
DIAG_ENTRY(ARCNonPodMemAccess /* arc-non-pod-memaccess */, 569, /* DiagArray32 */ 56, 0)
DIAG_ENTRY(anonymous_155 /* arc-performSelector-leaks */, 591, /* DiagArray33 */ 58, 0)
DIAG_ENTRY(ARCRepeatedUseOfWeak /* arc-repeated-use-of-weak */, 617, /* DiagArray34 */ 60, /* DiagSubGroup34 */ 22)
DIAG_ENTRY(ARCRetainCycles /* arc-retain-cycles */, 642, /* DiagArray35 */ 62, 0)
DIAG_ENTRY(ARCUnsafeRetainedAssign /* arc-unsafe-retained-assign */, 660, /* DiagArray36 */ 64, 0)
DIAG_ENTRY(anonymous_253 /* argument-outside-range */, 687, /* DiagArray37 */ 68, 0)
DIAG_ENTRY(anonymous_254 /* argument-undefined-behaviour */, 710, /* DiagArray38 */ 70, 0)
DIAG_ENTRY(ArrayBounds /* array-bounds */, 739, /* DiagArray39 */ 72, 0)
DIAG_ENTRY(ArrayBoundsPointerArithmetic /* array-bounds-pointer-arithmetic */, 752, /* DiagArray40 */ 78, 0)
DIAG_ENTRY(ASM /* asm */, 784, 0, /* DiagSubGroup41 */ 24)
DIAG_ENTRY(ASMOperandWidths /* asm-operand-widths */, 788, /* DiagArray42 */ 81, 0)
DIAG_ENTRY(anonymous_252 /* assign-enum */, 807, /* DiagArray43 */ 83, 0)
DIAG_ENTRY(anonymous_142 /* assume */, 819, /* DiagArray44 */ 85, 0)
DIAG_ENTRY(anonymous_50 /* at-protocol */, 826, 0, 0)
DIAG_ENTRY(FrameworkHdrAtImport /* atimport-in-framework-header */, 838, /* DiagArray46 */ 87, 0)
DIAG_ENTRY(anonymous_213 /* atomic-access */, 867, /* DiagArray47 */ 89, 0)
DIAG_ENTRY(AtomicAlignment /* atomic-alignment */, 881, /* DiagArray48 */ 91, 0)
DIAG_ENTRY(anonymous_238 /* atomic-implicit-seq-cst */, 898, /* DiagArray49 */ 94, 0)
DIAG_ENTRY(anonymous_237 /* atomic-memory-ordering */, 922, /* DiagArray50 */ 96, 0)
DIAG_ENTRY(AtomicProperties /* atomic-properties */, 945, 0, /* DiagSubGroup51 */ 26)
DIAG_ENTRY(anonymous_150 /* atomic-property-with-user-defined-accessor */, 963, /* DiagArray52 */ 98, 0)
DIAG_ENTRY(anonymous_187 /* attribute-packed-for-bitfield */, 1006, /* DiagArray53 */ 100, 0)
DIAG_ENTRY(BackendWarningAttributes /* attribute-warning */, 1036, /* DiagArray54 */ 102, 0)
DIAG_ENTRY(Attributes /* attributes */, 1054, 0, /* DiagSubGroup55 */ 29)
DIAG_ENTRY(AutoDisableVptrSanitizer /* auto-disable-vptr-sanitizer */, 1065, /* DiagArray56 */ 104, 0)
DIAG_ENTRY(AutoImport /* auto-import */, 1093, /* DiagArray57 */ 106, 0)
DIAG_ENTRY(anonymous_122 /* auto-storage-class */, 1105, /* DiagArray58 */ 108, 0)
DIAG_ENTRY(anonymous_167 /* auto-var-id */, 1124, /* DiagArray59 */ 110, 0)
DIAG_ENTRY(Availability /* availability */, 1136, /* DiagArray60 */ 112, 0)
DIAG_ENTRY(AVRRtlibLinkingQuirks /* avr-rtlib-linking-quirks */, 1149, /* DiagArray61 */ 123, 0)
DIAG_ENTRY(BackendPlugin /* backend-plugin */, 1174, /* DiagArray62 */ 130, 0)
DIAG_ENTRY(anonymous_90 /* backslash-newline-escape */, 1189, /* DiagArray63 */ 132, 0)
DIAG_ENTRY(BadFunctionCast /* bad-function-cast */, 1214, /* DiagArray64 */ 134, 0)
DIAG_ENTRY(BinaryLiteral /* binary-literal */, 1232, 0, /* DiagSubGroup65 */ 32)
DIAG_ENTRY(BindToTemporaryCopy /* bind-to-temporary-copy */, 1247, /* DiagArray66 */ 136, /* DiagSubGroup66 */ 36)
DIAG_ENTRY(anonymous_137 /* binding-in-condition */, 1270, /* DiagArray67 */ 139, 0)
DIAG_ENTRY(anonymous_129 /* bit-int-extension */, 1291, /* DiagArray68 */ 141, 0)
DIAG_ENTRY(BitFieldConstantConversion /* bitfield-constant-conversion */, 1309, /* DiagArray69 */ 143, 0)
DIAG_ENTRY(BitFieldEnumConversion /* bitfield-enum-conversion */, 1338, /* DiagArray70 */ 145, 0)
DIAG_ENTRY(BitFieldWidth /* bitfield-width */, 1363, /* DiagArray71 */ 149, 0)
DIAG_ENTRY(BitwiseConditionalParentheses /* bitwise-conditional-parentheses */, 1378, /* DiagArray72 */ 151, 0)
DIAG_ENTRY(BitwiseInsteadOfLogical /* bitwise-instead-of-logical */, 1410, /* DiagArray73 */ 153, 0)
DIAG_ENTRY(BitwiseOpParentheses /* bitwise-op-parentheses */, 1437, /* DiagArray74 */ 155, 0)
DIAG_ENTRY(BlockCaptureAutoReleasing /* block-capture-autoreleasing */, 1460, /* DiagArray75 */ 157, 0)
DIAG_ENTRY(BoolConversion /* bool-conversion */, 1488, /* DiagArray76 */ 159, /* DiagSubGroup76 */ 38)
DIAG_ENTRY(anonymous_58 /* bool-conversions */, 1504, 0, /* DiagSubGroup77 */ 41)
DIAG_ENTRY(BoolOperation /* bool-operation */, 1521, /* DiagArray78 */ 161, /* DiagSubGroup78 */ 43)
DIAG_ENTRY(anonymous_208 /* braced-scalar-init */, 1536, /* DiagArray79 */ 163, 0)
DIAG_ENTRY(BranchProtection /* branch-protection */, 1555, /* DiagArray80 */ 165, 0)
DIAG_ENTRY(ObjCBridge /* bridge-cast */, 1573, /* DiagArray81 */ 170, 0)
DIAG_ENTRY(anonymous_173 /* builtin-assume-aligned-alignment */, 1585, /* DiagArray82 */ 173, 0)
DIAG_ENTRY(BuiltinMacroRedefined /* builtin-macro-redefined */, 1618, /* DiagArray83 */ 175, 0)
DIAG_ENTRY(anonymous_143 /* builtin-memcpy-chk-size */, 1642, /* DiagArray84 */ 178, 0)
DIAG_ENTRY(BuiltinRequiresHeader /* builtin-requires-header */, 1666, /* DiagArray85 */ 180, 0)
DIAG_ENTRY(CXXCompat /* c++-compat */, 1690, /* DiagArray86 */ 182, 0)
DIAG_ENTRY(anonymous_18 /* c++0x-compat */, 1701, 0, /* DiagSubGroup87 */ 45)
DIAG_ENTRY(anonymous_62 /* c++0x-extensions */, 1714, 0, /* DiagSubGroup88 */ 47)
DIAG_ENTRY(anonymous_16 /* c++0x-narrowing */, 1731, 0, /* DiagSubGroup89 */ 49)
DIAG_ENTRY(CXX11Compat /* c++11-compat */, 1747, /* DiagArray90 */ 184, /* DiagSubGroup90 */ 51)
DIAG_ENTRY(CXX11CompatDeprecatedWritableStr /* c++11-compat-deprecated-writable-strings */, 1760, /* DiagArray91 */ 195, 0)
DIAG_ENTRY(CXX11CompatPedantic /* c++11-compat-pedantic */, 1801, 0, /* DiagSubGroup92 */ 59)
DIAG_ENTRY(CXX11CompatReservedUserDefinedLiteral /* c++11-compat-reserved-user-defined-literal */, 1823, /* DiagArray93 */ 197, 0)
DIAG_ENTRY(CXX11 /* c++11-extensions */, 1866, /* DiagArray94 */ 199, /* DiagSubGroup94 */ 65)
DIAG_ENTRY(CXX11ExtraSemi /* c++11-extra-semi */, 1883, /* DiagArray95 */ 225, 0)
DIAG_ENTRY(CXX11InlineNamespace /* c++11-inline-namespace */, 1900, /* DiagArray96 */ 227, 0)
DIAG_ENTRY(CXX11LongLong /* c++11-long-long */, 1923, /* DiagArray97 */ 229, 0)
DIAG_ENTRY(CXX11Narrowing /* c++11-narrowing */, 1939, /* DiagArray98 */ 231, 0)
DIAG_ENTRY(CXX14Attrs /* c++14-attribute-extensions */, 1955, /* DiagArray99 */ 239, 0)
DIAG_ENTRY(CXX14BinaryLiteral /* c++14-binary-literal */, 1982, /* DiagArray100 */ 241, 0)
DIAG_ENTRY(CXX14Compat /* c++14-compat */, 2003, 0, /* DiagSubGroup101 */ 69)
DIAG_ENTRY(CXX14CompatPedantic /* c++14-compat-pedantic */, 2016, 0, /* DiagSubGroup102 */ 73)
DIAG_ENTRY(CXX14 /* c++14-extensions */, 2038, /* DiagArray103 */ 243, /* DiagSubGroup103 */ 78)
DIAG_ENTRY(CXX17Attrs /* c++17-attribute-extensions */, 2055, /* DiagArray104 */ 251, 0)
DIAG_ENTRY(CXX17Compat /* c++17-compat */, 2082, 0, /* DiagSubGroup105 */ 81)
DIAG_ENTRY(CXX17CompatMangling /* c++17-compat-mangling */, 2095, /* DiagArray106 */ 253, 0)
DIAG_ENTRY(CXX17CompatPedantic /* c++17-compat-pedantic */, 2117, 0, /* DiagSubGroup107 */ 87)
DIAG_ENTRY(CXX17 /* c++17-extensions */, 2139, /* DiagArray108 */ 255, /* DiagSubGroup108 */ 91)
DIAG_ENTRY(anonymous_63 /* c++1y-extensions */, 2156, 0, /* DiagSubGroup109 */ 93)
DIAG_ENTRY(anonymous_19 /* c++1z-compat */, 2173, 0, /* DiagSubGroup110 */ 95)
DIAG_ENTRY(anonymous_9 /* c++1z-compat-mangling */, 2186, 0, /* DiagSubGroup111 */ 97)
DIAG_ENTRY(anonymous_64 /* c++1z-extensions */, 2208, 0, /* DiagSubGroup112 */ 99)
DIAG_ENTRY(CXX20Attrs /* c++20-attribute-extensions */, 2225, /* DiagArray113 */ 273, 0)
DIAG_ENTRY(CXX20Compat /* c++20-compat */, 2252, /* DiagArray114 */ 275, /* DiagSubGroup114 */ 101)
DIAG_ENTRY(CXX20CompatPedantic /* c++20-compat-pedantic */, 2265, 0, /* DiagSubGroup115 */ 103)
DIAG_ENTRY(CXX20Designator /* c++20-designator */, 2287, /* DiagArray116 */ 284, 0)
DIAG_ENTRY(CXX20 /* c++20-extensions */, 2304, /* DiagArray117 */ 286, /* DiagSubGroup117 */ 106)
DIAG_ENTRY(anonymous_20 /* c++2a-compat */, 2321, 0, /* DiagSubGroup118 */ 109)
DIAG_ENTRY(anonymous_21 /* c++2a-compat-pedantic */, 2334, 0, /* DiagSubGroup119 */ 111)
DIAG_ENTRY(anonymous_65 /* c++2a-extensions */, 2356, 0, /* DiagSubGroup120 */ 113)
DIAG_ENTRY(CXX2b /* c++2b-extensions */, 2373, /* DiagArray121 */ 305, 0)
DIAG_ENTRY(anonymous_14 /* c++98-c++11-c++14-c++17-compat */, 2390, 0, /* DiagSubGroup122 */ 115)
DIAG_ENTRY(anonymous_15 /* c++98-c++11-c++14-c++17-compat-pedantic */, 2421, 0, /* DiagSubGroup123 */ 117)
DIAG_ENTRY(anonymous_12 /* c++98-c++11-c++14-compat */, 2461, 0, /* DiagSubGroup124 */ 119)
DIAG_ENTRY(anonymous_13 /* c++98-c++11-c++14-compat-pedantic */, 2486, 0, /* DiagSubGroup125 */ 121)
DIAG_ENTRY(anonymous_10 /* c++98-c++11-compat */, 2520, 0, /* DiagSubGroup126 */ 123)
DIAG_ENTRY(CXXPre14CompatBinaryLiteral /* c++98-c++11-compat-binary-literal */, 2539, /* DiagArray127 */ 313, 0)
DIAG_ENTRY(anonymous_11 /* c++98-c++11-compat-pedantic */, 2573, 0, /* DiagSubGroup128 */ 125)
DIAG_ENTRY(CXX98Compat /* c++98-compat */, 2601, /* DiagArray129 */ 315, /* DiagSubGroup129 */ 127)
DIAG_ENTRY(CXX98CompatBindToTemporaryCopy /* c++98-compat-bind-to-temporary-copy */, 2614, /* DiagArray130 */ 375, 0)
DIAG_ENTRY(CXX98CompatExtraSemi /* c++98-compat-extra-semi */, 2650, /* DiagArray131 */ 377, 0)
DIAG_ENTRY(CXX98CompatLocalTypeTemplateArgs /* c++98-compat-local-type-template-args */, 2674, /* DiagArray132 */ 379, 0)
DIAG_ENTRY(CXX98CompatPedantic /* c++98-compat-pedantic */, 2712, /* DiagArray133 */ 381, /* DiagSubGroup133 */ 134)
DIAG_ENTRY(CXX98CompatUnnamedTypeTemplateArgs /* c++98-compat-unnamed-type-template-args */, 2734, /* DiagArray134 */ 391, 0)
DIAG_ENTRY(C11 /* c11-extensions */, 2774, /* DiagArray135 */ 393, 0)
DIAG_ENTRY(C2x /* c2x-extensions */, 2789, /* DiagArray136 */ 398, 0)
DIAG_ENTRY(C99Compat /* c99-compat */, 2804, /* DiagArray137 */ 402, 0)
DIAG_ENTRY(C99Designator /* c99-designator */, 2815, /* DiagArray138 */ 406, /* DiagSubGroup138 */ 142)
DIAG_ENTRY(C99 /* c99-extensions */, 2830, /* DiagArray139 */ 412, /* DiagSubGroup139 */ 144)
DIAG_ENTRY(PureVirtualCallFromCtorDtor /* call-to-pure-virtual-from-ctor-dtor */, 2845, /* DiagArray140 */ 423, 0)
DIAG_ENTRY(CalledOnceParameter /* called-once-parameter */, 2881, /* DiagArray141 */ 425, /* DiagSubGroup141 */ 146)
DIAG_ENTRY(CastAlign /* cast-align */, 2903, /* DiagArray142 */ 429, 0)
DIAG_ENTRY(anonymous_240 /* cast-calling-convention */, 2914, /* DiagArray143 */ 431, 0)
DIAG_ENTRY(CastFunctionType /* cast-function-type */, 2938, /* DiagArray144 */ 433, 0)
DIAG_ENTRY(SelTypeCast /* cast-of-sel-type */, 2957, /* DiagArray145 */ 435, 0)
DIAG_ENTRY(CastQual /* cast-qual */, 2974, /* DiagArray146 */ 437, 0)
DIAG_ENTRY(anonymous_230 /* cast-qual-unrelated */, 2984, /* DiagArray147 */ 440, 0)
DIAG_ENTRY(anonymous_2 /* char-align */, 3004, 0, 0)
DIAG_ENTRY(CharSubscript /* char-subscripts */, 3015, /* DiagArray149 */ 442, 0)
DIAG_ENTRY(ClangClPch /* clang-cl-pch */, 3031, /* DiagArray150 */ 445, 0)
DIAG_ENTRY(ClassConversion /* class-conversion */, 3044, /* DiagArray151 */ 450, 0)
DIAG_ENTRY(ClassVarargs /* class-varargs */, 3061, /* DiagArray152 */ 454, /* DiagSubGroup152 */ 148)
DIAG_ENTRY(anonymous_174 /* cmse-union-leak */, 3075, /* DiagArray153 */ 456, 0)
DIAG_ENTRY(anonymous_132 /* comma */, 3091, /* DiagArray154 */ 458, 0)
DIAG_ENTRY(Comment /* comment */, 3097, /* DiagArray155 */ 460, 0)
DIAG_ENTRY(anonymous_56 /* comments */, 3105, 0, /* DiagSubGroup156 */ 150)
DIAG_ENTRY(CompareDistinctPointerType /* compare-distinct-pointer-types */, 3114, /* DiagArray157 */ 465, 0)
DIAG_ENTRY(CompletionHandler /* completion-handler */, 3145, /* DiagArray158 */ 467, 0)
DIAG_ENTRY(anonymous_210 /* complex-component-init */, 3164, /* DiagArray159 */ 471, 0)
DIAG_ENTRY(CompoundTokenSplit /* compound-token-split */, 3187, 0, /* DiagSubGroup160 */ 152)
DIAG_ENTRY(CompoundTokenSplitByMacro /* compound-token-split-by-macro */, 3208, /* DiagArray161 */ 473, 0)
DIAG_ENTRY(CompoundTokenSplitBySpace /* compound-token-split-by-space */, 3238, /* DiagArray162 */ 475, 0)
DIAG_ENTRY(anonymous_130 /* concepts-ts-compat */, 3268, /* DiagArray163 */ 477, 0)
DIAG_ENTRY(anonymous_242 /* conditional-type-mismatch */, 3287, /* DiagArray164 */ 479, 0)
DIAG_ENTRY(UninitializedMaybe /* conditional-uninitialized */, 3313, /* DiagArray165 */ 481, 0)
DIAG_ENTRY(ConfigMacros /* config-macros */, 3339, /* DiagArray166 */ 483, 0)
DIAG_ENTRY(ConstantConversion /* constant-conversion */, 3353, /* DiagArray167 */ 485, /* DiagSubGroup167 */ 155)
DIAG_ENTRY(anonymous_71 /* constant-evaluated */, 3373, /* DiagArray168 */ 487, 0)
DIAG_ENTRY(anonymous_220 /* constant-logical-operand */, 3392, /* DiagArray169 */ 489, 0)
DIAG_ENTRY(anonymous_165 /* constexpr-not-const */, 3417, /* DiagArray170 */ 491, 0)
DIAG_ENTRY(Consumed /* consumed */, 3437, /* DiagArray171 */ 493, 0)
DIAG_ENTRY(Conversion /* conversion */, 3446, /* DiagArray172 */ 502, /* DiagSubGroup172 */ 158)
DIAG_ENTRY(anonymous_57 /* conversion-null */, 3457, 0, /* DiagSubGroup173 */ 174)
DIAG_ENTRY(Coroutine /* coroutine */, 3473, /* DiagArray174 */ 508, /* DiagSubGroup174 */ 176)
DIAG_ENTRY(CoroutineMissingUnhandledException /* coroutine-missing-unhandled-exception */, 3483, /* DiagArray175 */ 510, 0)
DIAG_ENTRY(CoveredSwitchDefault /* covered-switch-default */, 3521, /* DiagArray176 */ 512, 0)
DIAG_ENTRY(anonymous_55 /* cpp */, 3544, 0, /* DiagSubGroup177 */ 180)
DIAG_ENTRY(ObjCCStringFormat /* cstring-format-directive */, 3548, /* DiagArray178 */ 514, 0)
DIAG_ENTRY(CTADMaybeUnsupported /* ctad-maybe-unsupported */, 3573, /* DiagArray179 */ 516, 0)
DIAG_ENTRY(anonymous_3 /* ctor-dtor-privacy */, 3596, 0, 0)
DIAG_ENTRY(CrossTU /* ctu */, 3614, /* DiagArray181 */ 518, 0)
DIAG_ENTRY(CudaCompat /* cuda-compat */, 3618, /* DiagArray182 */ 520, 0)
DIAG_ENTRY(CustomAtomic /* custom-atomic-properties */, 3630, /* DiagArray183 */ 526, 0)
DIAG_ENTRY(anonymous_127 /* cxx-attribute-extension */, 3655, /* DiagArray184 */ 528, 0)
DIAG_ENTRY(Dangling /* dangling */, 3679, /* DiagArray185 */ 530, /* DiagSubGroup185 */ 182)
DIAG_ENTRY(DanglingElse /* dangling-else */, 3688, /* DiagArray186 */ 533, 0)
DIAG_ENTRY(DanglingField /* dangling-field */, 3702, /* DiagArray187 */ 535, 0)
DIAG_ENTRY(DanglingGsl /* dangling-gsl */, 3717, /* DiagArray188 */ 540, 0)
DIAG_ENTRY(DanglingInitializerList /* dangling-initializer-list */, 3730, /* DiagArray189 */ 543, 0)
DIAG_ENTRY(anonymous_83 /* darwin-sdk-settings */, 3756, /* DiagArray190 */ 545, 0)
DIAG_ENTRY(anonymous_112 /* date-time */, 3776, /* DiagArray191 */ 547, 0)
DIAG_ENTRY(DeallocInCategory /* dealloc-in-category */, 3786, /* DiagArray192 */ 549, 0)
DIAG_ENTRY(anonymous_80 /* debug-compression-unavailable */, 3806, /* DiagArray193 */ 551, 0)
DIAG_ENTRY(DeclarationAfterStatement /* declaration-after-statement */, 3836, /* DiagArray194 */ 553, 0)
DIAG_ENTRY(DefaultedFunctionDeleted /* defaulted-function-deleted */, 3864, /* DiagArray195 */ 556, 0)
DIAG_ENTRY(DelegatingCtorCycles /* delegating-ctor-cycles */, 3891, /* DiagArray196 */ 559, 0)
DIAG_ENTRY(DeleteAbstractNonVirtualDtor /* delete-abstract-non-virtual-dtor */, 3914, /* DiagArray197 */ 561, 0)
DIAG_ENTRY(DeleteIncomplete /* delete-incomplete */, 3947, /* DiagArray198 */ 563, 0)
DIAG_ENTRY(DeleteNonAbstractNonVirtualDtor /* delete-non-abstract-non-virtual-dtor */, 3965, /* DiagArray199 */ 566, 0)
DIAG_ENTRY(DeleteNonVirtualDtor /* delete-non-virtual-dtor */, 4002, 0, /* DiagSubGroup200 */ 187)
DIAG_ENTRY(anonymous_96 /* delimited-escape-sequence-extension */, 4026, /* DiagArray201 */ 568, 0)
DIAG_ENTRY(Deprecated /* deprecated */, 4062, /* DiagArray202 */ 570, /* DiagSubGroup202 */ 190)
DIAG_ENTRY(anonymous_233 /* deprecated-altivec-src-compat */, 4073, /* DiagArray203 */ 579, 0)
DIAG_ENTRY(DeprecatedAnonEnumEnumConversion /* deprecated-anon-enum-enum-conversion */, 4103, /* DiagArray204 */ 581, 0)
DIAG_ENTRY(DeprecatedArrayCompare /* deprecated-array-compare */, 4140, /* DiagArray205 */ 583, 0)
DIAG_ENTRY(DeprecatedAttributes /* deprecated-attributes */, 4165, /* DiagArray206 */ 585, 0)
DIAG_ENTRY(DeprecatedCommaSubscript /* deprecated-comma-subscript */, 4187, /* DiagArray207 */ 588, 0)
DIAG_ENTRY(DeprecatedCopy /* deprecated-copy */, 4214, /* DiagArray208 */ 590, /* DiagSubGroup208 */ 210)
DIAG_ENTRY(anonymous_4 /* deprecated-copy-dtor */, 4230, 0, /* DiagSubGroup209 */ 212)
DIAG_ENTRY(DeprecatedCopyWithDtor /* deprecated-copy-with-dtor */, 4251, /* DiagArray210 */ 592, /* DiagSubGroup210 */ 214)
DIAG_ENTRY(DeprecatedCopyWithUserProvidedCopy /* deprecated-copy-with-user-provided-copy */, 4277, /* DiagArray211 */ 594, 0)
DIAG_ENTRY(DeprecatedCopyWithUserProvidedDtor /* deprecated-copy-with-user-provided-dtor */, 4317, /* DiagArray212 */ 596, 0)
DIAG_ENTRY(DeprecatedCoroutine /* deprecated-coroutine */, 4357, /* DiagArray213 */ 598, /* DiagSubGroup213 */ 216)
DIAG_ENTRY(DeprecatedDeclarations /* deprecated-declarations */, 4378, /* DiagArray214 */ 600, 0)
DIAG_ENTRY(DeprecatedDynamicExceptionSpec /* deprecated-dynamic-exception-spec */, 4402, /* DiagArray215 */ 607, 0)
DIAG_ENTRY(DeprecatedEnumCompare /* deprecated-enum-compare */, 4436, /* DiagArray216 */ 609, 0)
DIAG_ENTRY(DeprecatedEnumCompareConditional /* deprecated-enum-compare-conditional */, 4460, /* DiagArray217 */ 611, 0)
DIAG_ENTRY(DeprecatedEnumEnumConversion /* deprecated-enum-enum-conversion */, 4496, /* DiagArray218 */ 613, 0)
DIAG_ENTRY(DeprecatedEnumFloatConversion /* deprecated-enum-float-conversion */, 4528, /* DiagArray219 */ 615, 0)
DIAG_ENTRY(DeprecatedExperimentalCoroutine /* deprecated-experimental-coroutine */, 4561, /* DiagArray220 */ 617, 0)
DIAG_ENTRY(DeprecatedImplementations /* deprecated-implementations */, 4595, /* DiagArray221 */ 619, 0)
DIAG_ENTRY(DeprecatedIncrementBool /* deprecated-increment-bool */, 4622, /* DiagArray222 */ 622, 0)
DIAG_ENTRY(DeprecatedNonPrototype /* deprecated-non-prototype */, 4648, /* DiagArray223 */ 624, 0)
DIAG_ENTRY(DeprecatedObjCIsaUsage /* deprecated-objc-isa-usage */, 4673, /* DiagArray224 */ 627, 0)
DIAG_ENTRY(ObjCPointerIntrospect /* deprecated-objc-pointer-introspection */, 4699, /* DiagArray225 */ 630, /* DiagSubGroup225 */ 218)
DIAG_ENTRY(ObjCPointerIntrospectPerformSelector /* deprecated-objc-pointer-introspection-performSelector */, 4737, /* DiagArray226 */ 632, 0)
DIAG_ENTRY(DeprecatedPragma /* deprecated-pragma */, 4791, /* DiagArray227 */ 634, 0)
DIAG_ENTRY(DeprecatedRegister /* deprecated-register */, 4809, /* DiagArray228 */ 636, 0)
DIAG_ENTRY(DeprecatedThisCapture /* deprecated-this-capture */, 4829, /* DiagArray229 */ 638, 0)
DIAG_ENTRY(DeprecatedType /* deprecated-type */, 4853, /* DiagArray230 */ 640, 0)
DIAG_ENTRY(DeprecatedVolatile /* deprecated-volatile */, 4869, /* DiagArray231 */ 642, 0)
DIAG_ENTRY(DeprecatedWritableStr /* deprecated-writable-strings */, 4889, 0, /* DiagSubGroup232 */ 220)
DIAG_ENTRY(anonymous_258 /* direct-ivar-access */, 4917, /* DiagArray233 */ 649, 0)
DIAG_ENTRY(anonymous_104 /* disabled-macro-expansion */, 4936, /* DiagArray234 */ 651, 0)
DIAG_ENTRY(anonymous_6 /* disabled-optimization */, 4961, 0, 0)
DIAG_ENTRY(anonymous_7 /* discard-qual */, 4983, 0, 0)
DIAG_ENTRY(DistributedObjectModifiers /* distributed-object-modifiers */, 4996, /* DiagArray237 */ 653, 0)
DIAG_ENTRY(anonymous_8 /* div-by-zero */, 5025, 0, /* DiagSubGroup238 */ 222)
DIAG_ENTRY(DivZero /* division-by-zero */, 5037, /* DiagArray239 */ 656, 0)
DIAG_ENTRY(anonymous_175 /* dll-attribute-on-redeclaration */, 5054, /* DiagArray240 */ 658, 0)
DIAG_ENTRY(DllexportExplicitInstantiationDecl /* dllexport-explicit-instantiation-decl */, 5085, /* DiagArray241 */ 660, 0)
DIAG_ENTRY(anonymous_176 /* dllimport-static-field-def */, 5123, /* DiagArray242 */ 662, 0)
DIAG_ENTRY(Documentation /* documentation */, 5150, /* DiagArray243 */ 664, /* DiagSubGroup243 */ 224)
DIAG_ENTRY(DocumentationDeprecatedSync /* documentation-deprecated-sync */, 5164, /* DiagArray244 */ 684, 0)
DIAG_ENTRY(DocumentationHTML /* documentation-html */, 5194, /* DiagArray245 */ 686, 0)
DIAG_ENTRY(DocumentationPedantic /* documentation-pedantic */, 5213, /* DiagArray246 */ 691, /* DiagSubGroup246 */ 227)
DIAG_ENTRY(DocumentationUnknownCommand /* documentation-unknown-command */, 5236, /* DiagArray247 */ 693, 0)
DIAG_ENTRY(anonymous_91 /* dollar-in-identifier-extension */, 5266, /* DiagArray248 */ 696, 0)
DIAG_ENTRY(DoublePromotion /* double-promotion */, 5297, /* DiagArray249 */ 698, 0)
DIAG_ENTRY(DtorName /* dtor-name */, 5314, /* DiagArray250 */ 700, 0)
DIAG_ENTRY(anonymous_164 /* dtor-typedef */, 5324, /* DiagArray251 */ 704, 0)
DIAG_ENTRY(DuplicateDeclSpecifier /* duplicate-decl-specifier */, 5337, /* DiagArray252 */ 706, 0)
DIAG_ENTRY(anonymous_131 /* duplicate-enum */, 5362, /* DiagArray253 */ 711, 0)
DIAG_ENTRY(DuplicateArgDecl /* duplicate-method-arg */, 5377, /* DiagArray254 */ 713, 0)
DIAG_ENTRY(MethodDuplicate /* duplicate-method-match */, 5398, /* DiagArray255 */ 715, 0)
DIAG_ENTRY(anonymous_145 /* duplicate-protocol */, 5421, /* DiagArray256 */ 717, 0)
DIAG_ENTRY(DynamicClassMemaccess /* dynamic-class-memaccess */, 5440, /* DiagArray257 */ 719, 0)
DIAG_ENTRY(DynamicExceptionSpec /* dynamic-exception-spec */, 5464, /* DiagArray258 */ 721, /* DiagSubGroup258 */ 229)
DIAG_ENTRY(anonymous_31 /* effc++ */, 5487, 0, /* DiagSubGroup259 */ 231)
DIAG_ENTRY(anonymous_118 /* elaborated-enum-base */, 5494, /* DiagArray260 */ 723, 0)
DIAG_ENTRY(anonymous_119 /* elaborated-enum-class */, 5515, /* DiagArray261 */ 725, 0)
DIAG_ENTRY(anonymous_110 /* embedded-directive */, 5537, /* DiagArray262 */ 727, 0)
DIAG_ENTRY(EmptyBody /* empty-body */, 5556, /* DiagArray263 */ 729, 0)
DIAG_ENTRY(anonymous_123 /* empty-decomposition */, 5567, /* DiagArray264 */ 735, 0)
DIAG_ENTRY(EmptyInitStatement /* empty-init-stmt */, 5587, /* DiagArray265 */ 737, 0)
DIAG_ENTRY(anonymous_115 /* empty-translation-unit */, 5603, /* DiagArray266 */ 739, 0)
DIAG_ENTRY(anonymous_179 /* encode-type */, 5626, /* DiagArray267 */ 741, 0)
DIAG_ENTRY(anonymous_54 /* endif-labels */, 5638, 0, /* DiagSubGroup268 */ 233)
DIAG_ENTRY(EnumCompare /* enum-compare */, 5651, /* DiagArray269 */ 743, /* DiagSubGroup269 */ 235)
DIAG_ENTRY(EnumCompareConditional /* enum-compare-conditional */, 5664, /* DiagArray270 */ 745, /* DiagSubGroup270 */ 238)
DIAG_ENTRY(EnumCompareSwitch /* enum-compare-switch */, 5689, /* DiagArray271 */ 747, 0)
DIAG_ENTRY(EnumConversion /* enum-conversion */, 5709, /* DiagArray272 */ 749, /* DiagSubGroup272 */ 240)
DIAG_ENTRY(EnumEnumConversion /* enum-enum-conversion */, 5725, /* DiagArray273 */ 751, /* DiagSubGroup273 */ 244)
DIAG_ENTRY(EnumFloatConversion /* enum-float-conversion */, 5746, /* DiagArray274 */ 753, /* DiagSubGroup274 */ 246)
DIAG_ENTRY(EnumTooLarge /* enum-too-large */, 5768, /* DiagArray275 */ 755, 0)
DIAG_ENTRY(Exceptions /* exceptions */, 5783, /* DiagArray276 */ 758, 0)
DIAG_ENTRY(ExcessInitializers /* excess-initializers */, 5794, /* DiagArray277 */ 762, 0)
DIAG_ENTRY(ExitTimeDestructors /* exit-time-destructors */, 5814, /* DiagArray278 */ 767, 0)
DIAG_ENTRY(ExpansionToDefined /* expansion-to-defined */, 5836, /* DiagArray279 */ 769, 0)
DIAG_ENTRY(ExplicitInitializeCall /* explicit-initialize-call */, 5857, /* DiagArray280 */ 772, 0)
DIAG_ENTRY(anonymous_212 /* explicit-ownership-type */, 5882, /* DiagArray281 */ 775, 0)
DIAG_ENTRY(ExportUnnamed /* export-unnamed */, 5906, /* DiagArray282 */ 777, 0)
DIAG_ENTRY(anonymous_262 /* export-using-directive */, 5921, /* DiagArray283 */ 780, 0)
DIAG_ENTRY(ExternCCompat /* extern-c-compat */, 5944, /* DiagArray284 */ 782, 0)
DIAG_ENTRY(anonymous_207 /* extern-initializer */, 5960, /* DiagArray285 */ 784, 0)
DIAG_ENTRY(Extra /* extra */, 5979, /* DiagArray286 */ 786, /* DiagSubGroup286 */ 248)
DIAG_ENTRY(anonymous_221 /* extra-qualification */, 5985, /* DiagArray287 */ 788, 0)
DIAG_ENTRY(ExtraSemi /* extra-semi */, 6005, /* DiagArray288 */ 790, /* DiagSubGroup288 */ 263)
DIAG_ENTRY(ExtraSemiStmt /* extra-semi-stmt */, 6016, /* DiagArray289 */ 793, /* DiagSubGroup289 */ 266)
DIAG_ENTRY(ExtraTokens /* extra-tokens */, 6032, /* DiagArray290 */ 795, 0)
DIAG_ENTRY(FinalDtorNonFinalClass /* final-dtor-non-final-class */, 6045, /* DiagArray291 */ 798, 0)
DIAG_ENTRY(FinalMacro /* final-macro */, 6072, /* DiagArray292 */ 800, 0)
DIAG_ENTRY(anonymous_117 /* fixed-enum-extension */, 6084, /* DiagArray293 */ 802, 0)
DIAG_ENTRY(anonymous_70 /* fixed-point-overflow */, 6105, /* DiagArray294 */ 804, 0)
DIAG_ENTRY(FlagEnum /* flag-enum */, 6126, /* DiagArray295 */ 806, 0)
DIAG_ENTRY(FlexibleArrayExtensions /* flexible-array-extensions */, 6136, /* DiagArray296 */ 808, 0)
DIAG_ENTRY(FloatConversion /* float-conversion */, 6162, /* DiagArray297 */ 811, /* DiagSubGroup297 */ 268)
DIAG_ENTRY(anonymous_214 /* float-equal */, 6179, /* DiagArray298 */ 813, 0)
DIAG_ENTRY(FloatOverflowConversion /* float-overflow-conversion */, 6191, /* DiagArray299 */ 815, 0)
DIAG_ENTRY(FloatZeroConversion /* float-zero-conversion */, 6217, /* DiagArray300 */ 818, 0)
DIAG_ENTRY(ForLoopAnalysis /* for-loop-analysis */, 6239, /* DiagArray301 */ 820, 0)
DIAG_ENTRY(Format /* format */, 6257, /* DiagArray302 */ 823, /* DiagSubGroup302 */ 271)
DIAG_ENTRY(FormatExtraArgs /* format-extra-args */, 6264, /* DiagArray303 */ 850, 0)
DIAG_ENTRY(FormatInsufficientArgs /* format-insufficient-args */, 6282, /* DiagArray304 */ 852, 0)
DIAG_ENTRY(FormatInvalidSpecifier /* format-invalid-specifier */, 6307, /* DiagArray305 */ 854, 0)
DIAG_ENTRY(FormatNonStandard /* format-non-iso */, 6332, /* DiagArray306 */ 856, 0)
DIAG_ENTRY(FormatNonLiteral /* format-nonliteral */, 6347, /* DiagArray307 */ 860, 0)
DIAG_ENTRY(FormatPedantic /* format-pedantic */, 6365, /* DiagArray308 */ 862, 0)
DIAG_ENTRY(FormatSecurity /* format-security */, 6381, /* DiagArray309 */ 865, 0)
DIAG_ENTRY(FormatTypeConfusion /* format-type-confusion */, 6397, /* DiagArray310 */ 867, 0)
DIAG_ENTRY(FormatY2K /* format-y2k */, 6419, 0, 0)
DIAG_ENTRY(FormatZeroLength /* format-zero-length */, 6430, /* DiagArray312 */ 869, 0)
DIAG_ENTRY(Format2 /* format=2 */, 6449, 0, /* DiagSubGroup313 */ 279)
DIAG_ENTRY(FortifySource /* fortify-source */, 6458, /* DiagArray314 */ 871, 0)
DIAG_ENTRY(FourByteMultiChar /* four-char-constants */, 6473, /* DiagArray315 */ 877, 0)
DIAG_ENTRY(FrameAddress /* frame-address */, 6493, /* DiagArray316 */ 879, 0)
DIAG_ENTRY(BackendFrameLargerThan /* frame-larger-than */, 6507, /* DiagArray317 */ 881, 0)
DIAG_ENTRY(anonymous_67 /* frame-larger-than= */, 6525, 0, /* DiagSubGroup318 */ 283)
DIAG_ENTRY(FrameworkIncludePrivateFromPublic /* framework-include-private-from-public */, 6544, /* DiagArray319 */ 884, 0)
DIAG_ENTRY(FreeNonHeapObject /* free-nonheap-object */, 6582, /* DiagArray320 */ 886, 0)
DIAG_ENTRY(FunctionDefInObjCContainer /* function-def-in-objc-container */, 6602, /* DiagArray321 */ 888, 0)
DIAG_ENTRY(FunctionMultiVersioning /* function-multiversion */, 6633, /* DiagArray322 */ 890, /* DiagSubGroup322 */ 285)
DIAG_ENTRY(FUseLdPath /* fuse-ld-path */, 6655, /* DiagArray323 */ 894, 0)
DIAG_ENTRY(FutureAttrs /* future-attribute-extensions */, 6668, 0, /* DiagSubGroup324 */ 287)
DIAG_ENTRY(FutureCompat /* future-compat */, 6696, 0, 0)
DIAG_ENTRY(GccCompat /* gcc-compat */, 6710, /* DiagArray326 */ 896, 0)
DIAG_ENTRY(GlobalConstructors /* global-constructors */, 6721, /* DiagArray327 */ 907, 0)
DIAG_ENTRY(GlobalISel /* global-isel */, 6741, /* DiagArray328 */ 910, 0)
DIAG_ENTRY(GNU /* gnu */, 6753, 0, /* DiagSubGroup329 */ 291)
DIAG_ENTRY(GNUAlignofExpression /* gnu-alignof-expression */, 6757, /* DiagArray330 */ 913, 0)
DIAG_ENTRY(GNUAnonymousStruct /* gnu-anonymous-struct */, 6780, /* DiagArray331 */ 915, 0)
DIAG_ENTRY(anonymous_223 /* gnu-array-member-paren-init */, 6801, /* DiagArray332 */ 917, 0)
DIAG_ENTRY(GNUAutoType /* gnu-auto-type */, 6829, /* DiagArray333 */ 919, 0)
DIAG_ENTRY(GNUBinaryLiteral /* gnu-binary-literal */, 6843, /* DiagArray334 */ 921, 0)
DIAG_ENTRY(GNUCaseRange /* gnu-case-range */, 6862, /* DiagArray335 */ 923, 0)
DIAG_ENTRY(GNUComplexInteger /* gnu-complex-integer */, 6877, /* DiagArray336 */ 925, 0)
DIAG_ENTRY(GNUCompoundLiteralInitializer /* gnu-compound-literal-initializer */, 6897, /* DiagArray337 */ 927, 0)
DIAG_ENTRY(GNUConditionalOmittedOperand /* gnu-conditional-omitted-operand */, 6930, /* DiagArray338 */ 929, 0)
DIAG_ENTRY(GNUDesignator /* gnu-designator */, 6962, /* DiagArray339 */ 931, 0)
DIAG_ENTRY(GNUEmptyInitializer /* gnu-empty-initializer */, 6977, /* DiagArray340 */ 935, 0)
DIAG_ENTRY(GNUEmptyStruct /* gnu-empty-struct */, 6999, /* DiagArray341 */ 937, 0)
DIAG_ENTRY(GNUFlexibleArrayInitializer /* gnu-flexible-array-initializer */, 7016, /* DiagArray342 */ 941, 0)
DIAG_ENTRY(GNUFlexibleArrayUnionMember /* gnu-flexible-array-union-member */, 7047, /* DiagArray343 */ 943, 0)
DIAG_ENTRY(GNUFoldingConstant /* gnu-folding-constant */, 7079, /* DiagArray344 */ 945, 0)
DIAG_ENTRY(GNUImaginaryConstant /* gnu-imaginary-constant */, 7100, /* DiagArray345 */ 949, 0)
DIAG_ENTRY(GNUIncludeNext /* gnu-include-next */, 7123, /* DiagArray346 */ 951, 0)
DIAG_ENTRY(anonymous_180 /* gnu-inline-cpp-without-extern */, 7140, /* DiagArray347 */ 953, 0)
DIAG_ENTRY(GNULabelsAsValue /* gnu-label-as-value */, 7170, /* DiagArray348 */ 955, 0)
DIAG_ENTRY(GNUNullPointerArithmetic /* gnu-null-pointer-arithmetic */, 7189, /* DiagArray349 */ 958, 0)
DIAG_ENTRY(GNUPointerArith /* gnu-pointer-arith */, 7217, /* DiagArray350 */ 960, 0)
DIAG_ENTRY(GNURedeclaredEnum /* gnu-redeclared-enum */, 7235, /* DiagArray351 */ 964, 0)
DIAG_ENTRY(GNUStatementExpression /* gnu-statement-expression */, 7255, /* DiagArray352 */ 966, 0)
DIAG_ENTRY(GNUStaticFloatInit /* gnu-static-float-init */, 7280, /* DiagArray353 */ 968, 0)
DIAG_ENTRY(GNUStringLiteralOperatorTemplate /* gnu-string-literal-operator-template */, 7302, /* DiagArray354 */ 970, 0)
DIAG_ENTRY(GNUUnionCast /* gnu-union-cast */, 7339, /* DiagArray355 */ 972, 0)
DIAG_ENTRY(GNUVariableSizedTypeNotAtEnd /* gnu-variable-sized-type-not-at-end */, 7354, /* DiagArray356 */ 974, 0)
DIAG_ENTRY(GNUZeroLineDirective /* gnu-zero-line-directive */, 7389, /* DiagArray357 */ 976, 0)
DIAG_ENTRY(GNUZeroVariadicMacroArguments /* gnu-zero-variadic-macro-arguments */, 7413, /* DiagArray358 */ 978, 0)
DIAG_ENTRY(anonymous_239 /* gpu-maybe-wrong-side */, 7447, /* DiagArray359 */ 981, 0)
DIAG_ENTRY(anonymous_114 /* header-guard */, 7468, /* DiagArray360 */ 983, 0)
DIAG_ENTRY(HeaderHygiene /* header-hygiene */, 7481, /* DiagArray361 */ 985, 0)
DIAG_ENTRY(HIPOnly /* hip-only */, 7496, /* DiagArray362 */ 987, 0)
DIAG_ENTRY(anonymous_235 /* idiomatic-parentheses */, 7505, /* DiagArray363 */ 989, 0)
DIAG_ENTRY(IgnoredAttributes /* ignored-attributes */, 7527, /* DiagArray364 */ 991, 0)
DIAG_ENTRY(anonymous_183 /* ignored-availability-without-sdk-settings */, 7546, /* DiagArray365 */ 1073, 0)
DIAG_ENTRY(IgnoredOptimizationArgument /* ignored-optimization-argument */, 7588, /* DiagArray366 */ 1075, 0)
DIAG_ENTRY(IgnoredPragmaIntrinsic /* ignored-pragma-intrinsic */, 7618, /* DiagArray367 */ 1078, 0)
DIAG_ENTRY(IgnoredPragmaOptimize /* ignored-pragma-optimize */, 7643, /* DiagArray368 */ 1080, 0)
DIAG_ENTRY(IgnoredPragmas /* ignored-pragmas */, 7667, /* DiagArray369 */ 1082, /* DiagSubGroup369 */ 322)
DIAG_ENTRY(IgnoredQualifiers /* ignored-qualifiers */, 7683, /* DiagArray370 */ 1128, /* DiagSubGroup370 */ 325)
DIAG_ENTRY(IgnoredReferenceQualifiers /* ignored-reference-qualifiers */, 7702, /* DiagArray371 */ 1133, 0)
DIAG_ENTRY(Implicit /* implicit */, 7731, 0, /* DiagSubGroup372 */ 327)
DIAG_ENTRY(ImplicitAtomic /* implicit-atomic-properties */, 7740, /* DiagArray373 */ 1135, 0)
DIAG_ENTRY(ImplicitConstIntFloatConversion /* implicit-const-int-float-conversion */, 7767, /* DiagArray374 */ 1138, 0)
DIAG_ENTRY(ImplicitConversionFloatingPointToBool /* implicit-conversion-floating-point-to-bool */, 7803, /* DiagArray375 */ 1140, 0)
DIAG_ENTRY(anonymous_250 /* implicit-exception-spec-mismatch */, 7846, /* DiagArray376 */ 1142, 0)
DIAG_ENTRY(ImplicitFallthrough /* implicit-fallthrough */, 7879, /* DiagArray377 */ 1144, /* DiagSubGroup377 */ 330)
DIAG_ENTRY(ImplicitFallthroughPerFunction /* implicit-fallthrough-per-function */, 7900, /* DiagArray378 */ 1146, 0)
DIAG_ENTRY(ImplicitFixedPointConversion /* implicit-fixed-point-conversion */, 7934, /* DiagArray379 */ 1148, 0)
DIAG_ENTRY(ImplicitFloatConversion /* implicit-float-conversion */, 7966, /* DiagArray380 */ 1150, /* DiagSubGroup380 */ 332)
DIAG_ENTRY(ImplicitFunctionDeclare /* implicit-function-declaration */, 7992, /* DiagArray381 */ 1153, 0)
DIAG_ENTRY(ImplicitInt /* implicit-int */, 8022, /* DiagArray382 */ 1159, 0)
DIAG_ENTRY(ImplicitIntConversion /* implicit-int-conversion */, 8035, /* DiagArray383 */ 1161, /* DiagSubGroup383 */ 335)
DIAG_ENTRY(ImplicitIntFloatConversion /* implicit-int-float-conversion */, 8059, /* DiagArray384 */ 1164, /* DiagSubGroup384 */ 337)
DIAG_ENTRY(anonymous_156 /* implicit-retain-self */, 8089, /* DiagArray385 */ 1166, 0)
DIAG_ENTRY(ImplicitlyUnsignedLiteral /* implicitly-unsigned-literal */, 8110, /* DiagArray386 */ 1168, 0)
DIAG_ENTRY(anonymous_22 /* import */, 8138, 0, 0)
DIAG_ENTRY(anonymous_109 /* import-preprocessor-directive-pedantic */, 8145, /* DiagArray388 */ 1170, 0)
DIAG_ENTRY(anonymous_247 /* inaccessible-base */, 8184, /* DiagArray389 */ 1172, 0)
DIAG_ENTRY(anonymous_99 /* include-next-absolute-path */, 8202, /* DiagArray390 */ 1174, 0)
DIAG_ENTRY(anonymous_98 /* include-next-outside-header */, 8229, /* DiagArray391 */ 1176, 0)
DIAG_ENTRY(IncompatibleExceptionSpec /* incompatible-exception-spec */, 8257, /* DiagArray392 */ 1178, 0)
DIAG_ENTRY(IncompatibleFunctionPointerTypes /* incompatible-function-pointer-types */, 8285, /* DiagArray393 */ 1181, 0)
DIAG_ENTRY(anonymous_139 /* incompatible-library-redeclaration */, 8321, /* DiagArray394 */ 1183, 0)
DIAG_ENTRY(IncompatibleMSStruct /* incompatible-ms-struct */, 8356, /* DiagArray395 */ 1185, 0)
DIAG_ENTRY(IncompatiblePointerTypes /* incompatible-pointer-types */, 8379, /* DiagArray396 */ 1188, /* DiagSubGroup396 */ 339)
DIAG_ENTRY(IncompatiblePointerTypesDiscardsQualifiers /* incompatible-pointer-types-discards-qualifiers */, 8406, /* DiagArray397 */ 1190, 0)
DIAG_ENTRY(anonymous_146 /* incompatible-property-type */, 8453, /* DiagArray398 */ 1194, 0)
DIAG_ENTRY(anonymous_79 /* incompatible-sysroot */, 8480, /* DiagArray399 */ 1196, 0)
DIAG_ENTRY(IncompleteFrameworkModuleDeclaration /* incomplete-framework-module-declaration */, 8501, /* DiagArray400 */ 1198, 0)
DIAG_ENTRY(anonymous_148 /* incomplete-implementation */, 8541, /* DiagArray401 */ 1200, 0)
DIAG_ENTRY(IncompleteModule /* incomplete-module */, 8567, 0, /* DiagSubGroup402 */ 342)
DIAG_ENTRY(anonymous_138 /* incomplete-setjmp-declaration */, 8585, /* DiagArray403 */ 1202, 0)
DIAG_ENTRY(IncompleteUmbrella /* incomplete-umbrella */, 8615, /* DiagArray404 */ 1204, 0)
DIAG_ENTRY(MicrosoftInconsistentDllImport /* inconsistent-dllimport */, 8635, /* DiagArray405 */ 1208, 0)
DIAG_ENTRY(CXX11WarnInconsistentOverrideDestructor /* inconsistent-missing-destructor-override */, 8658, /* DiagArray406 */ 1211, 0)
DIAG_ENTRY(CXX11WarnInconsistentOverrideMethod /* inconsistent-missing-override */, 8699, /* DiagArray407 */ 1213, 0)
DIAG_ENTRY(IncrementBool /* increment-bool */, 8729, /* DiagArray408 */ 1215, /* DiagSubGroup408 */ 345)
DIAG_ENTRY(InfiniteRecursion /* infinite-recursion */, 8744, /* DiagArray409 */ 1217, 0)
DIAG_ENTRY(anonymous_23 /* init-self */, 8763, 0, 0)
DIAG_ENTRY(InitializerOverrides /* initializer-overrides */, 8773, /* DiagArray411 */ 1219, 0)
DIAG_ENTRY(anonymous_163 /* injected-class-name */, 8795, /* DiagArray412 */ 1222, 0)
DIAG_ENTRY(anonymous_24 /* inline */, 8815, 0, 0)
DIAG_ENTRY(BackendInlineAsm /* inline-asm */, 8822, /* DiagArray414 */ 1224, 0)
DIAG_ENTRY(InlineNamespaceReopenedNoninline /* inline-namespace-reopened-noninline */, 8833, /* DiagArray415 */ 1226, 0)
DIAG_ENTRY(anonymous_248 /* inline-new-delete */, 8869, /* DiagArray416 */ 1228, 0)
DIAG_ENTRY(anonymous_196 /* instantiation-after-specialization */, 8887, /* DiagArray417 */ 1230, 0)
DIAG_ENTRY(IntConversion /* int-conversion */, 8922, /* DiagArray418 */ 1232, 0)
DIAG_ENTRY(anonymous_59 /* int-conversions */, 8937, 0, /* DiagSubGroup419 */ 347)
DIAG_ENTRY(IntInBoolContext /* int-in-bool-context */, 8953, /* DiagArray420 */ 1235, 0)
DIAG_ENTRY(IntToPointerCast /* int-to-pointer-cast */, 8973, /* DiagArray421 */ 1238, /* DiagSubGroup421 */ 349)
DIAG_ENTRY(IntToVoidPointerCast /* int-to-void-pointer-cast */, 8993, /* DiagArray422 */ 1240, 0)
DIAG_ENTRY(anonymous_69 /* integer-overflow */, 9018, /* DiagArray423 */ 1242, 0)
DIAG_ENTRY(anonymous_134 /* interrupt-service-routine */, 9035, /* DiagArray424 */ 1244, 0)
DIAG_ENTRY(InvalidCommandLineArgument /* invalid-command-line-argument */, 9061, /* DiagArray425 */ 1246, /* DiagSubGroup425 */ 351)
DIAG_ENTRY(anonymous_166 /* invalid-constexpr */, 9091, /* DiagArray426 */ 1255, 0)
DIAG_ENTRY(ObjCInvalidIBOutletProperty /* invalid-iboutlet */, 9109, /* DiagArray427 */ 1257, 0)
DIAG_ENTRY(anonymous_177 /* invalid-initializer-from-system-header */, 9126, /* DiagArray428 */ 1260, 0)
DIAG_ENTRY(InvalidIOSDeploymentTarget /* invalid-ios-deployment-target */, 9165, /* DiagArray429 */ 1262, 0)
DIAG_ENTRY(anonymous_189 /* invalid-no-builtin-names */, 9195, /* DiagArray430 */ 1264, 0)
DIAG_ENTRY(InvalidNoreturn /* invalid-noreturn */, 9220, /* DiagArray431 */ 1266, 0)
DIAG_ENTRY(InvalidOffsetof /* invalid-offsetof */, 9237, /* DiagArray432 */ 1269, 0)
DIAG_ENTRY(InvalidOrNonExistentDirectory /* invalid-or-nonexistent-directory */, 9254, /* DiagArray433 */ 1272, 0)
DIAG_ENTRY(anonymous_194 /* invalid-partial-specialization */, 9287, /* DiagArray434 */ 1275, 0)
DIAG_ENTRY(anonymous_25 /* invalid-pch */, 9318, 0, 0)
DIAG_ENTRY(InvalidPPToken /* invalid-pp-token */, 9330, /* DiagArray436 */ 1277, 0)
DIAG_ENTRY(InvalidSourceEncoding /* invalid-source-encoding */, 9347, /* DiagArray437 */ 1280, 0)
DIAG_ENTRY(anonymous_111 /* invalid-token-paste */, 9371, /* DiagArray438 */ 1283, 0)
DIAG_ENTRY(anonymous_234 /* jump-seh-finally */, 9391, /* DiagArray439 */ 1285, 0)
DIAG_ENTRY(KeywordCompat /* keyword-compat */, 9408, /* DiagArray440 */ 1287, 0)
DIAG_ENTRY(KeywordAsMacro /* keyword-macro */, 9423, /* DiagArray441 */ 1289, 0)
DIAG_ENTRY(KNRPromotedParameter /* knr-promoted-parameter */, 9437, /* DiagArray442 */ 1291, 0)
DIAG_ENTRY(anonymous_92 /* language-extension-token */, 9460, /* DiagArray443 */ 1293, 0)
DIAG_ENTRY(LargeByValueCopy /* large-by-value-copy */, 9485, /* DiagArray444 */ 1295, 0)
DIAG_ENTRY(LibLTO /* liblto */, 9505, 0, 0)
DIAG_ENTRY(LinkerWarnings /* linker-warnings */, 9512, /* DiagArray446 */ 1298, 0)
DIAG_ENTRY(LiteralConversion /* literal-conversion */, 9528, /* DiagArray447 */ 1300, 0)
DIAG_ENTRY(LiteralRange /* literal-range */, 9547, /* DiagArray448 */ 1303, 0)
DIAG_ENTRY(LocalTypeTemplateArgs /* local-type-template-args */, 9561, /* DiagArray449 */ 1307, /* DiagSubGroup449 */ 353)
DIAG_ENTRY(LogicalNotParentheses /* logical-not-parentheses */, 9586, /* DiagArray450 */ 1309, 0)
DIAG_ENTRY(LogicalOpParentheses /* logical-op-parentheses */, 9610, /* DiagArray451 */ 1311, 0)
DIAG_ENTRY(LongLong /* long-long */, 9633, /* DiagArray452 */ 1313, /* DiagSubGroup452 */ 355)
DIAG_ENTRY(LoopAnalysis /* loop-analysis */, 9643, 0, /* DiagSubGroup453 */ 357)
DIAG_ENTRY(MacroRedefined /* macro-redefined */, 9657, /* DiagArray454 */ 1315, 0)
DIAG_ENTRY(Main /* main */, 9673, /* DiagArray455 */ 1317, 0)
DIAG_ENTRY(MainReturnType /* main-return-type */, 9678, /* DiagArray456 */ 1325, 0)
DIAG_ENTRY(MalformedWarningCheck /* malformed-warning-check */, 9695, /* DiagArray457 */ 1327, 0)
DIAG_ENTRY(anonymous_209 /* many-braces-around-scalar-init */, 9719, /* DiagArray458 */ 1329, 0)
DIAG_ENTRY(MaxTokens /* max-tokens */, 9750, /* DiagArray459 */ 1331, 0)
DIAG_ENTRY(MaxUnsignedZero /* max-unsigned-zero */, 9761, /* DiagArray460 */ 1334, 0)
DIAG_ENTRY(MemsetTransposedArgs /* memset-transposed-args */, 9779, /* DiagArray461 */ 1336, 0)
DIAG_ENTRY(anonymous_141 /* memsize-comparison */, 9802, /* DiagArray462 */ 1338, 0)
DIAG_ENTRY(MethodSignatures /* method-signatures */, 9821, /* DiagArray463 */ 1340, 0)
DIAG_ENTRY(Microsoft /* microsoft */, 9839, 0, /* DiagSubGroup464 */ 360)
DIAG_ENTRY(MicrosoftAbstract /* microsoft-abstract */, 9849, /* DiagArray465 */ 1343, 0)
DIAG_ENTRY(MicrosoftAnonTag /* microsoft-anon-tag */, 9868, /* DiagArray466 */ 1345, 0)
DIAG_ENTRY(MicrosoftCast /* microsoft-cast */, 9887, /* DiagArray467 */ 1348, 0)
DIAG_ENTRY(MicrosoftCharize /* microsoft-charize */, 9902, /* DiagArray468 */ 1351, 0)
DIAG_ENTRY(MicrosoftCommentPaste /* microsoft-comment-paste */, 9920, /* DiagArray469 */ 1353, 0)
DIAG_ENTRY(MicrosoftConstInit /* microsoft-const-init */, 9944, /* DiagArray470 */ 1355, 0)
DIAG_ENTRY(MicrosoftCppMacro /* microsoft-cpp-macro */, 9965, /* DiagArray471 */ 1357, 0)
DIAG_ENTRY(MicrosoftDefaultArgRedefinition /* microsoft-default-arg-redefinition */, 9985, /* DiagArray472 */ 1359, 0)
DIAG_ENTRY(MicrosoftDrectveSection /* microsoft-drectve-section */, 10020, /* DiagArray473 */ 1361, 0)
DIAG_ENTRY(MicrosoftEndOfFile /* microsoft-end-of-file */, 10046, /* DiagArray474 */ 1363, 0)
DIAG_ENTRY(MicrosoftEnumForwardReference /* microsoft-enum-forward-reference */, 10068, /* DiagArray475 */ 1365, 0)
DIAG_ENTRY(MicrosoftEnumValue /* microsoft-enum-value */, 10101, /* DiagArray476 */ 1367, 0)
DIAG_ENTRY(MicrosoftExceptionSpec /* microsoft-exception-spec */, 10122, /* DiagArray477 */ 1369, 0)
DIAG_ENTRY(anonymous_120 /* microsoft-exists */, 10147, /* DiagArray478 */ 1375, 0)
DIAG_ENTRY(MicrosoftExplicitConstructorCall /* microsoft-explicit-constructor-call */, 10164, /* DiagArray479 */ 1377, 0)
DIAG_ENTRY(MicrosoftExtraQualification /* microsoft-extra-qualification */, 10200, /* DiagArray480 */ 1379, 0)
DIAG_ENTRY(MicrosoftFixedEnum /* microsoft-fixed-enum */, 10230, /* DiagArray481 */ 1381, 0)
DIAG_ENTRY(MicrosoftFlexibleArray /* microsoft-flexible-array */, 10251, /* DiagArray482 */ 1383, 0)
DIAG_ENTRY(MicrosoftGoto /* microsoft-goto */, 10276, /* DiagArray483 */ 1386, 0)
DIAG_ENTRY(MicrosoftInaccessibleBase /* microsoft-inaccessible-base */, 10291, /* DiagArray484 */ 1388, 0)
DIAG_ENTRY(MicrosoftInclude /* microsoft-include */, 10319, /* DiagArray485 */ 1390, 0)
DIAG_ENTRY(MicrosoftMutableReference /* microsoft-mutable-reference */, 10337, /* DiagArray486 */ 1392, 0)
DIAG_ENTRY(MicrosoftPureDefinition /* microsoft-pure-definition */, 10365, /* DiagArray487 */ 1394, 0)
DIAG_ENTRY(MicrosoftRedeclareStatic /* microsoft-redeclare-static */, 10391, /* DiagArray488 */ 1396, 0)
DIAG_ENTRY(MicrosoftSealed /* microsoft-sealed */, 10418, /* DiagArray489 */ 1398, 0)
DIAG_ENTRY(MicrosoftStaticAssert /* microsoft-static-assert */, 10435, /* DiagArray490 */ 1400, 0)
DIAG_ENTRY(MicrosoftTemplate /* microsoft-template */, 10459, /* DiagArray491 */ 1402, /* DiagSubGroup491 */ 391)
DIAG_ENTRY(MicrosoftTemplateShadow /* microsoft-template-shadow */, 10478, /* DiagArray492 */ 1412, 0)
DIAG_ENTRY(MicrosoftUnionMemberReference /* microsoft-union-member-reference */, 10504, /* DiagArray493 */ 1414, 0)
DIAG_ENTRY(MicrosoftUnqualifiedFriend /* microsoft-unqualified-friend */, 10537, /* DiagArray494 */ 1416, 0)
DIAG_ENTRY(MicrosoftUsingDecl /* microsoft-using-decl */, 10566, /* DiagArray495 */ 1418, 0)
DIAG_ENTRY(MicrosoftVoidPseudoDtor /* microsoft-void-pseudo-dtor */, 10587, /* DiagArray496 */ 1420, 0)
DIAG_ENTRY(MisExpect /* misexpect */, 10614, /* DiagArray497 */ 1422, 0)
DIAG_ENTRY(MisleadingIndentation /* misleading-indentation */, 10624, /* DiagArray498 */ 1424, 0)
DIAG_ENTRY(anonymous_231 /* mismatched-new-delete */, 10647, /* DiagArray499 */ 1426, 0)
DIAG_ENTRY(MismatchedParameterTypes /* mismatched-parameter-types */, 10669, /* DiagArray500 */ 1428, 0)
DIAG_ENTRY(MismatchedReturnTypes /* mismatched-return-types */, 10696, /* DiagArray501 */ 1430, 0)
DIAG_ENTRY(MismatchedTags /* mismatched-tags */, 10720, /* DiagArray502 */ 1432, 0)
DIAG_ENTRY(MissingBraces /* missing-braces */, 10736, /* DiagArray503 */ 1435, 0)
DIAG_ENTRY(anonymous_244 /* missing-constinit */, 10751, /* DiagArray504 */ 1437, 0)
DIAG_ENTRY(MissingDeclarations /* missing-declarations */, 10769, /* DiagArray505 */ 1439, 0)
DIAG_ENTRY(anonymous_162 /* missing-exception-spec */, 10790, /* DiagArray506 */ 1444, 0)
DIAG_ENTRY(MissingFieldInitializers /* missing-field-initializers */, 10813, /* DiagArray507 */ 1446, 0)
DIAG_ENTRY(anonymous_26 /* missing-format-attribute */, 10840, 0, 0)
DIAG_ENTRY(anonymous_27 /* missing-include-dirs */, 10865, 0, 0)
DIAG_ENTRY(MissingMethodReturnType /* missing-method-return-type */, 10886, /* DiagArray510 */ 1448, 0)
DIAG_ENTRY(MissingNoEscape /* missing-noescape */, 10913, /* DiagArray511 */ 1450, 0)
DIAG_ENTRY(MissingNoreturn /* missing-noreturn */, 10930, /* DiagArray512 */ 1452, 0)
DIAG_ENTRY(anonymous_181 /* missing-prototype-for-cc */, 10947, /* DiagArray513 */ 1455, 0)
DIAG_ENTRY(anonymous_198 /* missing-prototypes */, 10972, /* DiagArray514 */ 1457, 0)
DIAG_ENTRY(anonymous_121 /* missing-selector-name */, 10991, /* DiagArray515 */ 1459, 0)
DIAG_ENTRY(anonymous_78 /* missing-sysroot */, 11013, /* DiagArray516 */ 1461, 0)
DIAG_ENTRY(anonymous_199 /* missing-variable-declarations */, 11029, /* DiagArray517 */ 1463, 0)
DIAG_ENTRY(MisspelledAssumption /* misspelled-assumption */, 11059, /* DiagArray518 */ 1465, 0)
DIAG_ENTRY(ModuleBuild /* module-build */, 11081, /* DiagArray519 */ 1467, 0)
DIAG_ENTRY(ModuleConflict /* module-conflict */, 11094, /* DiagArray520 */ 1472, 0)
DIAG_ENTRY(anonymous_88 /* module-file-config-mismatch */, 11110, /* DiagArray521 */ 1475, 0)
DIAG_ENTRY(ModuleFileExtension /* module-file-extension */, 11138, /* DiagArray522 */ 1477, 0)
DIAG_ENTRY(ModuleImport /* module-import */, 11160, /* DiagArray523 */ 1479, 0)
DIAG_ENTRY(anonymous_260 /* module-import-in-extern-c */, 11174, /* DiagArray524 */ 1481, 0)
DIAG_ENTRY(ModuleLock /* module-lock */, 11200, /* DiagArray525 */ 1483, 0)
DIAG_ENTRY(anonymous_263 /* modules-ambiguous-internal-linkage */, 11212, /* DiagArray526 */ 1485, 0)
DIAG_ENTRY(anonymous_261 /* modules-import-nested-redundant */, 11247, /* DiagArray527 */ 1487, 0)
DIAG_ENTRY(Most /* most */, 11279, 0, /* DiagSubGroup528 */ 393)
DIAG_ENTRY(Move /* move */, 11284, 0, /* DiagSubGroup529 */ 430)
DIAG_ENTRY(anonymous_66 /* msvc-include */, 11289, 0, /* DiagSubGroup530 */ 435)
DIAG_ENTRY(anonymous_82 /* msvc-not-found */, 11302, /* DiagArray531 */ 1489, 0)
DIAG_ENTRY(MultiChar /* multichar */, 11317, /* DiagArray532 */ 1491, 0)
DIAG_ENTRY(anonymous_249 /* multiple-move-vbase */, 11327, /* DiagArray533 */ 1493, 0)
DIAG_ENTRY(anonymous_17 /* narrowing */, 11347, 0, /* DiagSubGroup534 */ 437)
DIAG_ENTRY(anonymous_246 /* nested-anon-types */, 11357, /* DiagArray535 */ 1495, 0)
DIAG_ENTRY(anonymous_28 /* nested-externs */, 11375, 0, 0)
DIAG_ENTRY(OperatorNewReturnsNull /* new-returns-null */, 11390, /* DiagArray537 */ 1497, 0)
DIAG_ENTRY(NewlineEOF /* newline-eof */, 11407, /* DiagArray538 */ 1499, 0)
DIAG_ENTRY(NoDeref /* noderef */, 11419, /* DiagArray539 */ 1502, 0)
DIAG_ENTRY(NoexceptType /* noexcept-type */, 11427, 0, /* DiagSubGroup540 */ 439)
DIAG_ENTRY(anonymous_144 /* non-c-typedef-for-linkage */, 11441, /* DiagArray541 */ 1506, 0)
DIAG_ENTRY(NonGCC /* non-gcc */, 11467, 0, /* DiagSubGroup542 */ 441)
DIAG_ENTRY(NonLiteralNullConversion /* non-literal-null-conversion */, 11475, /* DiagArray543 */ 1508, 0)
DIAG_ENTRY(NonModularIncludeInFrameworkModule /* non-modular-include-in-framework-module */, 11503, /* DiagArray544 */ 1510, 0)
DIAG_ENTRY(NonModularIncludeInModule /* non-modular-include-in-module */, 11543, /* DiagArray545 */ 1512, /* DiagSubGroup545 */ 445)
DIAG_ENTRY(NonPODVarargs /* non-pod-varargs */, 11573, /* DiagArray546 */ 1514, 0)
DIAG_ENTRY(anonymous_172 /* non-power-of-two-alignment */, 11589, /* DiagArray547 */ 1519, 0)
DIAG_ENTRY(NonVirtualDtor /* non-virtual-dtor */, 11616, /* DiagArray548 */ 1521, 0)
DIAG_ENTRY(NonNull /* nonnull */, 11633, /* DiagArray549 */ 1523, 0)
DIAG_ENTRY(anonymous_30 /* nonportable-cfstrings */, 11641, 0, 0)
DIAG_ENTRY(anonymous_100 /* nonportable-include-path */, 11663, /* DiagArray551 */ 1526, 0)
DIAG_ENTRY(anonymous_101 /* nonportable-system-include-path */, 11688, /* DiagArray552 */ 1528, 0)
DIAG_ENTRY(anonymous_255 /* nonportable-vector-initialization */, 11720, /* DiagArray553 */ 1530, 0)
DIAG_ENTRY(NonTrivialMemaccess /* nontrivial-memaccess */, 11754, /* DiagArray554 */ 1532, 0)
DIAG_ENTRY(NSConsumedMismatch /* nsconsumed-mismatch */, 11775, /* DiagArray555 */ 1534, 0)
DIAG_ENTRY(NSReturnsMismatch /* nsreturns-mismatch */, 11795, /* DiagArray556 */ 1536, 0)
DIAG_ENTRY(NullArithmetic /* null-arithmetic */, 11814, /* DiagArray557 */ 1538, 0)
DIAG_ENTRY(NullCharacter /* null-character */, 11830, /* DiagArray558 */ 1541, 0)
DIAG_ENTRY(NullConversion /* null-conversion */, 11845, /* DiagArray559 */ 1544, 0)
DIAG_ENTRY(NullDereference /* null-dereference */, 11861, /* DiagArray560 */ 1546, 0)
DIAG_ENTRY(NullPointerArithmetic /* null-pointer-arithmetic */, 11878, /* DiagArray561 */ 1549, /* DiagSubGroup561 */ 447)
DIAG_ENTRY(NullPointerSubtraction /* null-pointer-subtraction */, 11902, /* DiagArray562 */ 1551, 0)
DIAG_ENTRY(Nullability /* nullability */, 11927, /* DiagArray563 */ 1553, 0)
DIAG_ENTRY(NullabilityCompleteness /* nullability-completeness */, 11939, /* DiagArray564 */ 1559, /* DiagSubGroup564 */ 449)
DIAG_ENTRY(NullabilityCompletenessOnArrays /* nullability-completeness-on-arrays */, 11964, /* DiagArray565 */ 1561, 0)
DIAG_ENTRY(NullabilityDeclSpec /* nullability-declspec */, 11999, /* DiagArray566 */ 1563, 0)
DIAG_ENTRY(anonymous_116 /* nullability-extension */, 12020, /* DiagArray567 */ 1565, 0)
DIAG_ENTRY(NullabilityInferredOnNestedType /* nullability-inferred-on-nested-type */, 12042, /* DiagArray568 */ 1567, 0)
DIAG_ENTRY(NullableToNonNullConversion /* nullable-to-nonnull-conversion */, 12078, /* DiagArray569 */ 1569, 0)
DIAG_ENTRY(anonymous_153 /* objc-autosynthesis-property-ivar-name-match */, 12109, /* DiagArray570 */ 1571, 0)
DIAG_ENTRY(ObjCBoolConstantConversion /* objc-bool-constant-conversion */, 12153, /* DiagArray571 */ 1573, 0)
DIAG_ENTRY(ObjCBoxing /* objc-boxing */, 12183, /* DiagArray572 */ 1575, 0)
DIAG_ENTRY(anonymous_228 /* objc-circular-container */, 12195, /* DiagArray573 */ 1577, 0)
DIAG_ENTRY(ObjCCocoaAPI /* objc-cocoa-api */, 12219, 0, /* DiagSubGroup574 */ 451)
DIAG_ENTRY(ObjCDesignatedInit /* objc-designated-initializers */, 12234, /* DiagArray575 */ 1579, 0)
DIAG_ENTRY(anonymous_169 /* objc-dictionary-duplicate-keys */, 12263, /* DiagArray576 */ 1586, 0)
DIAG_ENTRY(ObjCFlexibleArray /* objc-flexible-array */, 12294, /* DiagArray577 */ 1588, 0)
DIAG_ENTRY(anonymous_205 /* objc-forward-class-redefinition */, 12314, /* DiagArray578 */ 1591, 0)
DIAG_ENTRY(anonymous_206 /* objc-interface-ivars */, 12346, /* DiagArray579 */ 1593, 0)
DIAG_ENTRY(ObjCLiteralComparison /* objc-literal-compare */, 12367, /* DiagArray580 */ 1595, /* DiagSubGroup580 */ 453)
DIAG_ENTRY(ObjCLiteralConversion /* objc-literal-conversion */, 12388, /* DiagArray581 */ 1597, 0)
DIAG_ENTRY(anonymous_108 /* objc-macro-redefinition */, 12412, /* DiagArray582 */ 1600, 0)
DIAG_ENTRY(anonymous_158 /* objc-messaging-id */, 12436, /* DiagArray583 */ 1602, 0)
DIAG_ENTRY(MethodAccess /* objc-method-access */, 12454, /* DiagArray584 */ 1604, 0)
DIAG_ENTRY(anonymous_154 /* objc-missing-property-synthesis */, 12473, /* DiagArray585 */ 1611, 0)
DIAG_ENTRY(ObjCMissingSuperCalls /* objc-missing-super-calls */, 12505, /* DiagArray586 */ 1613, 0)
DIAG_ENTRY(ObjCMultipleMethodNames /* objc-multiple-method-names */, 12530, /* DiagArray587 */ 1615, 0)
DIAG_ENTRY(ObjCRetainBlockProperty /* objc-noncopy-retain-block-property */, 12557, /* DiagArray588 */ 1617, 0)
DIAG_ENTRY(ObjCNonUnifiedException /* objc-nonunified-exceptions */, 12592, /* DiagArray589 */ 1619, 0)
DIAG_ENTRY(ObjCPropertyAssignOnObjectType /* objc-property-assign-on-object-type */, 12619, /* DiagArray590 */ 1621, 0)
DIAG_ENTRY(ObjCPropertyImpl /* objc-property-implementation */, 12655, /* DiagArray591 */ 1623, 0)
DIAG_ENTRY(anonymous_149 /* objc-property-implicit-mismatch */, 12684, /* DiagArray592 */ 1628, 0)
DIAG_ENTRY(anonymous_151 /* objc-property-matches-cocoa-ownership-rule */, 12716, /* DiagArray593 */ 1630, 0)
DIAG_ENTRY(ObjCPropertyNoAttribute /* objc-property-no-attribute */, 12759, /* DiagArray594 */ 1632, 0)
DIAG_ENTRY(ObjCNoPropertyAutoSynthesis /* objc-property-synthesis */, 12786, /* DiagArray595 */ 1635, 0)
DIAG_ENTRY(ObjCProtocolMethodImpl /* objc-protocol-method-implementation */, 12810, /* DiagArray596 */ 1639, 0)
DIAG_ENTRY(anonymous_152 /* objc-protocol-property-synthesis */, 12846, /* DiagArray597 */ 1641, 0)
DIAG_ENTRY(ObjCProtocolQualifiers /* objc-protocol-qualifiers */, 12879, /* DiagArray598 */ 1643, 0)
DIAG_ENTRY(ObjCReadonlyPropertyHasSetter /* objc-readonly-with-setter-property */, 12904, /* DiagArray599 */ 1645, 0)
DIAG_ENTRY(ObjCRedundantAPIUse /* objc-redundant-api-use */, 12939, 0, /* DiagSubGroup600 */ 455)
DIAG_ENTRY(ObjCRedundantLiteralUse /* objc-redundant-literal-use */, 12962, /* DiagArray601 */ 1647, 0)
DIAG_ENTRY(ObjCRootClass /* objc-root-class */, 12989, /* DiagArray602 */ 1649, 0)
DIAG_ENTRY(ObjCSignedCharBool /* objc-signed-char-bool */, 13005, 0, /* DiagSubGroup603 */ 457)
DIAG_ENTRY(ObjCSignedCharBoolImplicitFloatConversion /* objc-signed-char-bool-implicit-float-conversion */, 13027, /* DiagArray604 */ 1651, 0)
DIAG_ENTRY(ObjCSignedCharBoolImplicitIntConversion /* objc-signed-char-bool-implicit-int-conversion */, 13075, /* DiagArray605 */ 1653, 0)
DIAG_ENTRY(ObjCStringComparison /* objc-string-compare */, 13121, /* DiagArray606 */ 1655, 0)
DIAG_ENTRY(ObjCStringConcatenation /* objc-string-concatenation */, 13141, /* DiagArray607 */ 1657, 0)
DIAG_ENTRY(anonymous_229 /* objc-unsafe-perform-selector */, 13167, /* DiagArray608 */ 1659, 0)
DIAG_ENTRY(ODR /* odr */, 13196, /* DiagArray609 */ 1661, 0)
DIAG_ENTRY(OldStyleCast /* old-style-cast */, 13200, /* DiagArray610 */ 1680, 0)
DIAG_ENTRY(anonymous_32 /* old-style-definition */, 13215, 0, 0)
DIAG_ENTRY(OpenCLUnsupportedRGBA /* opencl-unsupported-rgba */, 13236, /* DiagArray612 */ 1682, 0)
DIAG_ENTRY(OpenMP /* openmp */, 13260, 0, /* DiagSubGroup613 */ 462)
DIAG_ENTRY(OpenMP51Ext /* openmp-51-extensions */, 13267, /* DiagArray614 */ 1684, 0)
DIAG_ENTRY(OpenMPClauses /* openmp-clauses */, 13288, /* DiagArray615 */ 1686, 0)
DIAG_ENTRY(OpenMPLoopForm /* openmp-loop-form */, 13303, /* DiagArray616 */ 1705, 0)
DIAG_ENTRY(OpenMPMapping /* openmp-mapping */, 13320, /* DiagArray617 */ 1708, 0)
DIAG_ENTRY(OpenMPTarget /* openmp-target */, 13335, /* DiagArray618 */ 1710, /* DiagSubGroup618 */ 469)
DIAG_ENTRY(OptionIgnored /* option-ignored */, 13349, /* DiagArray619 */ 1714, 0)
DIAG_ENTRY(OrderedCompareFunctionPointers /* ordered-compare-function-pointers */, 13364, /* DiagArray620 */ 1727, 0)
DIAG_ENTRY(OutOfLineDeclaration /* out-of-line-declaration */, 13398, /* DiagArray621 */ 1730, 0)
DIAG_ENTRY(anonymous_136 /* out-of-scope-function */, 13422, /* DiagArray622 */ 1732, 0)
DIAG_ENTRY(OveralignedType /* over-aligned */, 13444, /* DiagArray623 */ 1734, 0)
DIAG_ENTRY(anonymous_33 /* overflow */, 13457, 0, 0)
DIAG_ENTRY(OverlengthStrings /* overlength-strings */, 13466, /* DiagArray625 */ 1736, 0)
DIAG_ENTRY(OverloadedShiftOpParentheses /* overloaded-shift-op-parentheses */, 13485, /* DiagArray626 */ 1738, 0)
DIAG_ENTRY(OverloadedVirtual /* overloaded-virtual */, 13517, /* DiagArray627 */ 1740, 0)
DIAG_ENTRY(anonymous_29 /* override-init */, 13536, 0, /* DiagSubGroup628 */ 471)
DIAG_ENTRY(anonymous_85 /* override-module */, 13550, /* DiagArray629 */ 1742, 0)
DIAG_ENTRY(OverridingMethodMismatch /* overriding-method-mismatch */, 13566, /* DiagArray630 */ 1744, 0)
DIAG_ENTRY(anonymous_77 /* overriding-t-option */, 13593, /* DiagArray631 */ 1752, 0)
DIAG_ENTRY(Packed /* packed */, 13613, /* DiagArray632 */ 1754, 0)
DIAG_ENTRY(Padded /* padded */, 13620, /* DiagArray633 */ 1756, 0)
DIAG_ENTRY(Parentheses /* parentheses */, 13627, /* DiagArray634 */ 1760, /* DiagSubGroup634 */ 473)
DIAG_ENTRY(ParenthesesOnEquality /* parentheses-equality */, 13639, /* DiagArray635 */ 1764, 0)
DIAG_ENTRY(anonymous_5 /* partial-availability */, 13660, 0, /* DiagSubGroup636 */ 482)
DIAG_ENTRY(BackendOptimizationRemark /* pass */, 13681, /* DiagArray637 */ 1766, 0)
DIAG_ENTRY(BackendOptimizationRemarkAnalysis /* pass-analysis */, 13686, /* DiagArray638 */ 1768, 0)
DIAG_ENTRY(BackendOptimizationFailure /* pass-failed */, 13700, /* DiagArray639 */ 1772, 0)
DIAG_ENTRY(BackendOptimizationRemarkMissed /* pass-missed */, 13712, /* DiagArray640 */ 1774, 0)
DIAG_ENTRY(anonymous_266 /* pch-date-time */, 13724, /* DiagArray641 */ 1776, 0)
DIAG_ENTRY(Pedantic /* pedantic */, 13738, /* DiagArray642 */ 1778, /* DiagSubGroup642 */ 484)
DIAG_ENTRY(OpenCLCoreFeaturesDiagGroup /* pedantic-core-features */, 13747, /* DiagArray643 */ 1852, 0)
DIAG_ENTRY(PedanticMacros /* pedantic-macros */, 13770, 0, /* DiagSubGroup644 */ 542)
DIAG_ENTRY(PessimizingMove /* pessimizing-move */, 13786, /* DiagArray645 */ 1855, 0)
DIAG_ENTRY(PointerArith /* pointer-arith */, 13803, /* DiagArray646 */ 1858, /* DiagSubGroup646 */ 548)
DIAG_ENTRY(PointerBoolConversion /* pointer-bool-conversion */, 13817, /* DiagArray647 */ 1862, 0)
DIAG_ENTRY(anonymous_184 /* pointer-compare */, 13841, /* DiagArray648 */ 1865, 0)
DIAG_ENTRY(anonymous_227 /* pointer-integer-compare */, 13857, /* DiagArray649 */ 1867, 0)
DIAG_ENTRY(anonymous_236 /* pointer-sign */, 13881, /* DiagArray650 */ 1869, 0)
DIAG_ENTRY(PointerToEnumCast /* pointer-to-enum-cast */, 13894, /* DiagArray651 */ 1871, /* DiagSubGroup651 */ 550)
DIAG_ENTRY(PointerToIntCast /* pointer-to-int-cast */, 13915, /* DiagArray652 */ 1873, /* DiagSubGroup652 */ 552)
DIAG_ENTRY(anonymous_241 /* pointer-type-mismatch */, 13935, /* DiagArray653 */ 1875, 0)
DIAG_ENTRY(anonymous_75 /* poison-system-directories */, 13957, /* DiagArray654 */ 1877, 0)
DIAG_ENTRY(ObjCPotentiallyDirectSelector /* potentially-direct-selector */, 13983, /* DiagArray655 */ 1879, 0)
DIAG_ENTRY(PotentiallyEvaluatedExpression /* potentially-evaluated-expression */, 14011, /* DiagArray656 */ 1881, 0)
DIAG_ENTRY(PragmaClangAttribute /* pragma-clang-attribute */, 14044, /* DiagArray657 */ 1883, 0)
DIAG_ENTRY(anonymous_102 /* pragma-once-outside-header */, 14067, /* DiagArray658 */ 1885, 0)
DIAG_ENTRY(PragmaPack /* pragma-pack */, 14094, /* DiagArray659 */ 1887, /* DiagSubGroup659 */ 555)
DIAG_ENTRY(PragmaPackSuspiciousInclude /* pragma-pack-suspicious-include */, 14106, /* DiagArray660 */ 1890, 0)
DIAG_ENTRY(anonymous_103 /* pragma-system-header-outside-header */, 14137, /* DiagArray661 */ 1892, 0)
DIAG_ENTRY(Pragmas /* pragmas */, 14173, /* DiagArray662 */ 1894, /* DiagSubGroup662 */ 557)
DIAG_ENTRY(CXXPre14Compat /* pre-c++14-compat */, 14181, /* DiagArray663 */ 1897, 0)
DIAG_ENTRY(CXXPre14CompatPedantic /* pre-c++14-compat-pedantic */, 14198, 0, /* DiagSubGroup664 */ 562)
DIAG_ENTRY(CXXPre17Compat /* pre-c++17-compat */, 14224, /* DiagArray665 */ 1909, 0)
DIAG_ENTRY(CXXPre17CompatPedantic /* pre-c++17-compat-pedantic */, 14241, /* DiagArray666 */ 1927, /* DiagSubGroup666 */ 565)
DIAG_ENTRY(CXXPre20Compat /* pre-c++20-compat */, 14267, /* DiagArray667 */ 1930, 0)
DIAG_ENTRY(CXXPre20CompatPedantic /* pre-c++20-compat-pedantic */, 14284, /* DiagArray668 */ 1957, /* DiagSubGroup668 */ 567)
DIAG_ENTRY(CXXPre2bCompat /* pre-c++2b-compat */, 14310, /* DiagArray669 */ 1960, 0)
DIAG_ENTRY(CXXPre2bCompatPedantic /* pre-c++2b-compat-pedantic */, 14327, 0, /* DiagSubGroup670 */ 569)
DIAG_ENTRY(CPre2xCompat /* pre-c2x-compat */, 14353, /* DiagArray671 */ 1969, 0)
DIAG_ENTRY(CPre2xCompatPedantic /* pre-c2x-compat-pedantic */, 14368, 0, /* DiagSubGroup672 */ 571)
DIAG_ENTRY(OpenMPPre51Compat /* pre-openmp-51-compat */, 14392, /* DiagArray673 */ 1974, 0)
DIAG_ENTRY(anonymous_133 /* predefined-identifier-outside-function */, 14413, /* DiagArray674 */ 1976, 0)
DIAG_ENTRY(PrivateExtern /* private-extern */, 14452, /* DiagArray675 */ 1978, 0)
DIAG_ENTRY(anonymous_113 /* private-header */, 14467, /* DiagArray676 */ 1980, 0)
DIAG_ENTRY(PrivateModule /* private-module */, 14482, /* DiagArray677 */ 1982, 0)
DIAG_ENTRY(ProfileInstrMissing /* profile-instr-missing */, 14497, /* DiagArray678 */ 1987, 0)
DIAG_ENTRY(ProfileInstrOutOfDate /* profile-instr-out-of-date */, 14519, /* DiagArray679 */ 1989, 0)
DIAG_ENTRY(ProfileInstrUnprofiled /* profile-instr-unprofiled */, 14545, /* DiagArray680 */ 1991, 0)
DIAG_ENTRY(PropertyAccessDotSyntax /* property-access-dot-syntax */, 14570, /* DiagArray681 */ 1993, 0)
DIAG_ENTRY(PropertyAttr /* property-attribute-mismatch */, 14597, /* DiagArray682 */ 1995, 0)
DIAG_ENTRY(Protocol /* protocol */, 14625, /* DiagArray683 */ 2000, 0)
DIAG_ENTRY(anonymous_147 /* protocol-property-synthesis-ambiguity */, 14634, /* DiagArray684 */ 2002, 0)
DIAG_ENTRY(anonymous_89 /* psabi */, 14672, /* DiagArray685 */ 2004, 0)
DIAG_ENTRY(anonymous_211 /* qualified-void-return-type */, 14678, /* DiagArray686 */ 2006, 0)
DIAG_ENTRY(FrameworkHdrQuotedInclude /* quoted-include-in-framework-header */, 14705, /* DiagArray687 */ 2008, 0)
DIAG_ENTRY(RangeLoopAnalysis /* range-loop-analysis */, 14740, 0, /* DiagSubGroup688 */ 573)
DIAG_ENTRY(RangeLoopBindReference /* range-loop-bind-reference */, 14760, /* DiagArray689 */ 2010, 0)
DIAG_ENTRY(RangeLoopConstruct /* range-loop-construct */, 14786, /* DiagArray690 */ 2012, 0)
DIAG_ENTRY(anonymous_157 /* readonly-iboutlet-property */, 14807, /* DiagArray691 */ 2015, 0)
DIAG_ENTRY(ObjCReceiver /* receiver-expr */, 14834, /* DiagArray692 */ 2017, 0)
DIAG_ENTRY(ForwardClassReceiver /* receiver-forward-class */, 14848, /* DiagArray693 */ 2019, 0)
DIAG_ENTRY(RedeclaredClassMember /* redeclared-class-member */, 14871, /* DiagArray694 */ 2022, 0)
DIAG_ENTRY(anonymous_159 /* redundant-consteval-if */, 14895, /* DiagArray695 */ 2024, 0)
DIAG_ENTRY(anonymous_34 /* redundant-decls */, 14918, 0, 0)
DIAG_ENTRY(RedundantMove /* redundant-move */, 14934, /* DiagArray697 */ 2026, 0)
DIAG_ENTRY(anonymous_135 /* redundant-parens */, 14949, /* DiagArray698 */ 2028, 0)
DIAG_ENTRY(Register /* register */, 14966, /* DiagArray699 */ 2030, /* DiagSubGroup699 */ 576)
DIAG_ENTRY(ReinterpretBaseClass /* reinterpret-base-class */, 14975, /* DiagArray700 */ 2032, 0)
DIAG_ENTRY(RemarkBackendPlugin /* remark-backend-plugin */, 14998, /* DiagArray701 */ 2034, 0)
DIAG_ENTRY(Reorder /* reorder */, 15020, 0, /* DiagSubGroup702 */ 578)
DIAG_ENTRY(ReorderCtor /* reorder-ctor */, 15028, /* DiagArray703 */ 2036, 0)
DIAG_ENTRY(ReorderInitList /* reorder-init-list */, 15041, /* DiagArray704 */ 2039, 0)
DIAG_ENTRY(anonymous_190 /* requires-super-attribute */, 15059, /* DiagArray705 */ 2041, 0)
DIAG_ENTRY(ReservedIdAsMacroAlias /* reserved-id-macro */, 15084, 0, /* DiagSubGroup706 */ 581)
DIAG_ENTRY(ReservedIdentifier /* reserved-identifier */, 15102, /* DiagArray707 */ 2043, /* DiagSubGroup707 */ 583)
DIAG_ENTRY(ReservedIdAsMacro /* reserved-macro-identifier */, 15122, /* DiagArray708 */ 2045, 0)
DIAG_ENTRY(ReservedUserDefinedLiteral /* reserved-user-defined-literal */, 15148, /* DiagArray709 */ 2047, /* DiagSubGroup709 */ 585)
DIAG_ENTRY(RestrictExpansionMacro /* restrict-expansion */, 15178, /* DiagArray710 */ 2050, 0)
DIAG_ENTRY(anonymous_204 /* retained-language-linkage */, 15197, /* DiagArray711 */ 2052, 0)
DIAG_ENTRY(ReturnStackAddress /* return-stack-address */, 15223, /* DiagArray712 */ 2054, 0)
DIAG_ENTRY(ReturnStdMove /* return-std-move */, 15244, 0, 0)
DIAG_ENTRY(ReturnType /* return-type */, 15260, /* DiagArray714 */ 2058, /* DiagSubGroup714 */ 587)
DIAG_ENTRY(ReturnTypeCLinkage /* return-type-c-linkage */, 15272, /* DiagArray715 */ 2068, 0)
DIAG_ENTRY(anonymous_192 /* rewrite-not-bool */, 15294, /* DiagArray716 */ 2071, 0)
DIAG_ENTRY(RoundTripCC1Args /* round-trip-cc1-args */, 15311, /* DiagArray717 */ 2073, 0)
DIAG_ENTRY(RTTI /* rtti */, 15331, /* DiagArray718 */ 2075, 0)
DIAG_ENTRY(SanitizeAddressRemarks /* sanitize-address */, 15336, /* DiagArray719 */ 2078, 0)
DIAG_ENTRY(UsedSearchPath /* search-path-usage */, 15353, /* DiagArray720 */ 2081, 0)
DIAG_ENTRY(Section /* section */, 15371, /* DiagArray721 */ 2083, 0)
DIAG_ENTRY(Selector /* selector */, 15379, /* DiagArray722 */ 2087, /* DiagSubGroup722 */ 589)
DIAG_ENTRY(SelectorTypeMismatch /* selector-type-mismatch */, 15388, /* DiagArray723 */ 2089, 0)
DIAG_ENTRY(SelfAssignment /* self-assign */, 15411, /* DiagArray724 */ 2091, /* DiagSubGroup724 */ 591)
DIAG_ENTRY(SelfAssignmentField /* self-assign-field */, 15423, /* DiagArray725 */ 2093, 0)
DIAG_ENTRY(SelfAssignmentOverloaded /* self-assign-overloaded */, 15441, /* DiagArray726 */ 2095, 0)
DIAG_ENTRY(SelfMove /* self-move */, 15464, /* DiagArray727 */ 2097, 0)
DIAG_ENTRY(SemiBeforeMethodBody /* semicolon-before-method-body */, 15474, /* DiagArray728 */ 2099, 0)
DIAG_ENTRY(Sentinel /* sentinel */, 15503, /* DiagArray729 */ 2101, 0)
DIAG_ENTRY(anonymous_38 /* sequence-point */, 15512, 0, /* DiagSubGroup730 */ 594)
DIAG_ENTRY(SerializedDiagnostics /* serialized-diagnostics */, 15527, /* DiagArray731 */ 2104, 0)
DIAG_ENTRY(Shadow /* shadow */, 15550, /* DiagArray732 */ 2108, /* DiagSubGroup732 */ 596)
DIAG_ENTRY(ShadowAll /* shadow-all */, 15557, 0, /* DiagSubGroup733 */ 599)
DIAG_ENTRY(ShadowField /* shadow-field */, 15568, /* DiagArray734 */ 2110, 0)
DIAG_ENTRY(ShadowFieldInConstructor /* shadow-field-in-constructor */, 15581, /* DiagArray735 */ 2112, /* DiagSubGroup735 */ 604)
DIAG_ENTRY(ShadowFieldInConstructorModified /* shadow-field-in-constructor-modified */, 15609, /* DiagArray736 */ 2114, 0)
DIAG_ENTRY(ShadowIvar /* shadow-ivar */, 15646, /* DiagArray737 */ 2116, 0)
DIAG_ENTRY(ShadowUncapturedLocal /* shadow-uncaptured-local */, 15658, /* DiagArray738 */ 2118, 0)
DIAG_ENTRY(anonymous_216 /* shift-count-negative */, 15682, /* DiagArray739 */ 2120, 0)
DIAG_ENTRY(anonymous_217 /* shift-count-overflow */, 15703, /* DiagArray740 */ 2122, 0)
DIAG_ENTRY(anonymous_215 /* shift-negative-value */, 15724, /* DiagArray741 */ 2124, 0)
DIAG_ENTRY(ShiftOpParentheses /* shift-op-parentheses */, 15745, /* DiagArray742 */ 2126, 0)
DIAG_ENTRY(anonymous_218 /* shift-overflow */, 15766, /* DiagArray743 */ 2128, 0)
DIAG_ENTRY(anonymous_219 /* shift-sign-overflow */, 15781, /* DiagArray744 */ 2130, 0)
DIAG_ENTRY(Shorten64To32 /* shorten-64-to-32 */, 15801, /* DiagArray745 */ 2132, 0)
DIAG_ENTRY(SignCompare /* sign-compare */, 15818, /* DiagArray746 */ 2134, 0)
DIAG_ENTRY(SignConversion /* sign-conversion */, 15831, /* DiagArray747 */ 2136, 0)
DIAG_ENTRY(anonymous_35 /* sign-promo */, 15847, 0, 0)
DIAG_ENTRY(SignedEnumBitfield /* signed-enum-bitfield */, 15858, /* DiagArray749 */ 2140, 0)
DIAG_ENTRY(anonymous_257 /* signed-unsigned-wchar */, 15879, /* DiagArray750 */ 2142, 0)
DIAG_ENTRY(SizeofArrayArgument /* sizeof-array-argument */, 15901, /* DiagArray751 */ 2144, 0)
DIAG_ENTRY(SizeofArrayDecay /* sizeof-array-decay */, 15923, /* DiagArray752 */ 2146, 0)
DIAG_ENTRY(anonymous_186 /* sizeof-array-div */, 15942, /* DiagArray753 */ 2148, 0)
DIAG_ENTRY(anonymous_185 /* sizeof-pointer-div */, 15959, /* DiagArray754 */ 2150, 0)
DIAG_ENTRY(SizeofPointerMemaccess /* sizeof-pointer-memaccess */, 15978, /* DiagArray755 */ 2152, 0)
DIAG_ENTRY(anonymous_81 /* slash-u-filename */, 16003, /* DiagArray756 */ 2155, 0)
DIAG_ENTRY(anonymous_74 /* slh-asm-goto */, 16020, /* DiagArray757 */ 2157, 0)
DIAG_ENTRY(UninitializedSometimes /* sometimes-uninitialized */, 16033, /* DiagArray758 */ 2159, 0)
DIAG_ENTRY(BackendSourceMgr /* source-mgr */, 16057, /* DiagArray759 */ 2161, 0)
DIAG_ENTRY(SourceUsesOpenMP /* source-uses-openmp */, 16068, /* DiagArray760 */ 2163, 0)
DIAG_ENTRY(SpirCompat /* spir-compat */, 16087, /* DiagArray761 */ 2171, 0)
DIAG_ENTRY(anonymous_68 /* spirv-compat */, 16099, 0, /* DiagSubGroup762 */ 606)
DIAG_ENTRY(anonymous_72 /* stack-exhausted */, 16112, /* DiagArray763 */ 2173, 0)
DIAG_ENTRY(anonymous_73 /* stack-protector */, 16128, /* DiagArray764 */ 2175, 0)
DIAG_ENTRY(StaticFloatInit /* static-float-init */, 16144, /* DiagArray765 */ 2177, /* DiagSubGroup765 */ 608)
DIAG_ENTRY(StaticInInline /* static-in-inline */, 16162, /* DiagArray766 */ 2179, 0)
DIAG_ENTRY(anonymous_128 /* static-inline-explicit-instantiation */, 16179, /* DiagArray767 */ 2182, 0)
DIAG_ENTRY(StaticLocalInInline /* static-local-in-inline */, 16216, /* DiagArray768 */ 2184, 0)
DIAG_ENTRY(UninitializedStaticSelfInit /* static-self-init */, 16239, /* DiagArray769 */ 2186, 0)
DIAG_ENTRY(anonymous_84 /* stdlibcxx-not-found */, 16256, /* DiagArray770 */ 2188, 0)
DIAG_ENTRY(anonymous_42 /* strict-aliasing */, 16276, 0, 0)
DIAG_ENTRY(anonymous_39 /* strict-aliasing=0 */, 16292, 0, 0)
DIAG_ENTRY(anonymous_40 /* strict-aliasing=1 */, 16310, 0, 0)
DIAG_ENTRY(anonymous_41 /* strict-aliasing=2 */, 16328, 0, 0)
DIAG_ENTRY(anonymous_49 /* strict-overflow */, 16346, 0, 0)
DIAG_ENTRY(anonymous_43 /* strict-overflow=0 */, 16362, 0, 0)
DIAG_ENTRY(anonymous_44 /* strict-overflow=1 */, 16380, 0, 0)
DIAG_ENTRY(anonymous_45 /* strict-overflow=2 */, 16398, 0, 0)
DIAG_ENTRY(anonymous_46 /* strict-overflow=3 */, 16416, 0, 0)
DIAG_ENTRY(anonymous_47 /* strict-overflow=4 */, 16434, 0, 0)
DIAG_ENTRY(anonymous_48 /* strict-overflow=5 */, 16452, 0, 0)
DIAG_ENTRY(ObjCStrictPotentiallyDirectSelector /* strict-potentially-direct-selector */, 16470, /* DiagArray782 */ 2190, /* DiagSubGroup782 */ 610)
DIAG_ENTRY(StrictPrototypes /* strict-prototypes */, 16505, /* DiagArray783 */ 2192, /* DiagSubGroup783 */ 612)
DIAG_ENTRY(StrictSelector /* strict-selector-match */, 16523, /* DiagArray784 */ 2194, 0)
DIAG_ENTRY(StringCompare /* string-compare */, 16545, /* DiagArray785 */ 2196, 0)
DIAG_ENTRY(StringConcatation /* string-concatenation */, 16560, /* DiagArray786 */ 2198, 0)
DIAG_ENTRY(StringConversion /* string-conversion */, 16581, /* DiagArray787 */ 2200, 0)
DIAG_ENTRY(StringPlusChar /* string-plus-char */, 16599, /* DiagArray788 */ 2202, 0)
DIAG_ENTRY(StringPlusInt /* string-plus-int */, 16616, /* DiagArray789 */ 2204, 0)
DIAG_ENTRY(anonymous_140 /* strlcpy-strlcat-size */, 16632, /* DiagArray790 */ 2206, 0)
DIAG_ENTRY(StrncatSize /* strncat-size */, 16653, /* DiagArray791 */ 2208, 0)
DIAG_ENTRY(CXX11WarnSuggestOverrideDestructor /* suggest-destructor-override */, 16666, /* DiagArray792 */ 2212, 0)
DIAG_ENTRY(CXX11WarnSuggestOverride /* suggest-override */, 16694, /* DiagArray793 */ 2214, 0)
DIAG_ENTRY(SuperSubClassMismatch /* super-class-method-mismatch */, 16711, /* DiagArray794 */ 2216, 0)
DIAG_ENTRY(SuspiciousBzero /* suspicious-bzero */, 16739, /* DiagArray795 */ 2218, 0)
DIAG_ENTRY(SuspiciousMemaccess /* suspicious-memaccess */, 16756, 0, /* DiagSubGroup796 */ 614)
DIAG_ENTRY(SwiftNameAttribute /* swift-name-attribute */, 16777, /* DiagArray797 */ 2220, 0)
DIAG_ENTRY(Switch /* switch */, 16798, /* DiagArray798 */ 2234, 0)
DIAG_ENTRY(SwitchBool /* switch-bool */, 16805, /* DiagArray799 */ 2238, 0)
DIAG_ENTRY(anonymous_36 /* switch-default */, 16817, 0, 0)
DIAG_ENTRY(SwitchEnum /* switch-enum */, 16832, /* DiagArray801 */ 2240, 0)
DIAG_ENTRY(anonymous_256 /* sync-fetch-and-nand-semantics-changed */, 16844, /* DiagArray802 */ 2242, 0)
DIAG_ENTRY(anonymous_37 /* synth */, 16882, 0, 0)
DIAG_ENTRY(TargetClonesMixedSpecifiers /* target-clones-mixed-specifiers */, 16888, /* DiagArray804 */ 2244, 0)
DIAG_ENTRY(TautologicalBitwiseCompare /* tautological-bitwise-compare */, 16919, /* DiagArray805 */ 2246, 0)
DIAG_ENTRY(TautologicalCompare /* tautological-compare */, 16948, /* DiagArray806 */ 2249, /* DiagSubGroup806 */ 620)
DIAG_ENTRY(TautologicalConstantCompare /* tautological-constant-compare */, 16969, /* DiagArray807 */ 2252, /* DiagSubGroup807 */ 627)
DIAG_ENTRY(TautologicalInRangeCompare /* tautological-constant-in-range-compare */, 16999, 0, /* DiagSubGroup808 */ 629)
DIAG_ENTRY(TautologicalOutOfRangeCompare /* tautological-constant-out-of-range-compare */, 17038, /* DiagArray809 */ 2256, 0)
DIAG_ENTRY(TautologicalObjCBoolCompare /* tautological-objc-bool-compare */, 17081, /* DiagArray810 */ 2258, 0)
DIAG_ENTRY(TautologicalOverlapCompare /* tautological-overlap-compare */, 17112, /* DiagArray811 */ 2260, 0)
DIAG_ENTRY(TautologicalPointerCompare /* tautological-pointer-compare */, 17141, /* DiagArray812 */ 2262, 0)
DIAG_ENTRY(TautologicalTypeLimitCompare /* tautological-type-limit-compare */, 17170, /* DiagArray813 */ 2265, 0)
DIAG_ENTRY(TautologicalUndefinedCompare /* tautological-undefined-compare */, 17202, /* DiagArray814 */ 2267, 0)
DIAG_ENTRY(TautologicalUnsignedCharZeroCompare /* tautological-unsigned-char-zero-compare */, 17233, /* DiagArray815 */ 2270, 0)
DIAG_ENTRY(TautologicalUnsignedEnumZeroCompare /* tautological-unsigned-enum-zero-compare */, 17273, /* DiagArray816 */ 2272, 0)
DIAG_ENTRY(TautologicalUnsignedZeroCompare /* tautological-unsigned-zero-compare */, 17313, /* DiagArray817 */ 2274, 0)
DIAG_ENTRY(TautologicalValueRangeCompare /* tautological-value-range-compare */, 17348, /* DiagArray818 */ 2276, 0)
DIAG_ENTRY(anonymous_265 /* tcb-enforcement */, 17381, /* DiagArray819 */ 2278, 0)
DIAG_ENTRY(anonymous_222 /* tentative-definition-incomplete-type */, 17397, /* DiagArray820 */ 2280, 0)
DIAG_ENTRY(ThreadSafety /* thread-safety */, 17434, 0, /* DiagSubGroup821 */ 632)
DIAG_ENTRY(ThreadSafetyAnalysis /* thread-safety-analysis */, 17448, /* DiagArray822 */ 2282, 0)
DIAG_ENTRY(ThreadSafetyAttributes /* thread-safety-attributes */, 17471, /* DiagArray823 */ 2301, 0)
DIAG_ENTRY(ThreadSafetyBeta /* thread-safety-beta */, 17496, /* DiagArray824 */ 2308, 0)
DIAG_ENTRY(ThreadSafetyNegative /* thread-safety-negative */, 17515, /* DiagArray825 */ 2310, 0)
DIAG_ENTRY(ThreadSafetyPrecise /* thread-safety-precise */, 17538, /* DiagArray826 */ 2312, 0)
DIAG_ENTRY(ThreadSafetyReference /* thread-safety-reference */, 17560, /* DiagArray827 */ 2316, 0)
DIAG_ENTRY(ThreadSafetyVerbose /* thread-safety-verbose */, 17584, /* DiagArray828 */ 2319, 0)
DIAG_ENTRY(Trigraphs /* trigraphs */, 17606, /* DiagArray829 */ 2321, 0)
DIAG_ENTRY(TypeLimits /* type-limits */, 17616, 0, /* DiagSubGroup830 */ 637)
DIAG_ENTRY(TypeSafety /* type-safety */, 17628, /* DiagArray831 */ 2326, 0)
DIAG_ENTRY(anonymous_203 /* typedef-redefinition */, 17640, /* DiagArray832 */ 2330, 0)
DIAG_ENTRY(anonymous_197 /* typename-missing */, 17661, /* DiagArray833 */ 2332, 0)
DIAG_ENTRY(anonymous_86 /* unable-to-open-stats-file */, 17678, /* DiagArray834 */ 2334, 0)
DIAG_ENTRY(UnalignedAccess /* unaligned-access */, 17704, /* DiagArray835 */ 2336, 0)
DIAG_ENTRY(anonymous_259 /* unaligned-qualifier-implicit-cast */, 17721, /* DiagArray836 */ 2338, 0)
DIAG_ENTRY(UnavailableDeclarations /* unavailable-declarations */, 17755, /* DiagArray837 */ 2340, 0)
DIAG_ENTRY(UndeclaredSelector /* undeclared-selector */, 17780, /* DiagArray838 */ 2342, 0)
DIAG_ENTRY(anonymous_106 /* undef */, 17800, /* DiagArray839 */ 2345, 0)
DIAG_ENTRY(anonymous_107 /* undef-prefix */, 17806, /* DiagArray840 */ 2347, 0)
DIAG_ENTRY(UndefinedBoolConversion /* undefined-bool-conversion */, 17819, /* DiagArray841 */ 2349, 0)
DIAG_ENTRY(UndefinedFuncTemplate /* undefined-func-template */, 17845, /* DiagArray842 */ 2352, 0)
DIAG_ENTRY(anonymous_202 /* undefined-inline */, 17869, /* DiagArray843 */ 2354, 0)
DIAG_ENTRY(anonymous_200 /* undefined-internal */, 17886, /* DiagArray844 */ 2356, 0)
DIAG_ENTRY(anonymous_201 /* undefined-internal-type */, 17905, /* DiagArray845 */ 2358, 0)
DIAG_ENTRY(UndefinedReinterpretCast /* undefined-reinterpret-cast */, 17929, /* DiagArray846 */ 2360, 0)
DIAG_ENTRY(UndefinedVarTemplate /* undefined-var-template */, 17956, /* DiagArray847 */ 2363, 0)
DIAG_ENTRY(UnderalignedExceptionObject /* underaligned-exception-object */, 17979, /* DiagArray848 */ 2365, 0)
DIAG_ENTRY(UnevaluatedExpression /* unevaluated-expression */, 18009, /* DiagArray849 */ 2367, /* DiagSubGroup849 */ 642)
DIAG_ENTRY(UnguardedAvailability /* unguarded-availability */, 18032, /* DiagArray850 */ 2369, /* DiagSubGroup850 */ 644)
DIAG_ENTRY(UnguardedAvailabilityNew /* unguarded-availability-new */, 18055, /* DiagArray851 */ 2371, 0)
DIAG_ENTRY(Unicode /* unicode */, 18082, /* DiagArray852 */ 2373, 0)
DIAG_ENTRY(anonymous_94 /* unicode-homoglyph */, 18090, /* DiagArray853 */ 2381, 0)
DIAG_ENTRY(anonymous_93 /* unicode-whitespace */, 18108, /* DiagArray854 */ 2383, 0)
DIAG_ENTRY(anonymous_95 /* unicode-zero-width */, 18127, /* DiagArray855 */ 2385, 0)
DIAG_ENTRY(Uninitialized /* uninitialized */, 18146, /* DiagArray856 */ 2387, /* DiagSubGroup856 */ 646)
DIAG_ENTRY(UninitializedConstReference /* uninitialized-const-reference */, 18160, /* DiagArray857 */ 2395, 0)
DIAG_ENTRY(UnknownArgument /* unknown-argument */, 18190, /* DiagArray858 */ 2397, 0)
DIAG_ENTRY(UnknownAssumption /* unknown-assumption */, 18207, /* DiagArray859 */ 2400, 0)
DIAG_ENTRY(UnknownAttributes /* unknown-attributes */, 18226, /* DiagArray860 */ 2402, 0)
DIAG_ENTRY(CudaUnknownVersion /* unknown-cuda-version */, 18245, /* DiagArray861 */ 2404, 0)
DIAG_ENTRY(anonymous_97 /* unknown-escape-sequence */, 18266, /* DiagArray862 */ 2407, 0)
DIAG_ENTRY(UnknownPragmas /* unknown-pragmas */, 18290, /* DiagArray863 */ 2409, 0)
DIAG_ENTRY(UnknownSanitizers /* unknown-sanitizers */, 18306, /* DiagArray864 */ 2430, 0)
DIAG_ENTRY(UnknownWarningOption /* unknown-warning-option */, 18325, /* DiagArray865 */ 2432, 0)
DIAG_ENTRY(UnnamedTypeTemplateArgs /* unnamed-type-template-args */, 18348, /* DiagArray866 */ 2436, /* DiagSubGroup866 */ 650)
DIAG_ENTRY(UnneededInternalDecl /* unneeded-internal-declaration */, 18375, /* DiagArray867 */ 2438, 0)
DIAG_ENTRY(UnneededMemberFunction /* unneeded-member-function */, 18405, /* DiagArray868 */ 2441, 0)
DIAG_ENTRY(anonymous_193 /* unqualified-std-cast-call */, 18430, /* DiagArray869 */ 2443, 0)
DIAG_ENTRY(UnreachableCode /* unreachable-code */, 18456, /* DiagArray870 */ 2445, /* DiagSubGroup870 */ 652)
DIAG_ENTRY(UnreachableCodeAggressive /* unreachable-code-aggressive */, 18473, 0, /* DiagSubGroup871 */ 655)
DIAG_ENTRY(UnreachableCodeBreak /* unreachable-code-break */, 18501, /* DiagArray872 */ 2447, 0)
DIAG_ENTRY(UnreachableCodeFallthrough /* unreachable-code-fallthrough */, 18524, /* DiagArray873 */ 2449, 0)
DIAG_ENTRY(UnreachableCodeLoopIncrement /* unreachable-code-loop-increment */, 18553, /* DiagArray874 */ 2451, 0)
DIAG_ENTRY(UnreachableCodeReturn /* unreachable-code-return */, 18585, /* DiagArray875 */ 2453, 0)
DIAG_ENTRY(Unsequenced /* unsequenced */, 18609, /* DiagArray876 */ 2455, 0)
DIAG_ENTRY(anonymous_76 /* unsupported-abi */, 18621, /* DiagArray877 */ 2458, 0)
DIAG_ENTRY(UnsupportedAbs /* unsupported-abs */, 18637, /* DiagArray878 */ 2460, 0)
DIAG_ENTRY(anonymous_182 /* unsupported-availability-guard */, 18653, /* DiagArray879 */ 2463, 0)
DIAG_ENTRY(UnsupportedCB /* unsupported-cb */, 18684, /* DiagArray880 */ 2465, 0)
DIAG_ENTRY(anonymous_178 /* unsupported-dll-base-class-template */, 18699, /* DiagArray881 */ 2467, 0)
DIAG_ENTRY(UnsupportedFPOpt /* unsupported-floating-point-opt */, 18735, /* DiagArray882 */ 2469, 0)
DIAG_ENTRY(UnsupportedFriend /* unsupported-friend */, 18766, /* DiagArray883 */ 2472, 0)
DIAG_ENTRY(UnsupportedGPOpt /* unsupported-gpopt */, 18785, /* DiagArray884 */ 2475, 0)
DIAG_ENTRY(UnsupportedNan /* unsupported-nan */, 18803, /* DiagArray885 */ 2477, 0)
DIAG_ENTRY(UnsupportedTargetOpt /* unsupported-target-opt */, 18819, /* DiagArray886 */ 2480, 0)
DIAG_ENTRY(anonymous_188 /* unsupported-visibility */, 18842, /* DiagArray887 */ 2483, 0)
DIAG_ENTRY(anonymous_195 /* unusable-partial-specialization */, 18865, /* DiagArray888 */ 2485, 0)
DIAG_ENTRY(Unused /* unused */, 18897, 0, /* DiagSubGroup889 */ 659)
DIAG_ENTRY(UnusedArgument /* unused-argument */, 18904, 0, 0)
DIAG_ENTRY(UnusedButSetParameter /* unused-but-set-parameter */, 18920, /* DiagArray891 */ 2487, 0)
DIAG_ENTRY(UnusedButSetVariable /* unused-but-set-variable */, 18945, /* DiagArray892 */ 2489, 0)
DIAG_ENTRY(UnusedCommandLineArgument /* unused-command-line-argument */, 18969, /* DiagArray893 */ 2491, 0)
DIAG_ENTRY(UnusedComparison /* unused-comparison */, 18998, /* DiagArray894 */ 2504, 0)
DIAG_ENTRY(UnusedConstVariable /* unused-const-variable */, 19016, /* DiagArray895 */ 2506, 0)
DIAG_ENTRY(UnusedExceptionParameter /* unused-exception-parameter */, 19038, /* DiagArray896 */ 2508, 0)
DIAG_ENTRY(UnusedFunction /* unused-function */, 19065, /* DiagArray897 */ 2510, /* DiagSubGroup897 */ 670)
DIAG_ENTRY(UnusedGetterReturnValue /* unused-getter-return-value */, 19081, /* DiagArray898 */ 2512, 0)
DIAG_ENTRY(UnusedLabel /* unused-label */, 19108, /* DiagArray899 */ 2514, 0)
DIAG_ENTRY(UnusedLambdaCapture /* unused-lambda-capture */, 19121, /* DiagArray900 */ 2516, 0)
DIAG_ENTRY(UnusedLocalTypedef /* unused-local-typedef */, 19143, /* DiagArray901 */ 2518, 0)
DIAG_ENTRY(anonymous_61 /* unused-local-typedefs */, 19164, 0, /* DiagSubGroup902 */ 672)
DIAG_ENTRY(anonymous_105 /* unused-macros */, 19186, /* DiagArray903 */ 2520, 0)
DIAG_ENTRY(UnusedMemberFunction /* unused-member-function */, 19200, /* DiagArray904 */ 2522, /* DiagSubGroup904 */ 674)
DIAG_ENTRY(UnusedParameter /* unused-parameter */, 19223, /* DiagArray905 */ 2524, 0)
DIAG_ENTRY(UnusedPrivateField /* unused-private-field */, 19240, /* DiagArray906 */ 2526, 0)
DIAG_ENTRY(UnusedPropertyIvar /* unused-property-ivar */, 19261, /* DiagArray907 */ 2528, 0)
DIAG_ENTRY(UnusedResult /* unused-result */, 19282, /* DiagArray908 */ 2530, 0)
DIAG_ENTRY(UnusedTemplate /* unused-template */, 19296, /* DiagArray909 */ 2533, /* DiagSubGroup909 */ 676)
DIAG_ENTRY(UnusedValue /* unused-value */, 19312, /* DiagArray910 */ 2535, /* DiagSubGroup910 */ 678)
DIAG_ENTRY(UnusedVariable /* unused-variable */, 19325, /* DiagArray911 */ 2543, /* DiagSubGroup911 */ 682)
DIAG_ENTRY(anonymous_243 /* unused-volatile-lvalue */, 19341, /* DiagArray912 */ 2545, 0)
DIAG_ENTRY(UsedButMarkedUnused /* used-but-marked-unused */, 19364, /* DiagArray913 */ 2547, 0)
DIAG_ENTRY(UserDefinedLiterals /* user-defined-literals */, 19387, /* DiagArray914 */ 2549, 0)
DIAG_ENTRY(UserDefinedWarnings /* user-defined-warnings */, 19409, /* DiagArray915 */ 2551, 0)
DIAG_ENTRY(Varargs /* varargs */, 19431, /* DiagArray916 */ 2553, 0)
DIAG_ENTRY(VariadicMacros /* variadic-macros */, 19439, /* DiagArray917 */ 2557, 0)
DIAG_ENTRY(anonymous_168 /* vec-elem-size */, 19455, /* DiagArray918 */ 2561, 0)
DIAG_ENTRY(VectorConversion /* vector-conversion */, 19469, /* DiagArray919 */ 2563, 0)
DIAG_ENTRY(anonymous_60 /* vector-conversions */, 19487, 0, /* DiagSubGroup920 */ 684)
DIAG_ENTRY(VexingParse /* vexing-parse */, 19506, /* DiagArray921 */ 2565, 0)
DIAG_ENTRY(Visibility /* visibility */, 19519, /* DiagArray922 */ 2569, 0)
DIAG_ENTRY(VLA /* vla */, 19530, /* DiagArray923 */ 2572, /* DiagSubGroup923 */ 686)
DIAG_ENTRY(VLAExtension /* vla-extension */, 19534, /* DiagArray924 */ 2574, 0)
DIAG_ENTRY(VoidPointerToEnumCast /* void-pointer-to-enum-cast */, 19548, /* DiagArray925 */ 2576, 0)
DIAG_ENTRY(VoidPointerToIntCast /* void-pointer-to-int-cast */, 19574, /* DiagArray926 */ 2578, /* DiagSubGroup926 */ 688)
DIAG_ENTRY(anonymous_224 /* void-ptr-dereference */, 19599, /* DiagArray927 */ 2580, 0)
DIAG_ENTRY(VolatileRegisterVar /* volatile-register-var */, 19620, 0, 0)
DIAG_ENTRY(WebAssemblyExceptionSpec /* wasm-exception-spec */, 19642, /* DiagArray929 */ 2582, 0)
DIAG_ENTRY(anonymous_161 /* weak-template-vtables */, 19662, /* DiagArray930 */ 2584, 0)
DIAG_ENTRY(anonymous_160 /* weak-vtables */, 19684, /* DiagArray931 */ 2586, 0)
DIAG_ENTRY(WritableStrings /* writable-strings */, 19697, /* DiagArray932 */ 2588, /* DiagSubGroup932 */ 690)
DIAG_ENTRY(GCCWriteStrings /* write-strings */, 19714, 0, /* DiagSubGroup933 */ 692)
DIAG_ENTRY(XorUsedAsPow /* xor-used-as-pow */, 19728, /* DiagArray934 */ 2590, 0)
DIAG_ENTRY(anonymous_264 /* zero-as-null-pointer-constant */, 19744, /* DiagArray935 */ 2594, 0)
DIAG_ENTRY(ZeroLengthArray /* zero-length-array */, 19774, /* DiagArray936 */ 2596, 0)
#endif // DIAG_ENTRY


#ifdef GET_CATEGORY_TABLE
CATEGORY("", DiagCat_None)
CATEGORY("Lexical or Preprocessor Issue", DiagCat_Lexical_or_Preprocessor_Issue)
CATEGORY("Semantic Issue", DiagCat_Semantic_Issue)
CATEGORY("Lambda Issue", DiagCat_Lambda_Issue)
CATEGORY("Parse Issue", DiagCat_Parse_Issue)
CATEGORY("ARC Semantic Issue", DiagCat_ARC_Semantic_Issue)
CATEGORY("ARC and @properties", DiagCat_ARC_and__properties)
CATEGORY("ARC Casting Rules", DiagCat_ARC_Casting_Rules)
CATEGORY("ARC Parse Issue", DiagCat_ARC_Parse_Issue)
CATEGORY("ARC Weak References", DiagCat_ARC_Weak_References)
CATEGORY("ARC Restrictions", DiagCat_ARC_Restrictions)
CATEGORY("OpenMP Issue", DiagCat_OpenMP_Issue)
CATEGORY("Inline Assembly Issue", DiagCat_Inline_Assembly_Issue)
CATEGORY("AST Deserialization Issue", DiagCat_AST_Deserialization_Issue)
CATEGORY("Modules Issue", DiagCat_Modules_Issue)
CATEGORY("Coroutines Issue", DiagCat_Coroutines_Issue)
CATEGORY("Concepts Issue", DiagCat_Concepts_Issue)
CATEGORY("Dependency Directive Source Minimization Issue", DiagCat_Dependency_Directive_Source_Minimization_Issue)
CATEGORY("Backend Issue", DiagCat_Backend_Issue)
CATEGORY("SourceMgr Reported Issue", DiagCat_SourceMgr_Reported_Issue)
CATEGORY("Related Result Type Issue", DiagCat_Related_Result_Type_Issue)
CATEGORY("AST Serialization Issue", DiagCat_AST_Serialization_Issue)
CATEGORY("Nullability Issue", DiagCat_Nullability_Issue)
CATEGORY("Generics Issue", DiagCat_Generics_Issue)
CATEGORY("User-Defined Issue", DiagCat_User_Defined_Issue)
CATEGORY("Refactoring Invocation Issue", DiagCat_Refactoring_Invocation_Issue)
CATEGORY("VTable ABI Issue", DiagCat_VTable_ABI_Issue)
CATEGORY("Value Conversion Issue", DiagCat_Value_Conversion_Issue)
CATEGORY("Documentation Issue", DiagCat_Documentation_Issue)
CATEGORY("ARC Retain Cycle", DiagCat_ARC_Retain_Cycle)
CATEGORY("Deprecations", DiagCat_Deprecations)
CATEGORY("Format String Issue", DiagCat_Format_String_Issue)
CATEGORY("Cocoa API Issue", DiagCat_Cocoa_API_Issue)
CATEGORY("#pragma message Directive", DiagCat__pragma_message_Directive)
CATEGORY("Instrumentation Issue", DiagCat_Instrumentation_Issue)
CATEGORY("Unused Entity Issue", DiagCat_Unused_Entity_Issue)
#endif // GET_CATEGORY_TABLE

