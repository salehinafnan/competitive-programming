#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        // Sorting also handles repeated values, e.g. 5 5 3 -> 5
        sort(a, a + 3);
        cout << a[1] << endl;
    }
    return 0;
}
