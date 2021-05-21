#pragma once

#include "Employee.h"

class Cashier final : public Employee
{
public:
	Cashier(std::string name, CPF cpf, float salary, WeekDay payday);

	float GetBonification() const;
};

