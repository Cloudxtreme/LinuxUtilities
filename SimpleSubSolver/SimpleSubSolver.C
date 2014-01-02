/*
Simple Sub Solver Implementation

05/27/2013

*/

#ifndef SIMPLE_SUB_SOLVER_C
#define SIMPLE_SUB_SOLVER_C
//libraries used in implementation
#include <iostream>
#include <fstream>
//
#include "SimpleSubSolver.h"
using namespace std;


SimpleSubSolver::SimpleSubSolver( )
{
  int frequency[26]; 
  string defaultFile = "StandardFrequencies.dat"; 
  ifstream fin(defaultFile.data( ));
  if (! fin.is_open( ))
    {
      cout << "\nThe file " << defaultFile << " could not be opened.\n"
	   << "Please use the method findFreq to get frequencies from a \n"
	   << "text file.\n";
    }
  else
    {
      for (int i = 0; i < 26; i++)
	{
	  fin >> frequency[i];
	}
      fin.close( );
      cout << "SimpleSubSolver is ready\n"; 
      }
}
/*SimpleSubSolver::SimpleSubSolver(string fileName)
{
  cout << "\nNot Implemented\n";
  }
SimpleSubSolver::~SimpleSubSolver( )
{
  //Intentionally blank
  }*/
bool SimpleSubSolver::findFreq(std::string fileName)
{
  return false; //TODO
}
void SimpleSubSolver::solve(std::string fileName) //crack( ) until the message is decoded
{

}

string SimpleSubSolver::crack( ) //guess key
{
  return "TODO";
}

#endif //SIMPLE_SUB_SOLVER_C
