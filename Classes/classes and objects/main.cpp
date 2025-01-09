/*
A class is a user-defined data type that we can use in our program, 
and it works as an object constructor, or a "blueprint" for creating objects.

// example:
To create a class, use the class keyword

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};


Example explained
The class keyword is used to create a class called MyClass.
The public keyword is an access specifier, which specifies that members (attributes and methods) of the class are accessible from outside the class. 
You will learn more about access specifiers later.
Inside the class, there is an integer variable myNum and a string variable myString. 
When variables are declared within a class, they are called attributes.
At last, end the class definition with a semicolon ;.

*/

/*
creating an object...
In C++, an object is created from a class. We have already created the class named MyClass, so now we can use this to create objects.

To create an object of MyClass, specify the class name, followed by the object name.

To access the class attributes (myNum and myString), use the dot syntax (.) on the object.



*/


#include <iostream>


class Car {
  public:
 std::   string brand;   
 std::   string model;
    int year;
};

int main() {
  // Create an object of Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Create another object of Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Print attribute values
 std:: cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
 std:: cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}