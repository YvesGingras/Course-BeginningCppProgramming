#include <iostream>
#include<iomanip>
#include <exception>
#include <string>
#include <vector>
#include "Source/ToursFactory.h"
#include "Source/Utility.h"

using namespace std;





int main() {
    cout << "Hello, 19-I/O and Streams!" << endl;
    cout << "#############################" << endl << endl;

    unique_ptr<ToursFactory> toursFactory = make_unique<ToursFactory>();
    Tours southAmericaTours = toursFactory->GetSouthAmericaTours();

    const int widthOverall{70};
    const auto widthTitle = static_cast<const int>(southAmericaTours.title.length());
    const auto widthCountry{20};
    const auto widthCity{20};
    const auto widthPopulation{15};
    const auto widthPrice {widthOverall - (widthCountry + widthCity + widthPopulation)};

    //Text creation - Beginning
    Ruler();
    cout << "\n" << setw((widthOverall - widthTitle) / 2) << "" << southAmericaTours.title << endl;

    cout << setw(widthCountry) << left << "Country"
         << setw(widthCity) << left << "City"
         << setw(widthPopulation) << right << "Population"
         << setw(widthPrice) << right << "Price" << endl;

    cout << setw(widthOverall)
         << left
         << setfill('-')
         << ""
         << endl;

    cout << setfill(' ');
    cout << setprecision(2) << fixed;

    for(auto country : southAmericaTours.countries) {
        for (size_t i = 0; i < country.cities.size(); ++i) {
            cout << setw(widthCountry) << left  << (i == 0 ? country.name : "")
                    << setw(widthCity) << left << country.cities.at(i).name
                    << setw(widthPopulation) << right << country.cities.at(i).population
                    << setw(widthPrice) << right << country.cities.at(i).cost << endl;
        }
    }
    //Text creation - End

    cout << endl << endl;

    return 0;
}