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

std::ostream& operator<<(std::ostream& ostream, CheckingAccount checkingAccount) {
    ostream << "[Checking Account: " << checkingAccount.name << ": " << checkingAccount.balance << ", " << checkingAccount.m_withdrawalFee;
    return ostream;
}
