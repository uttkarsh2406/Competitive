#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
        ll a;
        cin>>a;
        ll res=0;
        while(a){
            res=res*10+(a%10);
            a/=10;

        }
        cout<<res<<endl;
    }
    
}