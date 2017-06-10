////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Wed Feb  8 23:04:42 EST 2017
//
// Notes: This examples illustrates a basic exception in a typical
//        situation where a file cannot be read, and exception is
//        thrown, then caught and dealt with.
//
////////////////////////////////////////////////////////////////////


#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>



void ThrowItAtMe ()
{
  // Just throw
  throw;

  // Technically the code never gets here, but this is good form
  return;
}


void ReadWillFail (std::string const& InFileName)
{
  // Attempt to open a file and throw if it doesn't open
  std::ifstream InFile(InFileName.c_str());
  if (!InFile.is_open()) {
    throw std::ifstream::failure("cannot open file");
  }

  return;
}


int main (int argc, char* argv[])
{

  try {
    ReadWillFail("BogusFileName.dat");
  } catch (std::ifstream::failure e) {
    std::cout << "got an exception, but no problem I caught it" << std::endl;
    std::cout << "  " << e.what() << std::endl;
  }

  std::cout << "and now life moves on" << std::endl;

  // There is also a way to catch-all being less specific.  The ... will catch any exception
  try {
    ReadWillFail("BogusFileName2.dat");
  } catch (...) {
    std::cout << "got an exception, but catch-all caught it" << std::endl;
  }


  std::cout << "An uncaught exception will cause major problems" << std::endl;

  ThrowItAtMe();

  std::cout << "And this line will never be printed, and execution is halted" << std::endl;


  return 0;
}
