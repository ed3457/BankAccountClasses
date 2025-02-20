// BankAccountClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SavingAccount.h"
#include "BankAccount.h"
#include "Bank.h"


void fun1()
{

	Bank Chase1;

	Chase1.addBankAccount(AccountTypes::CheckingAccount);
	Chase1.addBankAccount(AccountTypes::SavingsAccount);
	Chase1.addBankAccount(AccountTypes::SuperSavingsAccount);

	Chase1.massWithdraw(50);
	Chase1.printAccountInfo();
}
int main()
{

	fun1();

}