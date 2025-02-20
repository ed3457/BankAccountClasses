#pragma once
enum AccountTypes { CheckingAccount, SavingsAccount,SuperSavingsAccount };
#include "BankAccount.h"
#include "SavingAccount.h"
#include "SuperSavings.h"
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

	void massWithdraw(float amount); 
	void printAccountInfo(); 
	~Bank(); // Destructor 
};

