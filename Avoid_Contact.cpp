#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int a = 2 * y + (x - y);
        cout << (x == y ? a - 1 : a) << endl;
    }

    return 0;
}