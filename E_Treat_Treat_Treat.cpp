#include <iostream>
using namespace std;
int main()
{
    int a, n, i, p, x, k = 0;
    char s;
    cin >> a >> x;
    for (i = 1; i <= a; i++)
    {
        cin >> s >> p;
        if (s == '+')
        {
            x = p + x;
        }
        else
        {
            if (p <= x)
            {
                x = x - p;
            }
            else
                k++;
        }
    }
    cout << x << " " << k;
}
