#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"


using namespace std;

int main() {
    std::cout << "Hello, 15-Inheritance!" << std::endl;
    std::cout << "###########################" << std::endl;
    std::cout <<  std::endl;


    // Use the Account class
    cout << "\n=== Account ==================================" << endl;
    Account account {};
    account.Deposit(2000.0);
    account.Withdraw(500.0);

    cout << endl;

    Account* accountPtr{nullptr};
    accountPtr = new Account();
    accountPtr->Deposit(1000.0);
    accountPtr->Withdraw(500.0);
    delete accountPtr;

    // Use the Savings Account class

    cout << "\n=== Savings Account ==========================" << endl;
    SavingsAccount savingsAccount {};
    savingsAccount.Deposit(2000.0);
    savingsAccount.Withdraw(500.0);

    cout << endl;

    SavingsAccount *p_sav_acc {nullptr};
    p_sav_acc = new SavingsAccount();
    p_sav_acc->Deposit(1000.0);
    p_sav_acc->Withdraw(500.0);
    delete p_sav_acc;

    cout << "\n==============================================" << endl;

    return 0;
}