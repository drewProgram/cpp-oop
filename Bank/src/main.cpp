#include <iostream>
#include <string>
#include "Account.h"

int main()
{
	// Resource Aquisition Is Initialization (RAII)
	Holder holder("Andrew", CPF("123.456.789-10"));
	Account account("12312312312", holder);
	account.Deposit(1000);

	Holder anotherHolder("Joseph", CPF("123.456.789-10")); 
	Account anotherAccount("12312312321", anotherHolder);

	std::cout << "Your balance is " << account.GetBalance() << std::endl;
	std::cout << "Your name is " << holder.GetName() << std::endl;
	std::cout << "Second account name is " << anotherHolder.GetName() << std::endl;
	std::cout << "Accounts number:  " << Account::GetAccountsNumber() << std::endl;

	std::cin.get();
}