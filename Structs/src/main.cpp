#include <iostream>
#include <string>

struct Account
{
	std::string cpf;
	std::string name;
	std::string number;
	float balance;

	void Withdraw(float value)
	{
		if (value < 0)
		{
			std::cout << "You can't withdraw negative values" << std::endl;
			return;
		}

		if (value > balance)
		{
			std::cout << "Not enough cash, stranger" << std::endl;
			return;
		}

		balance -= value;
	}

	void Deposit(float value)
	{
		if (value < 0)
		{
			std::cout << "You can't deposit negative values" << std::endl;
			return;
		}

		balance += value;
	}
};

int main()
{
	Account account;

	account.balance = 1000;

	account.Withdraw(100);

	std::cout << account.balance << std::endl;

	std::cin.get();
}