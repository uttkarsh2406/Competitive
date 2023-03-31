#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

struct ind
{
    int r, c, s;
};

int dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[] = {1, 0, -1, 1, -1, 1, 0, -1};

bool check(int i, int j)
{
    if (i < 1 || j < 1 || i > 8 || j > 8)
        return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        ll x, y, s;
        cin >> x >> y >> s;

        queue<ind> q;
        ind temp;
        temp.r = x;
        temp.c = y;
        temp.s = s;
        vector<vector<bool>> vis(9, vector<bool>(9));
        q.push(temp);

        while (!q.empty())
        {
            /* code */

            auto te = q.front();
            q.pop();
            if (vis[te.r][te.c])
            {
                continue;
            }
            vis[te.r][te.c] = true;
            for (int i = 0; i < 8; i++)
            {
                int e = te.r + dx[i];
                int w = te.c + dy[i];

                if (check(e, w) && !vis[e][w])
                {
                    if (te.s - 1 >= 0)
                    {
                        temp.r = e, temp.c = w, temp.s = te.s - 1;
                        q.push(temp);
                    }
                }
            }
        }
        ll res = 0;
        for (auto i : vis)
        {
            for (auto j : i)
            {
                if (j)
                {
                    res++;
                }
            }
        }
        cout << res << endl;
    }
}