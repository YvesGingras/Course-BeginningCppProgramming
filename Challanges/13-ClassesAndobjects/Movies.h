//
// Created by Yves Gingras on 18-04-28.
//

#ifndef CHALLANGES_MOVIES_H
#define CHALLANGES_MOVIES_H

#include <vector>
#include "Movie.h"

class Movies
{
public:
    const std::vector<Movie> &GetMovies() const;
    void SetMovies(const std::vector<Movie> &movies);

    bool Add(const std::string &name, const std::string &rating, int watched) ;
    bool IncrementWatched(const std::string &name);
    bool IsMoviePresent(const std::string &name);
    void Display();
private:
    std::vector<Movie> m_movies;
};


#endif //CHALLANGES_MOVIES_H
