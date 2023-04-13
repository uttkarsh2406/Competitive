#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007

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
        ll n;
        cin>>n;
        if(n==2){
            cout<<0<<endl;
            continue;
        }
        if(n&1){
            ll a=n/2;
            ll b=n/2+1;
            ll c=a*b-1;;
            cout<<c<<endl;
        }
        else{
            ll a=(n/2)-1;
            ll b=(n/2)+1;
            // cout<<a<<" "<<b<<endl;
            if(a%2==0){
                a--;
                b++;
            }
            ll c=a*b-1;
            cout<<c<<endl;
        }
    }
    
}
