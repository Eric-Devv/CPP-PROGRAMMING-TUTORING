
// The "inner loop" will be executed one time for each iteration of the "outer loop"


#include <iostream>

int main(){

for (int i = 1; i <= 2; ++i) {

std::  cout << "Outer: " << i << "\n"; // Executes 2 times

  // Inner loop
  for (int j = 1; j <= 3; ++j) {

std::  cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
  }
  
}



    return 0;
}