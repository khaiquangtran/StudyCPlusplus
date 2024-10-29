#include <iostream>

class Outer
{
public:
	void fun()
	{
		i.display();
	}

	class Inner
	{
	public:
		void display()
		{
			std::cout << "Display of Inner" << std::endl;
		}
	};
	Inner i;
};

int main()
{
	Outer o;
	o.i.display();
	o.fun();

	Outer::Inner i;
	i.display();

	return 0;
}
