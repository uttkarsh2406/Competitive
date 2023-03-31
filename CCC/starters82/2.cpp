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
        ll n;
        cin>>n;
        ll mi=INT_MAX;
        ll t;
        vector<ll>v(n);
        for(int i=0;i<n;i++){

        cin>>v[i];
        mi=min(mi,v[i]);
        }
        ll count=0;
        for(int i=0;i<n;i++){
            if(v[i]>mi){
                count++;
            }
        }
            cout<<count<<endl;
        


    }
    
}