#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 20;
string s[N];
bool vis[N][N];
int w, h;
int direction_i[] = {+1, 0, -1, 0};
int direction_j[] = {0, +1, 0, -1};
int cnt;

bool is_valid(int i, int j)
{
    return (i >= 0 and i < h and j >= 0 and j < w);
}

void dfs(int i, int j)
{
    vis[i][j] = true;

    for (int k = 0; k < 4; k++)
    {
        int next_i = i + direction_i[k];
        int next_j = j + direction_j[k];

        if (is_valid(next_i, next_j) and !vis[next_i][next_j] and s[next_i][next_j] == '.')
        {
            cnt++;
            dfs(next_i, next_j);
        }
    }
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cin >> w >> h;
        for (int i = 0; i < h; i++)
        {
            cin >> s[i];
        }

        int start_i, start_j;

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (s[i][j] == '@')
                {
                    start_i = i;
                    start_j = j;
                    break;
                }
            }
        }

        cnt = 1;

        dfs(start_i, start_j);

        cout << "Case " << ++cs << ": ";

        cout << cnt << endl;

        cnt = 1;

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                vis[i][j] = false;
            }
        }
    }

    return 0;
}
