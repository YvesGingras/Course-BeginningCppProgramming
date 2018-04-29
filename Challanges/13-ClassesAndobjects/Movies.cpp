//
// Created by Yves Gingras on 18-04-28.
//

#include "Movies.h"
#include <iostream>

using namespace std;

bool Movies::Add(const string &name, const string &rating, int watched) {
    if (IsMoviePresent(name))
        return false;

    Movie movie{name,rating,watched};
    m_movies.push_back(movie);
    return true;
}

bool Movies::IsMoviePresent(const std::string &name) {
    for (const auto &movieItem : m_movies) {
        const auto &movieName = movieItem.GetName();
        if (movieName == name)
            return true;
    }

    return false;
}

bool Movies::IncrementWatched(const std::string &name) {
    if (IsMoviePresent(name)) {
        for (auto &movieItem : m_movies) {
            if (movieItem.GetName() == name){
                movieItem.SetWatched(1);

                return true;
            }
        }
    }

    return false;
}

void Movies::Display() const {
    if (m_movies.empty()){
        cout<< "No movies to display\n" << endl;
        return;
    }

    cout << "\n===================================" << endl;
    for (auto &&movie : m_movies) {
        movie.Display();
        }
    cout << "===================================\n" << endl;
}

