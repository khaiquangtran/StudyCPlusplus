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

	friend ostream & operator<<(ostream &out, Complex &obj);
};

ostream & operator<<(ostream &out, Complex &obj)
{
	out << "real: " << obj.real << " img: " << obj.img << endl;
	return out;
}

int main()
{
	Complex a(1, 2);
	cout << a;
	operator << (cout, a);
	return 0;
}
