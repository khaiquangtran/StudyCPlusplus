#include <iostream>
#include <string>
using namespace std;

int division(int a, int b) throw(int)
{
	if (b == 0)
	{
		throw 1;
	}
	return a / b;
}
int main()
{
	int x = 10;
	int y = 0;
	int z;

	try
	{
		//if (y == 0)
		//{
		//	throw string("zero");
		//}
		z = division(x, y);
	}
	catch (int e)
	{
		cout << "Devision by zero " << e << endl;
	}

	return 0;
}
