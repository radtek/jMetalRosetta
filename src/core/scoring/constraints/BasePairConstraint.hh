// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington CoMotion, email: license@uw.edu.

/// @file
/// @brief A wrapper for a very particular AmbiguousConstraint of MultiConstraints
/// @author Andrew Watkins (amw579@stanford.edu, October 2016)

#ifndef INCLUDED_core_scoring_constraints_BasePairConstraint_hh
#define INCLUDED_core_scoring_constraints_BasePairConstraint_hh

// Unit header
#include <core/scoring/constraints/Constraint.hh>
#include <core/scoring/constraints/BasePairConstraint.fwd.hh>
#include <core/scoring/func/XYZ_Func.fwd.hh>
#include <core/scoring/ScoreType.hh>
#include <core/scoring/func/FuncFactory.fwd.hh>
#include <core/id/SequenceMapping.fwd.hh>

#include <core/id/AtomID.hh>
#include <core/scoring/EnergyMap.fwd.hh>
#include <core/conformation/Conformation.fwd.hh>
#include <core/pose/Pose.fwd.hh>


//Utility Headers
#include <numeric/xyzVector.fwd.hh>

#include <core/scoring/EnergyMap.hh>
#include <utility/vector1.hh>

#ifdef    SERIALIZATION
// Cereal headers
#include <cereal/types/polymorphic.fwd.hpp>
#endif // SERIALIZATION


namespace core {
namespace scoring {
namespace constraints {

class BasePairConstraint : public Constraint {
public:

	/// @brief Constructor
	BasePairConstraint();

	/// @brief Constructor
	BasePairConstraint( Size const res1, Size const res2 );

	virtual ConstraintOP clone() const;
	virtual ConstraintOP remapped_clone( pose::Pose const& src, pose::Pose const& dest, id::SequenceMappingCOP smap ) const;
	virtual
	ConstraintOP
	remap_resid( core::id::SequenceMapping const &seqmap ) const;

	virtual void show_def( std::ostream& out, pose::Pose const& /*pose*/ ) const;

	std::string type() const;

	Real
	dist( core::scoring::func::XYZ_Func const & /*xyz*/ ) const;

	/// @brief read in constraint defiinition
	void
	read_def( std::istream& data, pose::Pose const& pose, func::FuncFactory const& func_factory );

	virtual bool operator == ( Constraint const & other ) const;
	virtual bool same_type_as_me( Constraint const & other ) const;

	/// @brief compute score
	void
	score( func::XYZ_Func const & xyz_func, EnergyMap const & weights, EnergyMap & emap ) const;

	/// @brief number of atoms involved in this BasePairConstraint
	Size natoms() const { return 0; }
	virtual
	AtomID const & atom( Size const n ) const{
		debug_assert( n <= member_atoms_.size() );
		return member_atoms_[n];
	}

	/// @brief compute atom deriv
	void
	fill_f1_f2(
		AtomID const & atom,
		func::XYZ_Func const & xyz,
		Vector & F1,
		Vector & F2,
		EnergyMap const & weights
	) const;

	void show( std::ostream& out) const;

	Size show_violations( std::ostream& out, pose::Pose const& pose, Size verbose_level, Real threshold = 1.0 ) const;

	ConstraintCOPs const &
	constraints() const {
		return constraints_;
	}

protected:
	/// @brief Copy constructor for derived classes to ensure that they perform a deep copy on the
	/// approriate data members
	BasePairConstraint( BasePairConstraint const & src );

private:

	ConstraintCOPs constraints_;

	Size res1_;
	Size res2_;
	utility::vector1< AtomID > member_atoms_;

#ifdef    SERIALIZATION
public:
	template< class Archive > void save( Archive & arc ) const;
	template< class Archive > void load( Archive & arc );
#endif // SERIALIZATION

}; //BasePairConstraint

} //constraints
} //scoring
} //core

#ifdef    SERIALIZATION
CEREAL_FORCE_DYNAMIC_INIT( core_scoring_constraints_BasePairConstraint )
#endif // SERIALIZATION


#endif
