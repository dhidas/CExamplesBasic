////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Wed Feb  8 17:36:12 EST 2017
//
////////////////////////////////////////////////////////////////////


#include <iostream>


// Function declaration
void IfFunction (int const);




int main (int argc, char* argv[])
{

  // Call the functino with different values
  IfFunction(0);
  IfFunction(1);
  IfFunction(2);

  return 0;
}




void IfFunction (int const A)
{
  // Example of if-else statements
  if (A == 1) {
    std::cout << "one" << std::endl;
  } else if (A >= 2) {
    std::cout << "two or more" << std::endl;
  } else {
    std::cout << "zero or less" << std::endl;
  }

  return;
}
