#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
vector<int>dx{2,2,-2,-2,1,1,-1,-1};
vector<int>dy{1,-1,1,-1,2,-2,2,-2};

bool check(int i,int j){
    if(i<1 || j<1 || i>8 || j>8)return false;
    return true;
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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        vector<vector<bool>>vis(8,vector<bool>(8));
        for(int i=0;i<8;i++){
            int x=a+dx[i];
            int y=b+dy[i];
            if(check(x,y)){
                vis[x][y]=true;
            }
        }
        bool flag=false;
        for(int i=0;i<8;i++){
            int x=c+dx[i];
            int y=d+dy[i];
            if(check(x,y)){
                if(vis[x][y]){
                    flag=true;
                    cout<<"YES"<<endl;
                    break;
                }
            }
        }
        if(!flag){
            cout<<"NO"<<endl;
        }

    }
    
}