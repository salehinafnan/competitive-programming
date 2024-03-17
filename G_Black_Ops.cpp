#include <bits/stdc++.h>
using namespace std;
vector<int> v[510];
int cs[510];
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &cs[i]);
    double mx = 0.0;
    for (int i = 1; i <= m; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        double d = (1.0 * cs[a] + 1.0 * cs[b]) / (1.0 * c);
        mx = max(mx, d);
    }
    printf("%0.11lf\n", mx);
    return 0;
}
