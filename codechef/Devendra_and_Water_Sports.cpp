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
        int z, y, a, b, c;
        cin >> z >> y >> a >> b >> c;
        int moneyLeft = (z - y);
        int totalCost = (a + b + c);
        if (moneyLeft >= totalCost)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}