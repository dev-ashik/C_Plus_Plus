#include <iostream>
using namespace std;

int main() {
    int numbers[4] = {4, 6, 7, 9};

    int getArrayLength = sizeof(numbers) / sizeof(int);
    cout << getArrayLength;

    return 0;
}

