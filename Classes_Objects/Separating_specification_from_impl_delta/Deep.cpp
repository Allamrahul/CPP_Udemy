#include "Deep.h"
#include <iostream>

Deep::Deep(int d) {

    data = new int;
    *data = d;
}

// Deep::Deep(const Deep &source) { // data attribute in source object and newly created object, bothe point to same memory in heap. 

//     data = new int;
//     *data = *source.data;
//     // when this object goes out of scope, memory will get deallocated for the pointer that was just created on heap above instead of the pointer that was passed.

//     std::cout << "Shallow copy contructor called \n";
// }

// or

Deep::Deep(const Deep &source): Deep(*source.data) { 

    std::cout << "Shallow copy contructor called \n";
}

Deep::~Deep() {
    delete data;
    std::cout << "Destructor freeing the data \n";
}