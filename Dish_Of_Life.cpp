#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        ll n, r;
        cin >> n >> r;
        vector<pair<int,int>>v(r);
        for(int i=1;i<=n;i++){
            ll ns;
            cin>>ns;
            for(int j=0;j<ns;j++){
                ll in;
                cin>>in;
                in--;
                if(v[in].first==0){
                    v[in].first=i;
                }
                else {
                    v[in].second=i;
                }
            }
        }
        bool flag=false;
        vector<bool>imp(n+1);
        for(auto p:v){
            if(p.first==0){
                flag=true;
                cout<<"sad"<<endl;
                break;
            }
            if(p.second==0){
                imp[p.first]=true;
            }
        }
        if(flag){
            continue;
        }
        for(int i=1;i<=n;i++){
            if(!imp[i]){
                cout<<"some"<<endl;
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<"all"<<endl;
        }
        
    }
}