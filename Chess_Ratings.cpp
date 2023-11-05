#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x, y;
        cin >> x >> y;
        float r = y - x;
        if (r == 0)
            cout << "0" << endl;
        else if (r <= 8)
            cout << "1" << endl;
        else if (r > 8)
            cout << ceil(r / 8) << endl;
    }
    return 0;
}