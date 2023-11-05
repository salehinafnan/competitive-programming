#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (k >= a)
            {
                cout << 1;
                k -= a;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}
