
#include <iostream>
#include <string>


struct base {
    virtual std::string get_name() {return "Base";};
    virtual ~base() {};
};

struct derived: public base {
    std::string get_name() override { return "Derived";};
    ~derived() override {};
};

void call_printme(base &x) {
    std::cout << "Hi from " << x.get_name() << std::endl;
}

int main(){
    base x {base()};
    derived y{derived()};
    call_printme(x);
    call_printme(y);
}






