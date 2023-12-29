#include <iostream>

int main()
{
    int a, b, c, max;

    std::cout << "Enter your numbers: ";
    std::cin >> a >> b >> c;

    max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    std::cout << "The max is " << max << std::endl;

    return 0;
}