//
// Created by Yves Gingras on 18-05-08.
//

#include <iostream>
#include "Account.h"

Account::Account()
    : m_balance{0}, m_name{"An Account"} {}

Account::~Account() {}

void Account::Deposit(double amount) {
    std::cout << "Account deposit called with " << amount << std::endl;
}

void Account::Withdraw(double amount) {
    std::cout << "Account withdraw called with " << amount << std::endl;
}

