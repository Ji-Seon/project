// parse.cpp

#include "parse.hpp"

// Grvy parsing code obtained from: users.ices.utexas.edu/~csim/grvy/html/cinputexample.html
// Modified to c++ environment
input parse(int argc,char **argv)
{

int igot, problem, solMethod, max_iter, verificationMode, debugMode;
float stepSize;
string prob, sol, verif, debug;
// Initialize/read the file

igot = grvy_input_fopen("./input.dat");

if (igot == 0)
	{cout << "Input file not read, something's amiss!" << endl << "Mate, find or make an input.dat file!! Reference the README.md for more info :)";}

// Read specific variables and echo locally

if(grvy_input_fread_int("problem",&problem))
	if (problem == 0)
		{prob = "Simple ODE";}
	else 
		{prob = "Charged Particle Motion in a Vertical Electric Field";}

	cout << "Problem chosen: " << prob << endl;

if(grvy_input_fread_int("solMethod",&solMethod))
	if (solMethod == 0)
		{sol = "Forward Euler";}
	else if (solMethod == 1)
		{sol = "Runge-Kutta 4th order (rk4)";}
	else if (solMethod == 2)
		{sol = "Runge-Kutta Cash-Karp (rkck)";}
	else 
		{sol = "Runge-Kutta-Fehlberg (rkf45)";}

	cout << "Solution chosen: "<< sol << endl;

if(grvy_input_fread_float("stepSize",&stepSize))
	cout << "stepSize chosen: "<< stepSize << endl;

if(grvy_input_fread_int("max_iter",&max_iter))
	cout << "max iteration chosen: "<< max_iter << endl;

if(grvy_input_fread_int("verificationMode",&verificationMode))
	if(verificationMode == 0)
		{verif = "On";}
	else
		{verif = "Off";}
	cout << "Verification mode chosen: " << verif << endl;

if(grvy_input_fread_int("debugMode",&debugMode))
	if(debugMode == 0)
		{debug = "On";}
	else
		{debug = "Off";}
	cout << "Debug mode chosen: " << debug << endl;

grvy_input_fclose();
input read(problem, solMethod, stepSize, max_iter, verificationMode, debugMode);

return read;

}
