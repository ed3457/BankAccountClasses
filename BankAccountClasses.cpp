// BankAccountClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SavingAccount.h"
#include "BankAccount.h"
int main()
{    
	try
	{
		BankAccount ba1("Elon Musk", -1500.0);

		cout << ba1.getBalance() << endl;
		cout << ba1.getOwner() << endl;
	}

	catch (int x)
	{
		if (x == 100)
		{
			// log the error as deposit error
			cout << "Deposit is less than 0\n";
			// if you have a windows app: messagebox.show("Deposit is less than 0\n");
		}
		else if (x == 200)
		{
			cout << "Account does not have enough!\n";

		}

	}
	catch (underflow_error e)
	{


	}
	//SavingAccount ba2("Bill Gates", 2000, 0.02);

	//ba2.withdraw(500);// early binding 

	//cout << ba2.getBalance() << endl;
	//cout << ba2.getOwner() << endl;

	/*BankAccount** accounts = new BankAccount * [2];

	accounts[0] = new BankAccount("Elon Musk", 1500.0);
	accounts[1] = new SavingAccount("Bill Gates", 2000, 0.02);*/

	/*BankAccount** accounts = new BankAccount * [2];

	accounts[0] = new BankAccount("Elon Musk", 1500.0);
	accounts[1] = new SavingAccount("Bill Gates", 2000, 0.02);

	for (int i = 0; i < 2;i++)
	{
		accounts[i]->withdraw(500);

	}*/

	/*cout << "=============================\n";
	for (int i = 0; i < 2;i++)
	{
		cout << accounts[i]->getBalance() << endl;
		cout << accounts[i]->getOwner() << endl;

	}*/



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
