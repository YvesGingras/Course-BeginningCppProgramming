#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include "Source/Utility.h"
#include "Source/PrintToConsole.h"

using namespace std;

//bool IsSubstringPresentChallenge3(string basic_string, string basicString);





int main() {
    cout << "Hello, 19-I/O and Streams!" << endl;
    cout << "#############################" << endl << endl;

    const string sourcePath {"/Users/yvesgingras/Code/Repos/Course-BeginningCppProgramming/Challanges/19-IOAndStreams/Ressource"};

    //getting user input
    string searchSubString{};
    cout << "Enter the substring to search for: ";
    cin >> searchSubString;

    /* Getting the file */
    ifstream in_file;
    in_file.open(sourcePath + "/RomeoAndJuliet.txt");
    if (!in_file) {
        cerr << "Problem opening file" << endl;
        return 1;
    }

    /* Processing... */
    string word{};
    long totalWordsCount{};
    long totalSubstringFound{};
    while (in_file >> word) {
        ++totalWordsCount;
        if(Utility::IsSubstringPresentChallenge3(searchSubString, word))
            ++totalSubstringFound;
    }

    in_file.close();

    /* output to console. */
    cout << totalWordsCount << " words were found..." << "\n"
         << "The substring " << searchSubString << " was found " <<  totalSubstringFound << " time(s)." << endl;

    return 0;
}


