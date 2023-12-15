#include <iostream>
#include <iomanip>

int main() {

    //
    // Looking to see if the buffer affects the console output order
    //

    std::cout << "MESSAGE-1 ";
    std::cerr << "ERROR-1 ";
    std::cout << "MESSAGE-2 ";
    
    std::cout << std::endl << std::endl;


    //
    // Experimenting with integer output formatting
    //

    std::cout << std::showbase;
    std::cout << std::showpos;
    // std::cout << std::showpoint;
    std::cout << std::hex;
    std::cout << std::uppercase;
    std::cout << 255 << std::endl;
    // Reset everything
    std::cout << std::resetiosflags(std::ios::basefield);
    std::cout << std::resetiosflags(std::ios::showbase);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::uppercase);
    std::cout << 255;

    std::cout << std::endl << std::endl;


    //
    // Experimenting with float output formatting
    //
    // std::cout << 1234.5678 << std::endl;
    // std::cout << std::setprecision(4);
    // std::cout << std::fixed;
    // std::cout << 12456789012345.1234567890 << std::endl;
    
    
    //
    // Experimenting with fill / alignment / width 
    //
    
    std::cout << 1234567890 << 1234567890 << 1234567890 << std::endl;
    std::cout << std::setw(10)
              << std::left
              << "hello"
              << std::setw(10)
              << "world"
              << std::right
              << std::setw(10)
              << "!";
              


    return 0;
}

