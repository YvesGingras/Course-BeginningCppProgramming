#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"

// Utility helper functions for Account class
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// Utility helper functions for Savings Account class
void display(const std::vector<Savings_Account> &accounts);
void deposit(std::vector<Savings_Account> &accounts, double amount);
void withdraw(std::vector<Savings_Account> &accounts, double amount);

// Utility helper functions for Checking Account class
void display(const std::vector<CheckingAccount> &checkingAccounts);
void deposit(std::vector<CheckingAccount> &checkingAccounts, double amount);
void withdraw(std::vector<CheckingAccount> &checkingAccounts, double amount);

// Utility helper functions for Trust Account class
void display(const std::vector<TrustAccount> &trustAccounts);
void deposit(std::vector<TrustAccount> &trustAccounts, double amount);
void withdraw(std::vector<TrustAccount> &trustAccounts1, double amount);

#endif