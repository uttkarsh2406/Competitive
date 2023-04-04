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
        int n;
        cin>>n;
        vector<int>count(n+1);
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            count[t]++;
        }
        int res=n-1;
        for(int i=0;i<=n;i++){
            // cout<<count[i]<< " "<<count[i^1]<<endl;
            res=min( res, n-count[i]-count[i^1] );
        }
        cout<<res<<endl;

    }
    
}