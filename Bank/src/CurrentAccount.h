#pragma once
#include "Account.h"

// with final, this class cant be extended
class CurrentAccount final : public Account
{
public:
	CurrentAccount(std::string number, Holder holder);

	void Transfer(Account& account, float value);

	float GetWithdrawFee() const override;
};

