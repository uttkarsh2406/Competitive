#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
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
        ll n,m,k;
        cin>>n>>m>>k;
        vector<int>mp(n+1);
        for(int i=0;i<k;i++){
            ll t;
            cin>>t;
            if(t<=n){
                mp[t]++;
            }
        }
        ll count=0;
        vector<int>res;
        for(int i=1;i<=n;i++){
            if(mp[i]>1){
                count++;
                res.push_back(i);
            }
        }
        cout<<count<<" ";
        for(auto i:res){
            cout<<i<<" ";
        }
        cout<<endl;

    }
    
}