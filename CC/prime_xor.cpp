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
        ll x,y;
        cin>>x>>y;
        ll z=x^y;
        vector<int>v{2,2,2};
        if(x&1){
            v[0]=x^2;
        }
        if(y&1){
            v[1]=y^2;
        }
        if(z&1){
            v[2]=z^2;
        }
        sort(begin(v),end(v));
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;

    }
    
}