
#include <sstream>
#include <iostream>
#include <iomanip>

int main() {
    int num;
    double total;
    std::string name;
    std::string info {"12 9.9 Bob"};
    std::istringstream iss{info};
    iss >> num >> total >> name;
    
    std::cout << name << std::endl;
    
    
    std::ostringstream oss;
    oss << num << " " << total << " " << name;
    std::cout << oss.str();
    std::cout << oss.str().at(0);

}


