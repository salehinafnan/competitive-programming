#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());

        int ans = 0;
        for (int i = 0; i < n - 1; i += 2)
        {
            ans += a[i] + a[i + 1];
        }

        cout << ans << endl;
    }

    return 0;
}
