#pragma once

#include <string>
#include <utility>
#include <variant>
#include "Holder.h"

class Account
{
private:
	static int accountsNumber;

public:
	static int GetAccountsNumber();

protected:
	float balance;

private:
	std::string number;
	Holder holder;

public:
	Account(std::string number, Holder holder);
	// always use virtual on base classes destructors
	// if u don't, when creating a child class referencing the base class the child destructor won't
	// be called.
	virtual ~Account();

	enum WithdrawError
	{
		NegativeValue, InsufficientBalance
	};

	// instead of variant, u could use the pair to return a status message and the balance value.
	// (make_pair)

	// variant returns one of the two values (works only from C++ 17 on)
	std::variant<WithdrawError, float> Withdraw(float value);
	void Deposit(float value);

	bool operator<(const Account& account);
	void operator+=(float value);
	// this function can access the account properties
	friend std::ostream& operator<<(std::ostream& cout, const Account& account);

	// const in the definition tells the compiler the method won't set anything in the class
	float GetBalance() const;
	// purely virtual method (it doesn't have an implementation on this class)
	virtual float GetWithdrawFee() const = 0;
	std::string GetNumber() const;
};