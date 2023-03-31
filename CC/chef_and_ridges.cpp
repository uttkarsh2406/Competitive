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
        ll a;
        cin>>a;
        long long k=3;
        if(a==1 || a==2){
            cout<<1<<" ";
        }
        else if(a==3){
            cout<<3<<" ";
        }
        else{
            for(int i=4;i<=a;i++){
                if(i&1){
                    int f=k-1;
                    f=f*2;
                    f+=3;
                    k=f;
                }
                else{
                    int f=k-1;
                    f=f*2;
                    f++;
                    k=f;
                }
            }
            cout<<k<<" ";
        }
        ll z=2LL;
        ll q=pow(z,a);
        cout<<q<<" ";
    }
    
}