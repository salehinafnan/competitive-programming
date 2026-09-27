#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b)
{
    int c = b - a;
    if (c % 3 == 2)
    {
        cout << "NO" << endl;
        ;
    }
    else
        cout << "YES" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        solve(a, b);
    }

    return 0;
}