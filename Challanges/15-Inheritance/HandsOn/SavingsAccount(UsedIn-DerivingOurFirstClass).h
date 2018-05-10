//
// Created by Yves Gingras on 18-05-08.
//

#ifndef CHALLANGES_SAVINGSACCOUNT_H
#define CHALLANGES_SAVINGSACCOUNT_H

#include "SavingsAccount(UsedIn-DerivingOurFirstClass).h"

class SavingsAccount : public Account
{
public:
    double m_interestRate;

    SavingsAccount();
    ~SavingsAccount();

    void Deposit(double amount);
    void Withdraw(double amount);


};


#endif //CHALLANGES_SAVINGSACCOUNT_H
