// selector.cpp

#include <iostream>
#include <cstdlib>

#include "selector.hpp"

void selector(input x)
{
	
	// Link to simple ODE solver
	if((x.problem == 0) && (x.solution == 0)){
		cout << "!!!!!!!";
	}

	// Link simple ODE problem to rk4
	else if ((x.problem == 0) && (x.solution == 1)){
		cout << "Vow!!!!";

	}

	// Link hard problem to rk4
	else if ((x.problem == 1) && (x.solution == 1)){

	}	

	// Link hard problem to rkck
	else if ((x.problem == 1) && (x.solution == 2)){

	}

	// Link hard problem to rkf45
	else if ((x.problem == 1) && (x.solution == 3)){

	}

}
