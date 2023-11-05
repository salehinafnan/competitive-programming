#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, i;
    cin >> n;
    for (i = 10; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            break;
        }
    }
}