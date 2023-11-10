#include <iostream>



// Here we are defining printable as an interface
// that basic says for a class to implement me
// they must provide a "print" method
class I_Printable{
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj); 
public:
    virtual void print(std::ostream &os) const =0;
    virtual ~I_Printable() {};
    
};


// We now define a global wrapper for "<<" for the base class
// of I_printable that basically calls the virtual method
// print e.g. dispatches to the child class 
// implementations 
std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);
    return(os);
};


class I_Account {
public:
    virtual int get_balance() const =0;
    virtual ~I_Account(){};
};



// We now define our class that implements our two
// interfaces
class MyObj: public I_Printable, public I_Account {
public:
    virtual void print(std::ostream &os) const override {
        os << "Hello world!";
    };
    virtual int get_balance() const override {
        return(5);
    };
    virtual ~MyObj(){};
};


int main() {
    MyObj y{};
    std::cout << y << std::endl;
    return(0);
}


