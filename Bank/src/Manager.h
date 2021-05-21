#pragma once

#include "Employee.h"
#include "Authentication.h"

class Manager final : public Employee, Authentication
{
public:
	Manager(std::string name, CPF cpf, float salary, std::string password);

	float GetBonification() const;
};

