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
        string s;
        cin>>s;
        bool flag=false;
        vector<pair<int,int>>ans;
        ll idx=0;
        for(;idx<n;){
            int i=idx;
            while(i<n-1 && s[i]==s[i+1]){
                i++;
            }
            ans.push_back({1,i+1});
            idx=i+1;
        }
        cout<<ans.size()<<endl;
        for(auto i:ans){
            cout<<i.first<<" "<<i.second<<endl;
        }

    }
    
}