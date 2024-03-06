
#include <iostream>



template <int N>
class Array {
    int size = N;
    int values[N];
public:

    Array() = default;
    Array(int init_val) {
        for (auto &value: values) {
            value = init_val;
        }
    }

    int get_size() const {
        return this->size;
    };
    int &operator[] (int index){
        return this->values[index];
    };
};




int main() {
    Array<5>x(2);
    std::cout << x[4] << std::endl;
    
    x[4] = 200;
    std::cout << x[4] << std::endl;
}



