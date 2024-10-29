#include <iostream>
#define FOR(x) for(int i = 0; i < x; i++)

template <class T>
class Stack
{
private:
	T* stk;
	int size;
	int top;
public:
	Stack(int sz)
	{
		size = sz;
		top = -1;
		stk = new T[size];
	}
	void push(T x);
	T pop();
};

template<class T>
void Stack<T>::push(T x)
{
	if (top == size - 1)
	{
		std::cout << "Stack full" << std::endl;
	}
	else
	{
		top++;
		stk[top] = x;
	}
}

template<class T>
T Stack<T>::pop()
{
	T x = 0;
	if (top == -1)
	{
		std::cout << "Stack empty" << std::endl;
	}
	else
	{
		x = stk[top];
		top--;
	}
	return x;
}

int main()
{
	Stack<char> n(10);
	FOR(10)
	{
		n.push(char(i + 40));
	}

	FOR(10)
	{
		std::cout << n.pop() << std::endl;
	}

	return 0;
}
