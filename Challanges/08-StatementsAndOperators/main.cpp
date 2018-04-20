#include <iostream>

using namespace std;

int main() {
    cout << "Hello, 08-Statements and Operators!" << endl;
    cout << endl;

    int changeAmount{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{}, remaining{};

    cout << "Enter in 'cents (integer)', the amount of change to distribute: ";
    cin >> changeAmount;

    dollars = changeAmount / 100;
    remaining = changeAmount - dollars * 100;

    quarters = remaining / 25;
    remaining -= quarters * 25;

    dimes = remaining / 10;
    remaining -= dimes * 10;

    nickels = remaining / 5;
    remaining -= nickels * 5;

    pennies = remaining;

    cout << endl;
    cout << "===================================" << endl;
    cout << "Distribute chane as follow:" << endl
         << "Dollars: " << dollars << endl
         << "Quarters: " << quarters << endl
         << "Dimes: " << dimes << endl
         << "Nickels: " << nickels << endl
         << "Pennies: " << pennies << endl;

    return 0;
}