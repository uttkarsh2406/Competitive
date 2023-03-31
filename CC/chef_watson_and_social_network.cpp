#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

bool static comp(pair<int,pair<int,string>>a,pair<int,pair<int,string>>b){
    if(a.second.first>b.second.first)return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll n,m;
    cin>>n>>m;
    set<int>mp;
    for(int i=0;i<n;i++){
        ll t;
        cin>>t;
        mp.insert(t);
    }
    vector<pair<int,pair<int,string>>>v1,v2;
    for(int i=0;i<m;i++){
        ll a,b;
        string c;
        cin>>a>>b>>c;
        if(mp.count(a)){
            v1.push_back({a,{b,c}});
        }
        else{
            v2.push_back({a,{b,c}});
        }

    }
    sort(begin(v1),end(v1),comp);
    sort(begin(v2),end(v2),comp);
    for(auto i:v1){
        cout<<i.second.second<<endl;
    }
    for(auto i:v2){
        cout<<i.second.second<<endl;
    }
    
}