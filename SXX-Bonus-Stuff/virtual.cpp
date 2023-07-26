
#include <iostream>
#include <vector>


struct base {
    virtual void printme() {
        std::cout << "Hi from Base" << std::endl;
    };
    virtual ~base() {};
};

struct derived: public base {
    virtual  void printme() override {
        std::cout << "Hi from Derived" << std::endl;
    };
    virtual ~derived() {};
};

void call_printme(base* x) {
    x->printme();
}

int main(){
    call_printme(new base());
    call_printme(new derived());
}


















