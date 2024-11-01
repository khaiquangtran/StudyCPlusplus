#include <iostream>

using namespace std;

class Rectangle
{
private:
	int length;
	int breadth;
public:
	Rectangle(int l, int b)
	{
		length = l;
		breadth = b;
	}

	int area()
	{
		return length * breadth;
	}
};

int main()
{
	unique_ptr<Rectangle> ptr(new Rectangle(10, 5));

	shared_ptr<Rectangle> ptr1(new Rectangle(2, 3));
	shared_ptr<Rectangle> ptr2;
	ptr2 = ptr1;
	cout << "ptr1 " << ptr1->area() << endl;
	cout << "ptr2 " << ptr2->area() << endl;
	cout << ptr1.use_count() << endl;

	weak_ptr<Rectangle> ptr3 = ptr2;
	cout << ptr1.use_count() << endl;

	return 0;
}
