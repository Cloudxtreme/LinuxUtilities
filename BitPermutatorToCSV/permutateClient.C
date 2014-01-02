/*
  Combine BitPermutator and BuildCSV objects to make
  all n bit permutations into a .csv file
*/

#include <iostream>
#include <cctype>
#include <string>
#include "BitPermutator.h"
#include "CSVBuilder.h"
using namespace std; 


void processBitString(const string &  bitString, CSVBuilder & csvFile);

int main(int argc, char * argv[])
{
  if((argc != 2) || (! isdigit(*argv[1])) || ((*argv[1]-'0') < 1))
    {
      cout << "Must enter the length to permutate over. Bye.\n";
      return -1;
    }

       // else a positive value has been given for n, then..
           // convert inputted char to int, ..
  string temp(argv[1]);
  unsigned int length = atoi(temp.c_str());

           // get a filename from the user, ..
  string csvFileName;
  cout << "Name the new .csv file (one word only): ";
  cin >> csvFileName;

           // setup variables and ..
  CSVBuilder file(csvFileName);
  BitPermutator permutator(length); 

       // create the file
  while( ! permutator.permutationComplete())
      processBitString( permutator.next(), file ); 

  return 0;       
}


void processBitString(const string & bitString, CSVBuilder & csvFile)
{
  for(unsigned int i = 0; i < bitString.length(); i++)
    {
      string singleBit(bitString.begin()+i, bitString.begin()+i+1);
      csvFile.addEntry( singleBit );
    }
  csvFile.nextLine();
}
