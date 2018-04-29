//
// Created by Yves Gingras on 18-04-28.
//

#include <iostream>
#include "Movie.h"

using namespace std;

Movie::Movie(const string &name, const string &rating, int watched)
        : m_name(name), m_rating(rating), m_watched(watched) {}

//copy constructor
Movie::Movie(const Movie &source)
        : Movie {source.m_name,source.m_rating,source.m_watched} {}

void Movie::Display() const {
        cout << m_name << ", "
             << m_rating << ", "
             << m_watched << endl;
}


