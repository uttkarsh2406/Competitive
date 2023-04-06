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
    cout<<fixed<<setprecision(6);
    while (tt--)
    {
        /* code */
        ll n;
        cin>>n;
        ld sum=0;
        ld mx=INT_MIN,t;
        for(int i=0;i<n;i++){
            cin>>t;
            mx=max(mx,t);
            sum+=t;
        }
        sum-=mx;
        cout<<((mx)+(sum/(n-1)))<<endl;

    }
    
}