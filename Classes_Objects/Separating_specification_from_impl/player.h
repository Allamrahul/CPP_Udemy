


#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class Player {

private:

    std::string name;
    int health;
    int xp;

public:
    // overloaded constructors
    Player();     
    Player(std::string name_val);
    Player(std::string name_val, int health, int xp);

    //Destructor

    ~Player();

    // member functions

    void set_name(std::string name)
    {
        this->name = name;
    }

};

#endif