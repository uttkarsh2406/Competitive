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
    vector<ll>v(1000001);
    v[0]=1;
    v[1]=1;
    for(int i=2;i<1000001;i++){
        v[i]=(v[i-1]+v[i-2])%MOD;
    }
    // for(int i=0;i<500;i++){
    //     cout<<v[i]<<endl;
    // }
    // cout<<endl;
    ll tt;
    cin>>tt;
    while (tt--)
    {
        /* code */
        ll n,m;
        cin>>n>>m;
        ll c1=0;
        ll num=v[n];
        while(num){
            if(num&1){
                c1++;
            }
            num/=2;
        }

        if(c1==m){
            cout<<"CORRECT"<<endl;
        }
        else{
            cout<<"INCORRECT"<<endl;
        }

    }
    
}