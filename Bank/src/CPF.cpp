#include "CPF.h"

CPF::CPF(std::string number)
{
	if (IsCPFValid(number))
		this->number = number;
		
}

CPF::CPF(char* number)
	: number(number)
{
}

bool CPF::IsCPFValid(std::string number)
{
	return true;
}

std::string CPF::GetCpf()
{
	return number;
}