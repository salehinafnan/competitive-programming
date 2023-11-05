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
        int x, y;
        cin >> x >> y;

        if (x <= 1000)
        {
            cout << fixed << 1.0 * x * y << endl;
        }
        else
        {
            cout << fixed << (x * y * 0.9) << endl;
        }
    }

    return 0;
}