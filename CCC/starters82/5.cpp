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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(((a+1)%b)==(c+1)%d){
            cout<<1<<endl;
            continue;
        }
        a=a%b;
        c=c%d;
        ll t=lcm(b,d);
        cout<<t-a<<endl;
    }
    
}