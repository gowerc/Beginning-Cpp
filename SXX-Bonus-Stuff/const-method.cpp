#include <iostream>

struct Base {
    int x{5};
    void get_x1() const {
        std::cout << this->x << std::endl;
    };
    void get_x2() {
        std::cout << this->x << std::endl;
    }
};


int main () {
    const Base obj;
    obj.get_x1();
    obj.get_x2();
}



