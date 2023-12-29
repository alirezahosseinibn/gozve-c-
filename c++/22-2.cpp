#include <iostream>

int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            std::cout << j;
        std::cout << std::endl;
    }
    return 0;
}