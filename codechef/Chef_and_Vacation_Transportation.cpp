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
        int x, y, z;
        cin >> x >> y >> z;
        if ((x + y) > z)
        {
            cout << "TRAIN" << endl;
        }
        else if ((x + y) < z)
        {
            cout << "PLANEBUS" << endl;
        }
        else if ((x + y) == z)
        {
            cout << "EQUAL" << endl;
        }
    }

    return 0;
}