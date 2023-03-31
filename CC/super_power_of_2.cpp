#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007


ll help(__int128 a,__int128 b){
    if(b==0)return 1;
    a%=MOD;
    if(a==0)return 0;
    ll res=1;
    while(b>0){
        if(b&1){
            res=(res*a)%MOD;
        }
        a=(a*a)%MOD;
        b>>=1;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<ll>v(31);
    __int128 p=1;
    for(int i=0;i<31;i++){
        v[i]=help(2,p);
        p*=10;
    }
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ll tt;
    cin>>tt;
    while (tt--)
    {
        /* code */
        ll n;
        cin>>n;
        ll ans=1;
        for(int i=0;i<32;i++){
            if(n&(1<<i)){
                ans=(ans*v[i])%MOD;
            }
        }
        cout<<help(ans,2)<<endl;

    }
    
}