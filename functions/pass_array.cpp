#include <iostream>
using namespace std;


int myFuction(int myArray[5]) {
    for(int i=0; i<5; i++) {
        cout << myArray[i] << '\n';
    }
}

int main() {
    int numbers[5] = {1, 3, 5, 7, 9};

    myFuction(numbers);

    return 0;
}
