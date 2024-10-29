#include <iostream>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Constructor of Base" << endl;
	}
	virtual ~Base()
	{
		cout << "Destructor of Base" << endl;
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		cout << "Constructor of Derived" << endl;
	}
	~Derived()
	{
		cout << "Destructor of Derived" << endl;
	}
};

int main()
{
	{ Base b; }
	cout << "----------------------------" << endl;
	{ Derived d; }
	cout << "----------------------------" << endl;
	{ 
		Base* a = new Derived();
		delete a;
	}
	cout << "----------------------------" << endl;
	{
		shared_ptr<Base> smartPtr = make_shared<Derived>();
	}

	return 0;
}
