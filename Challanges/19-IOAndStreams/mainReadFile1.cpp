#include <iostream>
#include <fstream>

using namespace std;


int main() {
    cout << "Hello, 19-I/O and Streams!" << endl;
    cout << "#############################" << endl << endl;

    const string sourcePath {"/Users/yvesgingras/Code/Repos/Course-BeginningCppProgramming/Challanges/19-IOAndStreams/Ressource"};
    ifstream in_file;

    in_file.open(sourcePath + "/Test1.txt");
    if (!in_file) {
         cerr << "Problem opening file" << endl;
        return 1;
    }

    string line;
    int num;
    double total;
    in_file >> line >> num >> total;

    cout << line << endl;
    cout << num << endl;
    cout << total << endl;

    in_file.close();

    cout << endl << endl;

    return 0;
}