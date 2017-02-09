////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Wed Feb  8 18:25:30 EST 2017
//
// Notes: An example of using the complex number library
//
////////////////////////////////////////////////////////////////////


#include <iostream>
#include <complex>

int main (int argc, char* argv[])
{
  // Declare a few complex numbers
  std::complex<double> const I(0, 1);
  std::complex<double> const X(2, 2);

  // Do some math with complex doubles and print
  std::cout << I << std::endl;
  std::cout << 2. * I << std::endl;
  std::cout << I * I << std::endl;
  std::cout << X - I << std::endl;

  // Get the real and imaginary parts (they are returned as double from their respective functions)
  double const Real = X.real();
  double const Imag = X.imag();

  std::cout << Real << " " << Imag << std::endl;

  // Exponentiate
  std::complex<double> Y = std::exp(I * 3.14159265359);
  std::cout << "e to the i pi is close to: " << Y << std::endl;

  return 0;
}
