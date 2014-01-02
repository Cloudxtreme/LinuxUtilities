//Permutate all n bit patterns


#ifndef BIT_PERMUTATOR_C
#define BIT_PERMUTATOR_C


#include <cmath>
#include "BitPermutator.h"
using namespace std;

BitPermutator::BitPermutator(unsigned int givenLength)
{
  currentBits = 0; // start with 0
  length = givenLength;
  permutCount = 0;

  maxPermutations = 2; // maxPerm = 2^length
  for(unsigned int multCount = 1; multCount < givenLength; multCount++)
    maxPermutations *= 2;
}

string BitPermutator::next()
{  
  char nextBits [length];
  unsigned int index = 0; // nextBits index


  // isolate each bit and add its value to a string, from left to right
  unsigned int initialShift = length-1;
  int isolBit; // safer if I let this go below zero
  unsigned int unsignedIsol;
  for( isolBit = (1 << initialShift); isolBit > 0; isolBit = isolBit/2 ) 
    {
      unsignedIsol = isolBit; // conversion makes compiler complain less
      if( unsignedIsol == (currentBits & unsignedIsol) )
	nextBits[index] = '1';
      else
	nextBits[index] = '0';

      ++index;
    } 
  string nextBitsString(nextBits, length); // only convert to strings at the end
  ++currentBits;
  ++permutCount;
  return nextBitsString;
}

const bool BitPermutator::permutationComplete()
{
  if(permutCount >= maxPermutations)
    return true;
  else
    return false;
}

#endif //BIT_PERMUTATOR_H
