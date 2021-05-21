#pragma once

#include <string>
#include "CPF.h"
#include "Person.h"
#include "Authentication.h"

class Holder : public Person, Authentication
{
public:
	Holder(std::string name, CPF cpf, std::string password);
};

