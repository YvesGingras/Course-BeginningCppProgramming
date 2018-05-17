#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "../../17-SmartPointers/Account.h"

// Deposit method increments amount to be deposited by amount * int_rate percentage!!
// Withdraw method does not specialize

class SavingsAccount: public Account {
    friend std::ostream& operator<<(std::ostream& ostream, const SavingsAccount& savingsAccount);

protected:
   double m_intRate;

public:
    SavingsAccount();
    SavingsAccount(double balance, double intRate);
    void deposit(double amount); // specialized
};

#endif // _SAVINGS_ACCOUNT_H_
