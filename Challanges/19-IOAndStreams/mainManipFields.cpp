#include <iostream>
#include<iomanip>
#include <exception>

using namespace std;

void ruler() {
    cout << "\n12345678901234567890123456789012345678901234567890" << endl;
}


int main() {
    cout << "Hello, 19-I/O and Streams!" << endl;
    cout << "#############################" << endl << endl;

    int num1 { 1234 };
    double num2 {1234.5678};
    string hello  {"Hello"};

    cout << "\nSet streams are:"
             << "\n" << num1
             << "\n" << num2
             << "\n" << hello << endl;

    // Defaults
    cout << "\n--Defaults -------------------------------------------------------------------" << flush;
    ruler();
    cout << num1
              << num2
              << hello
              << endl;

    // Defaults - one per line
    cout << "\n--Defaults - one per line-----------------------------------------------------" << flush;
    ruler();
    cout << num1 <<endl;
    cout << num2 << endl;
    cout << hello << endl;

    // Set field width to 10
    // Note the default justification is right for num1 only!
    cout << "\n--width 10 for num1-----------------------------------------------------------" << flush;
    ruler();
    cout << setw(10)  << num1
              << num2
              << hello
              << endl;

    // Set field width to 10 for the first 2 outputs
    // Note the default justification is right for both
    cout << "\n--width 10 for num1 and num2------------------------------------------------" << flush;
    ruler();
    cout << setw(10) << num1
              << setw(10) << num2
              << hello
              << endl;

    // Set field width to 10 for all 3 outputs
    // Note the default justification is right for all
    cout << "\n--width 10 for num1 and num2 and hello--------------------------------------" << flush;
    ruler();
    cout << setw(10) << num1
              << setw(10) << num2
              << setw(10) << hello
              << endl;

    // Set field width to 10 for all 3 outputs and justify all left
    cout << "\n--width 10 for num1 and num2 and hello left for all---------------------------" << flush;
    ruler();
    cout << setw(10) << left << num1
              << setw(10) << left << num2
              << setw(10) << left <<  hello
              << endl;

    // setfill to a dash
    // this is persistent
    // Then repeat the previous display
    cout << setfill('-');
    cout << "\n--width 10 for num1 and num2 and hello left for all setfill to dash------------" << flush;
    ruler();
    cout << setw(10) << left << num1
              << setw(10) << left << num2
              << setw(10) << left <<  hello
              << endl;

    // Set width to 10 for all, left justify all and cary the setfill character
    cout << "\n--width 10 for num1 and num2 and hello - setfill varies------------------------" << flush;
    ruler();
    cout << setw(10) << left << setfill('*') << num1
              << setw(10) << left << setfill('#' )<< num2
              << setw(10) << left <<  setfill('-') << hello
              << endl;

    cout << endl << endl;



    return 0;
}