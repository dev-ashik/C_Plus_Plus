#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";

    cout << food << '\n';   // Outputs the value of food (Pizza)
    cout << &food << '\n';  // Outputs the memory address of food



    // A pointer however, is a variable that stores the memory address as its value.
    string* ptr = &food;
    cout << ptr << '\n'; // Outputs the memory address of food
    cout << *ptr << '\n'; // Output the value of food with the pointer (Pizza)


    /*
    //There are three ways to declare pointer variables, but the first way is preferred.
    string* mystring; // Preferred
    string *mystring;
    string * mystring;
    */


    // Modify the Pointer Value
    *ptr = "Hamburger";
    cout << *ptr << '\n';

    return 0;
}

