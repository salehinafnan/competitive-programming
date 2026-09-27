#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, ls;
        cin >> b >> ls;
        double minRS = sqrt(ls * ls - b * b);
        double maxRS = sqrt(ls * ls + b * b);
        cout << minRS << " " << maxRS << endl;
    }
    return 0;
}
