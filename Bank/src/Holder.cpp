#include <iostream>
#include "Holder.h"

Holder::Holder(std::string name, CPF cpf, std::string password)
	: Person(name, cpf), Authentication(password)
{
}