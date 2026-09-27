#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int max_profit = 0;
    long long int t;
    cin >> t;

    vector<int> budgets(t);
    for (int i = 0; i < t; i++)
    {
        cin >> budgets[i];
    }
    sort(budgets.begin(), budgets.end());
    for (int i = 0; i < t; i++)
    {
        long long int revenue = budgets[i] * (t - i);
        max_profit = max(max_profit, revenue);
    }
    cout << max_profit << endl;

    return 0;
}