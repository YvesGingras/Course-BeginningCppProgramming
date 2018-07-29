#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <string>
#include <iomanip>
#include "Challenge3Functions.h"

using namespace std;

// Part1 process the file and builds a map of words and the
// number of times they occur in the file
void part1() {
    const string sourcePath {"/Users/yvesgingras/Code/Repos/Course-BeginningCppProgramming/Challanges/20-STL/Ressource"};

    map<string, int> words;
    string line;
    string word;
    stringstream stringStream1;
    ifstream in_file (sourcePath + "/words.txt");
    if (in_file) {
        stringStream1 << in_file.rdbuf();

        //Teacher's method for getting the file text into the stringStream.
        /*
        while (getline(in_file,line)){
            stringStream1 << line;
        }
        */

        //https://stackoverflow.com/questions/2602013/read-whole-ascii-file-into-c-stdstring
        while (stringStream1 >> word) {
            word = clean_string(word);
            words[word]++;
        }

        in_file.close();
        display_words(words);
    } else {
        cerr << "Error opening input file" << endl;
    }
}

// Part2 process the file and builds a map of words and a 
// set of line numbers in which the word appears
void part2() {
    const string sourcePath {"/Users/yvesgingras/Code/Repos/Course-BeginningCppProgramming/Challanges/20-STL/Ressource"};

    map<string, set<int>> words;
    ifstream in_file {sourcePath + "/words.txt"};
    string line;
    string word;
    int lineNumber{};

    if (in_file) {
        while (getline(in_file,line)){
            lineNumber++;
            stringstream stringStream1(line);
            while (stringStream1 >> word) {
                word = clean_string(word);
                words[word].insert(lineNumber);
            }
        }

        in_file.close();
        display_words(words);
    } else {
        cerr << "Error opening input file" << endl;
    }
}

int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    part1();
    part2();






    return 0;
}