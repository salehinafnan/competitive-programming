#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int tp = 2 * n;
        int nr = tp - x;
        int ans = x - nr;
        if (ans < 0)
            ans = 0;
        cout << ans << endl;
    }

    return 0;
}