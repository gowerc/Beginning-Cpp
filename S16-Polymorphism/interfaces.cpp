#include <iostream>


class I_Printable{
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj); 
public:
    virtual void print(std::ostream &os) const =0;
    virtual ~I_Printable() {};
    
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);
    return(os);
};


class I_Account {
public:
    virtual int get_balance() const =0;
    virtual ~I_Account(){};
};


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


