#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, m, d;
        cin >> x >> m >> d;
        if ((x * m) <= (x + d))
        {
            cout << (x * m) << endl;
        }
        else
        {
            cout << x + d << endl;
        }
    }
    return 0;
}
