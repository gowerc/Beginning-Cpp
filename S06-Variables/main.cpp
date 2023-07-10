


#include <iostream>

#include <climits>

using std::cin;
using std::cout;
using std::endl;


int main () {
    // Single characters have to use single quotes 'J'
    // Double quotes are using for "strings" not 'Chars'
    char middle_initial {'J'};   
    cout << "Middle init is: " << middle_initial << endl;

    unsigned short exam_score {30};
    cout << "Example score was: " << exam_score << endl;

    long people_in_florida {20'610'000'000};
    cout << "People in Florida: " << people_in_florida << endl;

    // Will print as a 0 because cpp regards bools as 1 or 0
    bool game_over{false};
    cout << "Is the game over?: " << game_over << endl;
    cout << endl
         << endl;
         
    cout << "======  Sizing Information =====" << endl;
    
    cout << "Size of char: " << sizeof(char) << endl;
    cout << endl;

    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of unsigned-int: " << sizeof(unsigned int) << endl;
    cout << "Size of short: " << sizeof(short) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << endl;

    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of long double: " << sizeof(long double) << endl;
    cout << endl;
    
    
    
    cout << "======  Variable Value limits =====" << endl;
    cout << "Char: " << CHAR_MIN << " to " << CHAR_MAX << endl;
    cout << "Int: " << INT_MIN << " to " << INT_MAX << endl;
    cout << "Long-Long: " << LLONG_MIN << " to " << LLONG_MAX << endl;
    cout << endl
         << endl;

    cout << "======  Getting size information from variables =====" << endl;
    int age{30};
    cout << "Size of Age : " << sizeof(age) << endl;
    cout << endl
         << endl;


    cout << "======  Tax Example  =====" << endl;
    const int price_per_room{30};
    const int valid_days{30};
    const double tax{3.6};
    int n_rooms{2};
    int cost = n_rooms * price_per_room;
    float cost_with_tax = cost *  (1 + (tax/100));
    cout << cost_with_tax << endl
         << "This is valid for " << valid_days << " days"
         << endl
         << endl;
}
