#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int r = y - x;
        // Each game adds at most 8 rating points, so we need ceil(r / 8) games
        cout << (r + 7) / 8 << endl;
    }
    return 0;
}