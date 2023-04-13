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

    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll t;
        cin>>t;

        ll in=t;

        ll c2=0,c5=0;
        while (t>0 && t%2==0)
        {
            /* code */
            t/=2;
            c2++;
        }
        while(t>0 && t%5==0){
            t/=5;
            c5++;
        }
   

        int d=c5-c2;
        int mr=d/2;
        // cout<<mr<<endl;
        if(d%2==1)mr++;
        ll res=in;
        // cout<<mr<<endl;
        for(int j=1;j<=mr;j++){
            res=res*4;
        }
        cout<<res<<endl;

        
    }
    
}