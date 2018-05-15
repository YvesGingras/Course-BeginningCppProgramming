#include <iostream>
using namespace std;

// This class uses dynamic polymorphism for the withdraw method
class Account {
public:
    virtual bool withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
};

class Checking: public Account  {
public:
    void withdraw(double amount) override {
        std::cout << "In Checking::withdraw" << std::endl;
    }
};

class Savings: public Account  {
public:
    void withdraw(double amount) override {
        std::cout << "In Savings::withdraw" << std::endl;
    }
};

class Trust: public Account  {
public:
    void withdraw(double amount) override {
        std::cout << "In Trust::withdraw" << std::endl;
    }
};

int main() {
    cout << "Hello, 16-Polymorphism!" << endl;
    cout << "###########################" << endl<< endl;

    std::cout << "\n === Pointers ==== " << std::endl;
    auto *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);


    std::cout << "\n === Clean up ==== " << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;


    return 0;
}