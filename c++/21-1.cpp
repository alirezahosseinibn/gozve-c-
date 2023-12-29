#include <iostream>
#include <iomanip>

int main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
            std::cout << std::setw(4) << i * j;
        std::cout << std::endl;
    }
    return 0;
}