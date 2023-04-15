#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007

int main(){

    vector<bool>prime(100001,true);
    vector<ll>v(100001);
    for(int i=2;i<=100000;i++){
        if(prime[i]){
            for(int j=i;j<=100000;j+=i){
                prime[j]=false;

                v[j]++;
            }
        }
    }
    // for(int i=0;i<20;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
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
        ll l,r,k;
        cin>>l>>r>>k;
        ll count=0;
        for(int i=l;i<=r;i++){
            if(v[i]==k){
                count++;
            }
        }
        cout<<count<<endl;

    }
    
}