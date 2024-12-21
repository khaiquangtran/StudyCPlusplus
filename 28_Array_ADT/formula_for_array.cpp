#include <iostream>
#include <cstdint>

int main()
{
    const int m = 4;
    const int n = 4;
    int A[m][n];

    const long Lo = reinterpret_cast<intptr_t>(&A[0][0]);
    std::cout << "&A[0][0] " << &A[0][0] << std::endl;
    std::cout << "Lo \t" << " 0x" << std::hex << Lo << std::endl;

    int i = 1;
    int j = 2;
    // row major formula
    long addrR = Lo + (i * n + j) * sizeof(int);
    std::cout << "addrR \t" << " 0x" << std::hex << addrR << std::endl;

    // column major formula
    long addrC = Lo + (j * m + i) * sizeof(int);
    std::cout << "addrC \t" << " 0x" << std::hex << addrC << std::endl;

    std::cout << "A[" << i << "]" << "[" << j << "]  " << &A[i][j] << std::endl;

    // Formula for 3D arrays
    // int A[l][m][n];
    // addr(A[i][j][k]) = Lo + [i*m*n + j*b + k]*w
    return 0;
}