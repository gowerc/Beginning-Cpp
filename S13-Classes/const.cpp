#include <string>
#include <iostream>

// Showing the use of const. 
// Program will throw error if the "const Player" tries to access any method that isn't
// itself marked as "const"


class Player {
	public:
		std::string name;
		std::string get_name() const;
};


std::string Player::get_name() const {
    return this->name;
}

int main () {
    const Player bob {"Bobby"};
    std::cout << bob.get_name() << std::endl;
}