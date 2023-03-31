#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        ll m, n;
        cin >> m >> n;
        assert(m > 0 and m <= 100000);
        assert(n > 0 and n <= 100000);
        ll a[m], b[m], asum = 0, bsum = 0;
        for (ll i = 0; i < m; i++)
        {
            cin >> a[i];
            assert(a[i] <= 1e9);
            asum = (asum % mod + a[i] % mod) % mod;
        }

        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
            assert(b[i] <= 1e9);
            bsum = (bsum % mod + b[i] % mod) % mod;
        }
        asum = ((asum % mod) * (m % mod)) % mod;
        bsum = ((bsum % mod) * (m % mod)) % mod;
        ll fib[n + 1];
        memset(fib, 0, sizeof(fib));
        fib[1] = asum;
        fib[2] = bsum;
        for (ll i = 3; i <= n; i++)
        {
            fib[i] = (fib[i - 1] % mod + fib[i - 2] % mod) % mod;
        }
        cout << fib[n] << endl;
    }
}