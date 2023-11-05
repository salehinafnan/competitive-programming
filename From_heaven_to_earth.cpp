#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, v1, v2;
        cin >> n >> v1 >> v2;
        double st, et;
        st = n * sqrt(2) / v1;
        et = n * 2.0 / v2;
        if (st > et)
            cout << "Elevator" << endl;
        else
            cout << "Stairs" << endl;
    }
    return 0;
}
