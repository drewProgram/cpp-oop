#include "Person.h"

Person::Person(std::string name, CPF cpf)
	: cpf(cpf), name(name)
{
	CheckNameSize();
}

std::string Person::GetName() const
{
	return name;
}

void Person::CheckNameSize()
{
	if (name.size() < 5)
	{
		std::cout << "The name written is too short" << std::endl;
		exit(1);
	}
}