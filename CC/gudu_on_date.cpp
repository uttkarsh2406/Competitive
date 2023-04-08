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
        ll n;
        cin>>n;
        ll num=n;
        ll sum=0;
        while(num){
            sum+=num%10;
            num/=10;
        }
        ll mod=sum%10;
        cout<<n;
        cout<<(10-mod)%10<<endl;

    }
    
}