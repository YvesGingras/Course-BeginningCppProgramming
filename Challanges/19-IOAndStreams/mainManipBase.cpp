#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    cout << "Hello, 19-I/O and Streams!" << endl;
    cout << "#############################" << endl<< endl;

    int num {255};

    cout << "The number used is: " << num << endl;

    cout << "\nDisplaying using different bases" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << dec << num << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;

    cout << "\nDisplaying showing the base prefix for hex and oct" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << showbase;
    cout << dec << num << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;

    cout << "\nDisplay the hex value in uppercase" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << uppercase;
    cout << hex << num << endl;

    cout << "\nDisplay the + sign in front of positive base 10 numbers" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << showpos;
    cout << dec << num << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;

    cout << "\nSetting using the set 'method'" << endl;
    cout.setf(ios::showbase);
    cout.setf(ios::uppercase);
    cout.setf(ios::showpos);

    cout << "\nResetting to defaults" << endl;
    cout << resetiosflags(ios::basefield);
    cout << resetiosflags(ios::showbase);
    cout << resetiosflags(ios::showpos);
    cout << resetiosflags(ios::uppercase);

    cout << "\n------------------------------------------------------------" << endl;
    cout << "Enter an integer : ";
    cin >> num;

    cout << "Decimal default  : " << num << endl;

    cout << "Hexadecimal      : " << hex << num << endl;
    cout << "Hexadecimal      : " << hex << uppercase << num << endl;
    cout << "Hexadecimal      : " << hex  << num << endl;
    cout << "Hexadecimal      : " << hex << nouppercase << num << endl;

    cout << "Octal            : " << oct << num << endl;
    cout << "Hexadecimal      : " << hex << showbase << num << endl;
    cout << "Octal            : " << oct << num << endl;

    cout << endl << endl;


    return 0;
}