#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    ll n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i>0){
            v[i]^=v[i-1];
        }

    }

    for(int i=0;i<q;i++){
        ll inp;
        cin>>inp;
        ll pos=(inp%(n+1));

        cout<<(pos==0?0:v[pos-1])<<endl;
    }   
    

}