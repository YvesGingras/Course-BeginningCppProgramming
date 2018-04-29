//
// Created by Yves Gingras on 18-04-28.
//


#ifndef CHALLANGES_MOVIE_H
#define CHALLANGES_MOVIE_H

#include <string>

class Movie
{
private:
    std::string m_name;
    std::string m_rating;
    int m_watched{};

public:
    Movie(const std::string &name, const std::string &rating, int watched);

    //copy constructor
    Movie(const Movie &source);

    const std::string &GetName() const { return m_name;}
    void SetName(const std::string &name) {this->m_name = name;}

    const std::string &GetRating() const {return m_rating;}
    void SetRating(const std::string &rating) {this->m_rating = rating;}

    int GetWatched() const{return m_watched;}
    void SetWatched(int watched) {this->m_watched += watched;}

    void Display() const;
};
#endif //CHALLANGES_MOVIE_H


