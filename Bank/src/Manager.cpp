#include "Manager.h"

Manager::Manager(std::string name, CPF cpf, float salary, WeekDay payday, std::string password)
	: Employee(name, cpf, salary, payday), Authentication(password)
{}

float Manager::GetBonification() const
{
	return GetSalary() * 0.5f;
}