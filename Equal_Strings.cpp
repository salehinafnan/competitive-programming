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
        string a, b;
        cin >> a >> b;
        unordered_set<char> s;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                s.insert(b[i]);
            }
        }
        cout << s.size() << endl;
    }
}