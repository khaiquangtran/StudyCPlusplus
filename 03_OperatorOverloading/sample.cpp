#include <iostream>

using namespace std;

class Complex
{
private:
	int real;
	int img;
public:
	Complex(int preal = 0, int pimg = 0)
	{
		real = preal;
		img = pimg;
	}

	void print()
	{
		cout << "real: " << real << " img: " << img << endl;
	}

	Complex operator+(Complex const& obj)
	{
		Complex temp;
		temp.real = real + obj.real;
		temp.img = img + obj.img;
		return temp;
	}
};

int main()
{
	Complex a(1, 2);
	Complex b(3, 4);
	Complex c;
	c = a + b;
	c.print();

	return 0;
}
