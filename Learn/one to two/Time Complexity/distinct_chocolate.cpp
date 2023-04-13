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
        unordered_set<ll>s;
        ll t;
        for(int i=0;i<n;i++){
            cin>>t;
            
            s.insert(t);
        }
        ll siz=s.size();
        cout<<max(siz,n-m)<<endl;

    }
    
}