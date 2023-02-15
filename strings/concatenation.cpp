#include <iostream>
#include <string>
using namespace std;

int main() {
    //A string in C++ is actually an object.
    string firstName = "Md Ashik";
    string lastName = "Mahmud";

    string fullName = firstName + " " + lastName;
    cout << fullName << '\n';


    string fullName2 = firstName.append(lastName);
    cout << fullName;

    return 0;
}
