#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        int ans = min({s1, s2, s3});
        if (ans == s1)
        {
            cout << "Draw" << endl;
        }
        else if (ans == s2)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }
    return 0;
}
