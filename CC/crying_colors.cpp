#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007

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
        ll n;
        cin >> n;
        vector<vector<int>> v(3, vector<int>(3));

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> v[i][j];
            }
        }
        ll count = 0;
        ll rg=min(v[0][2],v[2][0]);
        ll bg=min(v[1][2],v[2][1]);
        ll rb=min(v[0][1],v[1][0]);
        count+=rg+bg+rb;
        v[0][0]+=rg;
        v[0][2]-=rg;
        v[2][0]-=rg;
        v[2][2]+=rg;

        v[1][1]+=bg;
        v[1][2]-=bg;
        v[2][1]-=bg;
        v[2][2]+=bg;

        v[0][0]+=rb;
        v[0][1]-=rb;
        v[1][0]-=rb;
        v[1][1]+=rb;
        count+=2*(n-v[0][0]);
        cout << count << endl;
    }
}