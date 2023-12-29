#include <iostream>

int main()
{
    for (int i = 1; i < 10; i++)
    {
        if (i % 4 == 0)
        {
            continue;
        }
        std::cout << i << " ";
    }
    return 0;
}