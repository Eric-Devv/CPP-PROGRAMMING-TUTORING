/*
An enum is a special type that represents a group of constants (unchangeable values).

To create an enum, use the enum keyword, followed by the name of the enum, and separate the enum items with a comma.

To access the enum, you must create a variable of it.

Inside the main() method, specify the enum keyword, followed by the name of the enum (Level) and then the name of the enum variable (myVar in this example)

*/

#include <iostream>

// i have used "age" as the name of the enum and assigned it a variable of "first" and for the output i placed the enum's variable as the standard character output
enum age{
    low=10,
    medium=20,
    old=60
};

int main (){

enum age first = low;

std:: cout<< first;

    return 0;
}