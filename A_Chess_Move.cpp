#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string s;
    cin >> s;

    char given_row = s[1];
    char given_col = s[0];

    vector<char> rows = {'1', '2', '3', '4', '5', '6', '7', '8'};
    vector<char> cols = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

    for (int i = 0; i < rows.size(); i++)
    {
        if (rows[i] != given_row)
        {
            cout << given_col << rows[i] << endl;
        }
    }

    for (int i = 0; i < cols.size(); i++)
    {
        if (cols[i] != given_col)
        {
            cout << cols[i] << given_row << endl;
        }
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
        solve();
    }

    return 0;
}