#include <iostream>
#include <optional>
#include <string>
#include <any>

std::optional<std::string> ReadFile(std::string& filePath)
{
	// both optional and any are from C++ 17
	std::optional<std::string> empty = {};

	std::any var;

	var = 10;
	var = 12.0f;
	var = 'a';

	if (empty)
	{
		std::cout << *empty;
		return;
	}
}

int main()
{


	std::cin.get();
}