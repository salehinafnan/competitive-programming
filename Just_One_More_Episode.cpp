#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x > 24)
        {
            cout << "Yes" << endl;
        }
        else if (x <= 24)
        {
            cout << "No" << endl;
        }
    }
    return 0;
}