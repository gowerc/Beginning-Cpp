#include <iostream>
void printme(int x);
int main() {
    extern int x;
    printme(x);
}




