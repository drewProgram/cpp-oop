#include "Employee.h"

Employee::Employee(std::string name, CPF cpf, float salary)
	: Person(name, cpf), salary(salary)
{
}

std::string Employee::GetName() const
{
	return name;
}

float Employee::GetSalary() const
{
	return salary;
}