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

std::variant<Account::WithdrawError, float> Account::Withdraw(float value)
{
	if (value < 0)
	{
		std::cout << "You can't withdraw negative values" << std::endl;
		return NegativeValue;
	}

	float fee = value * GetWithdrawFee();
	float finalValue = value + fee;

	if (finalValue > balance)
	{
		std::cout << "Not enough cash, stranger" << std::endl;
		return InsufficientBalance;
	}

	balance -= finalValue;
	return balance;
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

void Account::operator+=(float value)
{
	Deposit(value);
}

bool Account::operator<(const Account& account)
{
	return this->balance < account.balance;
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
