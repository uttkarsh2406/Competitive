#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

ll kande(vector<ll> &a)
{
    ll z = a[0], zm = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        z += a[i];
        zm = max(zm, z);
        if (z <= 0)
        {
            z = 0;
        }
    }
    return zm;
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
    // while (tt--)
    // {
    //     /* code */
    //     ll n;
    //     cin >> n;
    //     vector<ll> a(n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> a[i];
    //     }
    //     ll ma;
    //     cin >> ma;
    //     vector<ll> b(ma);
    //     ll sum = 0;
    //     for (int i = 0; i < ma; i++)
    //     {
    //         cin >> b[i];
    //         sum += b[i];
    //     }

    //     ll m = b[0], ms = b[0], mi = b[0], mis = b[0];
    //     for (int i = 1; i < ma; i++)
    //     {
    //         m = max(m + b[i], b[i]);
    //         ms = max(ms, m);
    //         mi = min(mi + b[i], b[i]);
    //         mis = min(mi, mis);
    //     }
    //     ll res = 0;
    //     if (sum == mis)
    //     {
    //         res = ms;
    //     }
    //     else{
    //         res=max(ms,sum-mis);
    //     }
    //
    //     if(res<0){
    //         cout<<zm<<endl;
    //     }
    //     else{
    //         cout<<zm+res<<endl;
    //     }

    // }

    while (tt--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        { 
            cin >> a[i];
        }
        ll m;
        cin >> m;
        vector<ll> b(m);
        ll sum = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if (b[i] > 0)
            {
                sum += b[i];
            }
        }
        a.insert(a.begin(), sum);
        ll res=kande(a);
        a.erase(a.begin(),a.begin()+1);
        a.insert(a.end(),sum);
        res=max(res,kande(a));
        cout<<res<<endl;
    }
}