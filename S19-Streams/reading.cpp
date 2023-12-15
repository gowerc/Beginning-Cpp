
#include <iostream>
#include <iomanip>
#include <fstream>
#include <thread>

int main() {
    
    
    std::ifstream in_file;
    in_file.open("S19-Streams/myfile.txt", std::ios::binary);
    if (!in_file) {
        std::cerr << "Error opening file" << std::endl;
        std::exit(1);
    }

    char byte;
    while (in_file.read(&byte, 1)) {
        std::cout << std::hex 
                  << std::setw(2)
                  << std::setfill('0')
                  << static_cast<unsigned int>(static_cast<u_char>(byte))
                  << " ";
    }

    in_file.close();

    return 0;
}
