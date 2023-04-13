#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
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
        ll n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==1){
            cout<<0<<endl;
        }
        ll mxp=-1,mx=-1;;
        ll count=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(v[i]>=mx){
                mx=v[i];
                mxp=i;
            }
            if(i>0 && v[i]!=v[i-1]){
                flag=true;
            }

        }
        if(!flag){
            cout<<0<<endl;
            continue;
        }
        if(v[n-1]==mx){
            cout<<1<<endl;
            continue;
        }
        else{
            cout<<2<<endl;
            continue;
        }

    }
    
}