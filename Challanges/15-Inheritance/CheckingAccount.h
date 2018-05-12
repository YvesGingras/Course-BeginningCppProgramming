//
// Created by Yves Gingras on 18-05-11.
//

#ifndef CHALLANGES_CHECKINGACCOUNT_H
#define CHALLANGES_CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account
{
    static constexpr const char *m_defName = "Unnamed Checking Account";
    static constexpr double m_defBalance{0.0};
    static constexpr double m_defWithdrawalFee = 1.50;
    double m_withdrawalFee{};

public:
    CheckingAccount(std::string name = m_defName,
                    double balance = m_defBalance,
                    double withdrawalFee = m_defWithdrawalFee
                    );

    bool withdraw(double amount);

    //global operator overload
    friend std::ostream& operator<<(std::ostream& ostream, CheckingAccount checkingAccount);
};

#endif //CHALLANGES_CHECKINGACCOUNT_H
