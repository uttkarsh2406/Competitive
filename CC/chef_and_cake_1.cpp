#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
        ll x1,x2,x3,x4,y1,y2,y3,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        vector<vector<int>>v(1001,vector<int>(1001));
        ll area1=0;
        for(int i=min(x1,x2);i<max(x1,x2);i++){
            for(int j=min(y1,y2);j<max(y1,y2);j++){
                v[i][j]=1;
                area1++;
            }
        }
        ll area2=0;
        for(int i=min(x3,x4);i<max(x3,x4);i++){
            for(int j=min(y3,y4);j<max(y3,y4);j++){
                if(v[i][j]!=1){

                v[i][j]=1;
                area2++;
                }
            }
        }
        cout<<area1+area2<<endl;
    }
    
}