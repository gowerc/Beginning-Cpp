
#include <memory>
#include <iostream>


// Pass by reference
void myfun1(std::unique_ptr<int> & ptr) {
    std::cout << *ptr << std::endl;
}

// Pass by moving
void myfun2(std::unique_ptr<int> ptr) {
    std::cout << *ptr << std::endl;
}

int main() {
    std::unique_ptr<int> p1 = std::make_unique<int>(20);
    myfun1(p1);
    myfun2(std::move(p1));
    if(!p1) std::cout << "No longer with us" << std::endl;
}


