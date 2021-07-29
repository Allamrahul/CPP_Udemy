

#ifndef _VILLAIN_H_
#define _VILLAIN_H

#include <string>

class Villain {

    std::string name {"RAHUL"};

    public:

        std::string get_name() const;   // can handle const objects

        void set_name(std::string name);

};


#endif