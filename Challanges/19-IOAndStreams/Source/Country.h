//
// Created by Yves Gingras on 18-05-30.
//

#ifndef CHALLANGES_COUNTRY_H
#define CHALLANGES_COUNTRY_H

#include <vector>
#include "City.h"

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

#endif //CHALLANGES_COUNTRY_H
