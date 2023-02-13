#include <iostream>
using namespace std;

/*
int    - integers (100, 0, -100)
double - point number (3.5, 0.0, -3.4)
char   - single characters ('a', 'B')
string - text ("Hello World")
bool   - boolean (true and false)
*/
/*
The general rules for naming variables are:
    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (like C++ keywords, such as int) cannot be used as names
*/

int main() {
    int score = 80;

    int age;
    age = 20; // assign value after declare;
    cout << age;
    cout << "\n"; //new line



    // declare more than one variable in one line. (same type)
    int x = 3, y = 5, z = 8;
    cout << x + y + z;
    cout << "\n";  //new line


    // one value to Multiple variables
    int m, n, o;
    m = n = o = 20;
    cout << m << n << o;


    //Constants
    /*
    unable to change variable values (read-only).
    use the const keyword
    */
    const float PI = 50;
    //PI = 40;  // error: assignment of read-only variable 'PI'

    return 0;
}


