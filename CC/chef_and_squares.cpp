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
        ll k;
        cin>>k;
        ll t=1;
        vector<vector<int>>v(k,vector<int>(k));
        for(int i=k/2+1;i<=k;i++){
            int f=t;
            for(int j=1;j<=k;j++){
                v[i-1][j-1]=f%k==0?k:f%k;
                f++;
            }
            t++;
        }
        for(int i=1;i<=k/2;i++){
            int f=t;
            for(int j=1;j<=k;j++){
                v[i-1][j-1]=f%k==0?k:f%k;
                f++;
            }
            t++;
        }
        for(auto i:v){
            for(auto j:i){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        
    }
    
}