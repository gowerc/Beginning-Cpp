




#include <iostream>
#include <fstream>

int main() {
    // Open a file for writing
    std::ofstream file("S19-Streams/data/output.txt");

    // Backup the streambuffer of std::cout (so we don't lose the current
    // destination that std::cout is writing to)
    std::streambuf* coutbuf = std::cout.rdbuf(); 

    // Redirect std::cout to file
    std::cout.rdbuf(file.rdbuf());

    // Now std::cout will write to the file
    std::cout << "This will be written to the file" << std::endl;

    // Restore the original buffer
    std::cout.rdbuf(coutbuf);

    // Close the file
    file.close();

    // Now std::cout will write to the standard output again
    std::cout << "This will be written to standard output" << std::endl;

    return 0;
}


