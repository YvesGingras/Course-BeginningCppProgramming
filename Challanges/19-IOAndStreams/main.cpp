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
    cout << setw((widthOverall - widthTitle) / 2 + 1) << left << "\n" << southAmericaTours.title << endl;

    cout << setw(widthCountry) << left << "Country"
         << setw(widthCity) << left << "City"
         << setw(widthPopulation) << right << "Population"
         << setw(widthPrice) << right << "Price" << endl;

    cout << setw(widthOverall) << left << setfill('-') << "" << endl;

    for(auto country : southAmericaTours.countries) {
        cout << setw(widthCountry) << left  << setfill(' ') << country.name << flush;
        int cityCounter{0};
        for(auto city : country.cities) {
            if (cityCounter == 0) {
                cout << setprecision(2) << fixed
                     << setw(widthCity) << left << city.name
                     << setw(widthPopulation) << right << city.population
                     << setw(widthPrice) << right << city.cost << endl;
                ++cityCounter;
            }
            else {
                cout << setw(widthCountry) << left << ""
                     << setw(widthCity) << left << setfill(' ')<< city.name
                     << setw(widthPopulation) << right << city.population
                     << setw(widthPrice) << right << city.cost << endl;
            }
        }
    }
    //Text creation - End

    cout << endl << endl;

    return 0;
}