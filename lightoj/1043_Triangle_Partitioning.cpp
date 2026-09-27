// LightOJ 1043 - Triangle Partitioning
// https://lightoj.com/problem/triangle-partitioning
// Idea: ADE ~ ABC, so area ratio = (AD / AB)^2 = r / (r + 1)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        double ab, ac, bc, ratio;
        cin >> ab >> ac >> bc >> ratio;
        double ratio_areas = ratio / (ratio + 1);
        double ad = ab * sqrt(ratio_areas);
        printf("Case %d: %.10f\n", i, ad);
    }
    return 0;
}