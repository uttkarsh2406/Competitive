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
        ll n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll count=0,sum=0;
        for(int i=0;i<n;i++){
            if(v[i]<=(n-sum-1)){
                count++;
            }
            else{
                break;
            }
            sum+=v[i];
        }
        cout<<count<<endl;

    }
    
}