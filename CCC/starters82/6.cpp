#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
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

        ll n,m;
        cin >> n>>m;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            --a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<int>f(n);
        for(int i=0;i<n;i++){
            if(a[i]>=i){
                f[a[i]]=1;
            }
        }
        ll res=1,val=-1;
        bool flag=true;
        
        for(int i=0;i<n && flag;i++){
            if(f[i]){
                if(b[i]!=0 && val!=-1 && val!=b[i]){
                    cout<<0<<endl;
                    flag=false;
                    break;
                }
                if(b[i]!=0)val=b[i];
            }
            if(!f[i] && b[i]==0){
                res=(res*m)%mod;
                
            }
        }
        if(!flag){
            continue;
        }
        if(val==-1){
            res=(res*m)%mod;
        }
        if(flag){
            cout<<res<<endl;
        }
    }
}
