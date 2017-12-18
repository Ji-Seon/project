#include <iostream>
#include <string>
#include <stdexcept>

#include "grvy.h"
#include "runOpt.hpp"

using std::cout;
using std::cerr;
using std::endl;
using std::string;

namespace runOpt{

	Options parserunOpt(std::string filename){
	int prob = -1, sol = -1, max_iter = -1;
	double stepSize;
	bool verification, debug;

	GRVY::GRVY_Input_Class iparse;
}
}
