#include <iostream>
#include <string>
using namespace std;

/*
int (2 or 4 bytes) - integer (100, 0, -100), without decimals.
float (4 bytes)  - point number (5.6, 7.4). 6-7 decimal digits.
double (8 bytes) - point number (3.5, 0.0, -3.4). 15 decimal digits.
char (1 byte)  - single character/letter/number, or ASCII values ('a', '2', '65').
string - text ("Hello World").
bool (1 byte)   - boolean (true=1 and false=0).
*/

int main() {
    int score = 80;
    float price = 5.99;
    double height = 5.9;
    char* group = "a";
    string name = "ashik";
    bool isMale = true;


    cout << height << "\n";
    cout << group << "\n";
    cout << name << "\n";
    cout << isMale << "\n";


    // hex value
    float f1 = 35e3;
    cout << f1 << "\n";

    // ASCII value
    char a = 65;
    cout << "65 = " << a << "\n";

    // strings
    // you must include an additional header file in the source code, the <string> library.
    // #include <string>
    string greeting = "Hello";
    cout << greeting << "\n";

    return 0;
}
