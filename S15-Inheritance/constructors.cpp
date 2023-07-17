#include <iostream>
#include <string>


struct Base {
public:
    int x{0};
    Base() {
        std::cout << "Base Constructor" << std::endl;
    }
    Base(Base & source): x{source.x}{
        std::cout << "Base Copy-Constructor" << std::endl;
        this->x = this->x + 1;
        std::cout << x << std::endl;
    }
    ~Base() {
        std::cout << "Base Destructor" << std::endl;
    }
    Base &operator+(int rhs) {
        this->x += rhs;
        return *this;
    }
};


struct Derived: public Base {
public:
    //int x{0};
    Derived() {
        std::cout << "Derived Constructor" << std::endl;
    }
    Derived(Derived &source): Base{source} {
        std::cout << "Derived Copy-Constructor" << std::endl;
    }
    ~Derived() {
        std::cout << "Derived Destructor" << std::endl;
    }
};



int main () {
    
    Base y;
    y + 5;
    std::cout << y.x << std::endl;

    Derived ob;
    ob.x = 2;
    ob + 10;
    std::cout << ob.x << std::endl;
    
    
    Derived z {ob};
    std::cout << z.x << std::endl;
    
    return 0;
}


