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

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cout<<fixed<<setprecision(0);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        ld n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<ld> temp(31);
        for (auto i:v)
        {
            for (int j = 0; j < 30; j++)
            {
                if ((i & (1 << j)) > 0)
                {
                    temp[j]++;
                }
            }
        }
        // for(auto i:temp){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // cout<<endl;
        ld ans=0;
        for(auto i:temp){
            ans+=ceil(i/k);
        }
        cout<<ans<<endl;
    }
}