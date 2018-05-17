#include "../../17-SmartPointers/Account.h"
using namespace std;

// Simple Account class

Account::Account() 
    : Account(0.0) {    // delegating constructor
}
        
Account::Account(double balance)
    : balance(balance) { 
}
            
void Account::deposit(double amount) {   
    balance += amount;
}
    
void Account::withdraw(double amount) {
    if (balance-amount >= 0)
        balance-=amount;
    else    
        cout << "Insufficient funds" << endl;
}

ostream &operator<<(ostream &os, const Account &account) {
    os <<  "Account balance: " << account.balance;
    return os;
}
