#include <iostream>
#include<vector>
#include "Account.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "Savings_Account.h"


using namespace std;

class Test {
private:
    int data;
public:
    Test() : data{0} {
        cout << "Test constructor (" << data << ")" << endl;
    }
        
    Test(int data) : data {data} {
        cout << "Test constructor (" << data << ")" << endl;
    }

    ~Test() {cout << "Test destructor (" << data << ")" << endl; }

    int get_data() const {
        return data;
    }
};


int main() {
    cout << "Hello, Smart Pointers!" << endl;
    cout << "###########################" << endl<< endl;

    /*raw pointer*/
//    auto* t1 = new Test{1000};
//    delete t1;

    /*smart pointer*/
//    unique_ptr<Test> t1 {new Test{1000}};
//    auto t2 = make_unique<Test>(1000);
//
//    unique_ptr<Test> t3;
//    t3 = move(t1);
//    if (!t1)
//        cout << "t1 is nullptr" << endl;

    /*Accounts classes*/
    unique_ptr<Account> a1 = make_unique<CheckingAccount>("Moe", 5000);
    cout << *a1 << endl;
    a1->deposit(5000);
    cout << *a1 << endl;

    vector<unique_ptr<Account>> accounts;
    accounts.push_back(make_unique<CheckingAccount>("James",100));
    accounts.push_back(make_unique<Savings_Account>("Billy",4000,5.2));
    accounts.push_back(make_unique<TrustAccount>("Bobby",5000,4.5));

    cout << "\nLooping through a vector: " << endl;
    for (const auto& account : accounts) {
        cout << *account << endl;
    }

    return 0;
}