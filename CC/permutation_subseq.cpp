#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll tt;
    cin>>tt;
    while (tt--)
    {
        /* code */
        ll n;
        cin>>n;
        vector<ll>v(n+1);
        for(int i=0;i<n;i++){
            ll t;
            cin>>t;
            if(t>=1 && t<=n){
                v[t]++;
            }
        }
        if(v[1]==0){
            cout<<0<<endl;
            continue;
        }
        ll res=v[1];
        for(int i=2;i<=n;i++){
            if(v[i]==0){
                break;
            }
            v[i]=(v[i]%MOD*v[i-1]%MOD)%MOD;
            res+=v[i]%MOD;

        }
        cout<<res<<endl;

    }
    
}