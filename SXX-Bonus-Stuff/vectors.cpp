#include <iostream>
#include <vector>

int main() {
    std::vector<int> x{5};
    x.push_back(20);
    for (auto i: x) {
        std::cout << i << std::endl;
    }
}


