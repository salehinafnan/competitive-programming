#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, m;
        cin >> a >> b >> m;
        int dir1 = abs(a - b);
        int dir2 = abs(abs(a - b) - m);
        cout << min({dir1, dir2}) << endl;
    }
}