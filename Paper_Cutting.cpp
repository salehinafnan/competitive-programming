#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n >= k)
        {
            cout << pow(n / k, 2) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
