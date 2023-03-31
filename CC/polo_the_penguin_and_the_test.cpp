#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int help(vector<vector<int>>&v,vector<vector<int>>&dp,int i,int a,int b){
    if(b<=0)return 0;
    if(i<0){
        return 0;
    // cout<<1<<" ";
    }
    if(dp[i][b]!=-1){
        return dp[i][b];
    }
    ll tf=0;
    if(b>=v[i][2]){
        tf=max(v[i][1]*v[i][0]+help(v,dp,i-1,a,b-v[i][2]),help(v,dp,i-1,a,b)); 
    }
    else{
        tf=help(v,dp,i-1,a,b);
    }
    return dp[i][b]=tf;
}

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
        ll a,b;
        cin>>a>>b;
        vector<vector<int>>v(a,vector<int>(3));
        for(int i=0;i<a;i++){
            cin>>v[i][0]>>v[i][1]>>v[i][2];
        }
        vector<vector<int>>dp(a,vector<int>(b+1,-1));
        cout<<help(v,dp,a-1,a,b)<<endl;
        // for(auto i:dp){
        //     for(auto j:i){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }


    }
    
}