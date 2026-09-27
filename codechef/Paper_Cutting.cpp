#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long pieces = n / k;
        cout << pieces * pieces << endl;
    }
    return 0;
}
