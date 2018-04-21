#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    cout << "Hello, 09-Controlling Program flow!" << endl;
    cout << endl;
/************************************************************************************************/
    cout << "This program will prompt to enter a list of integers values,\n"
            "and then let you choose to make various operations on them." << endl;

    cout << "\nChoose from the following options by typing the letter identifying it." << endl;

    vector<int> integerList{};
    char selection{};

    do {
        cout << "\n -----------------------------" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        cout << endl;
        //print to screen
        if(selection == 'P' || selection== 'p') {
            if (integerList.empty())
                cout << " [] - The list is empty." << endl;
            else {
                //build printable list
                cout << "[";
                for (auto &&item : integerList) {
                    cout << ' ' << item;
                }
                cout << " ]" << endl;
            }
        }
        //add value(s)
        else if (selection == 'A' || selection== 'a') {
            int addedInteger{};
            cout << "Enter an integer value: ";
            cin >> addedInteger;
            integerList.push_back(addedInteger);
            cout << addedInteger << " added." << endl;
        }
        // calculate average
        else if (selection == 'M' || selection== 'm') {
            if (integerList.empty()) {
                cout << "No data available!" << endl;
                continue;
            }

            int total{};
            for (auto integerValue : integerList)
                total += integerValue;

            cout << "The mean is: " << (static_cast<double>(total)/integerList.size());
        }
        //get smallest
        else if (selection == 'S' || selection== 's') {
            if (integerList.empty()) {
                cout << "No data available!" << endl;
                continue;
            }

            int smallest{integerList.at(0)};
            for (auto integerValue : integerList) {
                if (integerValue < smallest)
                    smallest = integerValue;
            }
            cout << "The smallest number is: " << smallest << endl;
        }
        //get largest
        else if (selection == 'L' || selection== 'l') {
            if (integerList.empty()) {
                cout << "No data available!" << endl;
                continue;
            }

            int largest{integerList.at(0)};
            for (auto integerValue : integerList) {
                if (integerValue > largest)
                    largest = integerValue;
            }
            cout << "The largest number is: " << largest << endl;
        }
        //quit
        else if (selection == 'Q' || selection== 'q') {
            cout << "Goodbye..." << endl;
        }
        //unknown selection
        else
            cout << "'" << selection << "', " << "Unknown selection... " << endl;

    } while (selection != 'Q' && selection != 'q');

    return 0;
}