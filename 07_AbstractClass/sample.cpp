#include <iostream>
using namespace std;
class Base
{
public:
	virtual void fun1()
	{
		cout << "Base fun1 " << endl;
	}
	virtual void fun2()
	{
		cout << "Base fun2 " << endl;
	}
};

class Derived1 : public Base
{
public:
	void fun1()
	{
		cout << "Derived1 fun1 " << endl;
	}
};
class Derived2 : public Base
{
public:
	void fun2()
	{
		cout << "Derived2 fun2 " << endl;
	}
};

int main()
{
	Base* b;
	Derived1 d1;
	Derived2 d2;
	b = &d1;
	b->fun1();
	b->fun2();
	b = &d2;
	b->fun1();
	b->fun2();

	Base* c = new Derived1();
	c->fun1();
	c->fun2();

	Base* e = new Derived2();
	e->fun1();
	e->fun2();

	return 0;
}
