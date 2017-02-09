////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Wed Feb  8 17:24:40 EST 2017
//
////////////////////////////////////////////////////////////////////


#include <iostream>


// Function declaration
int Subtract (int const, int const);




int main (int argc, char* argv[])
{

  // Loops over i and j from 0 to 3
  for (int i = 0; i != 4; ++i) {
    for (int j = 0; j != 4; ++j) {

      // Call the Subtract function and save the result
      int const Subtraction = Subtract(i, j);

      // Print the equation with result
      std::cout << i << " - " << j << " = " << Subtraction << std::endl;
    }
  }

  return 0;
}




int Subtract (int const A, int const B)
{
  // Subtract the second input from the first and reurn the result
  return A - B;
}

