#include <iostream>
#include "Holder.h"

Holder::Holder(std::string name, CPF cpf)
	: cpf(cpf), name(name)
{
	CheckNameSize();
}

void Holder::CheckNameSize()
{
	if (name.size() < 5)
	{
		std::cout << "The name written is too short" << std::endl;
		exit(1);
	}
}

std::string Holder::GetName()
{
	return name;
}