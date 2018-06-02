#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


int main() {
    cout << "Hello, 19-I/O and Streams!" << endl;
    cout << "#############################" << endl << endl;

    const string sourcePath {"/Users/yvesgingras/Code/Repos/Course-BeginningCppProgramming/Challanges/19-IOAndStreams/Ressource"};
    ifstream in_file;

    in_file.open(sourcePath + "/Poem.txt");
    if (!in_file) {
         cerr << "Problem opening file" << endl;
        return 1;
    }

    string line;
    while (getline(in_file,line))
        cout << line << endl;

    in_file.close();

    cout << endl << endl;

    return 0;
}