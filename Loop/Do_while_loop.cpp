#include <iostream>
using namespace std;

int main() {
    //Do while loop will always be executed at least once, even if the condition is false.
    int i = 1;

    do {
        cout << i << '\n';
        i++;
    }
    while (i < 5);
    return 0;
}
