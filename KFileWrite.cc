////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Wed Feb  8 20:38:08 EST 2017
//
////////////////////////////////////////////////////////////////////


#include <iostream>
#include <fstream>
#include <string>

bool FileWrite (std::string const&);


int main (int argc, char* argv[])
{

  // Call the function to write data to the file.  If the function returns true we return from
  // main normally, otherwse we return a non-zero value

  if (!FileWrite("K.dat")) {
    return 1;
  }

  return 0;
}






bool FileWrite (std::string const& OutFileName)
{
  // Write some data in columns to a file

  // Open the file for writing.  The c_str() here is needed to convert the std::string
  // into a c-like character array, which is what the ofstream constructor requires
  std::ofstream OutFile(OutFileName.c_str());

  // You better check if that is open at least
  if (!OutFile.is_open()) {
    std::cerr << "ERROR: cannot open file: " << OutFileName << std::endl;
    return false;
  }


  // Set scientific printing for the out file stream
  OutFile << std::scientific;

  // Number of points, start and stop position in X
  int    const NPoints  = 100;
  double const XStart   = -1;
  double const XStop    =  1;
  double const StepSize = (XStop - XStart) / (NPoints - 1.);

  // Loop over NPoints points
  for (int i = 0; i != NPoints; ++i) {

    // Compute X and Y (X^3)
    double const X = XStart + i * StepSize;
    double const Y = X * X * X;

    // Print this line to file
    OutFile << X << " " << Y << std::endl;
  }

  // Done with file so we close it
  OutFile.close();

  return true;
}
