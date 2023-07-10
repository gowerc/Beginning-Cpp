



#include <iostream>
#include <vector>

using namespace std;

int main(){

    cout << "\n\n========= Testing block scoping ========\n\n";

    int myint{6};
    {
        int myint{5};
        myint = 12;
        cout << myint << endl;
    }
    cout << myint << endl;

    cout << "\n\n========= Case example ========\n\n";

    int case_int{2};

    switch(case_int) {
        case 1: {
            int x{5};
            cout << "x is " << x << "\n";
            break;
        }
        case 2:
            cout << "There is no x here\n";
            break;
    }
    
    // Without a break statement switch will execute all statements after the first
    // matching case
    switch (case_int){
        case 1:
            cout << "Not you ";
        case 2:
            cout << "hi ";
        case -1:
            cout << "there ";
        default:
            cout << "From the default";
        }

    cout << "\n\n========= Enums ========\n\n";
    enum Color {
        red, green, blue
    };
    Color screen_color {green};
    // Prints the numeric index
    cout << screen_color << "\n";

    // Will throw compiler warning if switch doesn't handle all enum values
    // Enums can be matched on either numeric value or named value
    switch(screen_color){
        case 0:
            cout << "red";
            break;
        case 1: cout << "green\n";
            break;
        case blue:
            cout << "blue\n";
            break;
    }

    cout << (screen_color == green);

    cout << "\n\n========= Ternery ========\n\n";
    int result{0}, a{5}, b{6};
    result = (a > b) ? a : b;
    cout << "Result = " << result << "\n";

    cout << "\n\n========= For Loops ========\n\n";
    for (int i {1}; i<=10; i++) {
        cout << "i is " << i << endl;
    }
    for (int i{1}, j{10};   i <= 5  ;  i++, j++) {
        cout << "i = " << i << ", j = " << j << endl;
    }

    cout << "\n\n========= For Loops - vectors ========\n\n";
    vector<int> nums{10, 20, 30, 40, 50, 60};
    for (unsigned int i{1}; i < nums.size(); i++){
        cout << "nums = " << nums.at(i - 1) << endl;
    }


    cout << "\n\n========= Range Based For Loops ========\n\n";
    int scores [] {100, 200, 300};
    for (int score: scores) {
        cout << "Score = " << score << endl;
    }



    cout << "\n\n"
            << endl;
}
