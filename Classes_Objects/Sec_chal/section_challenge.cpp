#include <iostream>
#include <string>
#include <vector>

#include "Movies.h"


void add_movie(Movies& my_movies, std::string name, std::string rating, int watched);
void increment_watched(Movies& my_movies, std::string name);


int main() {

    // Movies my_movies;

    // my_movies.display();

    // add_movie(my_movies, "Big", "PG-13", 2);
    // add_movie(my_movies, "Star Wars", "PG", 8);
    // add_movie(my_movies, "Cinderella", "PF-13", 3);

    // my_movies.display();

    // add_movie(my_movies, "Cinderella", "PG", 7);
    // add_movie(my_movies, "Ice Age", "PG", 12);

    // my_movies.display();

    // increment_watched(my_movies, "Big");
    // increment_watched(my_movies, "Ice Age");

    // my_movies.display();

    // increment_watched(my_movies, "Rangoli");

    uint8_t x {0x17};

    std::cout << ((x >> 0) & 0x01) << std::endl;
    std::cout << ((x >> 1) & 0x01) << std::endl;
    std::cout << ((x >> 2) & 0x01) << std::endl;
    std::cout << ((x >> 3) & 0x01) << std::endl;
    std::cout << ((x >> 4) & 0x01) << std::endl;
    std::cout << ((x >> 5) & 0x01) << std::endl;
    std::cout << ((x >> 6) & 0x01) << std::endl;
    std::cout << ((x >> 7) & 0x01) << std::endl;

    

    return 0;
}


void add_movie(Movies& my_movies, std::string name, std::string rating, int watched) {

    if(my_movies.add_movie(name, rating, watched))
        std::cout << name <<" added\n";
    else
        std::cout << name <<" already exists\n";
}

void increment_watched(Movies& my_movies, std::string name) {

     if(my_movies.increment_watched(name))
        std::cout << name <<" incremented\n";
    else
        std::cout << name <<" does not exist\n";
}
