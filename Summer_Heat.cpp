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
        int x, y, xa, yb;
        cin >> x >> y >> xa >> yb;
        int a = (xa / x);
        int b = (yb / y);
        cout << a + b << endl;
    }

    return 0;
}