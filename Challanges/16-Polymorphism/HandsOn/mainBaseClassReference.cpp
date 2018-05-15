#include <iostream>
using namespace std;

// This class uses dynamic polymorphism for the withdraw method
// We'll learn about virtual functions in the next video
class Account {
public:
    virtual bool withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() = default;
};

class Checking: public Account  {
public:
    void withdraw(double amount) override {
        std::cout << "In Checking::withdraw" << std::endl;
    }

    ~Checking() override = default;
};

class Savings: public Account  {
public:
    void withdraw(double amount) override {
        std::cout << "In Savings::withdraw" << std::endl;
    }

    ~Savings() override = default;
};

class Trust: public Account  {
public:
    void withdraw (double amount) override {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    ~Trust() override = default;
};

void do_withdraw(Account &account, double amount) {
    account.withdraw(amount);
}

int main() {
    cout << "Hello, 16-Polymorphism!" << endl;
    cout << "###########################" << endl<< endl;

    Account a;
    Account &ref = a;
     ref.withdraw(1000);		    // In Account::withdraw

    Trust t;
    Account &ref1 = t;
    ref1.withdraw(1000);        // In Trust::withdraw

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1, 1000);       // In Account::withdraw
    do_withdraw(a2, 2000);       // In Savings::withdraw
    do_withdraw(a3, 3000);       // In Checking::withdraw
    do_withdraw(a4,  4000);      // In Trust::withdraw



    return 0;
}