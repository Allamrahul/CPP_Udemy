

#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>
#include <iostream>

class Movie
{
private:
    std::string name;
    std::string rating;
    int watched;

public:
    Movie(std::string name_m, std::string rating_m, int watched_m);     // parameterized constructor

    Movie(const Movie &source);         // copy constructor


    std::string get_name();

    std::string get_rating();

    int get_watch_count();

    void inc_watch_count(int count = 1);

    void display();

};

#endif