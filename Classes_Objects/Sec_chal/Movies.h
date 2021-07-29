

#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <iostream>
#include <string>
#include <vector>
#include "Movie.h"

class Movies
{
private:

    std::vector<Movie> my_movies;

public:

    bool add_movie(std::string name, std::string rating, int watched);

    bool increment_watched(std::string name);

    void display() const;
};

#endif