//
// Created by Yves Gingras on 18-04-28.
//

#include "Movie.h"

using namespace std;

static int m_watched{0};

const string &Movie::GetName() const {
    return m_name;
}

void Movie::SetName(const string &name) {
    m_name = name;
}

const string &Movie::GetRating() const {
    return m_rating;
}

void Movie::SetRating(const string &rating) {
    m_rating = rating;
}

int Movie::GetWatched() {
    return m_watched;
}

void Movie::SetWatched(int watched) {
    m_watched += watched;
}
