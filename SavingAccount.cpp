#include "SavingAccount.h"

void SavingAccount::setAnnualInterestRate(float annualInterestRate)
{
	this->annualInterestRate = annualInterestRate;
}

float SavingAccount::getAnnualInterestRate()
{
	return annualInterestRate;
}

SavingAccount::SavingAccount(string owner, float balance, float annualInterestRate):BankAccount(owner,balance)
{
	setAnnualInterestRate(annualInterestRate);
}
