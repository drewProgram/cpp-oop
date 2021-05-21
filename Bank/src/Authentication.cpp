#include "Authentication.h"

Authentication::Authentication(std::string password)
	: password(password)
{}

bool Authentication::Authenticate(std::string password) const
{
	return password == this->password;
}