/*
C++ provides some pre-defined functions, such as main(), which is used to execute code. But you can also create your own functions to perform certain actions.

To create (often referred to as declare) a function, specify the name of the function, followed by parentheses ().


example:
void myFunction(){

// code to be executed...

}

myFunction() is the name of the function
void means that the function does not have a return value. You will learn more about return values later in the next chapter
inside the function (the body), add code that defines what the function should do


*/

// function calling

#include <iostream>
/*

void sample(){

    std:: cout << "Hallo am eric";

}

int main(){

    sample(); // we just called the sample function.

    return 0;
}


*/

// Function declaration

/*

void myFunction();

int main(){

    myFunction();

    return 0;
}

void myFunction(){

    std:: cout << "i just got executed";
}




*/


// Parameters and arguments

void names(std::string name){
    std:: cout<< name << "mwendwa\n";
}

int main(){

names("eric");
names("simon");
names("james");

return 0;

}


