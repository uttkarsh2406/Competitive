#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007


ll pow(ll a,ll b){
    if(a==0){
        return 0;
    }
    if(b==0){
        return 1;

    }
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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll tt;
    cin>>tt;
    while (tt--)
    {
        /* code */
        ll n;
        cin>>n;
        ll t=pow(2,n-1);
        cout<<10*t<<endl;
    }
    
}