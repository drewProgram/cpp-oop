#include "Employee.h"

Employee::Employee(std::string name, CPF cpf, float salary, WeekDay payday)
	: Person(name, cpf), salary(salary), payday(payday)
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