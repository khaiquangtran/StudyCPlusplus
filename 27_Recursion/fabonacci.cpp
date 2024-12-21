#include <iostream>

int fib(int n)
{
    if(n <= 1)
        return n;
    return fib(n-2) + fib(n-1);
}

int Ifib(int n)
{
    int t0 = 0, t1 = 1, s;

    if (n<=1) return n;

    for (int i = 1; i < n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int sum(int n)
{
    int s;
    if (n == 0)
        return 0;
    return sum(n - 1) + fib(n);
}

int F[10];
int mfib(int n)
{
    if(n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if(F[n - 2] == -1)
        {
            F[n-2] = mfib(n-2);
        }
        if(F[n - 1] == -1)
        {
            F[n-1] = mfib(n-1);
        }
        F[n] = F[n-2] + F[n-1];
        return F[n-2] + F[n-1];
    }
}

int main()
{
    for (int i = 0; i < 10; i++)
        F[i] = -1;
	std::cout << fib(6) << std::endl;
	std::cout << Ifib(6) << std::endl;
	std::cout << mfib(6) << std::endl;
    std::cout << sum(5) << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << "F[" << i << "]  = " << F[i] << std::endl;
	return 0;
}