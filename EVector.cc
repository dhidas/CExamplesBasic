////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Wed Feb  8 17:53:26 EST 2017
//
// Notes: We include the vector header and make a few vectors of
//        various types.  We can do this with vector because it is
//        a template.
////////////////////////////////////////////////////////////////////


#include <iostream>
#include <vector>



// Function declarations
void PrintIntegerVector (std::vector<int> const&);
void PrintDoubleVector (std::vector<double> const&);




int main (int argc, char* argv[])
{
  // Make a few vectors of different types.  Here they are created with zero length.
  std::vector<int> IntegerVector;
  std::vector<double> DoubleVector;

  // We can add elements to the end of the vector
  IntegerVector.push_back(42);
  DoubleVector.push_back(1. / 137.);

  // Let's add a few more
  for (int i = 0; i != 20; ++i) {

    IntegerVector.push_back(42 + i + 1);

    // Since i is of type 'int' we cast it as a 'double' using '(double)' so we can add
    // (most compilers will do this for you without you knowing, but it's best to
    // always be specific)
    DoubleVector.push_back( 1. / 137. + (double) i );
  }

  // Call the printing functions with the vectors as input
  PrintIntegerVector(IntegerVector);
  PrintDoubleVector(DoubleVector);

  return 0;
}




void PrintIntegerVector (std::vector<int> const& V)
{
  // This function takes a reference to a vector as input.  Because it is declared const
  // You cannot modify it.

  // size_t is like int, but not quite...since it doesn't have negative numbers
  for (size_t i = 0; i != V.size(); ++i) {
    std::cout << i << " " << V[i] << std::endl;
  }

  return;
}




void PrintDoubleVector (std::vector<double> const& V)
{
  // This function takes a reference to a vector as input.  Because it is declared const
  // You cannot modify it.

  // size_t is like int, but not quite...since it doesn't have negative numbers
  for (size_t i = 0; i != V.size(); ++i) {
    std::cout << i << " " << V[i] << std::endl;
  }

  return;
}



