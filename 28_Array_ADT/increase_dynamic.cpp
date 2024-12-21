#include <iostream>

int main()
{
    int *p = new int[5] {1,2,3,4,5};
    int *q = new int[10];
    for(int i = 0; i < 5; i++)
        q[i] = p[i];
    delete p;
    p = q;
    q = NULL;

    p[6] = 10;

    for(int i = 0; i < 10; i++)
        std::cout << p[i] << " ";
    return 0;
}