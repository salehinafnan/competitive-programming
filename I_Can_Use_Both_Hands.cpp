#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int L, R, M;
        cin >> L >> R >> M;

        int satisfaction = ceil((double)M / L) + floor((double)M / R);

        cout << satisfaction << endl;
    }

    return 0;
}
