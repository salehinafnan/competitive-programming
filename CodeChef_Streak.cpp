#include <bits/stdc++.h>
using namespace std;

string calculateMaxStreak(vector<int> &om, vector<int> &addy)
{
    int omMaxStreak = 0, addyMaxStreak = 0;
    int omCurrentStreak = 0, addyCurrentStreak = 0;

    for (int i = 0; i < om.size(); i++)
    {
        if (om[i] > 0)
        {
            omCurrentStreak++;
        }
        else
        {
            omCurrentStreak = 0;
        }

        if (addy[i] > 0)
        {
            addyCurrentStreak++;
        }
        else
        {
            addyCurrentStreak = 0;
        }

        omMaxStreak = max(omMaxStreak, omCurrentStreak);
        addyMaxStreak = max(addyMaxStreak, addyCurrentStreak);
    }

    if (omMaxStreak > addyMaxStreak)
        return "Om";
    else if (addyMaxStreak > omMaxStreak)
        return "Addy";
    else
        return "Draw";
}

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int N;
        cin >> N;

        vector<int> om(N);
        vector<int> addy(N);

        for (int i = 0; i < N; i++)
            cin >> om[i];

        for (int i = 0; i < N; i++)
            cin >> addy[i];

        string result = calculateMaxStreak(om, addy);
        cout << result << endl;
    }

    return 0;
}
