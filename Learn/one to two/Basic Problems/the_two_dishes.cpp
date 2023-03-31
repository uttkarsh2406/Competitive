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
        ll a,b;
        if(b>=a){
            cout<<b<<endl;
        }
        else if(b<a){
            cout<<abs(a-abs(b-a))<<endl;
        }
    }
    
}