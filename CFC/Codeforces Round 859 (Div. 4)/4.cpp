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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        ll n, q;
        cin >> n >> q;
        vector<int> v(n);
        cin >> v[0];
        for (int i = 1; i < n; i++)
        {
            cin >> v[i];
            v[i] += v[i-1];
        }
        ll sum = v[n - 1];
        // for(auto i:v){
            // cout<<i<<" ";
        // }
        // cout<<endl;
        for (int i = 0; i < q; i++)
        {
            ll a, b, c;
            cin >> a >> b >> c;
            a--;
            b--;
            ll res = (b == n - 1) ? 0 : v[n - 1] - v[b];
            // cout<<res<<endl;

            res += a == 0 ? 0 : v[a - 1];
            // cout<<res<<endl;
            res += (b - a + 1) * c;
            // cout<<res<<endl;
            if (res & 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}