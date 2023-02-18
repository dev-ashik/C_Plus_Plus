#include <iostream>
using namespace std;


int sumNumbers(int num1 = 0, int num2 = 0) {
    int total = num1 + num2;

    return total;
}

int main() {

    cout << sumNumbers(5, 3) << '\n';
    cout << sumNumbers() << '\n';
    cout << sumNumbers(10, 10) << '\n';

    return 0;
}



