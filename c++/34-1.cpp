#include <iostream>
using namespace std;
#define n 100
int main()
{
    int i, j, a[n], temp;
    for (i = 0; i <= n - 1; i++)
        cin >> a[i];
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}