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
        ll n,m;
        cin>>n>>m;
        if(m<2*n){
            cout<<m<<" "<<m<<endl;
            continue;
        }
        vector<int>res(2);
        ll mxi=INT_MIN;
        for(int i=n;i<2*n;i++){
            if(((m/i)*i)-i >mxi){
                res[0]=i;
                res[1]=(m/i)*i;
                mxi=((m/i)*i)-i;
            }
        }
        cout<<res[0]<<" "<<res[1]<<endl;

    }
    
}