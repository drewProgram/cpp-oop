#pragma once

#include "Person.h"

class Employee : public Person
{
private:
	float salary;

public:
	Employee(std::string name, CPF cpf, float salary);

	virtual float GetBonification() const = 0;
	std::string GetName() const;
	float GetSalary() const;
};

