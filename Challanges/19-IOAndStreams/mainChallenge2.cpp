#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include "Source/Utility.h"
#include "Source/PrintToConsole.h"


using namespace std;



int main() {
    cout << "Hello, 19-I/O and Streams!" << endl;
    cout << "#############################" << endl << endl;

    const string sourcePath {"/Users/yvesgingras/Code/Repos/Course-BeginningCppProgramming/Challanges/19-IOAndStreams/Ressource"};
    const int widthOverall{30};
    const int widthName{15};
    const int widthScore{widthOverall - widthName};
    int lineCounter{0};
    string line;
    string answer;
    vector<string> studentsNames{};
    vector<string> studentsAnswers{};
    vector<int> studentsScores{};

    //Extract data from file.
    ifstream in_file;
    in_file.open(sourcePath + "/Responses.txt");
    if (!in_file) {
        cerr << "Problem opening file" << endl;
        return 1;
    }

    while (getline(in_file,line)){
        if (lineCounter == 0)
            answer = line;
        else if (lineCounter % 2 != 0)
            studentsNames.push_back(line);
        else
            studentsAnswers.push_back(line);

        ++lineCounter;
    }
    in_file.close();

    Utility::CalculateScoresChallenge2(answer, studentsAnswers, studentsScores);

    double scoresAverage = Utility::CalculateAverageChallenge2(studentsScores);

    PrintToConsole::DisplayHeaderChallenge2(widthOverall, widthName, widthScore);

    PrintToConsole::DisplayResultChallenge2(widthName, widthScore, studentsNames, studentsScores);

    PrintToConsole::DisplayFooterChallenge2(widthOverall, widthName, widthScore, scoresAverage);

    cout << endl << endl;

    return 0;
}


