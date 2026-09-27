#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (((2 * a) + b) > ((2 * x) + y))
    {
        cout << "Messi" << endl;
    }
    else if (((2 * a) + b) < ((2 * x) + y))
    {
        cout << "Ronaldo" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }
    return 0;
}