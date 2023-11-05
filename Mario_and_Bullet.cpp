#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int reachtime = (y / x);
        int shoottime = (z - reachtime);
        if (y % x == 0 && z > reachtime)
        {
            cout << shoottime << endl;
        }
        else if (shoottime <= reachtime)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << reachtime << endl;
        }
    }
    return 0;
}