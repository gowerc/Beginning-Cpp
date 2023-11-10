

#include <iostream>
#include <memory>
#include <vector>


struct MyObj {
    int age;
};



void myfun(std::unique_ptr<int>& x) {
    (*x)++;
    std::cout << "x in myfun = " << *x << std::endl;
}



int main() { 
    
    //
    // Showing basic syntax
    // Also showing how to pass smart points to functions (reference only)
    //
    std::cout << "\n\n-------------Section 1---------------\n" << std::endl;
    int x = 5;
    std::unique_ptr<int> ptr {new int};
    *ptr = x;
    std::cout << *ptr << std::endl;
    myfun(ptr);
    myfun(ptr);
    
    
    //
    // Showing that smart points work with custom objects
    // Also showing the `if` and `reset` methods
    //
    std::cout << "\n\n-------------Section 2---------------\n" << std::endl;
    std::unique_ptr<MyObj> pt2 { new MyObj{10}};
    std::cout << "my object = " << pt2->age << std::endl;
    pt2.reset();
    if(pt2) {
        std::cout << "my object = " << pt2->age << std::endl;
    } else {
        std::cout << "Memory has been free'd" << std::endl;
    }
    
    
    //
    // Example to highlight that unique points can't be copied only moved
    //
    //
    std::cout << "\n\n-------------Section 3---------------\n" << std::endl;
    std::vector<std::unique_ptr<int>> myvec;
    std::unique_ptr<int> ipt1 {new int{99}};
    // Errors because push_back tries to make a copy which isn't allowed
    // myvec.push_back(ipt1);
    myvec.push_back(std::move(ipt1));
    
    if (ipt1) {
        std::cout << "ipt1 still exists!!" << std::endl;
    } else {
        std::cout << "ipt1 has been free'd !!" << std::endl;
    }
    std::cout << "*myvec[0] = "  << *(myvec[0]) << std::endl;

    auto ipt2 = std::make_unique<int>(20);
    std::unique_ptr<int> ipt3;
    // ipt3 = ipt2           // Errors as we can't assign the same pointer to 2 unique pointers
    ipt3 = std::move(ipt2);  // Have to use move to that ipt2 gets deallocated
    std::cout << "ipt3 = " << *ipt3 << std::endl;
    return 0;
}


