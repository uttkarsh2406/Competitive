#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define ld long double
#define MOD 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ll tt;
    cin>>tt;
    while (tt--)
    {
        /* code */
        
        vector<ll>v(3);
        cin>>v[0];
        cin>>v[1];
        cin>>v[2];
        sort(begin(v),end(v));
        ll res=(v[0]%MOD*((v[1]-1)%MOD))%MOD;
        res%=MOD;
        res=(res%MOD*((v[2]-2)%MOD))%MOD;
        res%=MOD;
        cout<<res<<endl;
    }
    
}