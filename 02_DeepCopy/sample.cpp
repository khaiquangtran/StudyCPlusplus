#include <iostream>
using namespace std;

class DeepCopy
{
public:
	int n;
	int* p;
	DeepCopy(int x)
	{
		n = x;
		p = new int[n];
	}

	DeepCopy(DeepCopy& t)
	{
		n = t.n;
		p = t.p;
	}
};

int main()
{
	DeepCopy a(5);
	DeepCopy b(a);
	cout << b.n << endl;

	return 0;
}
