#pragma once
#include <string>
#include <iostream>
using namespace std; 
class BankAccount
{
private: 

	string owner; 
	float balance=0.0; 

public:
	void setOwner(string owner);
	string getOwner();

	void setBalance(float balance); 
	float getBalance();

	BankAccount();  
	BankAccount(string owner, float balance); 

	void deposit(float amount); 
	void withdraw(float amount);
};

