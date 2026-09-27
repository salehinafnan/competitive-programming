#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long l, v1, v2;
        cin >> l >> v1 >> v2;

        long long HT = (l + v2 - 1) / v2;
        long long TT = (l + v1 - 1) / v1;

        if (HT >= TT)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << TT - HT - 1 << endl;
        }
    }

    return 0;
}
