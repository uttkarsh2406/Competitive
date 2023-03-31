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
    ll p,s;
    cin>>p>>s;
    vector<pair<int,int>>cs;
    for(int i=0;i<p;i++){
        vector<pair<int,int>>v(s);
        for(int i=0;i<s;i++){
            cin>>v[i].first;
        }
        for(int i=0;i<s;i++){
            cin>>v[i].second;
        }
        sort(v.begin(),v.end());
        ll count=0;
        for(int i=0;i<s-1;i++){
            if(v[i].second>v[i+1].second){
                count++;
            }
        }
            cs.push_back({count,i+1});


    }
    
    sort(cs.begin(),cs.end());
    for(auto i:cs){
        cout<<i.second<<endl;
    }
    
}