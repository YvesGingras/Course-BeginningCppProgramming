// Simple Account 
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
#include "IPrintable.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

class Account : public IPrintable{
//    friend std::ostream &operator<<(std::ostream &os, const Account &account);

private:   
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;

protected:
    std::string name;
    double balance;

public:
    Account(std::string name = def_name, double balance = def_balance);
    ~Account() override = default;;

    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    void Print(std::ostream& ostream) const override;
    double get_balance() const;

};
#endif