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
        // n % a is maximised by the smallest a greater than n / 2, which leaves n - a cupcakes
        cout << n / 2 + 1 << endl;
    }

    return 0;
}
