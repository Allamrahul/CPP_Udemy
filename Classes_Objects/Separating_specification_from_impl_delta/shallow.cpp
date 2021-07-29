#include "shallow.h"
#include <iostream>

Shallow::Shallow(int d) {

    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source) : data {source.data} { // data attribute in source object and newly created object, bothe point to same memory in heap. 
    std::cout << "Shallow copy contructor called \n";
}

Shallow::~Shallow() {
    delete data;
    std::cout << "Destructor freeing the data \n";
}