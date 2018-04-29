//
// Created by Yves Gingras on 18-04-28.
//

#ifndef CHALLANGES_MOVIES_H
#define CHALLANGES_MOVIES_H

#include <vector>
#include "Movie.h"

class Movies
{
private:
    std::vector<Movie> *m_movies;

public:
    Movies();

    Movies(Movies &source);

    ~Movies();

    bool Add(const std::string &name, const std::string &rating, int watched) ;
    bool IncrementWatched(const std::string &name);
    bool IsMoviePresent(const std::string &name);
    void Display() const;
};


#endif //CHALLANGES_MOVIES_H
