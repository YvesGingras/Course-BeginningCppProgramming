#include "Account.h"

Account::Account(std::string name, double balance) 
    : name{name}, balance{balance} {
}

bool Account::deposit(double amount) {
    if (amount < 0)
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount) {
    if (balance-amount >=0) {
        balance-=amount;
        return true;
    } else
        return false;
}

void Account::Print(std::ostream& ostream) const {
     ostream.precision(2);
     ostream << std::fixed;
    ostream <<  "[Account-Print: "
        << name << ": "
        << balance << "]";
}

double Account::get_balance() const {
    return balance;
}

//Friend fucntion (delcared in IPrintable)
std::ostream& operator<<(std::ostream& ostream, const IPrintable& object) {
    object.Print(ostream);
    return ostream;
}
