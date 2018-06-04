#include <iostream>
#include <fstream>


using namespace std;

//bool IsSubstringPresentChallenge3(string basic_string, string basicString);

int main() {
    cout << "Hello, 19-I/O and Streams!" << endl;
    cout << "#############################" << endl << endl;

    const string sourcePath {"/Users/yvesgingras/Code/Repos/Course-BeginningCppProgramming/Challanges/19-IOAndStreams/Ressource/"};

    ifstream in_file{sourcePath + "Poem.txt"};
    ofstream out_file{sourcePath + "PoemOut.txt"};

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
    while (std::getline(in_file,line))
        out_file << line << endl;

    cout << "File copied!" << endl;
    in_file.close();
    out_file.close();

    return 0;
}


