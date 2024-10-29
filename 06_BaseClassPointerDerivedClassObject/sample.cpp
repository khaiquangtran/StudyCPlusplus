#include <iostream>

class Base
{
public:
	void function1()
	{
		std::cout << "function1 Base" << std::endl;
	}
	void function2()
	{
		std::cout << "function2 Base" << std::endl;
	}
	void function3()
	{
		std::cout << "function3 Base" << std::endl;
	}

	virtual void function7() 
	{
		std::cout << "function7 Base" << std::endl;
	};
};

class Parent : public Base
{
public:
	void function4()
	{
		std::cout << "function4 Parent" << std::endl;
	}
	void function5()
	{
		std::cout << "function5 Parent" << std::endl;
	}
	void function6()
	{
		std::cout << "function6 Parent" << std::endl;
	}
	void function7()
	{
		std::cout << "function7 Parent" << std::endl;
	}
};

int main()
{
	Base* p;
	p = new Parent();
	p->function1();
	p->function7();

	return 0;
}
