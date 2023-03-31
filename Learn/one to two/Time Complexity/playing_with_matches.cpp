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
    vector<int>v{6,2,5,5,4,5,6,3,7,6};
    while (tt--)
    {
        /* code */
        ll a,b;
        cin>>a>>b;
        ll t=a+b;
        ll res=0;
        while(t){
            ll z=t%10;
            res+=v[z];
            t/=10;
        }
        cout<<res<<endl;
    }
    
}