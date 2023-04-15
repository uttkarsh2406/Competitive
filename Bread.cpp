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
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for (ll  i = 0; i < n; i++)
        {
            /* code */
            cin>>v[i];
        }
        ll i=0,j=0,bl=0;
        ll count=0;
        while(i<n){
            if(v[i]>bl){
                ll z=v[i]-bl;
                ll x=z/k;
                if(z%k!=0){
                    x++;
                }
                count+=x;
                bl+=x*k;
            }
            if(v[i]==bl){
                bl=0;
                v[i]=0;
            }
            else if(v[i]<bl){
                bl-=v[i];
                bl-=1;
            }
            i++;

        }
        cout<<count<<endl;
        
    }
    
}