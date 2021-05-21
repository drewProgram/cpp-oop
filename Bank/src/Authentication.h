#pragma once

#include <string>

class Authentication
{
private:
	std::string password;

public:
	Authentication(std::string password);

	bool Authenticate(std::string password) const;
};

