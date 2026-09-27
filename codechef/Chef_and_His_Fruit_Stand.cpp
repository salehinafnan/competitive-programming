#include <bits/stdc++.h>
using namespace std;

int solve(int x, int y)
{
    int res = min(x / 2, y);
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << solve(x, y) << endl;
    }

    return 0;
}