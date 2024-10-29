#include <iostream>

using namespace std;

int main()
{
	int x = 10, y = 0, z;
	try
	{
		if (y == 0)
			throw 123;
		z = x / y;
		cout << z << endl;
	}
	catch (int x)
	{
		cout << "invalid y " << x << endl;
	}

	return 0;
}
