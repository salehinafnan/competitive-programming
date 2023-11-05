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

        int count = 1;
        string s = to_string(n);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '7')
            {
                cout << "YES" << endl;
                count = 0;
                break;
            }
        }
        if (count)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}