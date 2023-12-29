#include <iostream>
#define pi 3.14

int main()
{
    int r, m, a;
    std::cout << "Enter the radius: ";
    std::cin >> r;

    m = pi * r * r;
    a = 2 * pi * r;

    std::cout << "Perimeter = " << m << std::endl;
    std::cout << "Area = " << a << std::endl;

    return 0;
}