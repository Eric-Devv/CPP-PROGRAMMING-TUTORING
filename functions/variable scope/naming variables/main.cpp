/*

If you operate with the same variable name inside and outside of a function, 
C++ will treat them as two separate variables; 
One available in the global scope (outside the function) and one available in the local scope (inside the function):


*/

#include <iostream>

int x = 5;

void myFunction() {
  // Local variable with the same name as the global variable (x)
  int x = 22;
std::   cout << x << "\n"; // Refers to the local variable x

}

int main() {
  myFunction();

std::  cout << x; // Refers to the global variable x

  return 0;
}