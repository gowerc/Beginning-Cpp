

#include <fstream>
#include <iostream>
#include <iomanip>


int main() {
    
    std::ofstream out_file;
    out_file.open("S19-Streams/data/outfile.txt", std::ios::out);
    if (!out_file) {
        std::cerr << "Failed to open !" << std::endl;
        std::exit(1);
    }
    
    // stream operator
    out_file << "Hello, World!" << std::endl;
    
    // Using put method
    out_file.put('a');
    out_file.put('b');
    out_file.put('c');
    out_file.put('d');
    out_file << std::endl;
    
    // Using write method
    std::string mystring {"poiuytr"};
    out_file.write(mystring.c_str(), mystring.length());
    
    
    out_file << std::endl;
    out_file.close();
    
    
    std::cout << "Hello, World!" << std::endl;
}







