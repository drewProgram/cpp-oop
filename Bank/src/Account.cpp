#include <iostream>
#include <string>
#include "Account.h"

int Account::accountsNumber = 0;

// constructor using initialization list
Account::Account(std::string number, Holder holder)
	: number(number), holder(holder), balance(0)
{
	accountsNumber++;
}

Account::~Account()
{
	accountsNumber--;
}

void Account::Withdraw(float value)
{
	if (value < 0)
	{
		std::cout << "You can't withdraw negative values" << std::endl;
		return;
	}

	float fee = value * GetWithdrawFee();
	float finalValue = value + fee;

	if (finalValue > balance)
	{
		std::cout << "Not enough cash, stranger" << std::endl;
		return;
	}

	balance -= finalValue;
}

void Account::Deposit(float value)
{
	if (value < 0)
	{
		std::cout << "You can't deposit negative values" << std::endl;
		return;
	}

	balance += value;
}

int Account::GetAccountsNumber()
{
	return accountsNumber;
}

float Account::GetBalance() const
{
	return balance;
}

std::string Account::GetNumber() const
{
	return number;
}
