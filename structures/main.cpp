
// Structures (also called structs)
// are a way to group several related variables into one place.
// Each variable in the structure is known as a member of the structure.

/*
To create a structure, use the struct keyword and declare each of its members inside curly braces.

After the declaration, specify the name of the structure variable (myStructure in the example below):

example:

struct {             // Structure declaration
  int myNum;         // Member (int variable)
  string myString;   // Member (string variable)
} myStructure;       // Structure variable


*/

#include <iostream>


int main (){

struct {
std::  string brand;
std::  string model;

  int year;
} myCar1, myCar2; // We can add variables by separating them with a comma here

// Put data into the first structure
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Put data into the second structure
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

// Print the structure members
std:: cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
std:: cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";


    return 0;

}