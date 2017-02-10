////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Wed Feb  8 18:36:51 EST 2017
//
////////////////////////////////////////////////////////////////////


#include <iostream>
#include <cstdlib>

int IArguments ()
{
  return 0;
}


int main (int argc, char* argv[])
{
  // This function takes exactly 3 arguments (the name of the executable and 2
  // extra on the command line).  If we don't get that we return with an error
  // status which is non-zero
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " [int] [double]" << std::endl;
    return 1;
  }

  // get the integer argument
  int const MyInt = atoi(argv[1]);

  // Get the double argument
  double const MyDouble = atof(argv[2]);

  std::cout << "argv[1]: " << MyInt << std::endl;
  std::cout << "argv[2]: " << MyDouble << std::endl;

  return 0;
}
