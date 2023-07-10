#include <iostream>
#include <cstring>

//
// see "assignment-copy" for description of the program
//


class Mystring {
private:
    char* str;
public:
    Mystring();                         // Empty constructor
    Mystring(const char *s);            // 2-arg constructor
    Mystring(const Mystring &source);   // Copy constructor
    Mystring(Mystring &&source);        // Move constructor
    ~Mystring();                        // Deconstructor
    void display() const;               // Methods
    Mystring &operator=(const Mystring &other);
    Mystring &operator=(const char* s);
    Mystring &operator=(Mystring &&other);
    Mystring &operator=(char* &&other);
    void set_str(const char *s);
};




///////////////////
//
// Assignment functions
//

Mystring& Mystring::operator=(const Mystring &other) {
    std::cout << "Copy-Assignment - Mystring" << std::endl;
    this->set_str(other.str);
    return *this;
}
Mystring &Mystring::operator=(const char* s){
    std::cout << "Copy-Assignment - Char[]" << std::endl;
    this->set_str(s);
    return *this;
};
Mystring &Mystring::operator=(Mystring &&other){
    std::cout << "Move-Assignment (mystring)" << std::endl;
    if (this == &other) {
        return *this;
    }
    this->str = other.str;
    other.str = nullptr;
    return *this;
};
Mystring &Mystring::operator=(char* &&other){
    std::cout << "Move-Assignment (char)" << std::endl;
    this->str = other;
    return *this;
};

///////////////////
//
// Constructor functions
//

Mystring::Mystring() {
    std::cout << "DEBUG - 0-arg Constructor" << std::endl;
    str = new char[1];
    str[0] = 'X';
};
Mystring::Mystring(const char *s){
    std::cout << "DEBUG - 1-arg Constructor" << std::endl;
    if(s == nullptr){
        str = new char[1];
        str[0] = '\0';
    } else {
        size_t len = std::strlen(s);
        str = new char[ len+ 1];
        std::strcpy(str, s);
    }
};
Mystring::Mystring(const Mystring &source):
    Mystring(source.str){
    std::cout << "DEBUG - Copy Constructor" << std::endl;
};
Mystring::~Mystring(){
    std::cout << "DEBUG - De-Constructor" << std::endl;
    if (str != nullptr) {
        delete [] str;
    }
};
Mystring::Mystring(Mystring &&other) {
    std::cout << "DEBUG - Move-Constructor" << std::endl;
    this->str = other.str;
    other.str = nullptr; 
}




///////////////////
//
// Misc Methods functions
//

void Mystring::set_str(const char * s){
    if (str != nullptr) {
        std::cout << "DEBUG - set_str" << std::endl;
        delete [] str;
    }
    size_t len = std::strlen(s);
    this->str = new char[len +1];
    strcpy(this->str, s);
};
void Mystring::display() const {
    std::cout << "DEBUG - Display" << std::endl;
    std::cout << str  << std::endl;
};


///////////////////
//
// Main
//


int main() {
    
    //Mystring a, b;
    // a.display();
    // a = "This is a string";
    // a.display();
    // b = a;
    // b.display();
    // b = Mystring{"THIS IS FRANK"};
    // b.display();
    
    // Mystring d = std::move(b);
    // //b.display();
    Mystring e;
    e = std::move("new string");
    e.display();
    //int x{int{4}};
    //std::cout << x << std::endl;
    
    
    
    std::cout << "---MADE IT---" << std::endl;
    return 0;
}