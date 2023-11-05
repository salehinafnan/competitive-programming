#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        cout << abs(x - y) << endl;
    }
    return 0;
}