/*
Simple Sub Solver
  Solves simple substitution cipher encryption of the ENGLISH ALPHABET ONLY
  e.g. ceasar cipher, alphabetical substitution, keyphrase substitution
  - implementation uses all UPPER case internally 
By Jeff Bunce

05/27/2013

*/

#ifndef SIMPLE_SUB_SOLVER_H
#define SIMPLE_SUB_SOLVER_H

//libraries used in declarations
#include <string>
#include <vector>
//
class SimpleSubSolver
{
public:
  SimpleSubSolver( ); //use default table of English language letters
  //SimpleSubSolver(std::string filename); //Find frequency from passed text file
  //~SimpleSubSolver( );
  bool findFreq(std::string fileName);
  void solve(std::string fileName); //crack( ) until the message is decoded
protected:
  std::string crack( ); //guess key
private:
  std::vector<std::string> guesses; //Each string is 26 characters long.
                           //They are guessed keys.
  int frequency[]; //stores frequency of letters FROM APPROPRIATE TEXT
                          //as a PERCENT 
};

#endif //SIMPLE_SUB_SOLVER_H
