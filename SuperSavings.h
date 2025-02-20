#pragma once
#include "SavingAccount.h"
class SuperSavings :public SavingAccount
{
public:
	void withdraw(float a); // overide 
	SuperSavings();
	SuperSavings(string owner, float balance, float annualInterestRate);
};

