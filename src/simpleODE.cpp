// Solve first order ODE of my choice using forward euler method
// Implementation file


// Problem is: y^t + 2y = 2-e^-4t
// Re-written as: y^t = 2 - e^-4t -2y
// With t0=0, y0=1
// Analytical Solution: y(t) = 1 + (1/2)exp(-4t) - (1/2)e^(-2t)

#include <iostream>
#include <cmath>
#include <stdexcept>
#include <cassert>
#include <vector>

#include <gsl/gsl_errno.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_odeiv2.h>

#include "simpleODE.hpp"
#include "class_def.hpp"

using namespace std;

// Calculates one iteration/time step using forward euler
void simple_ODE_iteration(simple2& state, input& data){

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
}

// Solve full trajectory
vector<simple2> simple_ODE_full_trajectory(simple2() state, input data){
	vector<simple2> path = vector<vec2>(data.max_iter);	

	// call iteration
	for (int j=0; j < data.max_iter; j++){
	path[j] = state;
	simple_ODE_iteration(state, data);
}
}


// Obvi the Analytical solution calculation
double AnalyticSol(double t)
{
	return (1 + ((1/2)*exp(-4*t))-((1/2)*exp(-2*t)));
}


// Gsl Solution


