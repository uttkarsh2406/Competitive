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
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            ll ns;
            cin>>ns;
            vector<int>temp;
            for(int j=0;j<ns;j++){
                ll inp;
                cin>>inp;
                temp.push_back(inp);
            }
            v.push_back(temp);

        }
        bool flag=false;
        for(int i=0;i<n;i++){
            unordered_set<int>te{v[i].begin(),v[i].end()};
            for(int j=i+1;j<n;j++){
                unordered_set<int>temp=te;
                for(int k=0;k<v[j].size();k++){
                    temp.insert(v[j][k]);
                    if(temp.size()>=5){
                        flag=true;
                        break;
                    }
                }
                if(flag){
                    flag=true;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
}