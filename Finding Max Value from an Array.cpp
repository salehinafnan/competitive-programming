#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {3, 5, 6, 9, 2};

    sort(a, a + 5);

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl
         << a[4];
}