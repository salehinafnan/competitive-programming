#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int maxT, maxN, sumN;
        cin >> maxT >> maxN >> sumN;
        int test_2 = sumN / maxN;
        int rem = sumN % maxN;
        if (test_2 < maxT)
        {
            int sum = test_2 * maxN * maxN + rem * rem;
            cout << sum << endl;
        }
        else
        {
            int sum = maxT * maxN * maxN;
            ;
            cout << sum << endl;
        }
    }
    return 0;
}