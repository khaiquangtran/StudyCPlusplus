#include <iostream>

void findDuplicates(char str[])
{
    int H[26];

    for (int i = 0 ; i < 26; i++)
    {
        H[i] = 0;
    }

    for(int i = 0; str[i] != '\0'; i++)
    {
        H[str[i] - 97]+=1;
    }

    for (int i = 0 ; i < 26; i++)
    {
        if(H[i] > 1)
        {
            std::cout << (char)(i+97) << std::endl;
            // std::cout << H[i] << std::endl;
        }
    }
}

void findDuplicatesWithBitwise(char str[])
{
    long int x = 0, H = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        x = 1;
        x = x << (str[i] - 97);
        if((x & H) > 0)
        {
            std::cout << str[i] << std::endl;
        }
        else
        {
            H = H | x;
        }
    }
}

int main()
{
    char A[] = "finding";
    findDuplicates(A);
    findDuplicatesWithBitwise(A);
    return 0;
}