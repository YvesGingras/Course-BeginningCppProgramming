//
// Created by Yves Gingras on 18-04-28.
//

#include <iostream>
#include "Movie.h"

using namespace std;

int m_watched{0};

Movie::Movie(const string &name, const string &rating, int watched)
        : m_name(name), m_rating(rating), m_watched(watched) {}

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

int Movie::GetWatched() const {
    return m_watched;
}

void Movie::SetWatched(int watched) {
    m_watched += watched;
}

void Movie::Display() const {
        cout << m_name << ", "
             << m_rating << ", "
             << m_watched << endl;
}


