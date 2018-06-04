#include <iostream>
#include <fstream>


using namespace std;

//bool IsSubstringPresentChallenge3(string basic_string, string basicString);

int main() {
    cout << "Hello, 19-I/O and Streams!" << endl;
    cout << "#############################" << endl << endl;

    const string sourcePath {"/Users/yvesgingras/Code/Repos/Course-BeginningCppProgramming/Challanges/19-IOAndStreams/Ressource"};

    ofstream out_file;
    out_file.open(sourcePath + "/Output.txt",ios::app);
    if (!out_file) {
        cerr << "Problem creating file" << endl;
        return 1;
    }

    //getting user input
    string line{};
    cout << "Enter something to write to file: ";
    getline(cin,line);
    out_file << line << endl;

    out_file.close();

    return 0;
}


