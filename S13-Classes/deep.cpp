
#include <string>
#include "print.cpp"


// This example code shows how to create a "deep constructor"
// E.g. copies the data of pointers


class Deep {
public:
    std::string name;
	int* data;
	Deep(std::string name, int d);               // Constructor
	Deep(const Deep &source);  // Copy-Constructor
	~Deep();                   // Destructor
};


//
// Constructor
//
Deep::Deep(std::string name, int d) {
    this->name=name;
    this->data = new int;
    *(this->data) = d;
}

//
// Deconstructor
//
Deep::~Deep(){
    print("Deconstructor for " + this->name);
	delete data;
}


//
// Deep Copy-Constructor
//
// Instead of copying the pointer we dereference it 
// and ask the constructor to create us a new object
// using the underlying value
Deep::Deep(const Deep &source): Deep(source.name, *source.data) {
    print("Copy-Constructor for " + source.name);
};

//
// Random function to trigger Cpps "pass-by-copy"
//
Deep change_name(Deep d, std::string new_name) {
    print("Entered change_name()");
    print("Changing name from " + d.name + " to " + new_name);
    d.name = new_name;
    print("Leaving change_name()");
    return d;
}


int main(){
    Deep bob{"Bob", 5};
    Deep james {change_name(bob, "James")};
    print("Have created James Object");
    print(bob.name); 
    print(james.name);
    return 0;
}







