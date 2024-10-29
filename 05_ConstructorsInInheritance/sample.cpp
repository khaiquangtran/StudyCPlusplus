#include <iostream>

class Base
{
public:
	Base()
	{
		std::cout << "Default of Base" << std::endl;
	}

	Base(int x)
	{
		std::cout << "Default of Base " << x << std::endl;
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		std::cout << "Default of Derived" << std::endl;
	}

	Derived(int x) : Base(x)
	{
		std::cout << "Default of Derived " << x << std::endl;
	}
};

int main()
{
	Derived b;
	Derived a(1);

	return 0;
}
