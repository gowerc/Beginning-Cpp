

#include <iostream>


//
//  Member Pointers
//  Weird bit of syntax that essentially allows use to use a
//  "variable" to determine which member of an object we access
//  The idea is that we create a pointer to a specific Class member
//  and then use the member-pointer-access operator to access it.
//
//  e.g.    
//    int MyClass::*v_ptr; // Create a pointer to an int within Myclass
//    v_ptr = &MyClass::d; // Assign that pointer to the offset that contains "d"
//    MyClass bob{4};      // Create an instance
//    bob.*v_ptr           // Access the member defined by v_ptr (e.g. "d")
//

struct MyClass {
    int d;
    void printData() {std::cout << d + 1 << std::endl; };
};

int main() {
    MyClass bob{4};
    MyClass* bobptr = &bob;
    
    //int MyClass::*pmf;
    int MyClass::*v_ptr = &MyClass::d;
    std::cout << bob.*v_ptr << std::endl;
    std::cout << bobptr->*v_ptr << std::endl;

    void (MyClass::*f_ptr)() = &MyClass::printData;
    (bob.*f_ptr)();
    (bobptr->*f_ptr)();
    return 0;
}





