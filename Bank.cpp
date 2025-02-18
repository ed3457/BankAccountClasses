#include "Bank.h"

void Bank::addBankAccount(AccountTypes type)// Factory function 
{
	switch (type)
	{
	case CheckingAccount:
	{
		string cn;
		float b;
		// fill the data
		cout << "Enter the client name:";
		cin >> cn;
		cout << "Enter the balance:";
		cin >> b;
		accounts[count++] = new BankAccount(cn, b);
		
	}
		break;
	case SavingsAccount:
	{
		string cn;
		float b;
		float rate; 
		cout << "Enter the client name:";
		cin >> cn;
		cout << "Enter the balance:";
		cin >> b;
		cout << "Enter the rate:";
		cin >> rate;
		accounts[count++] = new SavingAccount(cn,b,rate);
	}
		break;
	default:
		break;
	}


}

Bank::Bank()
{
	setBankName("Bank1");
	count = 0;
	accounts = new BankAccount * [100];// array of pointers 
}

void Bank::setBankName(string bn)
{
	bankName = bn;
}

string Bank::getBankName()
{
	return bankName;
}


