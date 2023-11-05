#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        b.push_back(temp);
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = a[i]; j < b[i]; j++)
        {
            mp[j]++;
        }
    }
    vector<int> last;
    for (auto it : mp)
    {
        last.push_back(it.second);
    }
    int max = 0;
    for (int i = 0; i < last.size(); i++)
    {
        if (last[i] > max)
            max = last[i];
    }
    cout << max << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}