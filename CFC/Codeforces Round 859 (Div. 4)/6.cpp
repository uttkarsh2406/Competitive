#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool help1(int i, int j, int n, int m, int s, int d, int dir)
{
    int a, b;
    if (dir == 1)
    {
        a = d - j;
        b = i - s;
        if (a >= 0 && b >= 0 && a < m && b < n && a == b)
            return true;
        return false;
    }
    else if (dir == 2)
    {
        a = d - j;
        b = s - i;
        if (a >= 0 && b >= 0 && a < m && b < n && a == b)
            return true;
        return false;
    }
    else if (dir == 3)
    {
        a = j - d;
        b = s - i;
        if (a >= 0 && b >= 0 && a < m && b < n && a == b)
            return true;
        return false;
    }
    else
    {
        a = j - d;
        b = i - s;
        if (a >= 0 && b >= 0 && a < m && b < n && a == b)
            return true;
        return false;
    }
}

void help2(int &i, int &j, int n, int m, int s, int d, int &dir)
{
    if (dir == 1)
    {
        int a = abs(i - 1);
        int b = abs(j - m);
        i -= min(a, b);
        j += min(a, b);
        if (a == b)
        {
            dir = 3;
        }
        else if (a < b)
        {
            dir = 2;
        }
        else
        {
            dir = 4;
        }
    }
    else if (dir == 2)
    {
        int a = abs(i - n);
        int b = abs(j - m);
        i += min(a, b);
        j += min(a, b);
        if (a == b)
        {
            dir = 4;
        }
        else if (a < b)
        {
            dir = 1;
        }
        else
        {
            dir = 3;
        }
    }
    else if (dir == 3)
    {
        int a = abs(i - n);
        int b = abs(j - 1);
        i += min(a, b);
        j -= min(a, b);
        if (a == b)
        {
            dir = 1;
        }
        else if (a < b)
        {
            dir = 4;
        }
        else
        {
            dir = 2;
        }
    }
    else
    {
        int a = abs(i - 1);
        int b = abs(j - 1);
        i -= min(a, b);
        j -= min(a, b);
        if (a == b)
        {
            dir = 2;
        }
        else if (a < b)
        {
            dir = 3;
        }
        else
        {
            dir = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        string g;
        cin >> g;
        int dir;
        if (g == "DR")
        {
            dir = 2;
        }
        else if (g == "DL")
        {
            dir = 3;
        }
        else if (g == "UL")
        {
            dir = 4;
        }
        else
        {
            dir = 1;
        }
        ll count = 0;
        map<vector<int>, int> mp;
        map<vector<int>, bool> vis;
        queue<vector<int>> q;
        q.push({c, d, dir});
        while (!q.empty())
        {
            auto temp = q.front();
            q.pop();
            c = temp[0], d = temp[1], dir = temp[2];
            if (help1(c, d, a, b, e, f, dir))
            {
                break;
            }
            if (vis[{c, d, dir}])
            {
                count = -1;
                break;
            }
            vis[{c, d, dir}] = true;
            help2(c, d, a, b, e, f, dir);
            q.push({c, d, dir});
            count++;
        }
        cout << count << endl;
    }
}