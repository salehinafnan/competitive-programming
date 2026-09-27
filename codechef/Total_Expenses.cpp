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
        // x * y can exceed the int range, so the product is computed in floating point

        if (x <= 1000)
        {
            cout << fixed << 1.0 * x * y << endl;
        }
        else
        {
            cout << fixed << (0.9 * x * y) << endl;
        }
    }

    return 0;
}