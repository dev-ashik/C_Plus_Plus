#include <iostream>
using namespace std;

int main() {

    // Create a structure variable called myStructure
    struct {
        int number;
        string city;
    } myStructure;

    // assign value to myStructure
    myStructure.number = 10;
    myStructure.city = "Kunming";


    // print them
    cout << myStructure.number << '\n';
    cout << myStructure.city << '\n';


    return 0;
}
