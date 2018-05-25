#include <iostream>
using namespace std;

double calculate_mpg(int miles, int gallons) {
    if (gallons == 0)
        throw 0;

    return static_cast<double>(miles) / gallons;
}


int main() {
    cout << "\nHello, 18-Exception Handling!" << endl;
    cout << "#############################" << endl<< endl;

    int miles {};
    int gallons {};
    double miles_per_gallon {};

    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;

    try {
        miles_per_gallon = calculate_mpg(miles,gallons);
        cout << "Result: " << miles_per_gallon << endl;
    }
    catch (int& exception){
        cerr << "Sorry, can't divide by zero." << endl;
    }

    cout << "Bye" << endl;

    return 0;
}