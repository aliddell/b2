//This file is part of Bertini 2.
//
//nag_datatypes_test.cpp is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.
//
//nag_datatypes_test.cpp is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with nag_datatypes_test.cpp.  If not, see <http://www.gnu.org/licenses/>.
//
// Copyright(C) 2015 - 2017 by Bertini2 Development Team
//
// See <http://www.gnu.org/licenses/> for a copy of the license, 
// as well as COPYING.  Bertini2 is provided with permitted 
// additional terms in the b2/licenses/ directory.

// individual authors of this file include:
// dani brake, university of notre dame
//

/**
\file test/nag_datatypes/nag_datatypes_test.cpp  Main source file for the testing executable for NAG datatypes for Bertini2
*/



#define BOOST_ALL_DYN_LINK 1

//this #define MUST appear before #include <boost/test/unit_test.hpp>
#define BOOST_TEST_MODULE "Bertini 2 NAG Datatype Testing"
#include <boost/test/unit_test.hpp>
#include "bertini2/logging.hpp"


#define BERTINI_TEST_MODULE "nag_datatypes"
#include "test/utility/enable_logging.hpp"



// deliberately left blank.  link other files with this one.

