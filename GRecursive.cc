////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Wed Feb  8 17:42:37 EST 2017
//
// Notes: This is an example of using a recursive function call.  In
//        this case Fibonacci will call itself until exhausted.
//        For large values of N this function will be very slow and
//        there are smarter ways to do this calculation.
//
////////////////////////////////////////////////////////////////////


#include <iostream>



// Function declaration
int Fibonacci (int const);




int main (int argc, char* argv[])
{
  // Fibonacci numbers up to:
  int const N = 20;

  //  Loop over i to generate the sequence
  for (int i = 1; i <= N; ++i) {
    std::cout << Fibonacci(i) << std::endl;
  }

  return 0;
}




int Fibonacci (int const i)
{
  // A function which will return the i-th number in the fibonacci sequence.
  // This function may call itself.  See notes above.
  if (i <= 2) {
    return 1;
  }

  return Fibonacci(i - 1) + Fibonacci(i - 2);
}
