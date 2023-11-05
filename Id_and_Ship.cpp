#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        char ch;
        cin >> ch;
        switch (ch)
        {
        case 'B':
        case 'b':
            cout << "BattleShip\n";
            break;
        case 'C':
        case 'c':
            cout << "Cruiser\n";
            break;
        case 'D':
        case 'd':
            cout << "Destroyer\n";
            break;
        case 'F':
        case 'f':
            cout << "Frigate\n";
            break;
        }
    }

    return 0;
}