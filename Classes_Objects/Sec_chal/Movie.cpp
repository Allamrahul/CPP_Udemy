#include "Movie.h"

Movie::Movie(std::string name_m, std::string rating_m, int watched_m) : name {name_m}, rating {rating_m}, watched {watched_m} {
        
}

Movie::Movie(const Movie &source) : Movie{source.name, source.rating, source.watched} {

}

std::string Movie::get_name() {
    return name;
}

std::string Movie::get_rating() {
    return rating;
}

int Movie::get_watch_count() {
    return watched;
}

void Movie::inc_watch_count(int count) {
    watched += count;
}

void Movie::display() {
    std::cout << name << " " << rating << " " << watched << std::endl;
}