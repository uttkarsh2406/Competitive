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
        ll n,q;
        cin>>n>>q;
        vector<int>v(n);
        ll pro=1;
        bool flag=false;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(pro<1e9+7){
                pro*=v[i];
            }
            else{
                flag=true;
                pro=1e9+8;
            }
        }
        ll qn;
        for(int i=0;i<q;i++){
            cin>>qn;
            if(flag){
                cout<<0<<" ";
            }
            else{
                cout<<qn/pro<<" ";
            }
        }
        cout<<endl;

    }
    
}