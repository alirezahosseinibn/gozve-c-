#include <iostream>

int main()
{
    for (int i = 1; i < 10; i++)
    {
        std::cout << "*" << std::endl;
        if (i % 5 == 0)
        {
            break;
        }
    }
    return 0;
}