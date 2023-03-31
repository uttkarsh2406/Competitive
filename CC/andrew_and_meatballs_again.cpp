#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
        if(n==1 && k==1){
            cout<<1<<endl;
            continue;
        }
        if(k<=n/2){
            for(int i=1;i<=k;i++){
                cout<<(2*i)<<" ";

            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    
}