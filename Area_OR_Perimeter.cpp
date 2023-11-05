#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, b;
    cin >> l;
    cin >> b;
    int area = l * b;
    int peri = 2 * (l + b);
    if (area > peri)
    {
        cout << "Area" << endl
             << area << endl;
    }
    else if (peri > area)
    {
        cout << "Peri" << endl
             << peri;
    }
    else
    {
        cout << "Eq" << endl
             << area;
    }

    return 0;
}