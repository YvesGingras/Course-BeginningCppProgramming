//
// Created by Yves Gingras on 18-05-11.
//

#include "CheckingAccount.h"


CheckingAccount::CheckingAccount(std::string name, double balance, double withdrawalFee)
        : Account{name,balance}, m_withdrawalFee{withdrawalFee} {
    //Empty
}

bool CheckingAccount::withdraw(double amount) {
    return Account::withdraw(amount + m_withdrawalFee);
}

bool CheckingAccount::deposit(double amount) {
    return Account::deposit(amount);
}

void CheckingAccount::Print(std::ostream& ostream) const {
    ostream.precision(2);
    ostream << std::fixed;
    ostream << "[Checking Account-Print: "
            << name << ": "
            << balance << ", "
            << m_withdrawalFee;
}
