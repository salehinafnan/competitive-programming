#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int sum = 0, p = 1;
            for (int j = i; j < n; j++)
            {
                sum += arr[j];
                p *= arr[j];
                if (sum == p)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}