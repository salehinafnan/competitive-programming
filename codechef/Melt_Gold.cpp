#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, i;
        cin >> x >> y;
        for (i = 1; i > 0; i++)
        {
            y = i + y;
            if (y >= x)
            {
                cout << i << endl;
                break;
            }
        }
    }
}