#pragma once

#include <string>
#include "Holder.h"

class Account
{
private:
	static int accountsNumber;

public:
	static int GetAccountsNumber();

private:
	std::string number;
	Holder holder;
	float balance;

public:
	Account(std::string number, Holder holder);
	~Account();

	void Withdraw(float value);
	void Deposit(float value);

	// const in the definition tells the compiler the method won't set anything in the class
	float GetBalance() const;
	std::string GetNumber() const;
};