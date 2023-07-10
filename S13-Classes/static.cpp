#include <iostream>
#include <string>


//
// Showing static  attributes/methods (read: class attributes/methods)
//
//
//



class Player {
    public:
        std::string name;
        static int num_players;
        static int get_num_players();
        Player(std::string name);
        void remove_player();
};

void Player::remove_player(){
    num_players--;
}

Player::Player(std::string name): name{name} {
    num_players++;
};

int Player::num_players = 0;

int Player::get_num_players() {
    return num_players;
};


int main() {
    std::cout << Player::get_num_players() << std::endl;    // 0
    Player bob{"Bob"};
    std::cout << Player::get_num_players() << std::endl;    // 1
    std::cout << bob.get_num_players() << std::endl;        // 1
    Player tim{"Tim"};
    std::cout << Player::get_num_players() << std::endl;    // 2
    tim.remove_player();
    std::cout << Player::get_num_players() << std::endl;    // 1
}