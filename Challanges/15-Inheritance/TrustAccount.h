//
// Created by Yves Gingras on 18-05-11.
//

#ifndef CHALLANGES_TRUSTACCOUNT_H
#define CHALLANGES_TRUSTACCOUNT_H

#include "Savings_Account.h"


class TrustAccount : public Savings_Account
{
    static constexpr const char *m_defName = "Unnamed Trust Account";
    static constexpr double m_defBalance = 0.0;
    static constexpr double m_defIntRate = 0.0;

    const double m_bonusThreshold {5000};
    const double m_bonusValue = {50};
    int m_withdrawalCounter{1};

public:
    TrustAccount(std::string name = m_defName, double balance = m_defBalance, double intRate = m_defIntRate);
    bool deposit(double amount);
    bool withdraw(double amount);

    //overloaded operator
    friend std::ostream &operator<<(std::ostream &os, const TrustAccount &account);

};


#endif //CHALLANGES_TRUSTACCOUNT_H
