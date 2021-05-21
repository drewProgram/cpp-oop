#include <iostream>

struct A
{
	A() { std::cout << "A constructor\n"; }
	void Method1() { std::cout << "A Method\n"; }
};

// in order to not get any problems with the multiple inheritance,
// we need to make a virtual inheritance. This way the A constructor will be
// executed only once.
struct B : virtual A
{
	B() { std::cout << "B constructor\n"; }
	void Method2() { std::cout << "B Method\n"; }
};

struct C : virtual A
{
	C() { std::cout << "C constructor\n"; }
	void Method3() { std::cout << "C Method\n"; }
};

struct D : B, C
{
	D() { std::cout << "D constructor\n"; }
};

// an Interface in C++ is just a class with pure virtual methods
struct E
{
	virtual void Method() = 0;
};

struct F
{
	virtual void Method() = 0;
};

struct G : E, F
{
	void Method() override {};
};

int main()
{
	D var1;
	G var2;

	var1.Method1();

	std::cin.get();
}