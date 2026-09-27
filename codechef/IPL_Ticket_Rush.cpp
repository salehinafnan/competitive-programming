#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (n <= m)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << abs(n - m) << endl;
        }
    }
    return 0;
}