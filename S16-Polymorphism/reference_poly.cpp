#include <iostream>

struct Base {
    virtual void speak() { std::cout << "Hi from Base"; }
};

struct Derived: public Base {
    virtual void speak() { std::cout << "Hi from Derived"; }
};

int main() {
    Derived x{};
    Base &y{x};
    y.speak();
}






