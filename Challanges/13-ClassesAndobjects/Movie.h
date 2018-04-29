//
// Created by Yves Gingras on 18-04-28.
//


#ifndef CHALLANGES_MOVIE_H
#define CHALLANGES_MOVIE_H

#include <string>

class Movie
{
public:
    const std::string &GetName() const;

    void SetName(const std::string &name);

    const std::string &GetRating() const;

    void SetRating(const std::string &rating);

    int GetWatched();

    void SetWatched(int watched);

private:
    std::string m_name{};
    std::string m_rating{};
    int m_watched{};

};
#endif //CHALLANGES_MOVIE_H


