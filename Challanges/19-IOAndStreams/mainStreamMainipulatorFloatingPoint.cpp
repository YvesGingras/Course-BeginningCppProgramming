#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    cout << "Hello, 19-I/O and Streams!" << endl;
    cout << "#############################" << endl<< endl;

    double num1 {123456789.987654321};
    double num2 {1234.5678};
    double num3 {1234.0}; //double

    cout <<  "Number used are: " << endl
            << "123456789.987654321" << endl
            << "1234.5678" << endl
            << "1234.0" << endl;
    cout << "=======================================" << endl;


//    cout << "\nUsing default settings" << endl;
    cout << "\n--Defaults ----------------------------" << endl;
    cout << num1 << endl;
    cout << num2<< endl;
    cout << num3<< endl;

    //Note how since we can't display in precision 2 scientific notation is used
    cout << setprecision(2);
    cout << "\n--Precision 2----------------------------" << endl;
    cout << num1 << endl;
    cout << num2<< endl;
    cout << num3<< endl;

//    // Using precision 5
    cout << setprecision(5);
    cout << "\n--Precision 5----------------------------" << endl;
    cout << num1 << endl;
    cout << num2<< endl;
    cout << num3<< endl;

    // Using precision 9
    cout << setprecision(9);
    cout << "\n--Precision 9----------------------------" << endl;
    cout << num1 << endl;
    cout << num2<< endl;
    cout << num3<< endl;

    // Using precision 3 and fixed
    cout << setprecision(3) << fixed;
    cout << "\n--Precision 3 - fixed ----------------------------" << endl;
    cout << num1 << endl;
    cout << num2<< endl;
    cout << num3<< endl;

    // Using precision  3, fixed and scientific notation
    // Note precision is after the decimal
    cout << setprecision(3)<< scientific;
    cout << "\n--Precision 3 - scientific (still fixed from above) ----------------------------" << endl;
    cout << num1 << endl;
    cout << num2<< endl;
    cout << num3<< endl;

    // Same but display capital 'E' in scientific
    cout << setprecision(3) << scientific << uppercase;
    cout << "\n--Precision 3 - scientific - uppercase  ----------------------------" << endl;
    cout << num1 << endl;
    cout << num2<< endl;
    cout << num3<< endl;

    // Show '+' symbol for positive numbers
    cout << setprecision(3) << fixed << showpos;
    cout << "\n--Precision 3 - fixed - showpos ----------------------------" << endl;
    cout << num1 << endl;
    cout << num2<< endl;
    cout << num3<< endl;


    // Back to defaults
    cout << "\nBack to default..." << endl;
    cout.unsetf(ios::scientific | ios::fixed);
    cout << resetiosflags(ios::showpos);

    // Show trailing zeroes up to precision 10
    cout << setprecision(10) << showpoint;
    cout << "\n-- precision 10 - showpoint ----------------------------" << endl;
    cout << num1 << endl;
    cout << num2<< endl;
    cout << num3<< endl;

    // Back to defaults
    cout.unsetf(ios::scientific | ios::fixed);
    cout << setprecision(6);
    cout << resetiosflags(ios::showpos);
    cout << resetiosflags(ios::showpoint);

    cout << "\n--Back to defaults----------------------------" << endl;
    cout << num1 << endl;
    cout << num2<< endl;
    cout << num3<< endl;

    return 0;
}