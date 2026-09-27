#include <bits/stdc++.h>
using namespace std;

int solve(int n, int x)
{
    int totalBill = (n - (n / 3)) * x;
    return totalBill;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        cout << solve(n, x) << endl;
    }

    return 0;
}