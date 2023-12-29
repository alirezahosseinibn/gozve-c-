#include <iostream>

int main() 
{
    int i = 5;
    do {
        i *= (3 + 2);
        std::cout << "future ";
    } while (i < 76);

    return 0;
}