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
        ll a,b,c;
        cin>>a>>b>>c;
        ll t=(b-a);
        ll f=t/c;
        if(t%c)f++;
        cout<<f<<endl;
    }
    
}