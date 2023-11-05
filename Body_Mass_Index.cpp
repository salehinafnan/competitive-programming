#include <bits/stdc++.h>
using namespace std;

void solve(int m, int h)
{
    int formula = m / (h * h);
    if (formula <= 18)
    {
        cout << 1 << endl;
    }
    else if (formula >= 19 && formula <= 24)
    {
        cout << 2 << endl;
    }
    else if (formula >= 25 && formula <= 29)
    {
        cout << 3 << endl;
    }
    else if (formula >= 30)
    {
        cout << 4 << endl;
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
        int m, h;
        cin >> m >> h;
        solve(m, h);
    }

    return 0;
}