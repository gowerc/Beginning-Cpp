

#include <vector>
#include <iostream>
#include <string>

using namespace std;

void section(string s);

int add_numbers(int);
double add_numbers(double);
void testing_overloading();

void testing_numbers();
void ints_to_zero(const int numbers[], size_t size);


void set_to_100(int &num);
void testing_pass_by_reference();

void printme();
void testing_static_variables();

unsigned long long factorial(unsigned long long);

int main() {

    testing_overloading();
    testing_numbers();
    testing_pass_by_reference();
    testing_static_variables();

    section("Recursion");
    cout << factorial(8) << endl; // 40320

    cout << endl
         << endl;
}

int add_numbers(int a) {
    return a + 1;
}

double add_numbers(double b) {
    return b + 10;
}

void ints_to_zero(int numbers [], size_t size) {
    for (size_t i{0}; i < size; i++){
        numbers[i] = 0;
    }
}

void ints_to_zero(vector<int> numbers){
    for (size_t i{0}; i < numbers.size(); i++) {
        numbers.at(i) = 0;
    }
}

void testing_overloading() {
    section("Overloading");
    cout << "Hello world\n";
    cout << "int version    " << add_numbers(1) << endl;
    cout << "double version " << add_numbers(1.0) << endl;
}

void testing_numbers() {
    section("Arrays pass by reference");
    int myints[]{1, 2, 3};
    cout << "myint[1] = " << myints[1] << endl;
    ints_to_zero(myints, 3);
    // Prints zero as the ints_to_zero voided the array we passed
    cout << "myint[1] = " << myints[1] << endl;

    vector<int> vints{1, 2, 3, 4};
    cout << "vints[3] = " << vints[3] << endl;
    ints_to_zero(vints);
    cout << "vints[3] = " << vints[3] << endl;
}

void section(string s){
    cout << "\n\n========== " + s + " ==========\n\n";
    return;
}

void set_to_100(int &num){
    num = 100;
}


void testing_pass_by_reference(){
    section("Pass by reference");
    int number{1};
    cout << "number = " << number << endl;   // 100
    set_to_100(number);
    cout << "number = " << number << endl;   // 100
}

void printme(){
    static int i{0};
    cout << "printme1 - i = " << i << endl;
    i++;
}
void printme2(){
    static int i{0};
    cout << "printme2 - i = " << i << endl;
    i++;
}

void testing_static_variables(){
    section("Testing Static Variables");
    printme();  // 0
    printme();  // 1
    printme();  // 2
    printme2();
    printme2();
    printme();
}


unsigned long long factorial(unsigned long long n){
    if(n==0) {
        return 1;
    }
    return n * factorial(n-1);
}

