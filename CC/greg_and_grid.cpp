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
    vector<bool>v(1000009,true);
    ll p=sqrt(1000009);
    for(int i=2;i<=p;i++){
        if(v[i]==true){
            for(int j=i*i;j<1000009;j+=i){
                v[j]=false;
            }
        }

    }

        /* code */
        ll n,m;
        cin>>n>>m;
        ll count=0;
        for(int i=2;i<=n+m;i++){
            if(v[i]){
                count++;
            }
        }
        cout<<count<<endl;
    
    
}