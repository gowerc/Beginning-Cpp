
#include <iostream>

class Account {
public:
	double balance;
	void deposit(double amount) {this->balance += amount;}
    double get_balance() { return this->balance;};
};

class SavingsAccount: public Account {
public:
    double balance;
	void deposit(double amount) { Account::deposit(amount); }
};


int main () {
    SavingsAccount acc{0};
    acc.deposit(100);
    std::cout << acc.balance << std::endl;         // 0
    std::cout << acc.get_balance() << std::endl;   // 100
    return 0;
}