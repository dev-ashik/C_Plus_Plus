#include <iostream>
using namespace std;

int main() {

    // create a scructuree name
    struct studentStructure {
        int id;
        string name;
        float score;
    };


    // now create variable
    studentStructure student1;
    student1.id = 101;
    student1.name = "Ashik";
    student1.score = 94;

    // now create another variable
    studentStructure student2;
    student2.id =  102;
    student2.name = "Zahin";
    student2.score = 99;

    // print
    cout << "student1: " << student1.id << ' ' << student1.name  << ' ' << student1.score << '\n';
    cout << "student2: " << student2.id << ' ' << student2.name  << ' ' << student2.score << '\n';




    return 0;
}
