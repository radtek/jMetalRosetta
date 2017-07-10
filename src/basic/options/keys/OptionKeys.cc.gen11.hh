namespace ms { IntegerOptionKey const generations( "ms:generations" );  }
namespace ms { IntegerOptionKey const num_packs( "ms:num_packs" );  }
namespace ms { IntegerOptionKey const numresults( "ms:numresults" );  }
namespace ms { RealOptionKey const anchor_offset( "ms:anchor_offset" );  }
namespace ms { RealOptionKey const Boltz_temp( "ms:Boltz_temp" );  }
namespace ms { RealOptionKey const mutate_rate( "ms:mutate_rate" );  }
namespace ms { RealOptionKey const fraction_by_recombination( "ms:fraction_by_recombination" );  }
namespace ms { namespace checkpoint { BooleanOptionKey const checkpoint( "ms:checkpoint" );  } }
namespace ms { namespace checkpoint { StringOptionKey const prefix( "ms:checkpoint:prefix" );  } }
namespace ms { namespace checkpoint { IntegerOptionKey const interval( "ms:checkpoint:interval" );  } }
namespace ms { namespace checkpoint { BooleanOptionKey const gz( "ms:checkpoint:gz" );  } }
namespace ms { namespace checkpoint { BooleanOptionKey const rename( "ms:checkpoint:rename" );  } }
namespace nonlocal { BooleanOptionKey const nonlocal( "nonlocal" );  }
namespace nonlocal { FileOptionKey const chunks( "nonlocal:chunks" );  }
namespace nonlocal { BooleanOptionKey const randomize_missing( "nonlocal:randomize_missing" );  }
namespace optE { BooleanOptionKey const optE( "optE" );  }
namespace optE { StringOptionKey const load_from_silent( "optE:load_from_silent" );  }
namespace optE { StringOptionKey const data_in( "optE:data_in" );  }
namespace optE { StringOptionKey const data_out( "optE:data_out" );  }
namespace optE { StringOptionKey const weights( "optE:weights" );  }
namespace optE { StringVectorOptionKey const fix( "optE:fix" );  }
namespace optE { FileOptionKey const free( "optE:free" );  }
namespace optE { FileOptionKey const fixed( "optE:fixed" );  }
namespace optE { FileOptionKey const parse_tagfile( "optE:parse_tagfile" );  }
namespace optE { FileOptionKey const constant_logic_taskops_file( "optE:constant_logic_taskops_file" );  }
namespace optE { BooleanOptionKey const optE_soft_rep( "optE:optE_soft_rep" );  }
namespace optE { BooleanOptionKey const no_hb_env_dependence( "optE:no_hb_env_dependence" );  }
namespace optE { BooleanOptionKey const no_hb_env_dependence_DNA( "optE:no_hb_env_dependence_DNA" );  }
namespace optE { BooleanOptionKey const optE_no_protein_fa_elec( "optE:optE_no_protein_fa_elec" );  }
namespace optE { BooleanOptionKey const centroid_rot( "optE:centroid_rot" );  }
namespace optE { BooleanOptionKey const centroid_rot_min( "optE:centroid_rot_min" );  }
namespace optE { BooleanOptionKey const design_first( "optE:design_first" );  }
namespace optE { IntegerOptionKey const n_design_cycles( "optE:n_design_cycles" );  }
namespace optE { BooleanOptionKey const recover_nat_rot( "optE:recover_nat_rot" );  }
namespace optE { FileOptionKey const component_weights( "optE:component_weights" );  }
namespace optE { BooleanOptionKey const optimize_nat_aa( "optE:optimize_nat_aa" );  }
namespace optE { BooleanOptionKey const optimize_nat_rot( "optE:optimize_nat_rot" );  }
namespace optE { FileOptionKey const optimize_ligand_rot( "optE:optimize_ligand_rot" );  }
namespace optE { BooleanOptionKey const optimize_pssm( "optE:optimize_pssm" );  }
namespace optE { FileOptionKey const optimize_dGbinding( "optE:optimize_dGbinding" );  }
namespace optE { FileOptionKey const optimize_ddG_bind_correlation( "optE:optimize_ddG_bind_correlation" );  }
namespace optE { FileOptionKey const optimize_ddGmutation( "optE:optimize_ddGmutation" );  }
namespace optE { BooleanOptionKey const optimize_ddGmutation_straight_mean( "optE:optimize_ddGmutation_straight_mean" );  }
namespace optE { BooleanOptionKey const optimize_ddGmutation_boltzman_average( "optE:optimize_ddGmutation_boltzman_average" );  }
namespace optE { RealOptionKey const exclude_badrep_ddGs( "optE:exclude_badrep_ddGs" );  }
namespace optE { BooleanOptionKey const pretend_no_ddG_repulsion( "optE:pretend_no_ddG_repulsion" );  }
namespace optE { FileOptionKey const optimize_decoy_discrimination( "optE:optimize_decoy_discrimination" );  }
namespace optE { StringOptionKey const normalize_decoy_score_spread( "optE:normalize_decoy_score_spread" );  }
namespace optE { BooleanOptionKey const ramp_nativeness( "optE:ramp_nativeness" );  }
namespace optE { IntegerOptionKey const n_top_natives_to_optimize( "optE:n_top_natives_to_optimize" );  }
namespace optE { RealOptionKey const approximate_decoy_entropy( "optE:approximate_decoy_entropy" );  }
namespace optE { BooleanOptionKey const repack_and_minimize_decoys( "optE:repack_and_minimize_decoys" );  }
namespace optE { BooleanOptionKey const repack_and_minimize_input_structures( "optE:repack_and_minimize_input_structures" );  }
namespace optE { IntegerOptionKey const output_top_n_new_decoys( "optE:output_top_n_new_decoys" );  }
namespace optE { FileOptionKey const optimize_ligand_discrimination( "optE:optimize_ligand_discrimination" );  }
namespace optE { BooleanOptionKey const no_design( "optE:no_design" );  }
namespace optE { BooleanOptionKey const sqrt_pssm( "optE:sqrt_pssm" );  }
namespace optE { RealOptionKey const min_decoy_rms_to_native( "optE:min_decoy_rms_to_native" );  }
namespace optE { RealOptionKey const max_rms_from_native( "optE:max_rms_from_native" );  }
namespace optE { BooleanOptionKey const optimize_starting_free_weights( "optE:optimize_starting_free_weights" );  }
namespace optE { FileOptionKey const wrap_dof_optimization( "optE:wrap_dof_optimization" );  }
namespace optE { RealOptionKey const randomly_perturb_starting_free_weights( "optE:randomly_perturb_starting_free_weights" );  }
namespace optE { RealOptionKey const inv_kT_natrot( "optE:inv_kT_natrot" );  }
namespace optE { RealOptionKey const inv_kT_nataa( "optE:inv_kT_nataa" );  }
namespace optE { RealOptionKey const inv_kT_natstruct( "optE:inv_kT_natstruct" );  }
namespace optE { BooleanOptionKey const mpi_weight_minimization( "optE:mpi_weight_minimization" );  }
namespace optE { BooleanOptionKey const dont_use_reference_energies( "optE:dont_use_reference_energies" );  }
namespace optE { IntegerOptionKey const number_of_swarm_particles( "optE:number_of_swarm_particles" );  }
namespace optE { IntegerOptionKey const number_of_swarm_cycles( "optE:number_of_swarm_cycles" );  }
namespace optE { FileOptionKey const constrain_weights( "optE:constrain_weights" );  }
namespace optE { BooleanOptionKey const fit_reference_energies_to_aa_profile_recovery( "optE:fit_reference_energies_to_aa_profile_recovery" );  }
namespace optE { FileOptionKey const starting_refEs( "optE:starting_refEs" );  }
namespace optE { BooleanOptionKey const repeat_swarm_optimization_until_fitness_improves( "optE:repeat_swarm_optimization_until_fitness_improves" );  }
namespace optE { BooleanOptionKey const design_with_minpack( "optE:design_with_minpack" );  }
namespace optE { BooleanOptionKey const limit_bad_scores( "optE:limit_bad_scores" );  }
namespace optE { BooleanOptionKey const no_design_pdb_output( "optE:no_design_pdb_output" );  }
namespace optE { namespace rescore { BooleanOptionKey const rescore( "optE:rescore" );  } }
namespace optE { namespace rescore { FileOptionKey const weights( "optE:rescore:weights" );  } }
namespace optE { namespace rescore { IntegerOptionKey const context_round( "optE:rescore:context_round" );  } }
namespace optE { namespace rescore { FileOptionKey const outlog( "optE:rescore:outlog" );  } }
namespace optE { namespace rescore { BooleanOptionKey const measure_sequence_recovery( "optE:rescore:measure_sequence_recovery" );  } }
namespace packstat { BooleanOptionKey const packstat( "packstat" );  }
namespace packstat { BooleanOptionKey const include_water( "packstat:include_water" );  }
namespace packstat { IntegerOptionKey const oversample( "packstat:oversample" );  }
namespace packstat { BooleanOptionKey const packstat_pdb( "packstat:packstat_pdb" );  }
namespace packstat { BooleanOptionKey const surface_accessibility( "packstat:surface_accessibility" );  }
namespace packstat { BooleanOptionKey const residue_scores( "packstat:residue_scores" );  }
namespace packstat { RealOptionKey const cavity_burial_probe_radius( "packstat:cavity_burial_probe_radius" );  }
namespace packstat { BooleanOptionKey const raw_stats( "packstat:raw_stats" );  }
namespace packstat { IntegerOptionKey const threads( "packstat:threads" );  }
namespace packstat { RealOptionKey const cluster_min_volume( "packstat:cluster_min_volume" );  }
namespace packstat { RealOptionKey const min_surface_accessibility( "packstat:min_surface_accessibility" );  }
namespace packstat { RealOptionKey const min_cluster_overlap( "packstat:min_cluster_overlap" );  }
namespace packstat { RealOptionKey const min_cav_ball_radius( "packstat:min_cav_ball_radius" );  }
namespace parser { BooleanOptionKey const parser( "parser" );  }
namespace parser { StringVectorOptionKey const info( "parser:info" );  }
namespace parser { StringOptionKey const output_schema( "parser:output_schema" );  }
namespace parser { StringOptionKey const patchdock( "parser:patchdock" );  }
namespace parser { IntegerVectorOptionKey const patchdock_random_entry( "parser:patchdock_random_entry" );  }
namespace parser { StringOptionKey const protocol( "parser:protocol" );  }
namespace parser { StringVectorOptionKey const script_vars( "parser:script_vars" );  }
namespace parser { BooleanOptionKey const validate_and_exit( "parser:validate_and_exit" );  }
namespace parser { BooleanOptionKey const view( "parser:view" );  }
namespace patterson { BooleanOptionKey const patterson( "patterson" );  }
namespace patterson { RealOptionKey const weight( "patterson:weight" );  }
namespace patterson { RealOptionKey const sc_scaling( "patterson:sc_scaling" );  }
namespace patterson { RealVectorOptionKey const radius_cutoffs( "patterson:radius_cutoffs" );  }
namespace patterson { RealVectorOptionKey const resolution_cutoffs( "patterson:resolution_cutoffs" );  }
namespace patterson { RealOptionKey const Bsol( "patterson:Bsol" );  }
namespace patterson { RealOptionKey const Fsol( "patterson:Fsol" );  }
namespace patterson { RealOptionKey const model_B( "patterson:model_B" );  }
namespace patterson { RealOptionKey const rmsd( "patterson:rmsd" );  }
namespace patterson { BooleanOptionKey const no_ecalc( "patterson:no_ecalc" );  }
namespace patterson { IntegerOptionKey const nshells( "patterson:nshells" );  }
namespace patterson { BooleanOptionKey const use_spline_interpolation( "patterson:use_spline_interpolation" );  }
namespace patterson { BooleanOptionKey const use_on_repack( "patterson:use_on_repack" );  }
namespace patterson { BooleanOptionKey const dont_use_symm_in_pcalc( "patterson:dont_use_symm_in_pcalc" );  }
namespace pb_potential { BooleanOptionKey const pb_potential( "pb_potential" );  }
namespace pb_potential { IntegerVectorOptionKey const charged_chains( "pb_potential:charged_chains" );  }
namespace pb_potential { BooleanOptionKey const sidechain_only( "pb_potential:sidechain_only" );  }
namespace pb_potential { IntegerVectorOptionKey const revamp_near_chain( "pb_potential:revamp_near_chain" );  }
namespace pb_potential { StringOptionKey const apbs_path( "pb_potential:apbs_path" );  }
namespace pb_potential { RealOptionKey const potential_cap( "pb_potential:potential_cap" );  }
namespace pb_potential { RealOptionKey const tolerance( "pb_potential:tolerance" );  }
namespace pb_potential { IntegerOptionKey const apbs_debug( "pb_potential:apbs_debug" );  }
namespace pb_potential { BooleanOptionKey const calcenergy( "pb_potential:calcenergy" );  }
namespace PCS { BooleanOptionKey const PCS( "PCS" );  }
namespace PCS { FileOptionKey const write_extra( "PCS:write_extra" );  }
namespace PCS { IntegerOptionKey const normalization_id( "PCS:normalization_id" );  }
namespace PCSTS1 { BooleanOptionKey const PCSTS1( "PCSTS1" );  }
namespace PCSTS1 { FileOptionKey const write_extra( "PCSTS1:write_extra" );  }
namespace PCSTS1 { IntegerOptionKey const normalization_id( "PCSTS1:normalization_id" );  }
namespace PCSTS2 { BooleanOptionKey const PCSTS2( "PCSTS2" );  }
namespace PCSTS2 { FileOptionKey const write_extra( "PCSTS2:write_extra" );  }
namespace PCSTS2 { IntegerOptionKey const normalization_id( "PCSTS2:normalization_id" );  }
namespace PCSTS3 { BooleanOptionKey const PCSTS3( "PCSTS3" );  }
namespace PCSTS3 { FileOptionKey const write_extra( "PCSTS3:write_extra" );  }
namespace PCSTS3 { IntegerOptionKey const normalization_id( "PCSTS3:normalization_id" );  }
namespace PCSTS4 { BooleanOptionKey const PCSTS4( "PCSTS4" );  }
namespace PCSTS4 { FileOptionKey const write_extra( "PCSTS4:write_extra" );  }
namespace PCSTS4 { IntegerOptionKey const normalization_id( "PCSTS4:normalization_id" );  }
namespace pepspec { BooleanOptionKey const pepspec( "pepspec" );  }
namespace pepspec { StringOptionKey const soft_wts( "pepspec:soft_wts" );  }
namespace pepspec { StringOptionKey const cen_wts( "pepspec:cen_wts" );  }
namespace pepspec { BooleanOptionKey const binding_score( "pepspec:binding_score" );  }
namespace pepspec { BooleanOptionKey const no_cen( "pepspec:no_cen" );  }
namespace pepspec { BooleanOptionKey const no_cen_rottrials( "pepspec:no_cen_rottrials" );  }
namespace pepspec { BooleanOptionKey const run_sequential( "pepspec:run_sequential" );  }
namespace pepspec { IntegerOptionKey const pep_anchor( "pepspec:pep_anchor" );  }
namespace pepspec { StringOptionKey const pep_chain( "pepspec:pep_chain" );  }
namespace pepspec { IntegerOptionKey const n_peptides( "pepspec:n_peptides" );  }
namespace pepspec { IntegerOptionKey const n_build_loop( "pepspec:n_build_loop" );  }
namespace pepspec { IntegerOptionKey const n_cgrelax_loop( "pepspec:n_cgrelax_loop" );  }
namespace pepspec { IntegerOptionKey const n_dock_loop( "pepspec:n_dock_loop" );  }
namespace pepspec { RealOptionKey const interface_cutoff( "pepspec:interface_cutoff" );  }
namespace pepspec { BooleanOptionKey const use_input_bb( "pepspec:use_input_bb" );  }
namespace pepspec { BooleanOptionKey const remove_input_bb( "pepspec:remove_input_bb" );  }
namespace pepspec { StringOptionKey const homol_csts( "pepspec:homol_csts" );  }
namespace pepspec { RealOptionKey const p_homol_csts( "pepspec:p_homol_csts" );  }
namespace pepspec { BooleanOptionKey const gen_pep_bb_sequential( "pepspec:gen_pep_bb_sequential" );  }
namespace pepspec { StringOptionKey const input_seq( "pepspec:input_seq" );  }
namespace pepspec { StringOptionKey const ss_type( "pepspec:ss_type" );  }
namespace pepspec { BooleanOptionKey const upweight_interface( "pepspec:upweight_interface" );  }
namespace pepspec { BooleanOptionKey const calc_sasa( "pepspec:calc_sasa" );  }
namespace pepspec { BooleanOptionKey const diversify_pep_seqs( "pepspec:diversify_pep_seqs" );  }
namespace pepspec { IntegerOptionKey const diversify_lvl( "pepspec:diversify_lvl" );  }
namespace pepspec { BooleanOptionKey const dump_cg_bb( "pepspec:dump_cg_bb" );  }
namespace pepspec { BooleanOptionKey const save_low_pdbs( "pepspec:save_low_pdbs" );  }
namespace pepspec { BooleanOptionKey const save_all_pdbs( "pepspec:save_all_pdbs" );  }
namespace pepspec { BooleanOptionKey const no_design( "pepspec:no_design" );  }
namespace pepspec { StringOptionKey const pdb_list( "pepspec:pdb_list" );  }
namespace pepspec { StringOptionKey const ref_pdb_list( "pepspec:ref_pdb_list" );  }
namespace pepspec { BooleanOptionKey const add_buffer_res( "pepspec:add_buffer_res" );  }
namespace pepspec { StringOptionKey const cg_res_type( "pepspec:cg_res_type" );  }
namespace pepspec { IntegerOptionKey const native_pep_anchor( "pepspec:native_pep_anchor" );  }
namespace pepspec { StringOptionKey const native_pep_chain( "pepspec:native_pep_chain" );  }
namespace pepspec { BooleanOptionKey const native_align( "pepspec:native_align" );  }
namespace pepspec { BooleanOptionKey const rmsd_analysis( "pepspec:rmsd_analysis" );  }
namespace pepspec { StringOptionKey const anchor_type( "pepspec:anchor_type" );  }
namespace pepspec { BooleanOptionKey const no_prepack_prot( "pepspec:no_prepack_prot" );  }
namespace pepspec { BooleanOptionKey const prep_use_ref_rotamers( "pepspec:prep_use_ref_rotamers" );  }
namespace pepspec { IntegerOptionKey const n_prepend( "pepspec:n_prepend" );  }
namespace pepspec { IntegerOptionKey const n_append( "pepspec:n_append" );  }
namespace pepspec { RealOptionKey const clash_cutoff( "pepspec:clash_cutoff" );  }
namespace pepspec { RealOptionKey const n_anchor_dock_std_devs( "pepspec:n_anchor_dock_std_devs" );  }
namespace pepspec { RealOptionKey const prep_trans_std_dev( "pepspec:prep_trans_std_dev" );  }
namespace pepspec { RealOptionKey const prep_rot_std_dev( "pepspec:prep_rot_std_dev" );  }
namespace pepspec { BooleanOptionKey const seq_align( "pepspec:seq_align" );  }
namespace pepspec { StringOptionKey const prep_align_prot_to( "pepspec:prep_align_prot_to" );  }
namespace pH { BooleanOptionKey const pH( "pH" );  }
namespace pH { BooleanOptionKey const pH_mode( "pH:pH_mode" );  }
namespace pH { BooleanOptionKey const keep_input_protonation_state( "pH:keep_input_protonation_state" );  }
namespace pH { RealOptionKey const value_pH( "pH:value_pH" );  }
namespace pH { namespace calc_pka { BooleanOptionKey const calc_pka( "pH:calc_pka" );  } }
namespace pH { namespace calc_pka { BooleanOptionKey const pka_all( "pH:calc_pka:pka_all" );  } }
namespace pH { namespace calc_pka { RealVectorOptionKey const pka_for_resnos( "pH:calc_pka:pka_for_resnos" );  } }
namespace pH { namespace calc_pka { StringOptionKey const pka_for_chainno( "pH:calc_pka:pka_for_chainno" );  } }
namespace pH { namespace calc_pka { BooleanOptionKey const pH_neighbor_pack( "pH:calc_pka:pH_neighbor_pack" );  } }
namespace pH { namespace calc_pka { RealOptionKey const pka_rad( "pH:calc_pka:pka_rad" );  } }
namespace pH { namespace calc_pka { BooleanOptionKey const pH_prepack( "pH:calc_pka:pH_prepack" );  } }
namespace pH { namespace calc_pka { BooleanOptionKey const pH_relax( "pH:calc_pka:pH_relax" );  } }
namespace pH { namespace calc_pka { BooleanOptionKey const rotamer_prot_stats( "pH:calc_pka:rotamer_prot_stats" );  } }
namespace pH { FileVectorOptionKey const pH_unbound( "pH:pH_unbound" );  }
namespace pH { BooleanOptionKey const output_raw_scores( "pH:output_raw_scores" );  }
namespace pH { BooleanOptionKey const pre_process( "pH:pre_process" );  }
namespace pH { StringOptionKey const cognate_partners( "pH:cognate_partners" );  }
namespace pH { FileOptionKey const cognate_pdb( "pH:cognate_pdb" );  }
namespace pocket_grid { BooleanOptionKey const pocket_grid( "pocket_grid" );  }
namespace pocket_grid { RealOptionKey const pocket_grid_size( "pocket_grid:pocket_grid_size" );  }
namespace pocket_grid { RealOptionKey const pocket_grid_size_x( "pocket_grid:pocket_grid_size_x" );  }
namespace pocket_grid { RealOptionKey const pocket_grid_size_y( "pocket_grid:pocket_grid_size_y" );  }
namespace pocket_grid { RealOptionKey const pocket_grid_size_z( "pocket_grid:pocket_grid_size_z" );  }
namespace pocket_grid { RealOptionKey const pocket_grid_spacing( "pocket_grid:pocket_grid_spacing" );  }
namespace pocket_grid { RealOptionKey const pocket_max_spacing( "pocket_grid:pocket_max_spacing" );  }
namespace pocket_grid { RealOptionKey const pocket_min_size( "pocket_grid:pocket_min_size" );  }
namespace pocket_grid { RealOptionKey const pocket_max_size( "pocket_grid:pocket_max_size" );  }
namespace pocket_grid { RealOptionKey const pocket_probe_radius( "pocket_grid:pocket_probe_radius" );  }
namespace pocket_grid { StringOptionKey const central_relax_pdb_num( "pocket_grid:central_relax_pdb_num" );  }
namespace pocket_grid { IntegerOptionKey const pocket_ntrials( "pocket_grid:pocket_ntrials" );  }
namespace pocket_grid { IntegerOptionKey const pocket_num_angles( "pocket_grid:pocket_num_angles" );  }
namespace pocket_grid { BooleanOptionKey const pocket_side( "pocket_grid:pocket_side" );  }
namespace pocket_grid { BooleanOptionKey const pocket_dump_pdbs( "pocket_grid:pocket_dump_pdbs" );  }
namespace pocket_grid { BooleanOptionKey const pocket_dump_exemplars( "pocket_grid:pocket_dump_exemplars" );  }
namespace pocket_grid { BooleanOptionKey const pocket_filter_by_exemplar( "pocket_grid:pocket_filter_by_exemplar" );  }
namespace pocket_grid { BooleanOptionKey const pocket_limit_exemplar_color( "pocket_grid:pocket_limit_exemplar_color" );  }
namespace pocket_grid { BooleanOptionKey const pocket_limit_small_exemplars( "pocket_grid:pocket_limit_small_exemplars" );  }
namespace pocket_grid { BooleanOptionKey const pocket_dump_rama( "pocket_grid:pocket_dump_rama" );  }
namespace pocket_grid { BooleanOptionKey const pocket_restrict_size( "pocket_grid:pocket_restrict_size" );  }
namespace pocket_grid { BooleanOptionKey const pocket_ignore_buried( "pocket_grid:pocket_ignore_buried" );  }
namespace pocket_grid { BooleanOptionKey const pocket_only_buried( "pocket_grid:pocket_only_buried" );  }
namespace pocket_grid { BooleanOptionKey const pocket_psp( "pocket_grid:pocket_psp" );  }
namespace pocket_grid { BooleanOptionKey const pocket_sps( "pocket_grid:pocket_sps" );  }
namespace pocket_grid { BooleanOptionKey const pocket_search13( "pocket_grid:pocket_search13" );  }
namespace pocket_grid { RealOptionKey const pocket_surface_score( "pocket_grid:pocket_surface_score" );  }
namespace pocket_grid { RealOptionKey const pocket_surface_dist( "pocket_grid:pocket_surface_dist" );  }
namespace pocket_grid { RealOptionKey const pocket_buried_score( "pocket_grid:pocket_buried_score" );  }
namespace pocket_grid { RealOptionKey const pocket_buried_dist( "pocket_grid:pocket_buried_dist" );  }
namespace pocket_grid { RealOptionKey const pocket_exemplar_vdw_pen( "pocket_grid:pocket_exemplar_vdw_pen" );  }
namespace pocket_grid { BooleanOptionKey const pocket_debug_output( "pocket_grid:pocket_debug_output" );  }
namespace pocket_grid { BooleanOptionKey const dump_pocketGrid( "pocket_grid:dump_pocketGrid" );  }
namespace pocket_grid { BooleanOptionKey const dump_Grid( "pocket_grid:dump_Grid" );  }
namespace pocket_grid { BooleanOptionKey const extend_eggshell( "pocket_grid:extend_eggshell" );  }
namespace pocket_grid { RealOptionKey const extend_eggshell_dist( "pocket_grid:extend_eggshell_dist" );  }
namespace pocket_grid { RealOptionKey const extra_eggshell_dist( "pocket_grid:extra_eggshell_dist" );  }
namespace pocket_grid { RealOptionKey const eggshell_dist( "pocket_grid:eggshell_dist" );  }
namespace pocket_grid { BooleanOptionKey const reduce_rays( "pocket_grid:reduce_rays" );  }
