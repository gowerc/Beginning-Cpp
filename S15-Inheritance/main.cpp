#include <iostream>
#include <string>

int myfun(int & x) {
    static int z{10};
    z++;
    x = x + 1;
    return x;
};

const int global_x {20};

// awdawdw
std::string colour_red(std::string s) {
    return("\e[38;5;125m" + s + "\e[0m");
}


int main () {
    std::string mys {"Hello world again"};
    
//    int abc;
    int x {4};
    int y{5};
    int z = x + y;
    myfun(z);
    myfun(z);
    // std::cout << "Enter a string: ";
    // std::getline(std::cin, mys);
    std::cout << colour_red("my string") ;
    std::cout << &z << std::endl;
    
    std::cout << mys << std::endl;
    std::cout << z << std::endl;
    return 0;
}


