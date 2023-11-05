#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a > b && a > 0)
            cout << 7 - a << endl;
        else
            cout << 7 - b << endl;
    }

    return 0;
}
