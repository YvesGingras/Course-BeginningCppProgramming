//
// Created by Yves Gingras on 18-05-08.
//

#include <iostream>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount()
    : m_interestRate{3.0} {}

SavingsAccount::~SavingsAccount() {

}

void SavingsAccount::Deposit(double amount) {
    std::cout << "Savings Account deposit called with " << amount << std::endl;

}

void SavingsAccount::Withdraw(double amount) {
    std::cout << "Savings Account withdraw called with " << amount << std::endl;

}
