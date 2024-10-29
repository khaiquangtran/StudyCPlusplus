#include <iostream>

using namespace std;

class Static
{
private:
	int a;
	int b;
public:
	static int count;
	Static()
	{
		a = 1;
		b = 2;
		count++;
		cout << "count " << count << endl;
	}

	int getCount()
	{
		return count;
	}
};

int Static::count = 0;

int main()
{
	Static t1;
	Static t2;
	Static t3;

	cout << "Static::count " << Static::count << endl;
	cout << t1.getCount() << endl;
	return 0;
}
