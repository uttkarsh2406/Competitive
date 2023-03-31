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
        ll n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll in=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(v[i]>v[j]){
                    in++;
                }
            }
        }
        // cout<<"IN "<<in<<endl;
        ll res=in*k;
        // cout<<"RES "<<" "<<res<<endl;
        for(int i=0;i<n;i++){
            ll sc=0;
            for(int j=0;j<n;j++){
                if(v[i]>v[j]){
                    sc++;
                }
            }
            res+=((k*(k-1))/2 )*sc;
        }
        cout<<res<<endl;
    }
    
}