#include <iostream>
#include <vector>

class Account {
public:
    int balance {1000};
    void get_balance() const{
        std::cout << this->balance << std::endl;
    }
};


class SavingsAccount: public Account {
public:
    int balance {2000};
    void get_balance() const {
        std::cout << this->balance << std::endl;
    }
};


void display(const Account  x) {
    x.get_balance();
}


int main() {
    
    Account x = SavingsAccount{};
    x.get_balance();
    
    Account * y = new SavingsAccount{};
    y->get_balance();
    
    
std::vector<int> myv {1,2,3};

    
    return 0;
}



