#include <iostream>
using namespace std;

int main() {
    // foreach loop is used exclusively to loop through elements in an array (or other data sets).

    int numbers[5] = {1, 2, 3, 4, 5};
    for(int i : numbers) {
        cout << i << '\n';
    }

    return 0;
}


