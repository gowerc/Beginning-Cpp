#include <iostream>
#include <string>
#include <cstring>

//
// Super involved program
// Main bit is that we have an object "Mystring" that houses a 
// pointer to a string array.
// We then create a copy-assignment operator method "operator="
// to enable us to assign this object to other variables
// To support this though we have to define multiple constructors and destructors
//


class Mystring {
private:
    std::string name;
    char* str;
public:
    Mystring();                         // Empty constructor
    explicit Mystring(const char *s, std::string name);   // 2-arg constructor
    Mystring(const Mystring &source);   // Copy constructor
    ~Mystring();                        // Deconstructor
    void display() const;               // Methods
    Mystring &operator=(const Mystring &other);
    Mystring &operator=(const char* s);
    int get_length() const;
    const char *get_str() const;
    void set_str(const char *s);
};


Mystring& Mystring::operator=(const Mystring &other){
    this->set_str(other.str);
    return *this;
}


Mystring &Mystring::operator=(const char* s){
    this->set_str(s);
    return *this;
};


Mystring::Mystring() {
    str = new char[1];
    str[0] = 'X';
    name = "Unnamed";
};

Mystring::~Mystring(){
    if (str != nullptr) {
        delete [] str;
    }
}

Mystring::Mystring(const char *s, const std::string name){
    if(s == nullptr){
        str = new char[1];
        str[0] = '\0';
    } else {
        size_t len = std::strlen(s);
        std::cout << "DEBUG - Allocating heap space size " << len << " + 1" << std::endl;
        str = new char[ len+ 1];
        std::strcpy(str, s);
    }
    this->name = name;
};


Mystring::Mystring(const Mystring &source):
    Mystring(source.str, "Copy of " + source.name){
    std::cout << "DEBUG - Copy Constructor" << std::endl;
}



void Mystring::set_str(const char * s){
    if (str != nullptr) {
        std::cout << "DEBUG - Clearing Memory" << std::endl;
        delete [] str;
    }
    size_t len = std::strlen(s);
    this->str = new char[len +1];
    strcpy(this->str, s);
};


// Mystring::Mystring(const Mystring &source) {
//     size_t len = std::strlen(source.str);
//     this->str = new char[len +1];
//     std::strcpy(this->str, source.str);
// };

int Mystring::get_length() const{
    return strlen(this->str);
}


void Mystring::display() const {
    std::cout <<  "<" + name + "> - " << str  << std::endl;
};


int main() {
    
    Mystring a;
    a.display();
    
    Mystring b{"Let there be light", "B"};
    b.display();
    
    std::cout << b.get_length() << std::endl;
    
    
    
    Mystring c = b;
    std::cout << c.get_length() << std::endl;
    c.set_str("This is a new string");
    c.display();
    b.display();
    
    (c = a).display();
    c.display();
    a.set_str("ABC");
    a.display();
    c.display();
    
    c = "Quick fox";
    c.display();
    
    return 0;
}