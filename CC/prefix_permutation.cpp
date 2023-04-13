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
        ll n,k;
        cin>>n>>k;
        vector<int>v(k);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>a(n);
        iota(a.begin(),a.end(),1);
        v.insert(v.begin(),0);
        for(int i=0;i<k;i++){
            reverse(a.begin()+a[i-1],a.begin()+a[i]);
        }
        for(auto i:a){
            cout<<i<<" ";
        }
        cout<<endl;

    }
    
}