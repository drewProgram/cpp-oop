#include "Cashier.h"

Cashier::Cashier(std::string name, CPF cpf, float salary)
	: Employee(name, cpf, salary)
{
}

float Cashier::GetBonification() const
{
	return GetSalary() * 0.1f;
}