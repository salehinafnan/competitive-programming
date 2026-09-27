#include <bits/stdc++.h>
using namespace std;

bool solve(int x, int y)
{
    if (abs(x - y) % 2 != 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (solve(x, y) == false)
        {
            cout << "No" << endl;
        }

        else
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}