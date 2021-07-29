
#include "villain.h"


std::string Villain::get_name() const { // with the const qualifier, if the code modifies any object data member, compiler will throw an error
    return name;
}

void Villain::set_name(std::string name) {
    this->name = name;
}