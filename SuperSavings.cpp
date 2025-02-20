#include "SuperSavings.h"

void SuperSavings::withdraw(float a)
{
	SavingAccount::withdraw(a+100);
}

SuperSavings::SuperSavings()
{
}

SuperSavings::SuperSavings(string owner, float balance, float annualInterestRate):SavingAccount(owner,  balance,  annualInterestRate)
{
}
