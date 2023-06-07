//
// Created by kingx on 07/06/2023.
// Your First C++ Program
#include "iostream"
using namespace std;

int main() {
//    String output
    std::cout << "Hello World \n";
    std::cout << "Sevkan is a drunk fxck hehe!\n\n";

    //    Int & variables output
    int myNum = 15;
    int yourNum;
    yourNum = 30;
    cout << myNum << "\n";
    cout << yourNum << "\n\n";

    int myNumber = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

//    Declare Many Variables
    int x = 5, y = 6, z = 50;
    cout << x + y + z;

//    One Value to Multiple Variables
    int b, c, d ;
    d = b = c = 50;
    cout << b + c + d;

//    Constants
    const int myConstant = 11;

    return 0;
}

/*
  #include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
 */

