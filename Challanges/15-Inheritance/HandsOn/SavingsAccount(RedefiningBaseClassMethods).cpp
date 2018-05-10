#include "SavingsAccount.h"


using namespace std;

SavingsAccount::SavingsAccount()
        : SavingsAccount(0.0, 0.0) {
    //empty
}

SavingsAccount::SavingsAccount(double balance, double intRate)
        : Account(balance), m_intRate {intRate} {
    //empty
}

void SavingsAccount::deposit(double amount) {
    amount += amount * (m_intRate/100);
    Account::deposit(amount);
}

std::ostream& operator<<(std::ostream& ostream, const SavingsAccount& savingsAccount) {
    ostream << "Savings account balance: " << savingsAccount.balance << "Interest rate: " << savingsAccount.m_intRate;
    return ostream;
}



//avingsAccount::SavingsAccount(double balance, double m_intRate)
//    : Account(balance), m_intRate{m_intRate} {
//
//    }
//
//SavingsAccount::SavingsAccount()
//    : SavingsAccount{0.0, 0.0} {
//
//    }
//
//void SavingsAccount::deposit(double amount) {
//    amount = amount + (amount * m_intRate/100);
//    Account::deposit(amount);
//}
//
//ostream &operator<<(ostream &os, const SavingsAccount &account) {
//    os << "Savings account balance: " << account.balance << " Interest rate: " << account.m_intRate;
//    return os;
//}