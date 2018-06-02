#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


int main() {
    cout << "Hello, 19-I/O and Streams!" << endl;
    cout << "#############################" << endl << endl;

    const string sourcePath {"/Users/yvesgingras/Code/Repos/Course-BeginningCppProgramming/Challanges/19-IOAndStreams/Ressource"};
    ifstream in_file;

    in_file.open(sourcePath + "/Test2.txt");
    if (!in_file) {
         cerr << "Problem opening file" << endl;
        return 1;
    }

    string line;
    int num;
    double total;

    /*before refactoring*/
//    while (!in_file.eof()) {
//        in_file >> line >> num >> total;
//
//        cout << setw(10) << left << line
//             << setw(10) << num
//             << setw(10) << total
//             << endl;
//    }

    //Refactored
    while (in_file >> line >> num >> total) {
        cout << setw(10) << left << line
             << setw(10) << num
             << setw(10) << total
             << endl;
    }

    in_file.close();

    cout << endl << endl;

    return 0;
}