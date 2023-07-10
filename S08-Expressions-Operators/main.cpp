

#include <iostream>

using namespace std;

int main() {

    cout << "\n\n======= EUROS =======\n\n";

    // const double usd_per_eur{1.19};
    // cout << "Welcome to the converter\n";
    // double n_euros{34.23};
    // double n_dollars = n_euros * usd_per_eur;
    // cout << "You have: $" << n_dollars << "\n"
    //      << endl;
         
    
    cout << "\n\n======= Casting =======\n\n";
    int num1 {100};
    int num2 {8};

    cout << num1 / num2 << "\n";                       // prints 12
    cout << static_cast<double>(num1) / num2 << "\n";  // prints 12.5
    // Older C-style cast, not recommened to be used
    cout << (double)num1 / num2;                       // prints 12.5



    cout << "\n\n======= Change Machine =======\n\n";

    int given{0};
    
    // dollars = 100
    // quarters = 25
    // dime = 10
    // nickel = 5
    // cent = 1


    int n_dollars = (given / 100);
    int n_quarters = (given -= n_dollars * 100) / 25;
    int n_dimes = (given -= n_quarters * 25) / 10;
    int n_nickels = (given -= n_dimes * 10) / 5;
    int n_cents = (given -= n_nickels * 5) / 1;
    
    
    cout << "Dollars = " << n_dollars << "\n";
    cout << "quarters = " << n_quarters  << "\n";
    cout << "dime = " << n_dimes  << "\n";
    cout << "nickel = " << n_nickels  << "\n";
    cout << "cent = " << n_cents  << "\n";

    cout << "\n\n"
         << endl;
}