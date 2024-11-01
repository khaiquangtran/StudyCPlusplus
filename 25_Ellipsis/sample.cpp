#include <iostream>
#include <stdarg.h>

using namespace std;

int sum(int x, ...)
{
	va_list list;
	va_start(list, x);
	int nsum = 0;
	for (int i = 0; i < x; i++)
	{
		int n = va_arg(list, int);
		cout << n << " ";
		nsum += n;
	}

	return nsum;
}

int main()
{
	cout << sum(2, 5, 10) << endl;
	cout << sum(3, 5, 10, 3) << endl;
	cout << sum(4, 1, 2, 3, 5) << endl;

	return 0;
}
