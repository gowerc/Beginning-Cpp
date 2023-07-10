#include <iostream>
#include <string>

//
// This program shows how to allow functions / methods to access
// private fields of an object by declaring them as "friends"
//
//

// Forward declaration of class "Player" other wise compiler
// complains that "Player" doesn't exist when we create "Other"
class Player;

class Other {
public:
    void display_player(Player x);
};


class Player {
    friend void display_player(Player p);  // `display_player(Player)` is now a friend
    friend void Other::display_player(Player p);  // `display_player(Player)` is now a friend
    std::string name;
    int health;
    int xp;

public:
    Player(std::string name, int health, int xp);
};





void Other::display_player(Player x){
    std::cout <<
        x.name <<
        " " <<
        x.health << 
        " " <<
        x.xp << 
        std::endl;
};



void display_player(Player x) {
    std::cout <<
        x.name <<
        " " <<
        x.health << 
        " " <<
        x.xp << 
        std::endl;
};

Player::Player(std::string name, int health, int xp):
    name{name}, health{health}, xp{xp} {};


int main () {
    
    Player bob{"Bob", 100, 0};
    Other tim;
    tim.display_player(bob);
    display_player(bob);
    
    return 0;
}

