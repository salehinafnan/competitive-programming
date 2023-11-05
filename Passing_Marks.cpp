#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int minA, minB, minC, totalMarks, marksA, marksB, marksC;
        cin >> minA >> minB >> minC >> totalMarks >> marksA >> marksB >> marksC;
        if (marksA >= minA && marksB >= minB && marksC >= minC && marksA + marksB + marksC >= totalMarks)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}