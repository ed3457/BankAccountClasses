#include "BankAccount.h"

void BankAccount::setOwner(string owner)
{
     this->owner = owner; 

}

string BankAccount::getOwner()
{
    return owner;
}

void BankAccount::setBalance(float balance)
{
    this->balance = balance;
}

float BankAccount::getBalance()
{
    return balance;
}

BankAccount::BankAccount()
{
}

BankAccount::BankAccount(string owner, float balance)
{
   // this->owner = owner;
    setOwner(owner);

   // this->balance = balance; 
    deposit(balance);
}

void BankAccount::deposit(float amount)
{   // validate if the amount is larger than 0
    if (amount > 0)
    
    balance = balance + amount;
}

void BankAccount::withdraw(float amount)
{
    if (balance - amount < 0)
        cout<<"You don't have enough!";
    else

    balance = balance - amount;
}
