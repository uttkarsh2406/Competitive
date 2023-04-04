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
        ll n;
        cin>>n;
        ll count=0;
        ll in;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int i=1;
        for(;i<=n;i++){
            in=v[i-1];
            if(in<=i){
                count+=(i-in);
            }
        }
        if(i<n && count%2==0){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }


    }
    
}