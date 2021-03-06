// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington CoMotion, email: license@uw.edu.

/// @file   protocols/forge/constraints/InvrotTreeRCG.fwd.hh
///
/// @author Florian Richter, floric@u.washington.edu, may 2012

#ifndef INCLUDED_protocols_forge_constraints_InvrotTreeRCG_fwd_hh
#define INCLUDED_protocols_forge_constraints_InvrotTreeRCG_fwd_hh

// utility headers
#include <utility/pointer/access_ptr.hh>
#include <utility/pointer/owning_ptr.hh>

namespace protocols {
namespace forge {
namespace constraints {

class InvrotTreeRCG;

typedef utility::pointer::shared_ptr< InvrotTreeRCG > InvrotTreeRCGOP;
typedef utility::pointer::weak_ptr< InvrotTreeRCG const > InvrotTreeRCGCAP;

}
}
}
#endif
