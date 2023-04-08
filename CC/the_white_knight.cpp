#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007

int help(vector<vector<char>>&v,int i,int j,int n,vector<vector<int>>&dp){
    int count=0;
    // cout<<1<<endl;
    if(i<0 || j<0 || i>=n || j>=n ||  v[i][j]=='#'){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(v[i][j]=='P'){
        count++;
    }
    int temp=0;
    temp=max(temp,help(v,i-2,j+1,n,dp));
    temp=max(temp,help(v,i+2,j+1,n,dp));
    temp=max(temp,help(v,i+1,j+2,n,dp));
    temp=max(temp,help(v,i-1,j+2,n,dp));

    return dp[i][j]=count+temp;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll tt;
    cin >> tt;
    // vector<vector<int>>dir{{1,2},{2,1},{2,-1},{-2,1}};
    while (tt--)
    {
        /* code */
        ll n;
        cin >> n;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        vector<vector<char>> v(n, vector<char>(n));
        int a, b;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                cin >> v[i][j];
                if (v[i][j] == 'K')
                {
                    a = i, b = j;
                }
            }
        }
        cout<<help(v,a,b,n,dp)<<endl;

    }
}