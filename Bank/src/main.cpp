#include <iostream>
#include <string>
#include "SavingsAccount.h"
#include "CurrentAccount.h"
#include "Manager.h"

void Login(Authentication& user, std::string password)
{
	if (user.Authenticate(password))
	{
		std::cout << "Logged in successfuly." << std::endl;
		return;
	}

	std::cout << "Invalid password." << std::endl;
}

std::ostream& operator<<(std::ostream& cout, const Account& account)
{
	Person holder = account.holder;
	cout << "The account balance is (operador): " << account.GetBalance() << std::endl;
	cout << "The holder of the account is " << holder.GetName() << std::endl;

	return cout;
}

void MakeWithdraw(Account& account)
{
	std::variant<Account::WithdrawError, float>result = account.Withdraw(200);
	// get the result reference if the value is a float. If it isn't a float, returns null
	auto balance = std::get_if<float>(&result);
	if (balance != nullptr)
	{
		std::cout << "New account balance: " << *balance << std::endl;
		return;
	}

	std::cout << "Error!" << std::endl;
}

// template function
template<typename T>
T Smaller(T a, T b)
{
	return a < b ? a : b;
}

int main()
{
	// Resource Aquisition Is Initialization (RAII)
	SavingsAccount account("12312312312", Holder("Andrew", CPF("123.456.789-10"), "senha"));
	account.Deposit(2000);
	account.Withdraw(500);

	Holder anotherHolder(); 
	CurrentAccount anotherAccount("12312312321", Holder("Joseph", CPF("123.456.789-10"), "senha2"));
	// += is overloaded
	// we can't overload a function in inheritence, so casting is needed
	(Account&) anotherAccount += 2000;
	anotherAccount.Withdraw(500);

	std::cout << "Your balance is " << account.GetBalance() << std::endl;
	std::cout << "Your balance is " << anotherAccount.GetBalance() << std::endl;

	anotherAccount.Transfer(account, 200);
	std::cout << "New balance: " << account.GetBalance() << std::endl;
	std::cout << account;
	std::cout << "Accounts number:  " << Account::GetAccountsNumber() << std::endl;

	Manager manager("Chad Vader", CPF("123.456.879-02"), 3000.0f, WeekDay::Tuesday, "senha!");

	MakeWithdraw(anotherAccount);

	std::cout << Smaller<Account&>(account, anotherAccount);

	std::cin.get();
}