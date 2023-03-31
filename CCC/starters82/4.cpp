#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
        vector<vector<ll>>v(n,vector<ll>(n));
        ll t=1;
        ll st=n*n;
        bool flag=true;
        if(n&1){
            flag=false;
        }
        int i=0;
        for(;i<n/2;i++){
            for(int j=0;j<n;j++){
                v[i][j]=t;
                t+=2;
            }
        }
        if(!flag){
            i=(n)/2;
            for(int j=0;j<=n/2;j++){
                v[i][j]=t;
                t+=2;
            }
            t=2;
            for(int j=n/2+1;j<n;j++){
                v[i][j]=t;
                t+=2;
            }
            i++;
        }
        if(flag)
        t=2;
        for(;i<n;i++){
            for(int j=0;j<n;j++){
                v[i][j]=t;
                t+=2;
            }

        }
        for(auto i:v){
            for(auto j:i){
                cout<<j<<" ";
            }
            cout<<endl;
        }

        
    }
    
}