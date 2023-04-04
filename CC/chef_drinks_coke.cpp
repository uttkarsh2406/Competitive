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
        ll n,m,k,l,r;
        cin>>n>>m>>k>>l>>r;
        vector<pair<int,int>>v(n);
        ll j=-1,mc=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
            if(v[i].first==k){
                if(mc>v[i].second && k>=l && k<=r){
                    j=i;
                    mc=v[i].second;
                }
            }
            if(v[i].first<k){
                ll f=min(v[i].first+m,k);
                if(f>=l && f<=r && mc>=v[i].second){
                    j=i;
                    mc=v[i].second;
                }
            }
            if(v[i].first>k){
                ll f=max(v[i].first-m,k);
                if(f>=l && f<=r && mc>=v[i].second){
                    j=i;
                    mc=v[i].second;
                }
            }
        }
        if(j==-1){
            cout<<-1<<endl;
            continue;
        }
        else{
            cout<<mc<<endl;
            continue;
        }
        
    }
    
}