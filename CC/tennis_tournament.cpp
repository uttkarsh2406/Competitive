#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */
        int a;
        cin >> a;
        int total = (a * (a - 1) / 2);

        int mw = total / a;
        int ml = a - mw;
        if (total%a!=0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            vector<int> count(a);
            vector<vector<int>> v(a, vector<int>(a));
            for (int i = 0; i < a; i++)
            {
                int c = 0;
                for (int j = 0; j < a; j++)
                {
                    if (i != j)
                    {
                        if (v[j][i] == 0 && count[j] < ml)
                        {
                            c += 1;
                            v[i][j] = 1;
                            count[j] += 1;
                        }
                        if (c == mw)
                        {
                            break;
                        }
                    }
                }
            }
            for (auto i : v)
            {
                for (auto j : i)
                {
                    cout << j;
                }
                cout << endl;
            }
        }
    }
}