#include <iostream>
using namespace std;

char solve(char p1, char p2)
{
    int R = 0, B = 0, G = 0;

    if (p1 == 'R')
        R++;
    else if (p1 == 'B')
        B++;
    else if (p1 == 'G')
        G++;
    if (p2 == 'R')
        R++;
    else if (p2 == 'B')
        B++;
    else if (p2 == 'G')
        G++;
    if (R >= B && R >= G)
        return 'R';
    else if (B >= R && B >= G)
        return 'B';
    else
        return 'G';
}

int main()
{
    char p1, p2;
    cin >> p1 >> p2;
    cout << solve(p1, p2) << endl;

    return 0;
}
