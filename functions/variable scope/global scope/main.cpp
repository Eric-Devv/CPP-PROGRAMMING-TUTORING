/*
A variable created outside of a function, is called a global variable and belongs to the global scope.

Global variables are available from within any scope, global and local.

*/

#include <iostream>

int x = 5;

void myFunction() {
  // We can use x here
std::   cout << x << "\n";

}

int main() {
  myFunction();

  // We can also use x here
std::   cout << x;

  return 0;
}
