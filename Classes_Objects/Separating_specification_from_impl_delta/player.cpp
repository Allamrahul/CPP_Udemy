#include "player.h"
#include <iostream>


int Player::num_players = 0;    // // notice static is not mentiioned here

// old way of using constructors
// Player::Player() // by the time we hit name = "Jane Doe", the object has already been constructed and intialized with an empty string. We dont want this. We instead
// {                  // want the data members to be initialized to the default values we provide instead of the ones the system provides  
//     std::cout << "No args const\n";
//     name = "Jane Doe";
//     xp = 10;
//     health = 100;
// }

// Player::Player(std::string name_val) {
//     std::cout << "1 arg const\n";
//     this->name = name;
//     xp = 10;
//     health = 100;
// }


// Player::Player(std::string name_val, int health, int xp) {
//     std::cout << "3 args const\n";
//     name = name_val;
//     this->xp = health;
//     this->health = xp;
// }

// using constructor initializer lists

// Player::Player() : name{"Jane Doe"}, health {100}, xp {10} {

// }


// Player::Player(std::string name_val) : name {name_val}, health {100}, xp {10} {

// }


// Player::Player(std::string name_val, int health_val, int xp_val) 
//     : name {name_val}, health {health_val}, xp {xp_val} {
//     std::cout << "3 args const\n";
// }


// using delegating constructors    - delegating initialializtion to another constructor of the class


// Player::Player() : Player {"Jane Doe", 100, 10 } {
//     std::cout << "No args constructor\n";
// }


// Player::Player(std::string name_val) : Player {name_val, 100, 10} {
//     std::cout << "1 arg constructor\n";
// }


Player::Player(std::string name_val, int health_val, int xp_val) 
    : name {name_val}, health {health_val}, xp {xp_val} {
    num_players++;
    std::cout << "3 arg constructor\n";
}


// copy constructor

Player::Player(const Player &source) : name {source.name}, health {source.health}, xp {source.xp} {
    std::cout << "Copy constructor made out of " << source.name << std::endl;
}

// Destructor

Player::~Player(){
    num_players--;
    std::cout << name << " Destructor called\n";
}


// static int return

int Player::get_num_players() { // notice static is not mentiioned here. Static method. Since this function is static, it only has access to static members. It does not have 
// access not static class data members
    return num_players; 
}