//
// Created by Yves Gingras on 18-05-30.
//

#ifndef CHALLANGES_UTILITY_H
#define CHALLANGES_UTILITY_H

#include <iostream>
#include <iomanip>
#include <vector>

class Utility {
public:
    static void Ruler() {
        std::cout << "\n1234567890123456789012345678901234567890123456789012345678901234567890" << std::endl;
    }

    static void CalculateScoresChallenge2(std::string& answer, const std::vector<std::string>& studentsAnswers,
                                          std::vector<int>& studentsScores);

    static double CalculateAverageChallenge2(const std::vector<int>& studentsScores);

    static bool IsSubstringPresentChallenge3(const  std::string& searchSubString, const std::string& word);
};


#endif //CHALLANGES_UTILITY_H
