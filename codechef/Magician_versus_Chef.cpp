#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, s;
        cin >> n >> x >> s;
        int temp = x;
        for (int i = 0; i < s; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a == temp)
                temp = b;
            else if (b == temp)
                temp = a;
        }
        cout << temp << endl;
    }
    return 0;
}