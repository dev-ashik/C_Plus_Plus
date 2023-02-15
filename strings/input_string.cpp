#include <iostream>
#include <string>
using namespace std;

int main() {
    // get user input from the keyboard.

    /*
    string fullName;
    cout << "Enter your name: ";
    cin >> fullName;     // ashik mahmud
    cout << fullName;    // ashik
    */

    // to fix this problem.
    string fullName;
    cout << "Enter your name: ";
    getline (cin, fullName);
    cout << fullName;


    return 0;
}
