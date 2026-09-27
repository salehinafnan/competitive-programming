#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int pA, pB, qA, qB;
        cin >> pA >> pB >> qA >> qB;
        if (max({pA, pB}) > max({qA, qB}))
            cout << "Q" << endl;
        else if (max(pA, pB) < max(qA, qB))
            cout << "P" << endl;
        else
            cout << "TIE" << endl;
    }
    return 0;
}
