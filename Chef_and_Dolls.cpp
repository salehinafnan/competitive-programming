#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << endl;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= arr[i];
        }
        cout << ans << endl;
    }

    return 0;
}