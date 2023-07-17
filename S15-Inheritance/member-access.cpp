#include <iostream>
#include <string>


struct Base {
protected:           
    int x{0};
public:
    int get_x(){
        return this->x;
    }
    void set_x_base(int y) {    // Works regardless of what x is declared as
        this->x=y;
    };
};


struct Derived: public Base {
public:
    void set_x_derv(int y) {      // Only works if x is public or protected
        this->x = y;
    }
};



int main () {

    Derived x;
    x.set_x_base(5);
    std::cout << x.get_x() << std::endl;
    return 0;
}
