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
        ll suma = 0, sumb = 0;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            suma += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sumb += b[i];
        }
        vector<ll>pa(n),pb(n);
        pa[0]=a[0];
        pb[n-1]=b[n-1];
        for(int i=1;i<n;i++){
            pa[i]=pa[i-1]+a[i];
        }
        for(int i=n-2;i>=0;i--){
            pb[i]=pb[i+1]+b[i];
        }
        ll res = max(suma,sumb);
        for(int i=0;i<n;i++){
            if(i==n-1){
                continue;
            }
            res=max(res,pa[i]+pb[i+1]);
        }
        cout << res << endl;
    }
}