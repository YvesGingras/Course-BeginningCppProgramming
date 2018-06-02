#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>


using namespace std;


int main() {
    cout << "Hello, 19-I/O and Streams!" << endl;
    cout << "#############################" << endl << endl;

    const string sourcePath {"/Users/yvesgingras/Code/Repos/Course-BeginningCppProgramming/Challanges/19-IOAndStreams/Ressource"};
    int lineCounter{0};
    string line;
    string answer;
    vector<string> studentsNames;
    vector<string> studentsAnswers;
    vector<int> studentsScores;

    //Extract data from file.
    ifstream in_file;
    in_file.open(sourcePath + "/Responses.txt");
    if (!in_file) {
        cerr << "Problem opening file" << endl;
        return 1;
    }

    while (getline(in_file,line)){
        if (lineCounter == 0) {
            answer = line;
        }
        else if (lineCounter % 2 != 0) {
            studentsNames.push_back(line);
        }
        else {
            studentsAnswers.push_back(line);
        }
        ++lineCounter;
    }
    in_file.close();

    /*Calculating the scores*/
        //student's individual...
    for (auto& studentsAnswer : studentsAnswers) {
        int currentScore{};
        for (size_t j = 0; j < studentsAnswer.length()-1; ++j) {
            if (studentsAnswer.at(j) == answer.at(j))
                ++currentScore;
        }

        studentsScores.push_back(currentScore);
    }


    // Calculate student's average
    double scoresTotal{};
    double scoresAverage{};
    for (auto&& score : studentsScores) {
        scoresTotal += score;
    }
    scoresAverage = scoresTotal / studentsScores.size();

    //Displaying Headers
    const int widthOverall{30};
    const int widthName{15};
    const int widthScore{widthOverall - widthName};

    cout << setw(widthName) << left << "Student"
         << setw(widthScore) <<  right << "Score"
         << endl;

    cout << setw(widthOverall)
         << setfill('-')
         << ""
         << endl;

    cout << setfill(' ');

    //Displaying the result
    for (size_t studentCount = 0; studentCount < studentsScores.size(); ++studentCount) {
        cout << setw(widthName) << left << studentsNames.at(studentCount).erase(studentsNames.at(studentCount).find('\r'))
             << setw(widthScore) <<  right << studentsScores.at(studentCount)
             << endl;
    }

    //End of report separator
    cout << setw(widthOverall)
         << setfill('-')
         << ""
         << endl;

    //Displaying average.
    cout << setfill(' ');
    cout << setw(widthName) << left << "Average score"
         << setw(widthScore) <<  right << scoresAverage
         << endl;

    cout << endl << endl;

    return 0;
}