//
// Created by Yves Gingras on 18-04-28.
//

#include "Movies.h"
#include <iostream>

using namespace std;

const vector<Movie> &Movies::GetMovies() const {
    return m_movies;
}

void Movies::SetMovies(const vector<Movie> &movies) {
    m_movies = movies;
}

bool Movies::Add(const string &name, const string &rating, int watched) {
    Movie movie{};

    if (IsMoviePresent(name))
        return false;

    movie.SetName(name);
    movie.SetRating(rating);
    movie.SetWatched(watched);
    m_movies.push_back(movie);
//    IncrementWatched(movie.GetName());

    return true;
}

bool Movies::IsMoviePresent(const std::string &name) {
    Movie movie{};

    for (auto &&movieItem : m_movies) {
        const auto &movieName = movieItem.GetName();
        if (movieName == name)
            return true;
    }

    return false;
}

bool Movies::IncrementWatched(const std::string &name) {
    if (IsMoviePresent(name)) {
        for (auto &&movieItem : m_movies) {
            if (movieItem.GetName() == name){
                movieItem.SetWatched(1);

                return true;
            }
        }
    }

    return false;
}

void Movies::Display() {
    if (m_movies.empty()){
        cout<< "No movies to display\n" << endl;
        return;
    }

    cout << "\n===================================" << endl;
    for (auto &&movie : m_movies) {
           cout << movie.GetName() << ", "
                << movie.GetRating() << ", "
                << movie.GetWatched() << ", "  << endl;
        }

    cout << "===================================\n" << endl;
}

