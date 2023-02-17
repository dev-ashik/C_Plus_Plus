#include <iostream>
using namespace std;

int main() {

    // first loop
    for (int i = 1; i <= 3; i++) {
        cout << "Outer: " << i << "\n";

        // Inner loop
        for (int j = 1; j <= 2; j++) {
        cout << " Inner: " << j << "\n";
        }
    }

    return 0;
}

