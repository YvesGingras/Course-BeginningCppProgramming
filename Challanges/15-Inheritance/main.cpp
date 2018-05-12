#include <iostream>
#include <vector>
//#include "Savings_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    cout << "Hello, 15-Inheritance!" << endl;
    cout << "###########################" << endl<< endl;

    cout.precision(2);
    cout << fixed;

    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);

    // Savings
    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    //Checking Account
    vector<CheckingAccount> checkingAccounts;
    checkingAccounts.push_back(CheckingAccount{});
    checkingAccounts.push_back(CheckingAccount{"Checking1"});
    checkingAccounts.push_back(CheckingAccount{"Checking2",3000});
    checkingAccounts.push_back(CheckingAccount{"Checking3",2000,0.0});

    display(checkingAccounts);
    deposit(checkingAccounts, 1000);
    withdraw(checkingAccounts, 2999);

    //Trust Account
    vector<TrustAccount> trustAccounts;
    trustAccounts.push_back(TrustAccount{});
    trustAccounts.push_back(TrustAccount{"Trust1"});
    trustAccounts.push_back(TrustAccount{"Trust2",2000});
    trustAccounts.push_back(TrustAccount{"Trust3",1000});

    display(trustAccounts);
    deposit(trustAccounts,5001);
    deposit(trustAccounts,-1);
    withdraw(trustAccounts,10);
    withdraw(trustAccounts,20);
    withdraw(trustAccounts,1200);
    withdraw(trustAccounts,50);
    withdraw(trustAccounts,1);
    return 0;
}