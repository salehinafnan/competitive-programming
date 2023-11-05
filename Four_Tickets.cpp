#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (1000 >= (x * 4))
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