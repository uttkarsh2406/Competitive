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
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(begin(v),end(v));
    for(int i=0;i<m;i++){
        ll q;
        cin>>q;
        int pos=lower_bound(begin(v),end(v),q)-v.begin();
        if(pos==0){
            cout<<"Positive"<<endl;
            continue;
        }
        if(pos==n){
            if(pos&1){
                cout<<"Negative"<<endl;
                continue;
            }
            else{
                cout<<"Positive"<<endl;
                continue;
            }
        }
        if(v[pos]==q){
            cout<<0<<endl;
            continue;
        }
        else{
            if(pos&1){
                cout<<"Negative"<<endl;
                continue;
            }
            else{
                cout<<"Positive"<<endl;
                continue;
            }
        }
        
    }

    
}