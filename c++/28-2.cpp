#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << "1,";
    int i = 1;
    int no = 1;
    for (int a = 1; a <= n; a++)
    {
        i = i * (-1);
        no = no + a;
        int seri = no * i;
        cout << seri << ",";
    }
    return 0;
}