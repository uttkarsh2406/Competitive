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
        ll a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        if((a==c && b==d) || (a==d && b==c)){
            cout<<1<<endl;
        }
        else if((a==e && b==f ) || (a==f && b==e)){
            cout<<2<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    
}