////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Fri Feb 10 13:56:45 EST 2017
//
// Notes: This is a basic examples of a class containing a class
//        variable (member) and a class function (member function)
//        The function is 'public' meaning anything has access to it
//        while the variable is 'private' meaning only member
//        functions have access to it.
//
////////////////////////////////////////////////////////////////////


#include <iostream>


// Definition of a class called MyClass
class MyClass
{
  // List of the public members
  public:
    MyClass ()
    {
      // This is the default constructor, called when creating.  We will set the
      // default vaule of fX to 0 here
      fX = 0;
    };

    ~MyClass ()
    {
      // This is the destructor, called when the class is being destroyed
    };

    void SetVar (int const X)
    {
      // This function sets the internal variable fX
      fX = X;
      return;
    }

    int GetVar () const
    {
      // This function returns the private member fX.
      // Note that the function is declared with 'const' since it does
      // not modify the object or its contents in any way
      return fX;
    }

  // List of private members
  private:
    int fX;
};





int main (int argc, char* argv[])
{
  // Create an object of type 'MyClass'
  MyClass MyObject;

  // Print the value (should be the default value)
  std::cout << MyObject.GetVar() << std::endl;

  // Set the value of the internal variable
  MyObject.SetVar(42);

  // Print the value (should be the new value)
  std::cout << MyObject.GetVar() << std::endl;

  return 0;
}
