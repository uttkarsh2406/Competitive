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
        ll n;
        cin>>n;
        ll t;
        ll lolim=0,hilim=0,add=0;
        for(int i=0;i<n;i++){
            cin>>t;
            lolim+=max(0LL,t-1);
            if(t!=0){
                add=1;
            }
            hilim+=t;
        }
        if(lolim+add<=100 && hilim>=100){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
}