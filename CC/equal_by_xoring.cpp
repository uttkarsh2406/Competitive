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
        ll f=(a^b);
        ll z=f;
        ll j=1,res=0;
        if(f==0){
            cout<<0<<endl;
            continue;
        }
        if(f<c){
            cout<<1<<endl;
            continue;
        }
        else{
            ll z=1;
            while(z<c){
                z=z*2;
            }
            if(f<z){
                cout<<2<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }

    }
    
}