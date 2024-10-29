#include <iostream>
#include <string>
using namespace std;


int main()
{
	int x = 10;
	int y = 0;
	int z;

	try
	{
		//throw 1;
		//throw string("aaaa");
		throw 1.5;
	}
	catch (int e)
	{
		cout << "Devision by zero " << e << endl;
	}
	catch (string e)
	{
		cout << "Devision by zero " << e << endl;
	}
	catch (...)
	{
		cout << "Devision by zero " << endl;
	}

	return 0;
}
