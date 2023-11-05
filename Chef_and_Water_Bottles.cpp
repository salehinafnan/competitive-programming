#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        int bottleNeeded = k / x;
        if (bottleNeeded > n)
        {
            cout << n << endl;
        }
        else
        {
            cout << bottleNeeded << endl;
        }
    }
    return 0;
}