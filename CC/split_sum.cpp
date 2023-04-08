#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
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
        ll n,m;
        cin>>n>>m;
        ll total=(n*(n+1))/2;
        if(m>total){
            cout<<"NO"<<endl;
            continue;
        }
        if((total+m)%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        ll a=(total+m)/2;
        
        ll b=total-a;
        
        cout<<a<<" "<<b<<endl;
        if(__gcd(a,b)==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
}