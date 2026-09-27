#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string sign;
        cin >> sign;
        int checkI = 0;
        int checkF = 0;
        for (int i = 0; i < n; i++)
        {
            if (sign[i] == 'Y')
                checkF = 1;

            if (sign[i] == 'I')
                checkI = 1;
        }
        if (checkI == 0 && checkF == 1)
            cout << "NOT INDIAN" << endl;
        else if (checkI == 1 && checkF == 0)
            cout << "INDIAN" << endl;
        else
            cout << "NOT SURE" << endl;
    }
    return 0;
}