#include <iostream>
using namespace std;

int main() {
    string letters[2][4] = {
        { "A", "B", "C", "D"},
        { "E", "F", "G", "H"}
    };


    /*
    string letters2[2][2][2] = {
        {
            { "A", "B" },
            { "C", "D" }
        },
        {
            { "E", "F" },
            { "G", "H" }
        }
    };
    */

    // access value
    cout << letters[0][2] << '\n';

    // change value
    letters[0][0] = "Z";
    cout << letters[0][0] << "\n";

    return 0;
}


