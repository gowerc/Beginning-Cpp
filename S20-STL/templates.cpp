
#include <iostream>

template <class T>
T max(T a, T b) {
	return (a > b) ? a : b;
}


template <class T>
struct Item {
    T value;
    T get_value() const { return this->value; }
};


int main () {
    Item<int> x {10};
    Item<float> y {20.1};
    std::cout << max<int>(10, 20) << std::endl;
    std::cout << max<float>(10.4, 20.1) << std::endl; 
    std::cout << x.get_value() << " " << y.get_value() << std::endl;
}


