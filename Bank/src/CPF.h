#pragma once

#include <string>

class CPF
{
private:
	std::string number;

public:
	CPF(std::string number);

	CPF(char* number);

	std::string GetCpf();

private:
	bool IsCPFValid(std::string number);
};

