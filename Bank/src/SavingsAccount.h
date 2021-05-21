#pragma once

#include "Account.h"

class SavingsAccount final : public Account
{
public:
	SavingsAccount(std::string number, Holder holder);
	float GetWithdrawFee() const override;
};
