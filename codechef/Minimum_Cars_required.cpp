#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int carNeeded = (n + 3) / 4; // ceil(n / 4) with integers only
        cout << carNeeded << endl;
    }
    return 0;
}