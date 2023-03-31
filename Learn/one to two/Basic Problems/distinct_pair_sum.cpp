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
        ll a,b;
        cin>>a>>b;
        ll t=b-a+1;
        ll count=0;
        ll res=1;
        for(int i=t;i>1;i--){
            count+=res;
            res++;
        }
        count+=t;
        cout<<count<<endl;
    }
    
}