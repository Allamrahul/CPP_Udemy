#include "player.h"
#include <iostream>


// old way of using constructors
// Player::Player() // by the time we hit name = "Jane Doe", the object has already been constructed and intialized with an empty string. We dont want this. We instead
// {                  // want the data members to be initialized to the default values we provide instead of the ones the system provides  
//     std::cout << "No args const\n";
//     name = "Jane Doe";
//     xp = 10;
//     health = 100;
// }


// using constructor initializer lists

Player::Player() : name{"Jane Doe"}, health {100}, xp {10} {

}

// Player::Player(std::string name_val) {
//     std::cout << "1 arg const\n";
//     this->name = name;
//     xp = 10;
//     health = 100;
// }


// using initializer lists
Player::Player(std::string name_val) : name {name_val}, health {100}, xp {10} {

}


Player::Player(std::string name_val, int health, int xp) {
    std::cout << "3 args const\n";
    name = name_val;
    this->xp = health;
    this->health = xp;
}

Player::~Player(){
    std::cout << name << " Destructor called\n";
}