#include <bits/stdc++.h>
using namespace std;

float solve(float x)
{
    float gross = 0;
    if (x < 1500)
    {
        gross = (0.10 * x) + (0.90 * x) + x;
    }
    else
    {
        gross = (0.98 * x) + 500 + x;
    }
    return gross;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x;
        cin >> x;
        cout << fixed << setprecision(2) << solve(x) << endl;
    }

    return 0;
}