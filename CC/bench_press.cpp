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
        ll a,b,c;
        cin>>a>>b>>c;
        unordered_map<int,int>mp;
        ll sum=c;
        for(int i=0;i<a;i++){
            ll x;
            cin>>x;
            mp[x]++;
        }
        for(auto i:mp){
            sum+=i.first*2*(i.second/2);
        }
        cout<<sum<<endl;
        if(sum>=b){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;

    }
    
}