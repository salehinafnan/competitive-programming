#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int count = 1, limak = 0, bob = 0;
        while (limak <= a || bob <= b)
        {
            limak += count;
            if (limak > a)
            {
                cout << "Bob" << endl;
                break;
            }
            count++;
            bob += count;
            if (bob > b)
            {
                cout << "Limak" << endl;
                break;
            }
            count++;
        }
    }
    return 0;
}