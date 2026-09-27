#include <bits/stdc++.h>
using namespace std;

// Segmented sieve: m and n can be up to 1e9, but n - m <= 1e5,
// so only the primes up to sqrt(1e9) are needed to sieve each range

vector<int> basePrimes(int limit)
{
    vector<bool> composite(limit + 1, false);
    vector<int> primes;
    for (int i = 2; i <= limit; i++)
    {
        if (!composite[i])
        {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j <= limit; j += i)
            {
                composite[j] = true;
            }
        }
    }
    return primes;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> primes = basePrimes(31623);

    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        long long m, n;
        cin >> m >> n;
        m = max(m, 2LL);

        vector<bool> composite(max(0LL, n - m + 1), false);
        for (int p : primes)
        {
            if (1LL * p * p > n)
            {
                break;
            }
            long long start = max(1LL * p * p, (m + p - 1) / p * p);
            for (long long j = start; j <= n; j += p)
            {
                composite[j - m] = true;
            }
        }

        if (tc > 0)
        {
            cout << "\n"; // test cases are separated by an empty line
        }
        for (long long i = m; i <= n; i++)
        {
            if (!composite[i - m])
            {
                cout << i << "\n";
            }
        }
    }

    return 0;
}
