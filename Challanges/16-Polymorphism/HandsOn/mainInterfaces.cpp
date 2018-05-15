 #include <iostream>
#include "IPrintable.h"

using namespace std;

 ostream& operator<<(ostream& ostream, const IPrintable& rhs) {
     rhs.print(ostream);
     return ostream;
 }

 class Account : public IPrintable {
 public:
     virtual bool withdraw(double amount) {
         std::cout << "In Account::withdraw" << std::endl;
     }

     void print( ostream& ostream) const override {
        ostream << "Account display";
     }

     virtual ~Account() {  }
 };

 class Checking: public Account  {
  public:
     void withdraw(double amount) override {
         std::cout << "In Checking::withdraw" << std::endl;
     }

     ~Checking() override {  }

     void print(ostream& ostream) const override {
         ostream << "Checking display";
     }
 };

 class Savings: public Account {
  public:
     void withdraw(double amount) override {
         std::cout << "In Savings::withdraw" << std::endl;
     }

     void print(ostream& ostream) const override {
         ostream << "Savings display";
     }

     ~Savings() override {  }
 };

 class Trust: public Account  {
  public:
     void withdraw(double amount) override {
         std::cout << "In Trust::withdraw" << std::endl;
     }

     void print(ostream& ostream) const override {
         ostream << "Trust display";
     }

     ~Trust() override {  }
 };

  class Dog : public IPrintable {
  public:
      void print(std::ostream& ostream) const override {
          ostream << "Woof woof";
      }
  };

  void Print(const IPrintable& object) {
      cout << object << endl;
  }

int main() {
    cout << "Hello, 16-Polymorphism!" << endl;
    cout << "###########################" << endl<< endl;

    Dog dog;
    cout << dog << endl;

    Dog* dogPtr = new Dog;
    cout << *dogPtr << endl;

    Print(dog);

    auto*p1 = new Account();
    std::cout << *p1<< std::endl;

    Account *p2 = new Checking();
    std::cout << *p2<< std::endl;

//    Account a;
//    std::cout << a<< std::endl;
//
//    Checking c;
//    std::cout << c << std::endl;
//
//    Savings s;
//    std::cout << s << std::endl;
//
//    Trust t;
//    std::cout << t << std::endl;

    delete p1;
    delete p2;


    return 0;
}