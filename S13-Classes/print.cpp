
#include <iostream>
#include <string>

void print(char* v){
    std::cout << v << std::endl;
}

void print(char v){
    std::cout << v << std::endl;
}

void print(std::string v){
    std::cout << v << std::endl;
}

void print(int v) {
    std::cout << v << std::endl;
}

void print(size_t v) {
    std::cout << v << std::endl;
}

void print(double v){
    std::cout << v << std::endl;
}

void print(long v){
    std::cout << v << std::endl;
}


void print(int *v ) {
    std::cout << v << std::endl;
}
