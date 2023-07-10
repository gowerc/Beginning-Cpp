


#include <iostream>

// std::endl  - Move cursor to next line (i.e. insert a new line)
// Use variable{123}  to set variable with a default value of 123
// Can use multiple `<<` to print multiple bits of text via std::cout
// `::` is used for namespacing i.e.  `std::cout` means use `cout` from the `std` namespace
// The `main()` function is the entry point to a program 
// `<<` is the stream insertion operator i.e. insert the thing on the right to the stream on the left
// `>>` is the stream extraction operator 

int main() {
    int favourite_number{20};
    std::cout << "Enter your favourite number between 1 and 100: ";
    // std::cin >> favourite_number;
    std::cout << "Amazing!! thats my favourite numebr too!";
    std::cout << std::endl
              << "No really "
              << favourite_number
              << " Is my favorite too!";
    std::cout << std::endl;
    return 0;
}
