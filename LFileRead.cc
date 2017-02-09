////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Wed Feb  8 22:56:08 EST 2017
//
// Notes: Reads a 2-column format file and prints to the standard
//        out.  Data file is of example K
//
////////////////////////////////////////////////////////////////////


#include <iostream>
#include <fstream>
#include <string>


// Function declaration
bool FileRead (std::string const&);




int main (int argc, char* argv[])
{
  // If FileRead does not return true, return non-zero from main
  if (!FileRead("K.dat")) {
    return 1;
  }

  return 0;
}




bool FileRead (std::string const& InFileName)
{
  // Read data file which has 2 columns X and Y vaules.

  // Open the file for reading
  std::ifstream InFile(InFileName.c_str());
  if (!InFile.is_open()) {
    return false;
  }

  // Variables for X and Y values
  double X;
  double Y;

  // Read X and Y values and print them
  while (InFile >> X >> Y) {
    std::cout << X << " " << Y << std::endl;
  }

  // Done reading, close file
  InFile.close();

  return true;
}
