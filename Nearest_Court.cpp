#include <bits/stdc++.h>
using namespace std;

int solve(int x, int y)
{

    int z = (x + y) / 2;
    int res = max(abs(x - z), abs(y - z));

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