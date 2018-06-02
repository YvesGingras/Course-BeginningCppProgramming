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

//    Read and display Shakespeare Sonnet 18 poem using 'unformatted' get
    char c;
    while (in_file.get(c)){
        cout << c;
}

    in_file.close();
    cout << endl << endl;

    return 0;
}