#pragma once

#include "WeekDay.h"
#include "Person.h"

class Employee : public Person
{
private:
	float salary;
	WeekDay payday;

public:
	Employee(std::string name, CPF cpf, float salary, WeekDay payday);

	virtual float GetBonification() const = 0;
	std::string GetName() const;
	float GetSalary() const;
};

