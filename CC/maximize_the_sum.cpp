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
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>b[i];
            sum+=a[i]*b[i];
        }
        sort(begin(b),end(b));
        ll val=max(abs(b[0]),b[n-1]);
        sum+=val*k;
        cout<<sum<<endl;
    }
    
}