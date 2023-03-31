#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
        if(n&1){
            int t=n+1;
            int f=n/2;
            if(f&1){
                cout<<n-1;
            }
            else{
                cout<<n;
            }
            continue;
        }
        else{
            int t=n/2;
            if(t&1){
                cout<<n-1<<endl;;
            }
            else{
                cout<<n<<endl;
            }
        }
    }
    
}