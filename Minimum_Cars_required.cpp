#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        float n;
        cin >> n;
        float carNeeded = n / 4;
        carNeeded = ceil(carNeeded);
        cout << carNeeded << endl;
    }
    return 0;
}