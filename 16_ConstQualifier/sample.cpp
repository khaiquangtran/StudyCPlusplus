#include <iostream>

using namespace std;

void fun(const int& a, int& b)
{
	cout << "a " << a << " b " << b << endl;
	// Can't increase a
	//a++;
	b++;
}

int main()
{
	int x = 10;
	int y = 20;

	// Pointer to const value
	const int *ptr1 = &x;
	// cann't assign value
	//*ptr1 = 20;

	ptr1 = &y;
	cout << "*ptr " << *ptr1 << " y " << y << endl;

	// Const pointers
	int *const ptr2 = &x;
	// can't change address
	//ptr2 = &y;
	*ptr2 = 15;
	cout << "*ptr " << *ptr2 << " x " << x << endl;

	// Const pointer to a const value
	const int *const ptr3 = &x;
	// can't asign value and change address
	//ptr3 = &y
	//*ptr3 = 10

	fun(x, y);
	cout << "main " << x << " " << y << endl;

	return 0;
}
