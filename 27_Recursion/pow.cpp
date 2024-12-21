#include <iostream>

int pow (int n, int m){
    if(m==0)
        return 1;
    else
        return n*pow(n,m-1);
}

int pow2(int n, int m)
{
    if(m==0)
        return 1;
    else if (m%2 == 0)
        return pow2(n*n, m/2);
    else
        return n*pow2(n*n, (m-1)/2);
}
int main()
{
    std::cout << pow(3,2) << std::endl;
    std::cout << pow2(3,2) << std::endl;
    return 1;
}