#include <iostream>
#include "Functions.h"



using namespace std;

int main() {
    cout << "Hello, 11-Functions!" << endl;
    cout<< endl;

    RunProcess();
    return 0;
}

void RunProcess() {
    vector<int> integerList{12, 3265 , 23, 2326};
    char selection{};

    cout << "\nChoose from the following options by typing the letter identifying it." << endl;
    do {
        selection = GetUserInput();

        switch (selection) {
            case 'P':
                PrintToScreen(integerList);
                break;
            case 'A':
                AddNumber(integerList);
                break;
            case 'F':
                HandleFind(integerList);
                break;
            case 'M':
                CalculateAverage(integerList);
                break;
            case 'S':
                GetSmallest(integerList);
                break;
            case 'L':
                GetLargest(integerList);
                break;
            case 'C':
                ClearData(integerList);
                break;
            case 'Q':
                cout << "Goodbye..." << endl;
                break;
            default:
                cout << "'" << selection << "', " << "Unknown selection... " << endl;
        }
    } while (selection != 'Q');


/*
    do {
        selection = GetUserInput();

        //print to screen
        if (selection == 'P') {
            PrintToScreen(integerList);
        }
        //add value(s)
        else if (selection == 'A') {
            AddNumber(integerList);
        }
        // calculate average
        else if (selection == 'M') {
            CalculateAverage(integerList);
        }
        //get smallest
        else if (selection == 'S') {
            GetSmallest(integerList);
        }
        //get largest
        else if (selection == 'L') {
            GetLargest(integerList);
        }
        //quit
        else if (selection == 'Q') {
            cout << "Goodbye..." << endl;
        }
        //unknown selection
        else
            cout << "'" << selection << "', " << "Unknown selection... " << endl;

    } while (selection != 'Q');
*/
}














