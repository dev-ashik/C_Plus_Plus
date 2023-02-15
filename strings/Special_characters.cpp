#include <iostream>
#include <string>

using namespace std;

int main() {
    string text = "here we are using \"double quote\", \'single quote\' \\backslash.";
    cout << text;

    return 0;
}

/*
     Escape character 	Result 	Description
     \' 	            ' 	    Single quote
     \" 	            " 	    Double quote
     \\ 	            \ 	    Backslash
     \n 	            New Line
     \t 	            Tab
*/
