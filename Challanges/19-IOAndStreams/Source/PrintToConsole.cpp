//
// Created by Yves Gingras on 18-06-02.
//

#include <iomanip>
#include <iostream>
#include "PrintToConsole.h"

using namespace std;

/**
 * @brief Used for 'Challenge 2'
 * @param widthOverall
 * @param widthName
 * @param widthScore
 */
void PrintToConsole::DisplayHeaderChallenge2(const int widthOverall, const int widthName, const int widthScore) {
    cout << setw(widthName) << left << "Student"
         << setw(widthScore) << right << "Score"
         << endl;

    cout << setw(widthOverall)
         << setfill('-')
         << ""
         << endl;

    cout << setfill(' ');
}

void  PrintToConsole::DisplayFooterChallenge2(const int widthOverall, const int widthName, const int widthScore, double scoresAverage) {
    cout << setw(widthOverall)
         << setfill('-')
         << ""
         << endl;

    //Displaying average.
    cout << setfill(' ');
    cout << setw(widthName) << left << "Average score"
         << setprecision(1) << fixed
         << setw(widthScore) <<  right << scoresAverage
         << endl;
}

void PrintToConsole::DisplayResultChallenge2(const int widthName, const int widthScore, vector<string>& studentsNames,
                             vector<int>& studentsScores) {
    for (size_t studentCount = 0; studentCount < studentsScores.size(); ++studentCount) {
        cout << setw(widthName) << left << studentsNames.at(studentCount).erase(studentsNames.at(studentCount).find('\r'))
             << setw(widthScore) <<  right << studentsScores.at(studentCount)
             << endl;
    }
}