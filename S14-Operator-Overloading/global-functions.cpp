#include <iostream>

class Myc {
public:
    int get_num(){return this->num;};  // num getter function
    Myc(int x): num{x} {};             // 1-arg constructor
private:
    int num;
    friend Myc &operator++(Myc &x) ;
};

// Prefix - increment operator
Myc &operator++(Myc &obj){
    obj.num = obj.num + 1;
    return obj;
}


int main () {
    Myc A{1};
    ++A;
    ++A;
    std::cout << A.get_num() << std::endl;  // 3
}


