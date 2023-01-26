#pragma once
#include "BankAccount.h"
class SavingAccount :  public BankAccount
{
private: 
	float annualInterestRate; 

public: 

	void setAnnualInterestRate(float annualInterestRate);
	float getAnnualInterestRate();

	SavingAccount(string owner, float balance, float annualInterestRate);

	void withdraw(float amount);// override 
};

