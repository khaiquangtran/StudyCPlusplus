#include <iostream>

using namespace std;

int main()
{
	[]() {cout << "Hello " << endl;}();
	[](int x, int y) {cout << "x " << x << " " << " y " << y << endl;}(10, 2);

	int sum = [](int x, int y)->int {return x + y;}(2, 2);
	cout << "Sum " << sum << endl;

	int a = 5;

	auto f = [&a]() {cout << a << endl;};
	f();
	a++;
	f();

	return 0;
}
