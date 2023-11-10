

#include <iostream>


class obj {
public:
    int age;
    obj(const int &age): age{age} {};
};

int main() {
    
    // Just some basic examples of Lvalue and Rvalue references to play with
    int x {5};
    int &y{x};    // L-value-reference
    int &&z{51};  // R-value-reference
    std::cout << "x = " << x 
               << ", y = " << y 
               << ", z = " << z 
               << std::endl;

    // Trying to see here how constructors work with references
    // e.g. the input to our constructor is a const reference however
    // it is stored on our object as a regular variable so looking to
    // see what happens in practices 
    obj ob{obj(x)};
    x++;
    ob.age = ob.age + 5;
    std::cout << "ob.age = " << ob.age << ", x = " << x << std::endl;
}



