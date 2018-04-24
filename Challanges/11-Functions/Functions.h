//
// Created by Yves Gingras on 18-04-23.
//
#include <vector>

using namespace std;

//Templates
void RunProcess();
//char GetUserInpupt();
//void PrintToScreen(const vector<int> &integerList);
//void AddNumber(vector<int> &integerList);
//void CalculateAverage(const vector<int> &integerList);
//void GetSmallest(const vector<int> &integerList);
//void GetLargest(const vector<int> &integerList);
//void ClearData(const vector<int> &integerList);

//methods
char GetUserInput() {
    char selection{};

    cout << "\n -----------------------------" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "C - Clear current data" << endl;
    cout << "Q - Quit" << endl;

    cout << "\nEnter your selection: ";
    cin >> selection;
    selection = static_cast<char>(toupper(selection));

    return selection;
}

void PrintToScreen(const vector<int> &integerList) {
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

void AddNumber(vector<int> &integerList) {
    int addedInteger{};
    cout << "Enter an integer value: ";
    cin >> addedInteger;
    integerList.push_back(addedInteger);
    cout << addedInteger << " added." << endl;
}

void CalculateAverage(const vector<int> &integerList) {
    if (integerList.empty()) {
        cout << "No data available!" << endl;
    }
    else {
        int total{};
        for (auto integerValue : integerList)
            total += integerValue;

        cout << "The mean is: " << (static_cast<double>(total) / integerList.size()) << endl;
    }
}

void GetSmallest(const vector<int> &integerList) {
    if (integerList.empty()) {
        cout << "No data available!" << endl;
    }
    else {
        int smallest{integerList.at(0)};
        for (auto integerValue : integerList) {
            if (integerValue < smallest)
                smallest = integerValue;
        }
        cout << "The smallest number is: " << smallest << endl;
    }
}

void GetLargest(const vector<int> &integerList) {
    if (integerList.empty()) {
        cout << "No data available!" << endl;
    }
    else {
        int largest{integerList.at(0)};
        for (auto integerValue : integerList) {
            if (integerValue > largest)
                largest = integerValue;
        }
        cout << "The largest number is: " << largest << endl;
    }
}

void ClearData(vector<int> &integerList) {
    integerList.clear();
    cout << " [] - The list is now empty." << endl;
}
