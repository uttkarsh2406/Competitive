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
        vector<vector<int>>v(n,vector<int>(3));
        vector<int>dp(n);
        for(int i=0;i<n;i++){
            cin>>v[i][0]>>v[i][1]>>v[i][2];
        }
        sort(v.begin(),v.end());
        dp[0]=v[0][2];
        int res=dp[0];
        for(int i=1;i<n;i++){
            dp[i]=v[i][2];
            for(int j=0;j<i;j++){
                if(v[j][1]<=v[i][0]){
                    dp[i]=max(dp[i],dp[j]+v[i][2]);
                }
            }
            res=max(res,dp[i]);
        }
        cout<<res<<endl;

    }
    
}