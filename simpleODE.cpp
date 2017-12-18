// Solve first order ODE of my choice using forward euler method
// Implementation file


// Problem is: y^t + 2y = 2-e^-4t
// Re-written as: y^t = 2 - e^-4t -2y
// With t0=0, y0=1
// Analytical Solution: y(t) = 1 + (1/2)exp(-4t) - (1/2)e^(-2t)

#include <iostream>
#include <cmath>
#include <stdexcept>
#include <vector>

#include "simpleODE.hpp"
#include "class_def.hpp"

using namespace std;

// Calculates one iteration/time step using forward euler
simple2* simpleODE(simple2 state, input data, simple2 path[]){

	
	for (int j=0; j<data.max_iter; j++){
        // m = temp f(t,y) solution
        // t0,y0 used to solve problem iteratively
        // t1,y1 temp updated t0, t1 values
        double y = state.y;
	double t = state.t;
	
	// Forward Euler calculations
	double dt = data.stepSize;
	double dy = 2-exp(-4*t)-(2*y);

	// incrementing solution values
	t += dt;
	y += (dt*dy);
	
	// updating state of solution
	state.y = y;
	state.t = t;
	path[j] = state;
	}

	return path;	

}



// Obvi the Analytical solution calculation
double AnalyticSol(double t)
{
	return (1 + ((1/2)*exp(-4*t))-((1/2)*exp(-2*t)));
}


