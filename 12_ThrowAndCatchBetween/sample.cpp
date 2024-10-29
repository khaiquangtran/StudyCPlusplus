#include <iostream>
using namespace std;

int divi(int a, int b)
{
	if (b == 0)
		throw 1;
	return a / b;
}

int main()
{
	int x = 10, y = 0, z;
	try
	{
		z = divi(x, y);
		cout << z << endl;
	}
	catch (int e)
	{
		cout << "Division by zero " << e << endl;
	}

	return 0;
}
