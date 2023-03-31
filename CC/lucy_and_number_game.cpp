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
        map<int,vector<string>>mp;
        int n;
        cin>>n;
        ll t;
        string te;
        for(int i=0;i<n;i++){
            cin>>t>>te;
            mp[t].push_back(te);
        }
        bool flag=false;
        for(auto i:mp){
            if(i.second.size()==1){
                cout<<i.second[0]<<endl;
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<"Nobody wins."<<endl;
        }

    }
    
}