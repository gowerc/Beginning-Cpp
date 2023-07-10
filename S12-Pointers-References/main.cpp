#include <iostream>
#include <vector>
#include <string>

using namespace std;

void section(string title) {
    cout << "\n\n========== " + title + " ==========\n\n";
}

void print(vector<int> vec){
    for (size_t idx{0}; idx < vec.size(); idx++){
        cout << "Vector[" << idx << "] = " << vec.at(idx) << endl;
    }
}

void double_it(int *a){   // Takes an int pointer as input
    *a *= 2;
}




int main(){
    section("Simple ref/deref");
    vector<int> num(3, 0);   // 3 elements all 0
    vector<int> *ptr{&num};  // Point to a vector of ints
    print(num);
    cout << "\n\nChanged the value of num" << endl;
    (*ptr).at(0) = 5;
    print(num);  // Will have 5 in the 1'st element

    section("Pointers vs Array");
    int scores[] {100, 200, 300};
    cout << scores << endl;                    //  0x3daa12
    cout << *scores << endl;     //  100 - scores points to first element
    cout << scores[1] << endl;   //  200
    int *score_ptr;
    score_ptr = scores;             // Repeat but with a pointer
    cout << score_ptr << endl;      //  0x3daa12
    cout << *score_ptr << endl;     //  100 - scores points to first element
    cout << score_ptr[1] << endl;   //  200

    section("Pointer Addition");
    int i{2};
    int *i_ptr{&i};
    cout << i_ptr[0] << endl;
    cout << (ptr[0]).at(0) << endl;
    
    vector<int> num2{10, 20 ,30};  // vector of ints
    vector<int> *num_ptr{&num2};   // Point to a vector of ints
    cout << (num_ptr[0]).at(1) << endl;       // 30

    section("Constant Pointers");
    const int cnt1{5};
    int cnt2{10};
    const int *cnt_ptr{&cnt1};
    //*cnt_ptr = 5;       // NOT allowed
    cnt_ptr = &cnt2;   // Allowed
    cnt2 = 20;
    cout << *cnt_ptr << endl;

    section("pointer functions");
    int myi{5}; 
    double_it(&myi);    // Pass the address of our int
    cout << "myi = " << myi << endl;

    section("End of Program");
}
