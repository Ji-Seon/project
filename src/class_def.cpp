// class_def.cpp
#include "class_def.hpp"
#include <iostream>

// Since small project, import all of the standard library living in namespace std
using namespace std;

// Default constructor for simple ODE
simple2::simple2()
{
cout << "Default initization to simple ODE" << endl;
y=1; t=0;
}

simple2::simple2(double y1, double t1)
{
y=y1; t=t1;
}

// converts vector so it can be a member function and access "this"
vector<double> simple2::toVector()
{
	vector<double> retval = vector<double>(2,0);
	retval[0] = this->y;
	retval[1] = this->t;
	
	return retval;
}
	
// Default constructor for hard problem
simple6::simple6()
{
x=0; 	y=0;	z=0;
u=0;	v=0;	w=0;
}

simple6::simple6(double x1,double y1, double z1, double u1, double v1, double w1)
{
	x=x1;	y=y1;	z=z1;
	u=u1;	v=v1;	w=w1;
}

// converts my class into a vector so manipulation is easier
vector<double> simple6::toVector()
{
	vector<double> retval = vector<double>(6,0);
	retval[0] = this->x;
	retval[1] = this->y;
	retval[2] = this->z;
	retval[3] = this->u;
	retval[4] = this->v;
	retval[5] = this->w;
	return retval;
}

input::input(int a, int b, float c, int d, int e, int f)
{
	problem = a;
	solution = b;
	stepSize = c;
	max_iter = d;
	verif = e;
	debug = f;
}

input::input()
{
	problem = -1;
	solution = -1;
	stepSize = -1;
	max_iter = -1;
	verif = -1;
	debug = -1;

}
