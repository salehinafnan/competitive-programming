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

        if (n % 2 == 0 || n >= 7)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}