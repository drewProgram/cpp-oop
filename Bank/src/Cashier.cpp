#include "Cashier.h"

Cashier::Cashier(std::string name, CPF cpf, float salary, WeekDay payday)
	: Employee(name, cpf, salary, payday)
{
}

float Cashier::GetBonification() const
{
	return GetSalary() * 0.1f;
}