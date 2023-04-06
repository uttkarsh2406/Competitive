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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;){
            if(i>0){
                cout<<',';
            }
            int j=i+1;
            while(j<=n && v[j]-v[i]==j-i){
                j++;
            }
            if(j-i>=3){
                cout<<v[i]<<"..."<<v[j-1];
                i=j;
            }
            else{
                cout<<v[i];
                i++;
            }
        }
        cout<<endl;
    }
    
}