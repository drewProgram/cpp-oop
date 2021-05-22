#include "CurrentAccount.h"

CurrentAccount::CurrentAccount(std::string number, Holder holder)
	: Account(number, holder)
{
}

void CurrentAccount::Transfer(Account& target, float value)
{
	auto result = Withdraw(value);

	// if 1, it means it is the float variant value
	if (result.index() == 1)
	{
		target.Deposit(value);
		return;
	}

	std::cout << "Operation failed" << std::endl;
}

void CurrentAccount::operator+=(CurrentAccount& originAccount)
{
	originAccount.Transfer(*this, originAccount.GetBalance() / 2);
}

float CurrentAccount::GetWithdrawFee() const
{
	std::cout << "Withdraw current-account" << std::endl;
	return 0.03f;
}