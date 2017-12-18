// selector.cpp
#include <iostream>
#include <cstdlib>
#include <fstream>

#include "simpleODE.hpp"
#include "hardODE.hpp"
#include "selector.hpp"


using namespace std;

void selector(input x)
{
ofstream myfile;
myfile.open ("output.txt");
	
	// verification mode on!!
	if((x.verif == 0) && (x.problem == 0)){		
		
		// Runs simple solution
		simple2* simpleSol;
                simple2 path[x.max_iter];
                simple2 IVP = simple2();
                cout << IVP.t << " " << IVP.y << endl;
                simpleSol = simpleODE(IVP, x, path);

                for(int j=0; j < x.max_iter; j++){
                        myfile << simpleSol[j].t << " " << simpleSol[j].y << endl;
		}
		
		// Runs rk4 solution
		
		
	}

	else if((x.problem == 0) && (x.solution == 0)){
		simple2* simpleSol;
		simple2 path[x.max_iter];
		simple2 IVP = simple2();
		//cout << IVP.t << " " << IVP.y << endl;
		simpleSol = simpleODE(IVP, x, path); 
		
		for(int j=0; j < x.max_iter; j++){
			myfile << simpleSol[j].t << " " << simpleSol[j].y << endl;
		}
		
	}

	// Links hard problem to gsl's rk solver, inside driver allows options.
	else if (x.problem == 1){
		simple6* hardSol;
		simple6 path[x.max_iter];
		simple6 IVP = simple6();
		double time = 0;

		cout << "Intializing..." << endl;
		cout << IVP.x << " " << IVP.y << " " << IVP.z << endl;
		cout << IVP.u << " " << IVP.v << " " << IVP.w << endl;
		hardSol = gsl_charged_trajectory(IVP, x, path);
		
		for(int j=0; j < x.max_iter; j++){
			myfile << time << " " 
			<< hardSol[j].x << " " 
			<< hardSol[j].y << " " 
			<< hardSol[j].z << " " 
			<< hardSol[j].u << " " 
			<< hardSol[j].v << " " 
			<< hardSol[j].w << endl;
		time += x.stepSize;
		}
	}
myfile.close();
}
