#include <iostream>

using namespace std;

int main() {
    cout << "Hello, 08-Statements and Operators!" << endl;
    cout << endl;

    int changeAmount{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{}, remaining{};

    const int dollarValue{100}, quarterValue{25}, dimeValue{10}, nickelValue{5};

    cout << "Enter in 'cents (integer)', the amount of change to distribute: ";
    cin >> changeAmount;

    dollars = changeAmount / dollarValue;
    remaining = changeAmount - dollars * dollarValue;

    quarters = remaining / quarterValue;
    remaining -= quarters * quarterValue;

    dimes = remaining / dimeValue;
    remaining -= dimes * dimeValue;

    nickels = remaining / nickelValue;
    remaining -= nickels * nickelValue;

    pennies = remaining;

    cout << endl;
    cout << "===================================" << endl;
    cout << "Distribute change as follow:" << endl
         << "Dollars: " << dollars << endl
         << "Quarters: " << quarters << endl
         << "Dimes: " << dimes << endl
         << "Nickels: " << nickels << endl
         << "Pennies: " << pennies << endl;

/*===================================================================*/
    dollars = quarters = dimes = nickels = pennies = 0;

    dollars = changeAmount / dollarValue;
    remaining = changeAmount % dollarValue;

    quarters = remaining / quarterValue;
    remaining %= quarterValue;

    dimes = remaining / dimeValue;
    remaining %= dimeValue;

    nickels = remaining / nickelValue;
    remaining %= nickelValue;

    pennies = remaining;

    cout << endl;
    cout << "=============(using module operator)======================" << endl;
    cout << "Distribute change as follow:" << endl
         << "Dollars: " << dollars << endl
         << "Quarters: " << quarters << endl
         << "Dimes: " << dimes << endl
         << "Nickels: " << nickels << endl
         << "Pennies: " << pennies << endl;


















    return 0;
}