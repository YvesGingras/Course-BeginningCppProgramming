//
// Created by Yves Gingras on 18-05-08.
//

#ifndef CHALLANGES_ACCOUNT_H
#define CHALLANGES_ACCOUNT_H

class Account
{
public:
    double m_balance;
    std::string m_name;

    Account();
    ~Account();

    void Deposit(double amount);
    void Withdraw(double amount);

};


#endif //CHALLANGES_ACCOUNT_H
