//  AbInitio.hh
//
//  Authors:
//       Maria Jesus Garcia Godoy <mjgarciag@lcc.uma.es>
// 
//  Copyright (c) 2011 Antonio J. Nebro, Juan J. Durillo
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
// 
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef __ABINITIO__
#define __ABINITIO__

#include <jmetalcpp/core/Problem.hh>
#include <jmetalcpp/core/Solution.hh>
#include <math.h>
#include <jmetalcpp/encodings/solutionType/RealSolutionType.hh>
#include <jmetalcpp/core/Solution.hh>
#include <protocols/abinitio/Protocol.hh>
#include <core/pose/Pose.hh>
#include <core/pose/Pose.fwd.hh>

#include <core/sequence/Sequence.hh>


#include <string>


using protocols::abinitio::ProtocolOP;
using core::pose::Pose;


class AbInitio : public Problem {
   
public:
	/// @brief Constructor 1 of the Abinito problem
	AbInitio(string solutionType, ProtocolOP ab,  Pose & fold_pose, int numberOfVariables, 
	string const strategy, int rma_stage_sample);
    
	/// @brief Destructor
	~AbInitio();

	void evaluate(Solution *solution);
	//void evaluateByRosetta(Solution *solution);

public:
	
	core::pose::PoseOP createPose(std::string const& sequence);
	
public:

	int getStage();



    //void configureEvaluation();
	//void revaluate(int evals, Solution *solution);
	//void getRosettaSolution(Solution *solution);

private:

	//int rma_stage_sample;
	//int evals; 						//Number of Evaluations
    //int MAX_EVALUATIONS_STAGE1;		// Max allowed evaluations in stage1		
	//int MAX_EVALUATIONS_STAGE2;		// Max allowed evaluations in stage2		
	//int MAX_EVALUATIONS_STAGE3;		// Max allowed evaluations in stage3		
	//int MAX_EVALUATIONS_STAGE4;		// Max allowed evaluations in stage4
	//std::string sequence; 	// Maria: Input protein sequence
	int iterations; // Maria: do_recover: total number of iterations
	double fitness; // Maria: Energy associated with each pose
	bool do_recover = true; // Maria: do_recover
	bool variable_temp;
	string temp_strategy = "VT";
	int stage;	
	Pose pose;	// Maria: fold_pose
	ProtocolOP rosetta_abinitio;	// Maria: Protocol Rosetta Abinitio
	int stage_iterations;

};

#endif


/**
  * @class AbInitio
  * @brief Class representing problem AbInitio
 **/