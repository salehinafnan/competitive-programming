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
        int d, x, y, z;
        cin >> d >> x >> y >> z;
        int strat1 = (7 * x);
        int strat2 = (y * d) + (z * (7 - d));
        cout << max({strat1, strat2}) << endl;
    }

    return 0;
}