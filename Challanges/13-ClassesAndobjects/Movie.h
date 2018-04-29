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
    int m_watched;

public:
   Movie(const std::string &name, const std::string &rating, int watched);

    const std::string &GetName() const;

    void SetName(const std::string &name);

    const std::string &GetRating() const;

    void SetRating(const std::string &rating);

    int GetWatched() const;

    void SetWatched(int watched);

    void Display() const;

};
#endif //CHALLANGES_MOVIE_H


