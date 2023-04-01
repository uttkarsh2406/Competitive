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
        ll xr=0;
        ll in;
        for(int i=0;i<n;i++){
            cin>>in;
            xr^=in;
        }
        if(!(n&1) && xr==0){
            cout<<"YES"<<endl;
            continue;
        }
        if(n&1){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"No"<<endl;

    }
    
}