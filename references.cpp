#include <iostream>
using  namespace std;

int main() {

    string food = "Pizza"; // food variable
    string  &meal = food;  // reference to food

    cout << food << '\n'; // output value
    cout << meal << '\n'; // output value
    cout << &meal << '\n'; // output address

    //The memory address is in hexadecimal form (0x..).

    return 0;
}

