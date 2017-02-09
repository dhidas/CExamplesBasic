////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Wed Feb  8 19:09:03 EST 2017
//
////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>
#include <algorithm>



int main (int argc, char* argv[])
{
  // Create some strings
  std::string const HelloString = "Hello world!";

  // Print the string
  std::cout << HelloString << std::endl;

  // Grab part of a string (using iterators!)
  std::string const HelloStringPartial = std::string(HelloString.begin(), HelloString.begin() + 5);

  // Print the new string
  std::cout << HelloStringPartial << std::endl;

  // Print one character
  std::cout << HelloStringPartial[1] << std::endl;


  // Technically HelloStringPartial[4] is of type 'char', but mostly we'll use std::string
  char const c = HelloStringPartial[4];
  std::cout << c << std::endl;

  // You can add strings
  std::string const AddedString = HelloString + HelloStringPartial;
  std::cout << AddedString << std::endl;

  // In <algorithm> there is a find function
  size_t const Where =  HelloString.find("world");
  if (Where != std::string::npos) {
    std::cout << "Found! at " << Where << std::endl;
  } else {
    std::cout << "NOT Found!" << std::endl;
  }

  return 0;
}
