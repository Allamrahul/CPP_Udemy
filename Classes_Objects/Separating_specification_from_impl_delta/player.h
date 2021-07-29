


#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>
#include "Account.h"

class Player {
    friend class Account;   // declaring an entire class as a friend. Account class can access both public and private datamembers and member funcitons of class Player

private:

    std::string name;
    int health;
    int xp;

    static int num_players; // belongs to the class, not the object

public:
    // overloaded constructors
    // Player();     
    // Player(std::string name_val);
    Player(std::string name_val = "Jane Doe", int health_val = 100, int xp_val = 10); // default values for the constructor


    // copy constructir

    Player(const Player &source);

    //Destructor

    ~Player();

    // member functions

    void set_name(std::string name)
    {
        this->name = name;
    }

    std::string get_name() const {  // you are telling the compiler that this member function will not change the object and this method can be called using const objects
    // You will get a compiler error if you try to modify any of the object attributes
        //health = 100; // invalid since the its a const 
        return name;
    }

    int get_health() {
        return health;
    }

    int get_xp() {
        return xp;
    }


    static int get_num_players();   // since this member function is static, it only has access to static members

    friend void display_player(Player& p); // telling compiler that nonmember function display_player is a friend of this class. That means it has access to private data of this class
    friend double Account::get_balance(); // member function of another class is a friend of this class

};

#endif