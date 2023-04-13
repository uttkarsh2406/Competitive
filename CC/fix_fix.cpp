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
    ll tt;
    cin>>tt;
    while (tt--)
    {
        /* code */
        ll n,k;
        cin>>n>>k;  
        if(n==k){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
        }
        if(n-1==k){
            cout<<-1<<endl;
            continue;
        }
        k%=n;
        vector<int>v(n);

        iota(begin(v),end(v),1);
        reverse(v.begin()+k,v.begin()+k+1);
        reverse(v.begin()+k+1,v.end());
        reverse(v.begin()+k,v.end());
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;


    }
    
}