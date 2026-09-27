// Codeforces 686A - Free Ice Cream
// https://codeforces.com/problemset/problem/686/A

#include <iostream>
using namespace std;
int main()
{
    // x can grow past 1e9 * 1000, so it needs 64 bits
    long long a, i, p, x, k = 0;
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
