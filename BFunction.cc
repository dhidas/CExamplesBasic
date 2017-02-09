////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Wed Feb  8 17:13:05 EST 2017
//
////////////////////////////////////////////////////////////////////


#include <iostream>


// Function declaration (typically put in a .h header file)
int Function (int const, double const);




int main (int argc, char* argv[])
{
  // Call the function from main
  Function(42, 1.61803398875);

  return 0;
}




int Function (int const A, double const B)
{
  // Print some message with the numbers input
  std::cout << "The new magic numbers are " << A << " and " << B << std::endl;

  return 0;
}


