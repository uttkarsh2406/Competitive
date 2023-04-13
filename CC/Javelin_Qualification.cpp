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
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        ll n, m, x;
        cin >> n >> m >> x;
        vector<pair<int, int>> a, b;
        ll t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (t >= m)
            {
                a.push_back({t, i + 1});
            }
            else
            {
                b.push_back({t, i + 1});
            }
        }
        bool flag=false;
        vector<int>res;
        sort(rbegin(a), rend(a));
        if (a.size() < x)
        {
            sort(rbegin(b), rend(b));
            flag=true;
        }

        for (int i = 0; i < a.size(); i++)
        {
            res.push_back(a[i].second);
        }
        if(true){
            ll r=x-a.size();
            for(int i=0;i<r;i++){
                res.push_back(b[i].second);
            }
        }

        sort(res.begin(),res.end());
        cout<<res.size()<<" ";
        for(auto i:res){
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}