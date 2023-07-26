#include <iostream>
#include <string>
using namespace std;



int main() {
    string s1{"abc"};
    char s2[]{"def"};
    cout << s1 + " " + s2;  //  "abc def"
    cout << s1.size();      //  3
    cout << s1.find("c");   //  2
    cout << (s1 == s2);     //  0 or False
    cout << s1.at(10);      //  Error out of range
}


- Accessor method `.at()` which prevents out of range access
- Built in support standard operators `+`, `<`, `==` rather than needing dedicated functions
- Automatically grow space as needed to prevent stack overflow
- High compatibility with C style strings
- Many methods for common tasks (replacement / size / find)


