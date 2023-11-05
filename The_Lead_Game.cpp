#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rounds;
    cin >> rounds;
    int currentLead = 0;
    int maxLead = 0;
    int leadingPlayer = 0;
    for (int i = 0; i < rounds; i++)
    {
        int player1Score, player2Score;
        cin >> player1Score >> player2Score;

        int scoreDifference = player1Score - player2Score;
        currentLead += scoreDifference;
        if (abs(currentLead) > maxLead)
        {
            maxLead = abs(currentLead);
            if (currentLead > 0)
            {
                leadingPlayer = 1;
            }
            else
            {
                leadingPlayer = 2;
            }
        }
    }

    cout << leadingPlayer << " " << maxLead << endl;

    return 0;
}
