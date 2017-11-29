#include <iostream>
#include <string>

using namespace std;

void ask()
{
string problem;
int i;
  cout << "Please pick one of the following problems: \n";
  cout << "Enter "1" for: Forward Euler with a basic problem. \n";
  cout << "Enter "2" for: Charged particle motion in a vertical electric field. \n"
  getline (cin, problem); // Gets problem selection
  cin.ignore();	// Throws away enter (new line)
  // Ensures that a valid problem is chosen
  if ((problem != 1) || (problem != 2)){		
	cout << "Please enter a valid choice. \n"
	cout << "Either enter "1" or "2" (Not including the parentheses).
	}
  else{
  cout << "The value you entered is ";  
  }
  
  return 0;

  // cout << "Type 2 for: Forward Euler with Boost library solver. \n";
  // cout << "Type 3 for: Charged particle motion in a vertical electric field. \n"
}
