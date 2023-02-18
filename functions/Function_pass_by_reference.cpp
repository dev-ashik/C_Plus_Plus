#include <iostream>
using namespace std;


int swapNumber(int &num1, int &num2) {
    int x = num1;
    num1 = num2;
    num2 = x;
}

int main() {
    int number1 = 10;
    int number2 = 20;

    swapNumber(number1, number2);
    cout << "Number1: " << number1 << '\n';
    cout << "Number2: " << number2 << '\n';

    return 0;
}



