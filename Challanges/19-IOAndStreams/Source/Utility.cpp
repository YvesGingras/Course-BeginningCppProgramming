//
// Created by Yves Gingras on 18-06-02.
//
#include <string>
#include "Utility.h"

using namespace std;

void Utility::CalculateScoresChallenge2(string& answer, const vector<string>& studentsAnswers,
                                        vector<int>& studentsScores) {
    for (auto& studentsAnswer : studentsAnswers) {
        int currentScore{};
        for (size_t j = 0; j < studentsAnswer.length()-1; ++j) {
            if (studentsAnswer.at(j) == answer.at(j)) {
                ++currentScore;
            }
        }

        studentsScores.push_back(currentScore);
    }
}

double Utility::CalculateAverageChallenge2(const vector<int>& studentsScores) {
    double scoresAverage{};
    int scoresTotal{};
    for (auto&& score : studentsScores) {
        scoresTotal += score;
    }
    scoresAverage = static_cast<double>(scoresTotal) / studentsScores.size();
    return scoresAverage;
}