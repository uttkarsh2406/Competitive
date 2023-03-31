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
        ll n;
        cin>>n;
        ll mi=INT_MAX,count=0,z=0;
        for(int i=0;i<n;i++){
            cin>>z;
            mi=min(mi,z);
            count+=mi;
        }
        cout<<count<<endl;

    }
    
}