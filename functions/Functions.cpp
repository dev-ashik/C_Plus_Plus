#include <iostream>
using namespace std;

// good
void sumNumbers(int num1, int num2);

int main() {
    cout << "this is main function. \n";

    sumNumbers(5, 3);
    return 0;
}


void sumNumbers(int num1, int num2) {
    int total = num1 + num2;

    cout << "total: " << total;
}
