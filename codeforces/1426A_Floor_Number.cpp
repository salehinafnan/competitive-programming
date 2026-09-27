// Codeforces 1426A - Floor Number
// https://codeforces.com/problemset/problem/1426/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        // Floor 1 holds apartments 1-2, every later floor holds x apartments
        if (n <= 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << (n - 3) / x + 2 << endl;
        }
    }

    return 0;
}