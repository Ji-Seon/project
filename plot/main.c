#include <stdio.h>
#include <stdlib.h>
#include "grvy.h"

// Grvy parsing code obtained from: users.ices.utexas.edu/~csim/grvy/html/cinputexample.html
// Modified to c++ environment
int main(int argc,char **argv)
{

int igot, problem, solMethod, max_iter;
double stepSize;
bool verificationMode;
bool debugMode;

// Initialize/read the file

igot = grvy_input_fopen("./input.dat");

// Read specific variables and echo locally

if(grvy_input_fread_int("problem",&problem))
	cout << problem;
grvy_input_fdump();
grvy_input_fclose();

return 0;
}

