#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
            cout << "yes" << endl;
        else if (a < b)
        {
            while (a < b)
            {
                a = 2 * a;
            }
            if (a == b)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
        else if (a > b)
        {
            while (b < a)
            {
                b = 2 * b;
            }
            if (a == b)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }

    return 0;
}