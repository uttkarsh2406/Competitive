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
    ll tt;
    cin>>tt;
    cout<<fixed<<setprecision(8);
    while (tt--)
    {
        /* code */
        long double A;
        cin>>A;
        long double B=1-A;
        long double res=10000*(3.0*B-2*B*B);
        if(1-2*B>0){
            res+=(1-2*B)*10000;
        }
        cout<<res<<endl;



    }
    
}