//Permutate all n bit patterns


#ifndef BIT_PERMUTATOR_H
#define BIT_PERMUTATOR_H

#include <string>

class BitPermutator
{
public:
  BitPermutator(unsigned int givenLength);
  std::string next();
  const bool permutationComplete();
protected:
  unsigned int currentBits;
  unsigned int length;
  unsigned int permutCount;
  unsigned int maxPermutations;

};

#endif // BITPERMUTATOR_H
