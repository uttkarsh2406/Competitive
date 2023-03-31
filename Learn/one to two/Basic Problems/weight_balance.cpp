#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
        ll a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        ll t=e*c;
        ll f=e*d;
        ll g=b-a;
        if(g>=t && g<=f){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    
}