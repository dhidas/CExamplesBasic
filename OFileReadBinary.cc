////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Thu Feb  9 16:23:30 EST 2017
//
// Notes: This will read the binary data file created previously
//        in the N example.
//
////////////////////////////////////////////////////////////////////


#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>



void FileReadBinary (std::string const& InFileName)
{
  // Open the input file in binary mode
  std::ifstream InFile(InFileName.c_str(), std::ios::binary);

  // Check that file is open, throw an exception if it is not open
  if (!InFile.is_open()) {
    throw std::ifstream::failure("cannot open file");
  }

  // Declare the doubles X and Y to read the data into
  double X;
  double Y;

  // Read file as long as it is not at end of file
  while (!InFile.eof()) {

    // Read X and Y
    InFile.read( (char*) &X, sizeof(X) );
    InFile.read( (char*) &Y, sizeof(Y) );

    // If we hit an eof reading the above X and Y break out of this loop
    if (InFile.eof()) {
      break;
    }

    // Print X and Y
    std::cout << "X = " << X << "   Y = " << Y << std::endl;
  }

  return;
}


int main (int argc, char* argv[])
{

  try {
    FileReadBinary("N.dat");
  } catch (std::ifstream::failure e) {
    std::cerr << "ERROR reading file" << std::endl;
    std::cerr << e.what() << std::endl;

    return 1;
  }

  return 0;
}
