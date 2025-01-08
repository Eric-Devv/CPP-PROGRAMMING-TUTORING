/*
The void keyword, used in the previous examples, indicates that the function should not return a value. 
If you want the function to return a value, you can use a data type (such as int, string, etc.)
instead of void, and use the return keyword inside the function:

*/


#include <iostream>



int calculation(int x, int y){

return x * y;

}

int main(){


std:: cout<< calculation(5, 6);

    return 0;
}