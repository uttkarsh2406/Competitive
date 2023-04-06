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
        ll a,b;
        cin>>a>>b;
        ll pos=-1,mx=INT_MIN;
        vector<ll>v(a);
        for(int i=0;i<a;i++){
            cin>>v[i];
            if(v[i]>=mx){
                mx=v[i];
                pos=i;
            }
        }
        ll res=0;
        for(int i=b-1;i<a;i++){
            if(v[i]==mx){
                res+=a-i;
            }
        }
        cout<<res<<endl;

    }
    
}