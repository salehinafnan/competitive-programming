#include <bits/stdc++.h>
using namespace std;
#define int long long
int modpow(int x, int n, int m)
{
    if (n == 0)
        return 1 % m;
    long long u = modpow(x, n / 2, m);
    u = (u * u) % m;
    if (n % 2 == 1)
        u = (u * x) % m;
    return u;
}
int modinv(int x, int m)
{
    return modpow(x, m - 2, m);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;
        int a = modpow(k, n, m);
        a = (a - 1 + m) % m;
        int b = (k - 1 + m) % m;
        b = modinv(b, m);
        a = (a * b) % m;
        cout << a << " " << a << "\n";
    }
}
