#pragma once
#include <string>
using namespace std; 
class BankAccount
{
private: 

	string owner; 
	float balance=0.0; 

public:
	void setOwner(string owner);
	string getOwner();

	// void setBalance(float balance); we will not include as the balance is controlled by deposit and withdraw 
	float getBalance();

	BankAccount();  
	BankAccount(string owner, float balance); 

	void deposit(float amount); 
	void virtual withdraw(float amount);
};

