#include <iostream>
#include <memory>

#include "Account.h"
#include "CheckingAccount.h"
#include "Savings_Account.h"
#include "TrustAccount.h"
#include "IllegalBalanceException.h"

using namespace std;


int main() {
    cout << "\nHello, 18-Exception Handling!" << endl;
    cout << "#############################" << endl<< endl;

    try {
        unique_ptr<Account> moeAccount = make_unique<CheckingAccount>("Moe",-10.0);
        cout << *moeAccount << endl;
    }
    catch (const IllegalBalanceException& exception) {
        cerr << "Couldn't create account - negative balance" << endl;
    }

    cout << "Program completed successfully." << endl;

    return 0;
}

