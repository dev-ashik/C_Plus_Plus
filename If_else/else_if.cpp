#include <iostream>

using namespace std;

int main() {
    int age = 40;

    if (age < 21) {
        cout << "teen age.";
    }
    else if (age < 60) {
        cout << "able to take vote.";
    }
    else {
        cout << "old man.";
    }
    return 0;
}
