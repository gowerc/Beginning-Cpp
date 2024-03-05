#include <iostream>


struct A {
    struct B {
        public:
        void print() {
            std::cout << "B" << std::endl;
        }
    };
};

int main() {
    A::B b;
    b.print();
}
