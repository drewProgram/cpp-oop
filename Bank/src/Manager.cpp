#include "Manager.h"

Manager::Manager(std::string name, CPF cpf, float salary, std::string password)
	: Employee(name, cpf, salary), Authentication(password)
{}

float Manager::GetBonification() const
{
	return GetSalary() * 0.5f;
}