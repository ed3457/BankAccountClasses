#pragma once
enum AccountTypes { CheckingAccount, SavingsAccount };
#include "BankAccount.h"
#include "SavingAccount.h"

class Bank
{
private:
	string bankName;
	BankAccount** accounts; // array of pointers to store all accounts 
	int count; 
public:
	void addBankAccount(AccountTypes type); // add new account to the bank

	Bank();// constructor 

	void setBankName(string bn);

	string getBankName();
};

