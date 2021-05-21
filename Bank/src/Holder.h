#pragma once

#include <string>
#include "CPF.h"

class Holder
{
private:
	std::string name;
	CPF cpf;

public:
	Holder(std::string name, CPF cpf);

	std::string GetName();

private:
	void CheckNameSize();
};

