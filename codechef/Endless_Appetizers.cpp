#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, r;
        cin >> x >> y >> r;
        int n = r / 30;
        int m = x + n;
        int ans = m / y;
        if (m % y)
            ans++;
        {
            cout << ans << endl;
        }
    }
    return 0;
}