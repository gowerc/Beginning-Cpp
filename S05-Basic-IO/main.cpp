
// Inline comment

/*
    Block comment
    
    std::endl  is both a new line and a buffer flush (important in iostreams but more on this later)
    
    `std::cin >> variable` - Will auto convert the input to the type of variable if possible
    
    `std::cin` - Will automatically remove leading spaces from inputs (no matter if destination is chr or num)
        It also is space delimited, i.e. if you enter "hi There" you need to have 2 variables to catch
        both objects if you don't the first one only gets "hi"
        
    `std::cin` - Note that the input stream is buffered i.e. if you only take 1 argument from it but the user 
        enters 2 arguments, then the next time you run `cin` it will pick up the second user argument
        without waiting for them to input something else again
    
    `std::cin` - Note that for ints  "." is considered as a terminator thus 10.5 would leave .5 in the buffer
        which will be picked up by the next `cin` can cause unexpected behaviour
*/


#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "Hello World" << endl;
    cout << "Hello\n"
         << "World"
         << endl;

    // Example showing how the input buffer can retain inputs from previous `cin`
    int num1;
    int num2;
    cin >> num1;   
    cout << "You entered: " << num1 << endl;
    cin >> num2;  // If user entered 2 numbers to the first cout they won't be prompted again
    cout << "You entered: " << num2 << endl;

}
