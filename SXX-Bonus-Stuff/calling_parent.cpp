

#include <iostream>

struct Base {
    int age{35};
    void show() {
        std::cout << "Parent = " << age  << std::endl;
    }
};

struct Derived : public Base {
    int age{10};
    void show() {
        std::cout << "Child = " << age << std::endl;
        Base::show();
    }
};

int main() {
    Derived obj;
    obj.show();
    return 0;
}
