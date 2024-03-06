
#include <iostream>
#include <vector>
#include <numeric>

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
    std::sort(acc.begin(), acc.begin() + 3, [](accounts a, accounts b) {
        return a.balance < b.balance;
    });
    for (auto a : acc) {
        cout << a.balance << endl;
    }


    // Using std::accumulate with a lambda for a custom operation
    int sum = std::accumulate(
        acc.begin(),
        acc.end(),
        0,
        [](int a, accounts b) { return a + b.balance; }
    );

    std::cout << "Sum: " << sum << std::endl;
}
