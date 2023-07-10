
#include <iostream>
#include <string>
#include "print.cpp"
#include <vector>

using namespace std;


//
//
// Random dumping ground of stuff covered in this section
//
//
//


// class Person {
//     public:
//         std::string name{"Bob2"};
//         void print(){
//             std::cout << "My name is " + name << std::endl;
//         }
// };

// class Account {
//     private:
//         double balance {0};
//     public:
//         void set_balance(double bal);
//         double get_balance();
// };
// void Account::set_balance(double bal){ balance = bal; }
// double Account::get_balance(){ return balance; }


class Person {
public:
	int age;
	void set_age(int new_age) {
		this->age = new_age;
	}
};



class Player {
public:
	std::string name;
	int health;
	int xp;
	Player(std::string name = "None", int health = 0, int xp = 0);
    Player(const Player &source);
};


// Initialisation List
Player::Player(std::string name, int health, int xp)
	:name{name}, health{health}, xp{xp} {}


Player::Player(const Player &source)
    : Player{source.name, source.health, source.xp} {
        print("Hello from copy constructor");
    };

// Copy constructor + initialisation List
// Player::Player(const Player &source)
//     :name{source.name},
//      health{source.health},
//      xp{source.xp} {
     
//      name = name + " hi ";
// };


class Deep {
public:
	int* data;
	Deep(int d);               // Constructor
	Deep(const Deep &source);  // Copy-Constructor
    Deep(Deep &&source);       // Move-Constructor
	~Deep();                   // Destructor
    void talk() {
        print("My number is " + std::to_string(*(this->data)));
    };
};

Deep::Deep(int d) {
    data = new int;
    *data = d;
}

Deep::~Deep(){
    print("Deep Deconstructor");
	delete data;
}

Deep::Deep(const Deep &source): Deep(*source.data) {
    print("Deep copy-constructor");
};


Deep::Deep(Deep &&source): data{source.data} {
    source.data = nullptr;
}


int& set_val(int& val) {return val;};
 



int* set_int(int d) {
	int *data {new int[10]};
	*data = d;
	return data;
}

Player testfun(Player p){
    print(p.name);
    return p;
}


Deep get_copy(Deep d) {
    print("get_copy function");
    return d;
}

int main() {
    // Person bob;
    // bob.print();

    // Person* bob_ptr{&bob};
    // (*bob_ptr).print();       // Use arrow dereference syntax
    // bob_ptr->name = "Not Bob";
    // bob_ptr->print();
    // bob.print();

    // Account acc;
    // print(acc.get_balance());
    // acc.set_balance(2000);
    // print(acc.get_balance());

    {
        Player james("James");
        print(james.name);
        print(james.xp);
        Player bob("Bob", 50, 20);
        print(bob.name);
        print(bob.xp);
        Player tim{"tim"};
        testfun(tim);
        print(tim.name);
        
        Player simon {bob};
        print(simon.name);
        
        Deep jambo {4};
        print(*jambo.data);
        
        Deep j2 {get_copy(jambo)};
        print(*j2.data);
        
        
        j2.talk();
    }
    
    
    
    Person tim;
    tim.set_age(20);
    print(tim.age);

    cout << "\n\n"
         << endl;
}
 