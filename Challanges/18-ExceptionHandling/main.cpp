#include <iostream>
#include <memory>
#include "AccountsClasses/Account.h"
#include "AccountsClasses/CheckingAccount.h"
#include "AccountsClasses/InsufficientFundsException.h"
#include "AccountsClasses/IllegalBalanceException.h"
#include "AccountsClasses/Savings_Account.h"

//#include "Account.h"
//#include "CheckingAccount.h"
//#include "Savings_Account.h"
//#include "TrustAccount.h"
//#include "IllegalBalanceException.h"

using namespace std;

int main() {
    cout << "\nHello, 18-Exception Handling!" << endl;
     cout << "#############################" << endl<< endl;

    //Testing code here...

    try {
        double depositAmount{100.0};
        unique_ptr<Account> moeAccount = make_unique<Savings_Account>("Moe", depositAmount);
        cout << "Uses moeAccount" << endl;

        double withdrawAmount{50.0};
        if (!moeAccount->withdraw(withdrawAmount))
            throw InsufficientFundsException();

    }
    catch (IllegalBalanceException& exception) {
        cerr << exception.what() << endl;
    }
    catch (InsufficientFundsException& exception) {
        cerr << exception.what() << endl;
    }

    cout << "Program completed successfully" << endl;

    return 0;
}

