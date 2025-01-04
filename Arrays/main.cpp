
// To declare an array, define the variable type,
// specify the name of the array followed by square brackets 
// and specify the number of elements it should store


// string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
// int myNum[3] = {10, 20, 30};


// ACCESSING THE ELEMENTS OF AN ARRAY
/*

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0];

*/

// CHANGING AN ARRAY ELEMENT
/*

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[0] = "Opel";
cout << cars[0];

*/

// a program that calculates the average of different ages:

#include <iostream>


int main(){

int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};

float avg, sum = 0;
int i;

// Get the length of the array
int length = sizeof(ages) / sizeof(ages[0]);

// Loop through the elements of the array
for (int age : ages) {
  sum += age;
}

// Calculate the average by dividing the sum by the length
avg = sum / length;

// Print the average
std:: cout << "The average age is: " << avg << "\n";


    return 0;
}
