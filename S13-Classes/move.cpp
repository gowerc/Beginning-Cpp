#include <string>
#include <vector>
#include "print.cpp"


//
// This file shows an example of the "Move-Constructor"
// This topic was generally very confusing.
// Main point was the move constructor is more efficient
// by stealing data instead of copying anything.
// Is only viable when an object is used as an Rvalue / anonymous object (no assigned variable)
//


// Note that vectors can use either "copy" or "move", the compiler will
// decide at compile time.  Generally it looks to see if it can prove
// that the object won't throw an exception, if it can prove that it will
// use "move"  else it will use "copy"
//
// We use the "noexcept" keyword to tell the compiler this function
// won't throw an exception

class Person {
public:
    std::string name;
	int* data;
	Person(std::string name, int d);    // Constructor
	Person(const Person &source);       // Copy-Constructor
    Person(Person &&source)noexcept;    // Move-Constructor
	~Person();                          // Destructor
};

Person::Person(std::string name, int d) {
    this->name=name;
    this->data = new int;
    *(this->data) = d;
}

Person::~Person(){
    print("Deconstructor for " + this->name);
    if(this->data == nullptr) {
        print("Deleting Nullptr");
    } else {
        print("Deleting Real Pointer");
    }
	delete data;
}


Person::Person(const Person &source): Person(source.name, *source.data) {
    print("Copy-Constructor for " + source.name);
};


Person::Person(Person &&source) noexcept: name{source.name}, data{source.data}  {
    print("Move-Constructor for " + this->name);
    source.data = nullptr;
}


int main(){
    std::vector<Person> vec;
    vec.push_back(Person{"Bob", 10});
    vec.push_back(Person{"Tim", 40});
    
    print(vec.at(1).name);
    
    return 0;
}







