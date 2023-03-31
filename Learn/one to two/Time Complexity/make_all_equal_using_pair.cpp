#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll n;
        cin>>n;
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            ll t;
            cin>>t;
            mp[t]++;
        }
        ll v=INT_MIN;
        for(auto i:mp){
            if(i.second>v){
                v=i.second;
            }
        }
        cout<<n-v<<endl;
        

    }
    
}