# project
CSE380 Canned Project

The modules you will have to load in order for my make file to work are:
1) intel/16.0.1
2) cray_mpich/7.3.0
3) TACC/1.0
4) grvy/0.32.0
5) gsl/1.16

you can do this with the one-liner:
module load intel/16.0.1 cray_mpich/7.3.0 TACC/1.0 grvy/0.32.0 gsl/1.16

The header files I used for this project:
class_def.hpp
parse.hpp
selector.hpp
simpleODE.hpp

The c++ files I used for this project:
class_def.cpp
main.cpp
parse.cpp
selector.cpp
simpleODE.cpp

class_def is where I have all my data types stored.
parse is where I use grvy functions to read the input.dat file.
selector is where I use conditional statements to interpret information read in from input.dat file.
simpleODE solves the simple ODE equation.
charged solves the difficult equations with three different rk methods.

The input.dat file has all the relevant information on how to change inputs to the system!!
