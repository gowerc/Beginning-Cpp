
#include <iostream>
#include <vector>

// import just cout and endl from std namespace
using std::cout, std::endl, std::vector, std::string;



struct accounts {
    int balance;
};


int main() {
    
    
    vector<string> v {"a1", "b2", "c3", "d4", "e5", "f6", "g7"};
    vector<string>::iterator z {v.begin()};
    
    // Standard dereferencing
    cout << *z << endl;
    
    // incrementing an iterator
    cout << *(++z) << endl;
    
    // decrementing an iterator
    cout << *(--z) << endl;
    
    // Random access
    cout << z[4] << endl;
    
    // Comparision
    // cpp stream operator to format bool as true/false
    cout << std::boolalpha
         << (z == v.begin()) << endl
         << (z <= v.begin()) << endl
         << (z > v.end()) << endl;


    // Sorting a vector using iterators and a lambda
    vector<accounts> acc { {500}, {200}, {300}, {400}, {350} };
    std::sort(acc.begin(), acc.end(), [](accounts a, accounts b) {
        return a.balance < b.balance;
    });
    for (auto a : acc) {
        cout << a.balance << endl;
    }
}
