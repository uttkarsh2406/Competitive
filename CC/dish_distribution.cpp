#include<bits/stdc++.h>
using namespace std;
#define ll long long

int MOD=1e9+7;

int fun(int n,int i,vector<int> &vmin,vector<int> &vmax,vector<vector<int>> &dp){
    if(n<0) return 0;
    if(i==-1){
        if(n==0) return 1;
        else return 0;
    }  
    if(dp[i][n]!=-1) return dp[i][n];
    ll sum=0;
    for(int k=vmin[i];k<=min(n,vmax[i]);k++)
        sum=(sum+fun(n-k,i-1,vmin,vmax,dp)%MOD)%MOD;
    return dp[i][n]=sum%MOD;
}



int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while(tc--){
        int n,m;
        cin >> n >> m;
        // n-> dishes, m->cooks
        vector<int> vmin(m),vmax(m);
        for(int i=0;i<m;i++) cin >> vmin[i] >> vmax[i];
        vector<vector<int>> dp(m,vector<int>(n+1,-1));
        cout << fun(n,m-1,vmin,vmax,dp) << "\n";
    }
	return 0;
}