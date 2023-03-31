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
        ll res=INT_MAX;
        for(int i=0;i<n;i++){
            ll in;
            cin>>in;
            ll c=0;
            while(!(in&1)){
                in/=2;
                c++;
            }
            res=min(res,c);
        }
        cout<<res<<endl;
    }
    
}