#include <iostream>
using namespace std;

int main() {
    int numbers[4] = {4, 6, 7, 9};

    //access value
    cout << numbers[0] << "\n";

    // change value
    numbers[2] = 10;

    // for loop
    for(int i=0; i<4; i++) {
        cout << numbers[i] << " ";
    }


    // array size.
    cout << "\n" << sizeof(numbers);


    // foreach loop
    /*
    cout << "\n";
    for(int i : numbers){
        cout << i << " ";
    }
    */

    return 0;
}

