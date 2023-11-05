#include <bits/stdc++.h>
using namespace std;

void solve(int x, int y)
{
    if (x > 0 && y > 0)
    {
        cout << "Solution" << endl;
    }
    else if (x == 0)
    {
        cout << "Liquid" << endl;
    }
    else
    {
        cout << "Solid" << endl;
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
        int x, y;
        cin >> x >> y;
        solve(x, y);
    }

    return 0;
}