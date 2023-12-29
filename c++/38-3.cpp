#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
main()
{
    float x, y;
    cin >> x >> y;
    clrscr();
    gotoxy(14, 2);
    cout << sin(sqrt((log(x + y * x * x)) / (pow(x, 3) + sqrt(x + y * y))));
}