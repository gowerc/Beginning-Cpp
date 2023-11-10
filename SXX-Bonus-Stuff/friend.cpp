#include <iostream>

class Base {
private: 
    int x{5};
public:
    friend void printx(Base obj);
};

void printx(Base obj) {
    std::cout << obj.x << std::endl;
}

int main () {
    Base x;
    printx(x);
}







