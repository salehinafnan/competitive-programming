#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x1, y1, x2, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        cout << ((y1 / x1) > (y2 / x2) ? 1 : ((y1 / x1) < (y2 / x2) ? -1 : 0)) << endl;
    }
    return 0;
}
