#include <bits/stdc++.h>
using namespace std;

bool check(int mid, int c, int n, vector<int> &stalls)
{
    int cows = 1, last_pos = stalls[0];
    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - last_pos >= mid)
        {
            if (++cows == c)
                return true;
            last_pos = stalls[i];
        }
    }
    return false;
}

int largestMinDist(int n, int c, vector<int> &stalls)
{
    sort(stalls.begin(), stalls.end());
    int low = 0, high = stalls[n - 1] - stalls[0], mid;
    while (low < high)
    {
        mid = low + (high - low + 1) / 2;
        if (check(mid, c, n, stalls))
            low = mid;
        else
            high = mid - 1;
    }
    return high;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> stalls(n);
        for (int i = 0; i < n; i++)
            cin >> stalls[i];
        cout << largestMinDist(n, c, stalls) << "\n";
    }
    return 0;
}