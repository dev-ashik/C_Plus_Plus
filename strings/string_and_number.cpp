#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "hello";
    int number = 10;

    string result = word + number;
    cout << result;

    // If you try to add a number to a string, an error occurs
    return 0;
}
