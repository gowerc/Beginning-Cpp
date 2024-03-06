
#include <iostream>
#include <utility>




int main() {
    // Pairs
    std::pair<std::string, int> p1 {"Frank", 100};
    std::cout << p1.first << std::endl;
    std::cout << p1.second << std::endl;
}