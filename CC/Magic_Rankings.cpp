#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007

ld help(vector<vector<ld>>&dp,vector<vector<ld>>&v,int i,int j,int n){
    if(i<0 || j<0 || i>=n || j>=n){
        return INT_MIN;
    }
    if(i==n-1 && j==n-1){
        return 0;
    }
    if(dp[i][j]!=INT_MIN){
        return dp[i][j];
    }

    ld a=help(dp,v,i+1,j,n)+v[i][j];
    ld d=help(dp,v,i,j+1,n)+v[i][j];
    return dp[i][j]=max(a,d);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    cout<<fixed<<setprecision(6);
    ld tt;
    cin>>tt;
    while (tt--)
    {
        /* code */
        ld n;
        cin>>n;
        // cout<<n/3<<endl;
        vector<vector<ld>>v(n,vector<ld>(n));
        vector<vector<ld>>dp(n,vector<ld>(n,INT_MIN));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        ld total_vis_pos=2*n-3;
        ld res=help(dp,v,0,0,n)/total_vis_pos;
        if(res<0){
            cout<<"Bad Judges"<<endl;
            continue;
        }
        cout<<res<<endl;
    }
    
}