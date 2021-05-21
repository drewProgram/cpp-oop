#include <iostream>
#include <string>
#include "SavingsAccount.h"
#include "CurrentAccount.h"

void Login(Authentication& user, std::string password)
{
	if (user.Authenticate(password))
	{
		std::cout << "Logged in successfuly." << std::endl;
		return;
	}

	std::cout << "Invalid password." << std::endl;
}

int main()
{
	// Resource Aquisition Is Initialization (RAII)
	Holder holder("Andrew", CPF("123.456.789-10"), "senha");
	SavingsAccount account("12312312312", holder);
	account.Deposit(2000);
	account.Withdraw(500);

	Holder anotherHolder("Joseph", CPF("123.456.789-10"), "senha2"); 
	CurrentAccount anotherAccount("12312312321", anotherHolder);
	anotherAccount.Deposit(2000);
	anotherAccount.Withdraw(500);

	std::cout << "Your balance is " << account.GetBalance() << std::endl;
	std::cout << "Your balance is " << anotherAccount.GetBalance() << std::endl;

	anotherAccount.Transfer(account, 200);
	std::cout << "New balance: " << account.GetBalance() << std::endl;

	std::cout << "Accounts number:  " << Account::GetAccountsNumber() << std::endl;

	std::cin.get();
}