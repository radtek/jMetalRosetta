// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington CoMotion, email: license@uw.edu.

/// @file   basic/options/keys/blivens.OptionKeys.gen.hh
/// @brief  basic::options::OptionKeys collection
/// @author Stuart G. Mentzer (Stuart_Mentzer@objexx.com)
/// @author James M. Thompson (tex@u.washington.edu)

#ifndef INCLUDED_basic_options_keys_blivens_OptionKeys_gen_HH
#define INCLUDED_basic_options_keys_blivens_OptionKeys_gen_HH

// Unit headers
#include <basic/options/keys/OptionKeys.hh>

namespace basic {
namespace options {
namespace OptionKeys {

namespace blivens { extern BooleanOptionKey const blivens; }
namespace blivens { namespace disulfide_scorer { extern BooleanOptionKey const disulfide_scorer; } }
namespace blivens { namespace disulfide_scorer { extern RealOptionKey const nds_prob; } }
namespace blivens { namespace disulfide_scorer { extern RealOptionKey const cys_prob; } }
namespace blivens { extern StringOptionKey const score_type; }

} // namespace OptionKeys
} // namespace options
} // namespace basic

#endif
