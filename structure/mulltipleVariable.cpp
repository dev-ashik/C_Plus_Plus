#include <iostream>
using namespace std;

int main() {

    // Create a structure variable called myStructure
    struct {
        int id;
        string name;
        float height;
    } person1, person2, person3;

    // assign value to person1
    person1.id = 01;
    person1.name = "Ashik Mahmud";
    person1.height = 6.0;

    // assign value to person2
    person2.id = 02;
    person2.name = "Zahin";
    person2.height = 5.8;

    // assign value to person3
    person3.id = 03;
    person3.name = "Rafi";
    person3.height = 5.8;

    // print
    cout << "person1: " << person1.id << ' ' << person1.name  << ' ' << person1.height << '\n';
    cout << "person2: " << person2.id << ' ' << person2.name  << ' ' << person2.height << '\n';
    cout << "person3: " << person3.id << ' ' << person3.name  << ' ' << person3.height << '\n';

    return 0;
}
