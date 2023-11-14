#include <iostream>
#include <stdexcept>

class DivideByZeroException {};

class IllegalBalanceException: public std::exception {
public:
	IllegalBalanceException() noexcept = default;
	~IllegalBalanceException() = default;
	virtual const char* what() const noexcept {
		return "Illegal balance exception";
	}
};


double DoubleIt(int x) {
	if ( x == 0) throw IllegalBalanceException();
	return x *2;
}


int main() {
    int y {0};
    
    try {
        std::cout << DoubleIt(y) << std::endl;
    }
    catch(std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    return 0;
}
