// BankAccountClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SavingAccount.h"
#include "BankAccount.h"
#include "Bank.h"
int main()
{

	Bank Chase1;

	Chase1.addBankAccount(AccountTypes::CheckingAccount);
	Chase1.addBankAccount(AccountTypes::SavingsAccount);

	for (int i = 0; i < 2; i++)
		Chase1.getAccount(i).withdraw(100);

}