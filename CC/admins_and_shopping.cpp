#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
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
        ll n,m;
        cin>>n>>m;
        vector<int>v(n);
        ll sum=0,t,mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>t;
            sum+=t;
            mn=min(mn,t);
        }
        ll res=0;
        res=m/mn;
        if(m%mn!=0){
            res++;
        }
        cout<<max(res,n)<<endl;

    }
    
}