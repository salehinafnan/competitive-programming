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
        if ((x * y) % z == 0)
        {
            cout << x * y << " " << z << endl;
        }
        else if ((y * z) % x == 0)
        {
            cout << y * z << " " << x << endl;
        }
        else if ((z * x) % y == 0)
        {
            cout << z * x << " " << y << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
