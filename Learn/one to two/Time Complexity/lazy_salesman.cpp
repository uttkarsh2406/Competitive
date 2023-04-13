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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(rbegin(v),rend(v));
        ll total=0;
        int i=0;
        for(;i<n;i++){
            total+=v[i];
            if(total>=m){
                break;
            }
        }
        cout<<n-i-1<<endl;

    }
    
}