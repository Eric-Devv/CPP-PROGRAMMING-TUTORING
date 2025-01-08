/*
// example:

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}

*/

#include <iostream>

void my_function(int myNumbers[5]){
for(int i = 0; i<5; i++){
    std:: cout << myNumbers[i] << "\n";
}
}

int main(){

int myNumbers[5] = {10,20,30,40,50};

my_function(myNumbers);

    return 0;
}