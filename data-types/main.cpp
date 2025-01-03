
/*int myNum = 5;               // Integer (whole number)
float myFloatNum = 5.99;     // Floating point number
double myDoubleNum = 9.98;   // Floating point number
char myLetter = 'D';         // Character
bool myBoolean = true;       // Boolean
string myText = "Hello";     // String
*/
/*

boolean:	1 byte	Stores true or false values
char:	1 byte	Stores a single character/letter/number, or ASCII values
int:	2 or 4 bytes	Stores whole numbers, without decimals
float:	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
double:	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits




*/


#include <iostream>
#include <string>

int main(){


int items = 50;
double cost_per_item = 9.99;
double total_cost = items * cost_per_item;
char currency = '$';

// Print variables
std:: cout << "Number of items: " << items << "\n";
std:: cout << "Cost per item: " << cost_per_item << "" << currency << "\n";
std:: cout << "Total cost = " << total_cost << "" << currency << "\n";

    return 0;

}

