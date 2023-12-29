#include <iostream>

int main()
{
    int i = 2;
    while (i < 65)
    {
        std::cout << "*\n";
        i *= 2;
    }

    return 0;
}