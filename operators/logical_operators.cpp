#include <iostream>
using namespace std;

int main() {
    int number1 = 10, number2 = 5;

    bool result = (number1==10 && number2==5);

    cout << result;
    return 0;
}

/*
    Operator Name 	      Description 	                                           Example
    &&       Logical and  Returns true if both statements are true 	               x < 5 &&  x < 10
    ||       Logical or   Returns true if one of the statements is true 	       x < 5 || x < 4
    ! 	     Logical not  Reverse the result, returns false if the result is true  !(x < 5 && x < 10)
*/

