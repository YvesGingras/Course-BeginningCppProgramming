//
// Created by Yves Gingras on 18-06-02.
//

#ifndef CHALLANGES_PRINTTOCONSOLE_H
#define CHALLANGES_PRINTTOCONSOLE_H

#include <vector>
#include <string>

class PrintToConsole
{
public:
    static void DisplayHeaderChallenge2(int, int, int);
    static void DisplayFooterChallenge2(int, int, int, double);
    static void DisplayResultChallenge2(int widthName, int widthScore, std::vector<std::string>& studentsNames,
                                 std::vector<int>& studentsScores);
};


#endif //CHALLANGES_PRINTTOCONSOLE_H
