#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        if (x > y)
            cout << x - y << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}