// Solve first order ODE of my choice using forward euler method
// Implementation file


// Problem is: y^t + 2y = 2-e^-4t
// Re-written as: y^t = 2 - e^-4t -2y
// With t0=0, y0=1
// Analytical Solution: y(t) = 1 + (1/2)exp(-4t) - (1/2)e^(-2t)

#include <stdio.h>
#include <math.h>

void simple_ODE_solver(step, max_iter){

        // m = temp f(t,y) solution
        // t0,y0 used to solve problem iteratively
        // t1,y1 temp updated t0, t1 values
        double m, y1, t1, y0, t0


// IVP
        t0 = 0;
        y1 = 1;

        for(j=1; j<max_iter; j++){
        m = 2-exp(-4*t0)-(2*y0);
        y1 = y0 + (step*m);
        t1 = t0 + step;

        t0 = t1;
        y0 = y1;
        }
return;
}

