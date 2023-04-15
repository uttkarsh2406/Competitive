#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll res=0;
        for(ll i=a;i<=b;i++){
            ll mx=max(c,i+1);
            if(mx<=d){
                res+=d-mx+1;
            }

        }
        cout<<res<<endl;

    }
    
}