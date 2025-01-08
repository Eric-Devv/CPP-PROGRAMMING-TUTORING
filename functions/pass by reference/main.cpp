/*
In the examples from the previous page, we used normal variables when we passed parameters to a function.
You can also pass a reference to the function. 
This can be useful when you need to change the value of the arguments.

*/

// example:


#include <iostream>


void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

std::  cout << "Before swap: " << "\n";
std::  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

std::  cout << "After swap: " << "\n";
std::  cout << firstNum << secondNum << "\n";

  return 0;
}

