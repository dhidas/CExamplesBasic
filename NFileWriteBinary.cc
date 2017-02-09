////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Thu Feb  9 16:05:17 EST 2017
//
// Notes: In this file we write data in binary format instead of
//        text.  For large datasets this is essential since it
//        saves a significant amount of space.
//
//        The output file N.dat will not be readable in a typical
//        text editor.  You can try the command 'hexdump' to see
//        a hex representation of the bits.
//
////////////////////////////////////////////////////////////////////


#include <iostream>
#include <fstream>
#include <string>


void FileWriteBinary (std::string const& OutFileName)
{
  // Write a binary data file with X and Y double values

  // Open the output file in binary mode
  std::ofstream OutFile(OutFileName.c_str(), std::ios::binary);

  // Check that file is open, throw an exception if it is not open
  if (!OutFile.is_open()) {
    throw std::ofstream::failure("cannot open file");
  }

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

    // Write data in binary format to file
    OutFile.write( (char*) &X, sizeof(X) );
    OutFile.write( (char*) &Y, sizeof(Y) );
  }

  // We're done writing so close the file
  OutFile.close();

  return;
}


int main (int argc, char* argv[])
{
  try {
    // Attempt to write the file N.dat
    FileWriteBinary("N.dat");
  } catch (std::exception e) {
    // Catch a failure and return non-zero value from main.  Notice in the catch statement
    // I am not catching the specific exception, but a base excetion which will catch anything
    // derived from std::exception

    std::cerr << "ERROR: caught exception while trying to write file" << std::endl;
    std::cerr << e.what() << std::endl;

    return 1;
  }

  return 0;
}
