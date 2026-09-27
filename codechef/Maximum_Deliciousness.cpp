#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;

        vector<int> deliciousness(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> deliciousness[i];
        }

        sort(deliciousness.begin(), deliciousness.end(), greater<int>());

        long long totalDeliciousness = 0;
        int cycles = n / k;

        for (int i = 0; i < cycles; ++i)
        {
            for (int j = 0; j < k; ++j)
            {
                if (j == l - 1)
                {
                    totalDeliciousness += deliciousness[i * k + j];
                }
            }
        }

        int remainingPastries = n % k;
        for (int i = 0; i < remainingPastries; ++i)
        {
            if (i == l - 1)
            {
                totalDeliciousness += deliciousness[cycles * k + i];
            }
        }

        cout << totalDeliciousness << endl;
    }

    return 0;
}
