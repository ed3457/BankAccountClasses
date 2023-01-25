#include "BankAccount.h"

void BankAccount::setOwner(string owner)
{
    this->owner = owner; 

}

string BankAccount::getOwner()
{
    return owner;
}

float BankAccount::getBalance()
{
    return balance;
}

BankAccount::BankAccount(string owner, float balance)
{
   // this->owner = owner;
    setOwner(owner);

   // this->balance = balance; 
    deposit(balance);
}

void BankAccount::deposit(float amount)
{
    balance = balance + amount;
}

void BankAccount::withdraw(float amount)
{
    balance = balance - amount;
}
