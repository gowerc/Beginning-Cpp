

#include <iostream>



int main() {
    
    
    int x {5};
    int &y{x};
    
    int &&z{51};
    
    std::cout << "Hello, World!" << x << y << z << std::endl;
    
}



