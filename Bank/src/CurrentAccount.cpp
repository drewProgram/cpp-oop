#include "CurrentAccount.h"

CurrentAccount::CurrentAccount(std::string number, Holder holder)
	: Account(number, holder)
{
}

void CurrentAccount::Transfer(Account& target, float value)
{
	Withdraw(value);
	target.Deposit(value);
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