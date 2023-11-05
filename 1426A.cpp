#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int ans = (n / x);
        if (ans % 2 == 0)
        {
            cout << ans + 1 << endl;
        }
        else
        {
            cout << ans + 2 << endl;
        }
    }

    return 0;
}