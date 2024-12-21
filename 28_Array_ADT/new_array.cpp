#include <iostream>

int main()
{
    // inside stack
    int A[3][4] = {{1,2,3,4}, {4,5,6,7}, {7,8,9,10}};

    // partical in stack
    int *B[3];
    // partical in heap
    B[0] = new int[4];
    B[1] = new int[5];
    B[2] = new int[4];

    // everything in heap
    int **C = new int*[3];
    C[0] = new int[4];
    C[1] = new int[5];
    C[2] = new int[4];

    return 0;
}