#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int people;
    cin >> people;
    vector<int> v(people);
    for (int i = 0; i < people; i++)
    {
        cin >> v[i];
    }

    vector<int> ans(people + 1, 0);
    for (int i = 0; i < v.size(); i++)
    {
        ans[v[i]]++;
    }

    int flag = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] != 0 && (ans[i] % i != 0))
        {
            cout << "NO" << endl;
            flag = 1;
            break;
        }
    }
    if (flag != 1)
    {
        cout << "YES" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}