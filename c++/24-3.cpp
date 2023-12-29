#include <iostream>

int main()
{
    int i;
    char h;

    for (i = 1; i <= 122; i++)
    {
        h = static_cast<char>(i);
        std::cout << i << "=" << h << std::endl;
    }

    return 0;
}