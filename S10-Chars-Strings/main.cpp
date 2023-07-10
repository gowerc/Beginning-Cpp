#include <cstring>   // C-style string functions
#include <cctype>    // Single Character functions
#include <iostream>
#include "print.h"


using namespace std;


int main () {
    // cout << "\n\n============ String Functions ============\n\n" << endl;

    // char mystar[80]{"hello there how are you doing"};
    // cout << mystar << "\n";

    // strcpy(mystar, "hi");     // Replace with new value
    // cout << mystar << "\n";

    // strcat(mystar, " there");  // Concatenate
    // cout << mystar << "\n";


    // cout << "\n\n============ C-Style Strings ============\n\n" << endl;
    // char myname[90] {"abc\0def"};
    // cout << myname;  // "def" wont be printed because the null terminator blocks it

    // cout << strlen(myname) << "\n\n";


    cout << "\n\n============ Cpp Strings ============\n\n" << endl;
    // string mys{"Hello world"};
    // string s1{"Apple"};
    // string s2{"Bannana"};
    // string s3{"Kiwi"};

    // string s4{s1, 0, 3};  // "App"  (initalise from s1 characters 0->3)
    // print(s4);

    // string s5{s2};
    // s5.at(0) = 'X';
    // print(s5);
    // print(s2);

    // print(mys);
    // print(mys.length());
    // print(s1 + s3);
    // print(s1 == "Apple");  // "1" = True
    // print(s1 != s2); // "1" = True

    // char old_char[6] = "Apple";
    // print(old_char == s1);  // "1" = True

    // // "string literal" ,  'char literal
    // // double quotes = char[]
    // // single quoate = char if 1 character else char[]
    // // Cpp will auto convert to string where required
    // s1[0] = 'X';
    // s1.at(1) = 'X';
    // print(s1);

    // string s6{s3, 1, 2}; // "Fr"
    // print(s6);
    
    // string part1 {"Hello"};
    // string part2 {"World"};
    // part2.at(10) = 'X';
    // print(part1 + part2);

// string s10 {"Frank"};
// for (int c: s10) cout << c << endl;   // Will print the ascii values of "Frank\0"

// string s1 {"Frank"};
// string s2 {"Bob"};
// print(s1 == s2);  // 0 or False
// print(s2 < s1);   // 1 or True


    string s1 {"This is a test"};

    // print(s1.substr(0, 4));  // "This"
    // print(s1.substr(5, 2));  // "is"
    // print(s1.substr(10,4));  // "test"

    for (size_t i{0}; i < 3; ++i) {
        print(s1.at(i));
    }
    
    for (char c: s1){
        print(c);
    }

        cout
            << endl
            << endl;
}







//  /usr/bin/g++ -g -Wall -std=c++17 /Users/gowerc/Desktop/Personal/beginnging-cpp/Section_10/*.cpp -o /Users/gowerc/Desktop/Personal/beginnging-cpp/Section_10/main