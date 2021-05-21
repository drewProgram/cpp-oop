#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string number, Holder holder)
	: Account(number, holder)
{
}

float SavingsAccount::GetWithdrawFee() const
{
	std::cout << "Calling method to withdraw savings-account" << std::endl;

	return 0.05f;
}