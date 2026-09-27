#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long long int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (abs(arr[i] - 1) < abs(arr[i] - m))
                sum += abs(arr[i] - m);
            else
                sum += abs(arr[i] - 1);
        }
        cout << sum << endl;
    }
    return 0;
}