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
        int count = 0;
        cin >> x >> y;
        if (x == y)
        {
            cout << 0 << endl;
        }
        else if (x < y)
        {
            cout << y - x << endl;
        }
        else
        {
            if ((x - y) % 2 == 0)
                cout << (x - y) / 2 << endl;

            else
                cout << ((x - y) / 2) + 2 << endl;
        }
    }

    return 0;
}