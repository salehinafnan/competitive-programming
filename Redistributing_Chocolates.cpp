#include <bits/stdc++.h>
using namespace std;

void solve(int x, int y, int z)
{
    int n;
    n = x + y + z;
    if (n >= 6)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        solve(x, y, z);
    }

    return 0;
}