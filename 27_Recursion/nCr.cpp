#include <iostream>

int nCr(int n, int r)
{
    if(n == r || r == 0)
        return 1;
    return nCr(n-1, r-1) + nCr(n-1, r);
}

int main()
{
    int n = 10;
    for(int i = 0; i <= n; i++)
    {
        // for(int j = (n - i)/2; j > 0; j--)
        //     std::cout << "\t";
        for (int j = 0; j <= i; j++ )
            std::cout << nCr(i,j) << "\t";
        std::cout << std::endl;
    }
	return 0;
}