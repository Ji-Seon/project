// class_def.hpp
#ifndef class_def_H
#define class_def_H

#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;

class simple2
{
	public:
	double y,t;

	// Declaring class simple that keeps track of current state in simple ODE
	simple2();
	simple2(double y1,double t1);
	vector<double>toVector();
};

class simple6
{	
	public:
	double x,y,z,u,v,w;
	simple6();
	simple6(double x1, double y1, double z1, double u1, double v1, double w1);
	vector<double>toVector();

};

class input
{
	public:
	int problem,solution,max_iter,verif,debug;
	float stepSize;
	input();
	input(int a, int b, float c, int d, int e, int f);
};

#endif
