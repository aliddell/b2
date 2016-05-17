//This file is part of Bertini 2.
//
//python/endgame_export.hpp is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.
//
//python/endgame_export.hpp is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with python/endgame_export.hpp.  If not, see <http://www.gnu.org/licenses/>.
//
// Copyright(C) 2016 by Bertini2 Development Team
//
// See <http://www.gnu.org/licenses/> for a copy of the license, 
// as well as COPYING.  Bertini2 is provided with permitted 
// additional terms in the b2/licenses/ directory.

// individual authors of this file include:
//
//  Daniel Brake
//  University of Notre Dame
//  Summer 2016
//
//
//  python/endgame_export.hpp:  Header file for exposing endgames to python.

#pragma once

#include "python_common.hpp"

#include <bertini2/tracking/amp_cauchy_endgame.hpp>
#include <bertini2/tracking/amp_powerseries_endgame.hpp>

#include <bertini2/tracking/fixed_prec_cauchy_endgame.hpp>
#include <bertini2/tracking/fixed_prec_powerseries_endgame.hpp>

namespace bertini{
	namespace python{


		using namespace bertini::tracking;

		/**
		 Abstract Endgame class
		 */
		template<typename EndgameT>
		class EndgameVisitor: public def_visitor<EndgameVisitor<EndgameT> >
		{
			friend class def_visitor_access;
			
		public:
			template<class PyClass>
			void visit(PyClass& cl) const;
			
		private:

			using CT = typename TrackerTraits<typename EndgameT::TrackerType>::BaseComplexType;
			using RT = typename TrackerTraits<typename EndgameT::TrackerType>::BaseRealType;

			unsigned (EndgameT::*get_cycle_number_)() const = &EndgameT::CycleNumber;
		};// EndgameVisitor class



		/**
		 Particulars for the PowerSeries endgame.
		 */
		template<typename PowerSeriesT>
		class PowerSeriesVisitor: public def_visitor<PowerSeriesVisitor<PowerSeriesT> >
		{
			friend class def_visitor_access;
			
		public:
			template<class PyClass>
			void visit(PyClass& cl) const;
			
		private:

			using CT = typename TrackerTraits<typename PowerSeriesT::TrackerType>::BaseComplexType;
			using RT = typename TrackerTraits<typename PowerSeriesT::TrackerType>::BaseRealType;


		};// CauchyVisitor class




		/**
		 Particulars for the Cauchy endgame.
		 */
		template<typename CauchyT>
		class CauchyVisitor: public def_visitor<CauchyVisitor<CauchyT> >
		{
			friend class def_visitor_access;
			
		public:
			template<class PyClass>
			void visit(PyClass& cl) const;
			
		private:

			using CT = typename TrackerTraits<typename CauchyT::TrackerType>::BaseComplexType;
			using RT = typename TrackerTraits<typename CauchyT::TrackerType>::BaseRealType;


		};// CauchyVisitor class

		// now prototypes for expose functions defined in the .cpp files for the python bindings.

		/**
		The main function for exporting the bound endgames to Python.

		This should be the only function called from the main function defining the module, and should call all those functions exposing particular endgames.
		*/
		void ExportEndgames();


		/**
		export the power series endgame incarnations
		*/
		void ExportAMPPSEG();
		void ExportFDPSEG();
		void ExportFMPSEG();


		/**
		export the cauchy endgame incarnations
		*/
		void ExportAMPCauchyEG();
		void ExportFDCauchyEG();
		void ExportFMCauchyEG();

		

}}// re: namespaces

