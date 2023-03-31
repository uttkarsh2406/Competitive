#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll n, m;
        cin >> n >> m;
        vector<int> v(m);
        for(int i=0;i<m;i++){
            cin>>v[i];
        }
        sort(begin(v), end(v));
        int rd = m - 1;
        int d = 0;
        for (int i = 0; i < m; i++)
        {
            int p = m - (i + 1);
            d += v[i];
            if (d > p - 1)
            {
                if (d == p - 1)
                {

                    cout << p - 1 << endl;
                }
                else
                {
                    cout << p << endl;
                }
                break;
            }
        }
    }
}