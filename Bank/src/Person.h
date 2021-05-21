#pragma once

#include <iostream>
#include <string>
#include "CPF.h"

class Person
{
protected:
	std::string name;
	CPF cpf;

public:
	Person(std::string name, CPF cpf);

private:
	void CheckNameSize();
};

