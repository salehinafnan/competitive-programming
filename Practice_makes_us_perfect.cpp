#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x[4];
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (x[i] >= 10)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}