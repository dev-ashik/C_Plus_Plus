#include <iostream>
using namespace std;

int main() {

    for(int i=0; i<=6; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << "\n";
    }

    return 0;
}
