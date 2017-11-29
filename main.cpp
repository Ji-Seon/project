// Main file where the functions are driven

#include<iostream>
#include<cmath>
#include "first_order_ODE.hpp"

using namespace std;
int main()
{
double solution;
	ask();
	solution = solve_ODE();
	return 0;
}
