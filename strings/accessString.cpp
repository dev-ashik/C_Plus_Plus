#include <iostream>
#include <string>

using namespace std;

int main() {
    string country = "Bangladesh";
    cout << country[0] << '\n';

    country[0] = 'b';
    cout << country;

    return 0;
}


