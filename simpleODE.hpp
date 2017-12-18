// simpleODE.hpp
#ifndef simpleODE_H
#define simpleODE_H

#include <vector>
#include "class_def.hpp"

using namespace std;


double AnalyticSol(double t);
simple2* simpleODE(simple2 state, input data, simple2 path[]);

#endif
