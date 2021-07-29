#include "Movies.h"


bool Movies::add_movie(std::string name, std::string rating, int watched) {
    size_t sz = my_movies.size();

    if(!sz) {my_movies.push_back(Movie(name, rating, watched)); return 1;}

    else{
        int ind {0};
        for(size_t i {0}; i < my_movies.size(); i++) {
            if(my_movies[i].get_name() == name) return 0;
        }
        my_movies.push_back(Movie(name, rating, watched));
        return 1;
    }
}

bool Movies::increment_watched(std::string name) {
    
    for(auto &x:my_movies) {
        if(x.get_name() == name) {
            x.inc_watch_count();
            return 1;
        }
    }
    return 0;
    
}


void Movies::display() const {
    std::cout << "\n===========My movies=============\n";
    for(auto x : my_movies)
        x.display();
    std::cout << "\n==================================\n";
}