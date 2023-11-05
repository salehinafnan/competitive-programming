#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << 0 << endl;
            break;
        }
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != a[0])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}