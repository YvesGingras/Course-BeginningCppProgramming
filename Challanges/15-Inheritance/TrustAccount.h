//
// Created by Yves Gingras on 18-05-11.
//

#ifndef CHALLANGES_TRUSTACCOUNT_H
#define CHALLANGES_TRUSTACCOUNT_H

#include "Savings_Account.h"


class TrustAccount : public Savings_Account
{
    static constexpr const char *defName = "Unnamed Trust Account";
    static constexpr double defBalance = 0.0;
    static constexpr double defIntRate = 0.0;
    const double bonusThreshold {5000};
    const double bonusValue = {50};
    const int maxWithdrawalQty{3};

    int m_withdrawalCounter{0};


public:
    TrustAccount(std::string name = defName, double balance = defBalance, double intRate = defIntRate);
    bool deposit(double amount);
    bool withdraw(double amount);

    //overloaded operator
    friend std::ostream &operator<<(std::ostream &os, const TrustAccount &account);

};


#endif //CHALLANGES_TRUSTACCOUNT_H
