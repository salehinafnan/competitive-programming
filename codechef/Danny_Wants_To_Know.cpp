#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, q;
    cin >> n >> q;

    vector<long long> a(n), b(n), prefix(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    prefix[0] = a[0] * b[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i] * b[i];
    }

    for (int i = 0; i < q; i++)
    {
        long long l, r;
        cin >> l >> r;
        long long ans = prefix[r - 1];
        if (l > 1)
        {
            ans -= prefix[l - 2];
        }
        cout << ans << "\n";
    }

    return 0;
}