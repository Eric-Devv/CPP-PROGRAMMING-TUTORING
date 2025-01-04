/*

The switch expression is evaluated once
The value of the expression is compared with the values of each case
If there is a match, the associated block of code is executed
The break and default keywords are optional, and will be described later in this chapter



*/

/*

int day = 4;

switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}



*/



#include <iostream>


int main(){

int day = 1;

switch (day) {
  case 6:
 std::   cout << "Today is Saturday";
    break;
  case 7:
 std::  cout << "Today is Sunday";
    break;
  default:
 std::  cout << "Looking forward to the Weekend";

}


    return 0;
}