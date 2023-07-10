#include <string>
#include <iostream>
#include "print.cpp"


//
// Code to show that structs and classes work the same way
// Showing that all the major features of classes work identically
// within a struct
//

struct Person {
    std::string name;
    Person(std::string name, int age);
    int age;
    void talk();
};



//
// Constructor function
//
Person::Person(std::string name, int age): name{name}, age{age} {
    std::cout << "Entered Constructor for " + name << std::endl;
};

//
// Definition for for talk method
//
void Person::talk(){
    std::cout <<
        "My name is " + this->name + " I am " <<
        this->age << 
        " years old" << 
        std::endl;
}

int main () {
    Person bob{"Bob", 52};
    Person tim{"Tim", 23};
    
    print(tim.age);
    print(bob.age);
    
    bob.talk();
    return 0;
}





