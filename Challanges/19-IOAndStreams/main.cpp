#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

//bool IsSubstringPresentChallenge3(string basic_string, string basicString);

int main() {
    cout << "Hello, 19-I/O and Streams!" << endl;
    cout << "#############################" << endl << endl;

    const string sourcePath {"/Users/yvesgingras/Code/Repos/Course-BeginningCppProgramming/Challanges/19-IOAndStreams/Ressource/"};

    ifstream in_file{sourcePath + "RomeoAndJuliet.txt"};
    ofstream out_file{sourcePath + "RomeoAndJulietOutChallenge4.txt"};

    if (!out_file) {
        cerr << "Error opening output file!" << endl;
        return 1;
    }

    if (!in_file) {
        cerr << "Error opening input file!" << endl;
        return 1;
    }

    //getting user input
    string line{};
    long lineCounter{};
    while (std::getline(in_file,line)){
        if (line != "\r"){
            ++lineCounter;
            out_file << setw(10) << left << lineCounter << line << endl;
        }
        else {
            out_file << line << endl;
        }
    }
    cout << "File copied!" << endl;
    in_file.close();
    out_file.close();

    return 0;
}


