////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Wed Feb  8 17:53:26 EST 2017
//
// Notes: This examples illustrates how to use an iterator.
//        
////////////////////////////////////////////////////////////////////


#include <iostream>
#include <vector>



// Function declaration
void PrintIntegerVector (std::vector<int> const&);




int main (int argc, char* argv[])
{
  // Make a vector and append some values
  std::vector<int> IntegerVector;
  for (int i = 0; i != 20; ++i) {
    IntegerVector.push_back(42 + i);
  }

  // Call the printing functions with the vectors as input
  PrintIntegerVector(IntegerVector);

  return 0;
}




void PrintIntegerVector (std::vector<int> const& V)
{
  // This function uses an iterator instead of an index.  This is much more c++ish

  for (std::vector<int>::const_iterator it = V.begin(); it != V.end(); ++it) {
    std::cout << *it << std::endl;
  }

  return;
}


