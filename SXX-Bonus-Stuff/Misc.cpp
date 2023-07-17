#include <iostream>
#include <vector>

struct Base {
    virtual void fun() {
        std::cout << "Hello Base" << std::endl;
    }
};

struct Derived: public Base {
    void fun() {
        std::cout << "Hello Derived" << std::endl;
    }
};



int main() {
    
    
     int const *  myi  = new int{5};
    
    std::vector<int const * > myv {myi};
    myv.at(0) = myi;
    std::cout << *myv.at(0) << std::endl;
    
    
    
    // Section 1
    Base *x = new Derived();
    x->fun();

    // Section 2
    Base y {Derived()};
    y.fun();
    
    
    
    delete myi;
}
    