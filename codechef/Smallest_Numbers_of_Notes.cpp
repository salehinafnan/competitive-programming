#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int d[] = {100, 50, 10, 5, 2, 1};
    int s = 0, count = 0;
    int i = 0;

    while (s != n)
    {
        if (s + d[i] <= n)
        {
            s = s + d[i];
            count++;
        }
        else
        {
            i++;
        }
    }

    return count;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }

    return 0;
}
