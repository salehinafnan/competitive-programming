// Codeforces 1463B - Find The Array
// https://codeforces.com/problemset/problem/1463/B
// Idea: the largest power of two <= a[i] is within a[i] / 2 of it, and powers of two always divide each other

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a, b = 1;
            cin >> a;
            while (b <= a)
                b *= 2;
            cout << b / 2 << " ";
        }
        cout << endl;
    }
    return 0;
}