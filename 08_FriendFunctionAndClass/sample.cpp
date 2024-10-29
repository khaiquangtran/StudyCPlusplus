#include <iostream>

class Friend
{
private:
	int a;
protected:
	int b;
public:
	int c;

	friend void fun();
};

void fun()
{
	Friend a;
	a.a = 1;
	a.b = 2;
	a.c = 3;
}

class Your;
class My
{
private:
	int a;
protected:
	int b;
public:
	int c;
	friend Your;
};

class Your
{
public:
	My m;
	void function()
	{
		m.a = 1;
		m.b = 2;
		m.c = 3;
	}

};
int main()
{

	return 0;
}
