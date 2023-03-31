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

        ll n;
        cin>>n;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            ll t;
            cin>>t;
            mp[t]++;
        }
        ll count=0;
        for(auto  i:mp){
            count+=min(i.second,i.first-1);
        }
        cout<<count<<endl;

    }
    
}