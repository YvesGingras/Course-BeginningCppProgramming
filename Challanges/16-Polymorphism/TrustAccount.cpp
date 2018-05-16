//
// Created by Yves Gingras on 18-05-11.
//

#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance, double intRate)
        : Savings_Account(name, balance, intRate) {
    //Empty
}

//std::ostream& operator<<(std::ostream& os, const TrustAccount& account) {
//    os << "[Trust Account: "
//        << account.name << ": "
//        << account.balance << ", "
//        << account.int_rate << "%, "
//        << "withdawals: " << account.m_withdrawalCounter << "]";
//
//    return os;
//}

bool TrustAccount::deposit(double amount) {
    return Savings_Account::deposit(amount > bonusThreshold ? amount + bonusValue : amount);
}

bool TrustAccount::withdraw(double amount) {
    if (m_withdrawalCounter < maxWithdrawalQty){
        if (amount < balance * .20){
            m_withdrawalCounter++;
            return Account::withdraw(amount);
        }
    }

    return false;
}

void TrustAccount::Print(std::ostream& ostream) const {
    ostream.precision(2);
    ostream << std::fixed;
    ostream << "[Trust Account-Print: "
            << name << ": "
            << balance << ", "
            << int_rate << "%, "
            << "withdawals: " << m_withdrawalCounter << "]";
}